#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;
std::vector<int> results;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void calculate_fibonacci(int n, int index) {
    int result = fibonacci(n);
    {
        std::lock_guard<std::mutex> lock(mtx);
        results[index] = result;
    }
    cv.notify_all();
}

void print_results(const std::vector<int>& indices) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [&] { return ready; });

    std::cout << "Fibonacci results:\n";
    for (int i = 0; i < indices.size(); ++i) {
        std::cout << "Fibonacci(" << indices[i] << ") = " << results[i] << "\n";
    }

    int sum = 0;
    for (int res : results) {
        sum += res;
    }
    std::cout << "Sum of results: " << sum << std::endl;
}

int main() {
    std::vector<int> indices = { 4, 9, 14, 17 };
    results.resize(indices.size());

    std::vector<std::thread> threads;
    for (int i = 0; i < indices.size(); ++i) {
        threads.emplace_back(calculate_fibonacci, indices[i], i);
    }

    std::thread printer(print_results, std::cref(indices));

    for (auto& th : threads) {
        th.join();
    }

    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_all();

    printer.join();
    return 0;
}
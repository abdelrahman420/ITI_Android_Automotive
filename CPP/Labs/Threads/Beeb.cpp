#include <iostream>
#include <thread>
#include <chrono>

void beep(std::chrono::seconds interval) {
    while (true) {
        std::cout << "\a";
        std::this_thread::sleep_for(interval);
    }
}

void BeepAction() {
    while (true) {
        std::cout << "Press Enter to stop beeping: ";
        std::cin.ignore();
        exit(0);
    }
}

int main() {
    std::chrono::seconds interval(3);
    std::thread t(beep, interval);
    std::thread t1(BeepAction);

    t.join();
    t1.join();

    return 0;
}

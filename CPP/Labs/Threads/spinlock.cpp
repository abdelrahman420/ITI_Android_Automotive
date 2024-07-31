#include <iostream>
#include <thread>
#include <atomic>

class Spinlock
{
    private:
    std::atomic_flag flag;
    public:
    Spinlock(): flag(false){}
    void lock()
    {
        while(flag.test_and_set(std::memory_order_acquire))
        {
            
        }
    }
    void unlock()
    {
        flag.clear(std::memory_order_release);
    }
};
int key = 5;
void multiply() 
{
    for (int i = 0; i < 10; ++i) 
    {
        Spinlock lock;
        lock.lock();
        key *= 2;
        lock.unlock();
    }
}

void divide() 
{
    for (int i = 0; i < 10; ++i) 
    {
        Spinlock lock;
        lock.lock();
        key /= 2;
        lock.unlock();
    }
}


int main()
{
    std::thread t1(multiply);
    std::thread t2(divide);
    t1.join();
    t2.join();
    std::cout << "key is: " << key << std::endl;
    return 0;
}
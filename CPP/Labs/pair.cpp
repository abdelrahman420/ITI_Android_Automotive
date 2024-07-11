#include <iostream>

template <typename T>
class Pair
{
private:
    T first;
    T second;
public:
    Pair() : first(0), second(0) {}
    Pair(T x, T y) : first(x), second(y) {}
    void setFirst(T F)
    {
        first = F;
    }
    void setSecond(T S)
    {
        second = S;
    }
    T getFirst()
    {
        return first;
    }
    T getSecond()
    {
        return second;
    }
    void setPair(T F, T S)
    {
        first = F;
        second = S;
    }
    void swap()
    {
        T temp = first;
        first = second;
        second = temp;
    }
    void printpair()
    {
        std::cout << "{" << first << "," << second << "}" << std::endl;
    }
};

int main() {
    Pair<int>p1;
    p1.printpair();
    p1.setFirst(5);
    p1.setSecond(3);
    p1.printpair();
    p1.swap();
    p1.printpair();
    std::cout << p1.getFirst() << std::endl;
    p1.setPair(13, 15);
    p1.printpair();
    return 0;
}

#include <iostream>

template <typename T1, typename T2>
class KeyValuePair
{
    private:
    T1 Key;
    T2 Value;
    public:
    KeyValuePair() = delete;
    KeyValuePair(T1 K,T2 V):Key(K),Value(V){}
    void setKey(T1 K)
    {
        Key = K;
    }
    void setValue(T2 V)
    {
        Value = V;
    }
    T1 getKey()
    {
        return Key;
    }
    T2 getValue()
    {
        return Value;
    }
    void setPair(T1 K,T2 V)
    {
        Key = K;
        Value = V;
    }
    void printpair()
    {
        std::cout << "{" << Key << "," << Value << "}" << std::endl;
    }    

};

int main()
{
    KeyValuePair<std::string,int> D1("apple",1);
    D1.printpair();
}
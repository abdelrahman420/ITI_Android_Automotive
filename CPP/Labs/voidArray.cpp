#include <iostream>
enum class DataType 
{
    INT,
    DOUBLE,
    CHAR
};
class VPointerArray
{
    private:
    void **arr;
    int size;
    public:
    VPointerArray(int S):size(S)
    {
        arr = new void* [size];
    }
    void SetValue(void *ptr,int indx)
    {
        if(indx < size) {arr[indx] = ptr;}
    }
    void* getValue(int indx)
    {
        if(indx < size) {return arr[indx];}
        return nullptr;
    }
    int arrSize()
    {
        return size;
    }
    DataType getType(int indx)
    {
        DataType type;
        if(typeid(arr[indx]) == typeid(int))
        {
            type = DataType::INT;
        }
        else if(typeid(arr[indx]) == typeid(char))
        {
            type = DataType::CHAR;
        }
        else if (typeid(arr[indx]) == typeid(double))
        {
            type = DataType::DOUBLE;
        }
        return type;
    }
    void printArr()
    {
        for(int i = 0;i<size;i++)
        {
            DataType type;
            if(typeid(arr[i]) == typeid(int))
            {
                type = DataType::INT;
                std::cout<<*((int *)arr[i]) <<" : int"<<std::endl;
            }
            else if(typeid(arr[i]) == typeid(char))
            {
                type = DataType::CHAR;
                std::cout<<*((char *)arr[i])<<" : char";
            }
            else if (typeid(arr[i]) == typeid(double))
            {
                type = DataType::DOUBLE;
                std::cout<<*((double *)arr[i])<<" : double";   
            }
        }
        
    }
    ~VPointerArray()
    {
        delete[] arr;
    }

};

int main()
{
    int a = 5;
    double b = 3.14;
    char c = 'X';

    VPointerArray arr(3);

    arr.SetValue(&a, 0);
    arr.SetValue(&b, 1);
    arr.SetValue(&c, 2);

    arr.printArr();
}




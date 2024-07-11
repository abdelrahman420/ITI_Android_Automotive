#include <iostream>
#include <cctype>
#include <math.h>
#include <algorithm>
#include <string>

namespace MathFunctions
{
    void print(double x)
    {
        std::cout <<sqrt(x);
    }

}
namespace StringFunctions {
    void print(std::string& mystring) {
        std::transform(mystring.begin(), mystring.end(), mystring.begin(), ::toupper);
        std::cout<<mystring;
    }
}
namespace ArrayFunctions
{
    void print(int arr[] ,int size)
    {
        for(int i = size-1;i>=0;i--)
        {
            std::cout<<arr[i]<<std::endl;
        }
    }
}

int main()
{
    int num;
    std::string str;
    int arr[5] = {1,2,3,4,5};
    std::cout<<"Enter number"<<std::endl;
    std::cin>>num;
    std::cout<<"square root of num is : ";
    MathFunctions::print(num);
    std::cout<<std::endl;
    std::cout<<"Enter string"<<std::endl;
    std::cin>>str;
    std::cout<<"string in upper case is : ";
    StringFunctions::print(str);
    std::cout<<std::endl;
    std::cout<<"array after reversing elements: "<<std::endl;
    ArrayFunctions::print(arr,sizeof(arr)/sizeof(arr[0]));

    
}

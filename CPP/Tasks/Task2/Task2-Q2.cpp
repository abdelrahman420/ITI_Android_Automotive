#include "iostream"
#include <cmath>

class Calculator
{
    private:
    int add(int num1,int num2) {return (num1 + num2) ;}
    int sub(int num1,int num2) {return (num1 - num2) ;}
    int mul(int num1,int num2) {return (num1 * num2) ;}
    int div(double num1,double num2) {return (num1 / num2) ;}
    int power(int a, int b) { return (std::pow(a, b)); }
    double sqrt(int num1){return (std::sqrt(num1));}

    public:
    void calculate()
    {
        int x,y;
        char oper;
        std::cout << "Enter an operator (+, -, *, /, ^, S for sqrt): ";
        std::cin >> oper;
        if (oper != 'S')
        {
            std::cout<<"enter first number\n";
            std::cin>>x;
            std::cout<<"enter second number\n";
            std::cin>>y;
        }
        else
        {
            std::cout<<"enter number to calculate square root\n";
            std::cin>>x;
        }
        switch(oper)
        {

            case '+':
            std::cout<<"the result is : "<<add(x,y)<<std::endl;
            break;
            case '-':
            std::cout<<"the result is : "<<sub(x,y)<<std::endl;
            break;
            case '*':
            std::cout<<"the result is : "<<mul(x,y)<<std::endl;
            break;
            case '/':
            std::cout<<"the result is : "<<div(x,y)<<std::endl;
            break;
            case '^':
            std::cout<<"the result is : "<<power(x,y)<<std::endl;
            break;
            case 'S':
            std::cout<<"the result is : "<<sqrt(x)<<std::endl;
            break;
            default:
            std::cout<<"tEnter a valid Operator";

        }
    }


};
int main()
{
    Calculator Calc1;
    Calc1.calculate();

    return 0;
}
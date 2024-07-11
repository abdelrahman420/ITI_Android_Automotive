#include <iostream>
class Solution 
{
    public:
        int addDigits(int num) 
        {
            int sum = 0;
            while (num != 0 ) 
            {
                sum += num%10; 
                num /= 10;    
            }
            if (sum/10 != 0)  
            {
                num = sum;      
                sum = addDigits(num); 
            }
            return sum;
        }
};

int main()
{
    int x;
    Solution S1;
    std::cout<<"enter number to add its digits : ";
    std::cin>>x;
    std::cout<<"the solution is : "<<S1.addDigits(x)<<std::endl;


    return 0;
}

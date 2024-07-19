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
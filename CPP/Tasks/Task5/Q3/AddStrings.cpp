#include <iostream>
#include <string>
class Solution 
{
    public:
    std::string addStrings(std::string num1, std::string num2) {
        std::string res="";
        int i=num1.size()-1, j= num2.size()-1;
        int carry=0;
        
        while(i>=0 || j>=0 || carry)
        {
            int sum=0;
            
            if(i>=0)
                sum+=(num1[i--]-'0');
            if(j>=0)
                sum+=(num2[j--]-'0');
            
            sum+=carry;
            carry= sum/10;
            sum= sum%10;
            char c= sum+'0';
            res = c+res;
            
        }
        return res;
    }
};
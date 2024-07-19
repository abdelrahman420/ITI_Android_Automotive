#include <iostream>
#include <vector>
#include <string>
class Solution 
{
    public:
    bool isAnagram(std::string s,std::string t) 
    {
        if(s.length() != t.length())
        {
            return false;
        }
        int count[26] = {0};
        for(char c: s)
        {
            count[c - 'a']++;
        }
        for(char c: t)
        {
            count[c - 'a']--;
        }
        for(int i = 0;i<26;i++)
        {
            if(count[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};

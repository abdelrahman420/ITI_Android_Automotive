#include <iostream>
#include <vector>
class Solution 
{
    public:
    int largestAltitude(std::vector<int>&gain) 
    {
        int size = gain.size();
        std::vector<int> altitude(size+1);
        int max = 0;
        altitude[0] = 0;
        for(int i = 1;i<=size;i++)
        {
            altitude[i] = gain[i-1]+ altitude[i-1];
            if(altitude[i] > max)
            {
                max = altitude[i];
            }
        }
        return max;
    }
};
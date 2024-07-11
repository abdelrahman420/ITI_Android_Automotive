#include <iostream>


typedef enum
{
    T_big,
    T_meduim,
    T_small
}carType;
class ParkingSystem 
{
    private:
    int nof_big;
    int nof_meduim;
    int nof_small;
    
    public:
        ParkingSystem(int big, int medium, int small) :nof_big(big),nof_meduim(medium), nof_small(small){}

        bool addCar(carType Type) 
        {
            switch(Type)
            {
                case T_big:
                {
                    if(nof_big > 0)
                    {
                        nof_big--;
                        return true;
                    }
                    else 
                    {
                        return false;
                    }
                }
                break;
                case T_meduim:
                {
                    if(nof_meduim > 0)
                    {
                        nof_meduim--;
                        return true;
                    }
                    else 
                    {
                        return false;
                    }
                }
                break;
                case T_small:
                {
                    if(nof_small > 0)
                    {
                        nof_small--;
                        return true;
                    }
                    else 
                    {
                        return false;
                    }
                }
                break;
                default:
                return false;
                break;
            }
        }
};

int main()
{
    ParkingSystem p1(5,3,0);
    std::cout<<p1.addCar(T_meduim)<<std::endl;
    std::cout<<p1.addCar(T_meduim)<<std::endl;
    std::cout<<p1.addCar(T_meduim)<<std::endl;
    std::cout<<p1.addCar(T_meduim)<<std::endl;


    return 0;
}
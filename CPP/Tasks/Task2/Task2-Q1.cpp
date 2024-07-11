#include <iostream>

class Car
{
    private:
    std::string company;
    std::string model;
    int year;

    public:
    void setCompany(std::string comp)
    {
        company = comp;
    }
    void setModel(std::string mod)
    {
        model = mod;
    }
    void setYear(int y)
    {
        year = y;
    }
    std::string getCompany()
    {
        return company;
    }
    std::string getModel()
    {
        return model;
    }
    int getYear()
    {
        return year;
    }
};


int main()
{

    Car c1;
    c1.setCompany("Toyota");
    c1.setModel("Camry");
    c1.setYear(2020);

    std::cout<<"car company is :"<<c1.getCompany()<<std::endl;
    std::cout<<"car model is :"<<c1.getModel()<<std::endl;
    std::cout<<"car year is :"<<c1.getYear()<<std::endl;
    

    return 0;
}
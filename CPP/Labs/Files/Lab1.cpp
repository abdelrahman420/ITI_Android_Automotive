#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>


int main()
{
    std::ifstream input {"Input.txt"};
    if(! input)
    {
        std::cerr<<"error opening Input file"<<std::endl;
        return 1;
    }
    std::string str;
    int sum = 0, i = 0;
    int Min, Max;
    float Avg = 0.0;

    while (std::getline(input, str))
    {
        int value = stoi(str);
        i++;
        if (i == 1)
        {
            Min = Max = value;
        }
        else
        {
            if (value < Min)
                Min = value;
            if (value > Max)
                Max = value;
        }

        sum += value;
    }
    Avg = sum/i;
    std::ofstream output {"Output.txt"};
    output << std::setw(58) << std::setfill('-') << "\n" << "";
    output << std::left <<"|" << std::setw(8) << std::setfill(' ')<< std::right << "Sum" << std::setw(6) << std::right <<"|" << std::setw(8) << std::right << "Avg" << std::setw(6)  << std::right <<"|" << std::setw(8) << std::right << "Min" << std::setw(6)  << std::right <<"|" << std::setw(8) << std::right << "Max" << std::setw(6) << std::right <<"|"<< "\n" << "";
    output << std::setw(58) << std::setfill('-') << "\n" << "";
    output << std::left <<"|" << std::setw(8) << std::setfill(' ')<< std::right << sum << std::setw(6) << std::right <<"|" << std::setw(8) << std::right << Avg << std::setw(6)  << std::right <<"|" << std::setw(8) << std::right << Min << std::setw(6)  << std::right <<"|" << std::setw(8) << std::right << Max << std::setw(6) << std::right <<"|" << "\n" << "";
    output << std::setw(58) << std::setfill('-') << "\n" << "";
    return 0;
}
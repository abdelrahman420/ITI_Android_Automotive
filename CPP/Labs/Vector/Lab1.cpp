#include <iostream>
#include <vector>

std::vector<std::vector<int>> Transpose(std::vector<std::vector<int>> &vect )
{
    int cols = vect[0].size();
    std::vector<std::vector<int>> Transposed(cols) ;
    for (auto &row : vect) 
    {   
        int i =0;
        for (auto &elem : row)  
        {
            Transposed[i].push_back(elem);
            i++;
        }
    }     
    return Transposed;
}
void PrintVect(std::vector<std::vector<int>> &vect)
{
    for (const auto &row : vect)
    {
        for (const auto &elem : row)
        {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}
int main()
{

    std::vector<std::vector<int>> vect = 
    {
        {1, 2},
        {5, 6},
        {7, 8},
        {3, 4}
    };

    std::cout << "Original matrix:" << std::endl;
    PrintVect(vect);
    
    std::vector<std::vector<int>> transposedvect = Transpose(vect);

    std::cout << "Transposed matrix:" << std::endl;
    PrintVect(transposedvect);

    return 0;
}

#include <iostream>
#include <string>

namespace ArrayPair
{
    std::pair<int,int> * createArray(int size)
    {
        std::pair<int,int> *arr_pair = new std::pair<int,int>[size];
        return arr_pair;

    }
    void deleteArray(std::pair<int,int> *arr_pair,int size)
    {
        delete[] arr_pair;
        arr_pair =nullptr;
    }
    void setPair(std::pair<int,int> *arr_pair,int indx,int first,int second)
    {
        arr_pair[indx] = {first,second};
    }
    std::pair<int,int>getPair(std::pair<int,int> *arr_pair,int indx)
    {
        std::pair<int,int>retrnd_pair = {arr_pair[indx].first,arr_pair[indx].second};
        return retrnd_pair;
    }
    void printArray(std::pair<int,int> *arr_pair,int size)
    {
        for (int i = 0; i < size; ++i) 
        {
            std::cout<<"{"<<arr_pair[i].first<<","<<arr_pair[i].second<<"}"<<std::endl;
        }
    }
}

int main()
{
    std::pair<int,int> *arr;
    int size = 2;
    arr = ArrayPair::createArray(size);
    ArrayPair::setPair(arr,0,5,3);
    ArrayPair::setPair(arr,1,10,30);
    ArrayPair::printArray(arr,size);

}
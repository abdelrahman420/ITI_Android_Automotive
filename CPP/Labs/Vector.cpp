#include <iostream>
#include <stdexcept> 

class DynamicArray
{
private:
    int* Arr;
    int Capacity;
    int Size;

public:
    
    DynamicArray() : Capacity(1), Size(0)
    {
        Arr = new int[Capacity];
    }

    DynamicArray(int size) : Capacity(size), Size(0)
    {
        Arr = new int[Capacity];
    }

    DynamicArray(int size, int value) : Capacity(size), Size(size)
    {
        Arr = new int[Capacity];
        for (int i = 0; i < Size; i++) 
        {
            Arr[i] = value;
        }
    }

    DynamicArray(int size, std::initializer_list<int> values) : Capacity(size), Size(values.size())
    {
        Arr = new int[Capacity];
        int i = 0;
        for (int value : values) 
        {
            Arr[i] = value;
            i++;
        }
    }

    
    DynamicArray(const DynamicArray& arr) : Capacity(arr.Capacity), Size(arr.Size)
    {
        Arr = new int[Capacity];
        for (int i = 0; i < Size; i++) 
        {
            Arr[i] = arr.Arr[i];
        }
    }

    
    ~DynamicArray()
    {
        delete[] Arr;
    }

   
    void resize()
    {
        Capacity *= 2;
        int* newArr = new int[Capacity];
        for (int i = 0; i < Size; i++) 
        {
            newArr[i] = Arr[i];
        }
        delete[] Arr;
        Arr = newArr;
    }

   
    void pushback(int value)
    {
        if (Size >= Capacity) 
        {
            resize();
        }
        Arr[Size] = value;
        Size++;
    }

    
    int popback()
    {
        if (Size > 0) 
        {
            Size--;
            return Arr[Size];
        } 
        else 
        {
            std::cout << "ERROR: The array is empty" << std::endl;
            return -1; 
        }
    }


    void removeAt(int index)
    {
        if (index >= 0 && index < Size) 
        {

            for (int i = index; i < Size - 1; i++) 
            {
                Arr[i] = Arr[i + 1];
            }
            Size--;
        } 
        else 
        {
            std::cout<<"ERROR: Invalid index";
        }
    }

    
    void insertAt(int index, int value)
    {
        if (index >= 0 && index <= Size) 
        {
            if (Size >= Capacity) 
            {
                resize();
            }
            for (int i = Size; i > index; i--) 
            {
                Arr[i] = Arr[i - 1];
            }
            Arr[index] = value;
            Size++;
        } 
        else 
        {
            std::cout<<"ERROR: Invalid index";
        }
    }

    
    void insertMiddle(int value)
    {
        int middleIndex = Size / 2;
        insertAt(middleIndex, value);
    }

    
    void removeMiddle()
    {
        if (Size > 0) {
            int middleIndex = Size / 2;
            removeAt(middleIndex);
        } else {
            std::cout << "ERROR: The array is empty" << std::endl;
        }
    }

    
    int size() const
    {
        return Size;
    }

    
    void print() const
    {
        for (int i = 0; i < Size; i++) 
        {
            std::cout << Arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    DynamicArray arr1;
    arr1.pushback(1);
    arr1.pushback(2);
    arr1.pushback(3);
    arr1.pushback(4);
    arr1.pushback(5);
    arr1.print(); 
    arr1.popback();
    std::cout << arr1.popback() << std::endl; 
    arr1.print(); 

    arr1.insertAt(1, 4);
    arr1.print(); 

    arr1.removeAt(1);
    arr1.print(); 

    arr1.insertMiddle(5);
    arr1.print(); 

    arr1.removeMiddle();
    arr1.print(); 

    DynamicArray arr2(5, 10);
    arr2.print(); 

    DynamicArray arr3(5, {1, 2, 3, 4, 5});
    arr3.print(); 

    DynamicArray arr4 = arr3;
    arr4.print();

    return 0;
}

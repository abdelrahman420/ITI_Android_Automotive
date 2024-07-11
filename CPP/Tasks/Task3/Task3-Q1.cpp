#include <iostream>
#include <cstdlib>

typedef struct
{
    int x;
    int y;
}vertex;

int main()
{
    vertex v[5];
    for(int i = 0;i<5;i++)
    {
        v[i].x = rand() % 201 - 100;
        v[i].y = rand() % 201 - 100;
        std:: cout << "Vertex " << i+1 << ": (" << v[i].x << ", " << v[i].y << ")" << std::endl;
    }


    return 0;
}
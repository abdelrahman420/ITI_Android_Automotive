#include <iostream>
#include <cstdlib>
#include <string>

class vertex
{
    private:
    int x;
    int y;

    public:
    vertex():x(0),y(0){}
    void set_x()
    {   
        x = rand() % 201 - 100;
    }
    void set_y()
    {
        y = rand() % 201 - 100;
    }
    int get_x()
    {
        return x;
    }
    int get_y()
    {
        return y;
    }
    std::string print_vertex()
    {
        return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }

};
int main()
{

    for (int i = 0; i < 5; ++i) 
    {
            vertex v;
            v.set_x();
            v.set_y();
            std::cout << "Vertex " << i + 1 << ": " << v.print_vertex() << "\n";
    }

}
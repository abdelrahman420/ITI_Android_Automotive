#include <iostream>

int main()
{
    std::string text = "The cycle of life is a cycle of cycles.";
    auto pos = text.find("cycle");
    while(pos != std::string::npos)
    {
        text.replace(pos, 5,"circle");
        pos = text.find("cycle", pos+5);
    }
    std::cout<<text<<std::endl;
    pos = text.find("circle");
    text.insert(pos,"great ");
    std::cout<<text<<std::endl;
    pos = text.find("circle",pos+7);
    text.insert(pos,"never-ending ");
    std::cout<<text<<std::endl;

}
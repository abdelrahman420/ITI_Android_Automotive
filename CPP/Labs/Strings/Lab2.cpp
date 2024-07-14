#include <iostream>

std::string Haystack(std::string haystack,std::string_view needle,std::string_view raplacement)
{

    auto pos = haystack.find(needle);
    while(pos != std::string::npos)
    {
        haystack.replace(pos ,needle.size(),raplacement);
        pos = haystack.find(needle, pos+1);
    }
    return haystack;
}


int main()
{
    std::string H = "The cycle of life is a cycle of cycles.";;
    std::string N = "cycle";
    std::string replacement = "circle";

    std::cout << "haystack before replacement: " << H << std::endl;
    std::string result = Haystack(H, N, replacement);
    std::cout << "haystack after replacement: " << result << std::endl;

    return 0;
}


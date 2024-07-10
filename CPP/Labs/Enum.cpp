#include <iostream>

enum class ErrorCode
{
    Bad_Request,
    Not_Found,
    Server_Error,
    Gateway_Timeout
};
void printError(ErrorCode Code);

int main()
{
    printError(ErrorCode::Gateway_Timeout);
}

void printError(ErrorCode Code)
{
    switch(Code)
    {
        case ErrorCode::Bad_Request :std::cout <<"400 Bad Request"<<std::endl;
        break;
        case ErrorCode::Not_Found :std::cout <<"404 Not Found"<<std::endl;
        break;
        case ErrorCode::Server_Error :std::cout <<"500 Server Error"<<std::endl;
        break;
        case ErrorCode::Gateway_Timeout :std::cout <<"504 Gateway Timeout"<<std::endl;
        break;

    }
}
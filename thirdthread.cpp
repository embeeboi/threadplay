
#include "firstthread.cpp"
#include "secondthread.cpp"

namespace finalthread{

void code()
{
    int x = threadtwo::x + threadone::x;
    std::cout << x << std::endl;
    
}
}
#include "secondthread.hpp"


lists::lists(std::vector<int> n1,std::vector<int> n2) : firstvect(n1) , secondvect(n2)
{
    for(int i : firstvect)
    {
        finalvect.push_back(i);
    }
    for(int j : secondvect)
    {
        finalvect.push_back(j);
    }
}

void lists::show()
{ 
    for(int i : finalvect)
    {
        t += i;
    }

    std::cout << t << std::endl;
}
int lists::gett()
{
    return t;
}

namespace threadtwo
{
int x;
void code(){
    std::vector<int> t1{1,2,3,4,5,6,7};
    std::vector<int> t2{1,2,3,4,5,6,7};

    lists* second = new lists(t1,t2);
    second->show();
    x = second->gett();
    
}
}
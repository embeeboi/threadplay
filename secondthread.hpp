#ifndef SECONDTHREAD_
#include <iostream>
#include <thread>
#include <vector>

class lists
{
    private:
        std::vector<int> firstvect;
        std::vector<int> secondvect;
        std::vector<int> finalvect;
        int t;
    public:
        lists(std::vector<int> n1,std::vector<int> n2);
        void show();
        int gett();
    

};

#endif // !SECONDTHREAD_

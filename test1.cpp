#include <iostream>
#include <chrono>
#include <cstdint>
#include <thread>
#include <vector>

std::vector<int> vect;
int x =0;

void createvect()
{
    for(int i =1;i<=1000000;i++)
    {
        vect.push_back(i);
    }
}


void code()
{
    for(int i=0;i<vect.size();i++)
    {
        x+=vect[i];
    }
}


int main()
{
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;
    createvect();
    auto t1 = high_resolution_clock::now();
    code();
    auto t2 = high_resolution_clock::now();
    auto ms_int = duration_cast<milliseconds>(t2 - t1);
    duration<double, std::milli> ms_double = t2 - t1;
    std::cout << x << std::endl;
    //std::cout << ms_int.count() << "ms\n";
    std::cout << "Without Threads: " << ms_double.count() << " Miliseconds" << std::endl;
    
}
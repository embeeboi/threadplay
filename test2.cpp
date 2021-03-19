#include <iostream>
#include <chrono>
#include <cstdint>
#include <thread>
#include <vector>

std::vector<int> vect;
int x = 0;
int y =0;
int sum=0;

std::vector<std::thread> threadput;

void createvect()
{
    for(int i =1;i<=1000000;i++)
    {
        vect.push_back(i);
    }
}


void firstthread()
{
    for(int i=0;i<vect.size()/2;i++)
    {
        x+=vect[i];
    }
}

void secondthread()
{
    for(int i=vect.size()/2;i<vect.size();i++)
    {
        y+=vect[i];
    }
}




int main()
{
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;
    createvect();
    threadput.push_back(std::thread(firstthread));
    threadput.push_back(std::thread(secondthread));

    auto t1 = high_resolution_clock::now();
      for(auto& thread : threadput){
        thread.join();
    }
    auto t2 = high_resolution_clock::now();
    auto ms_int = duration_cast<milliseconds>(t2 - t1);
    duration<double, std::milli> ms_double = t2 - t1;
    sum = x+y;
    std::cout << sum << std::endl;

    //std::cout << ms_int.count() << "ms\n";
    std::cout << "With Threads: " << ms_double.count() << " Miliseconds" << std::endl;
    
}

#include "thirdthread.cpp"
#include <thread>

int main()
{


    std::thread* t1 = new std::thread(threadone::code);
    std::thread* t2 = new std::thread(threadtwo::code);
    t1->join();
    t2->join();
    std::thread* t3 = new std::thread(finalthread::code);
    t3->join();
  
    
}
#include "firstthread.hpp"


dot_product::dot_product(three_dimension_vector* n1, three_dimension_vector* n2) : firstvect(n1) , secondvect(n2)
{
    t += firstvect->getx() * firstvect->getx() + firstvect->gety() * secondvect->gety() + firstvect->getz()*secondvect->getz();
}


void dot_product::show()
{
    std::cout << t << std::endl;
}

int dot_product::gett()
{
    return t;
}

namespace threadone
{
    int x;
    void code()
    {
        three_dimension_vector* t1 = new three_dimension_vector(2,3,4);
        three_dimension_vector* t2 = new three_dimension_vector(4,5,6);
        dot_product* mixer = new dot_product(t1,t2);
        mixer->show();
        x = mixer->gett();

    }
}
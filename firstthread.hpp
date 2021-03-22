#ifndef FIRSTTHREAD_
#include <iostream>
#include <vector>
#include <thread>




class three_dimension_vector
{
    private:
        int x;
        int y;
        int z;
    public:
        three_dimension_vector(int a,int b,int c) : x(a),y(b),z(c) {}
        int getx()
        {
            return x;
        }
         int gety()
        {
            return y;
        }
         int getz()
        {
            return z;
        }


};

class dot_product
{
    private:
        three_dimension_vector* firstvect;
        three_dimension_vector* secondvect;
        int t;
    public:
        dot_product(three_dimension_vector* n1 = nullptr,three_dimension_vector* n2=nullptr);
        void show();
        int gett();

};

#endif // !FIRSTTHREAD_
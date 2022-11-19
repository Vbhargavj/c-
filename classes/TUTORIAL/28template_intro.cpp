#include <iostream>

using namespace std;

template <class T>
class vector
{
    int size;

public:
    T *ary;
    vector(int size)
    {
        this->size = size;
        this->ary = new T[size];
    }
    T muli(vector v2)
    {
        T sum = 0;

        for (int i = 0; i < size; i++)
        {
            sum += this->ary[i] * v2.ary[i];
        }
        return sum;
    }
    void display()
    {
        cout << "enter the " << endl;
    }
};
int main()
{

    vector<float> v1(3);
    v1.ary[0] = 2.5;
    v1.ary[1] = 1.3;
    v1.ary[2] = 5.2;

    vector<float> v2(3);
    v2.ary[0] = 0.1;
    v2.ary[1] = 3.1;
    v2.ary[2] = 6.7;
    // float sum = muli(v2)
    // cout << sum;
    cout << v1.muli(v2) << endl;

    return 0;
}
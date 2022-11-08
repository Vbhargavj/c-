#include <iostream>
#include <math.h>

using namespace std;
class simplecalc
{
protected:
    float a, b, res;
    int o;

public:
    simplecalc() {}
    simplecalc(float m, float n, int op)
    {
        a = m;
        b = n;
        o = op;
    }
    void perform()
    {
        switch (o)
        {
        case 1:
            res = a + b;
            break;
        case 2:
            res = a - b;
            break;
        case 3:
            res = a * b;
            break;
        case 4:
            res = a / b;
            break;
        default:
            cout << "Enter the valid operation" << endl;
            break;
        }
    }
    void result()
    {
        cout << "The result is " << res << endl;
    }
};
class scientifica
{
protected:
    float p, q, res2;
    int ope;

public:
    scientifica() {}
    scientifica(float sm, float sn, int w)
    {
        p = sm;
        q = sn;
        ope = w;
    }
    void performs()
    {
        switch (ope)
        {
        case 1:
            res2 = pow(p, q);
            break;
        case 2:
            res2 = abs(p - q);
            break;
        case 3:
            res2 = sin(p + q);
            break;
        case 4:
            res2 = cos(p + q);
            break;
        default:
            cout << "Enter the valid operation" << endl;
            break;
        }
    }
    void sshow()
    {
        cout << "the result is " << res2 << endl;
    }
};
class derived : public scientifica, public simplecalc
{
public:
    void display()
    {
        float x, y;
        int z;
        cout << "Enter the number " << endl;
        cin >> x >> y;
        // system(cls);
        cout << "1 : for sum" << endl;
        cout << "2 : for minus" << endl;
        cout << "3 : for multiply" << endl;
        cout << "4 : for devide" << endl;
        cout << "5 : for power" << endl;
        cout << "6 : for abs" << endl;
        cout << "7 : for sin" << endl;
        cout << "8 : for cos" << endl;
        cout << "enter the choise" << endl;
        cin >> z;
        if (z >= 4)
        {
            switch (z)
            {
            case 1:
                // simplecalc s(4, 5.2, 3);
                

                break;

            default:
                break;
            }
        }
        else if (8 >= z)
        {
        }
        else
        {
            cout << "enter the valid operation" << endl;
        }
    }
};
/*
print enter the a and  b
enter the operation (+-/*)
return result
*/
int main()
{
    simplecalc s(4, 5, 3);
    s.perform();
    s.result();
    scientifica sc(2, 2, 1);
    sc.performs();
    sc.sshow();
    derived d;
    d.display();
    return 0;
}
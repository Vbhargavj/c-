#include <iostream>

using namespace std;

class worker
{
    int data=4;
    int id=90;

public:
    int workcode=12;
    worker(int, int, int);
    worker();
    int getdata1();
    int getdata2();
};
worker::worker() {}
worker::worker(int d, int i, int w)
{
    data = d;
    id = i;
    workcode = w;
}

int worker::getdata1()
{
    return data;
}
int worker::getdata2()
{
    return id;
}

class hardworker : public worker
{
    int hardlevel;

public:
    void process();
    void show();
};

void hardworker::process()
{
    hardlevel = workcode - getdata1();
}

void hardworker::show()
{
    cout << "Worker id is " << getdata2() << endl
         << "Worker data is " << getdata1() << endl
         << "Worker level of work is " << hardlevel << endl;
}

int main()
{
    hardworker h1;
    h1.process();
    h1.show();
    return 0;
}
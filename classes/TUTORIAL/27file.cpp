#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string s;
    ifstream out("sample.txt");
    int i=2;
    while (i--)
    {
        getline(out, s);
        cout << s << endl;
    }
    // getline(out, s);
    // cout << s << endl;
    // getline(out, s);
    // // out>>s;
    // cout << s << endl;

    return 0;
}
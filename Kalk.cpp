#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
    double a, b;
    char c;
    cout << "Input expression like: a /n + /nb/n" << endl;
    cin >> a;
    cin >> c;
    cin >> b;
    switch (c)
    {
    case '+': cout << "develop"<<endl;
        break;
    case '-': cout << "develop"<<endl;
        break;
    case '/': cout << "develop"<<endl;
        break;
    case '*':cout << a<<"*"<<b<<"="<<IMul(a,b)<<endl;
        break;
    deafult: cout << "Mistake"<<endl;;
    }
system(pause);
return 0;
}
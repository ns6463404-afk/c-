#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "enter a no : ";
    cin >> a;
    cout << "select opreator (+,-,*,/)";
    cin >> op;
    cout << "enter another number : ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "put something valid motherfucker";
    }
}

#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b) { return a + b; }
int diff(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divi(int a, int b) { return a / b; }
int mod(int a, int b) { return a % b; }

int main()
{
    // while (true)
    // {

    cout << "Enter Your First Number : ";
    int a;
    cin >> a;
    cout << "Enter Your Second Number : ";
    int b;
    cin >> b;
    cout << "Enter Operation (+ * - / %): ";
    char c;
    cin >> c;
    int Res;
    switch (a)
    {
    case 4:
        Res = sum(a, b);
        break;

    default:
        cout << "Hello";
    }
    // if (c == '+')
    // {
    //     Res = sum(a, b);
    // }
    // else if (c == '-')
    // {
    //     Res = diff(a, b);
    // }
    // else if (c == '*')
    // {
    //     Res = mul(a, b);
    // }
    // else if (c == '/')
    // {
    //     Res = divi(a, b);
    // }
    // else if (c == '%')
    // {
    //     Res = mod(a, b);
    // }
    // else
    // {
    //     break;
    // }

    cout << "Your Output is : " << Res << endl;
    // }
    //
}
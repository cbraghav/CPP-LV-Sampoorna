#include <bits/stdc++.h>
using namespace std;

void f2()
{
    cout << "Line 1 of f2" << endl;
}
void f1()
{
    cout << "Line 1 of f1" << endl;
    f2();
    cout << "Line 2 of f1" << endl;
}
int sum(int &a, int b)
{
    return a + b;
    // cout << " Line 1 of f3" << endl;
}
int sum_of_digit(int number)
{
    // while (number > 0)
    // {
    //     int b = number % 10;
    //     int a = number / 10;
    //     total_sum += b;
    //     number = a;
    // }
}
int main()
{

    // int a = 5;
    // cout << sum(a, 7);
    // int a = 5;
    // int b = 7;

    // int newa = f3(a, b);

    // cout << a << " " << b << endl;
    // ;
    // cout << newa << endl;
    // cout << "Line 1 of main" << endl;
    // cout << "Line 2 of main" << endl;
    // f1();
    // cout << "Line 3 of main" << endl;

    // int number;
    // cout << number;
    // cin >> number;
    // int total_sum;
    // sum_of_digit(number)

    // // total_sum += number;
    // cout << "sum :" << total_sum << endl;
}
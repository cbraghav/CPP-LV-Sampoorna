#include <bits/stdc++.h>
using namespace std;

// void calsum(int a, int b)
// {
//     int x = a + b;
//     cout << x << endl;
//     // cout << sum << endl;
//     return;
//     // continue;
//     if (x)
//     {

//         // ----
//         return;
//     }
//     else
//     {

//         // ----
//     }

//     //
//     cout << "Hello";
// }
// void caldiff(int a, int b); // declare

int factorial(int n)
{
    int prod = 1;
    for (int i = 1; i <= n; i++)
    {
        prod = prod * i;
    }
    return prod;
}

void isEven(int a)
{
    if (a % 2 == 0)
    {
        cout << "True";
        factorial(10);
        return;
        // return "true";
    }

    return;
}
// return_type   name (){
//}
int main()
{

    int cnt = 500;
    cout << factorial(10) << endl;
    //  isEven(5);
    // cout << isEven(10);

    // cout << "Hello";
    // while (cnt <= 50)
    // {
    //     cout << "Hello\n";
    //     cnt++;
    // }

    // do
    // {
    //     cout << "Hello\n";
    //     cout<<"cb";
    //     cou<<"sbc"
    //     cnt++;
    // } while (cnt <= 52);
    // cout << cnt << endl;

    // int a = 5;
    // int b = 7;
    // calsum(5, 7); // arguments
    //               //   sum << endl;
    // calsum(15, 20);
    // calsum(20, 30);

    // // cout << sum;
    // caldiff(17, 7);

    return 0;
}

// void caldiff(int a, int b)
// {
//     // cout << a - b << endl;
// }

/*
return_type Functionname( y){

    function body
}
*/
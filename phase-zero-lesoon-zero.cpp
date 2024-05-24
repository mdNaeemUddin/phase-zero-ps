#include <bits/stdc++.h>
using namespace std;

/* Problem number 01 : Sum of Integers */

int sumFunc(int a, int b){
    return a + b;
}


/* Problem number 02 : Pinik (print simple line) */

void aLineDisplay()
{
    cout << "Programming is Pinik!" << endl;
}


/* Problem number 03 : Data Types */

void dataTypes()
{
    int i; long long int l; char c; float f; double d;
    cout << "give sequentially values : int, long long, character, float and double types values : ";
    cin >> i >> l >> c >> f >> d;

    cout << "The value of integer i is : " << i << endl;
    cout << "The value of long long l is : " << l << endl;
    cout << "The value of character c is : " << c << endl;
    cout << "The value of float f is : " << f << endl;
    cout << "The value of double d is : " << d << endl;
}


/* Problem number 04 : Pattern */

void pattern()
{
    cout << "*" << endl;
    cout << "**" << endl;
    cout << "***" << endl;
    cout << "****" << endl;
    cout << "*****" << endl;
}


/* Problem number 05 : Conditional Pattern */

void conditionalPattern()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j <= i ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}



/* Problem number 06 : Swap er Baap */

void swapFunc()
{
    int a, b, c, temp; cin >> a >> b >> c;

    temp = a;
    a = b;
    b = c;
    c = temp;

    cout << "a is : " << a << endl;
    cout << "b is : " << b << endl;
    cout << "c is : " << c << endl;

}

int main()
{
    /* Problem number 01 : Sum of Integers */

//    int a, b; cin >> a >> b;
//    cout << "sum is : " << sumFunc(a, b)  << endl;


    /* Problem number 02 : Pinik (print simple line) */

//    aLineDisplay();


    /* Problem number 03 : Data Types */

//    dataTypes();


    /* Problem number 04 : Pattern */

//    pattern();


      /* Problem number 05 : Conditional Pattern */

//      conditionalPattern();


  /* Problem number 06 : Swap er Baap */

    swapFunc();


    return 0;
}

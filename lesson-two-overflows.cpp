#include <bits/stdc++.h>
using namespace std;

void stringCnt()
{
    int n; string line; cin >> n; int size;

    for(int i = 0; i < n; i++ )
    {
        cin >> line;

        size = line.size();

        if(size > 10)
        {
            cout << line[0] << size << line[size - 1] << endl;
        }else
        {
            cout << line << endl;
        }

    }
}


int main()
{
    double c; int a = 4, b= 3;

    c = (double) a / b;
    cout << c << endl;

    stringCnt();

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, len;
    string line;
    cin >> n;

    for(int i = 0; i < n; i++ )
    {
        cin >> line;

        len = line.size();

        if(len > 10)
        {
            cout << line[0] << len - 2 << line[len - 1] << endl;
        }
        else
        {
            cout << line << endl;
        }

    }

    return 0;
}


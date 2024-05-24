#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, solve = 0; cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if((a == 1 && b == 1) || (b == 1 && c == 1) || (c == 1 && a == 1))
        {
            solve++;
        }else{
            solve;
        }
    }

    cout << solve << endl;

    return 0;
}


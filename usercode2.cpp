#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define debug(statement) \
    if (debugging)       \
    cout << statement << endl
#define debug_variable(var) \
    if (debugging)          \
    cout << (#var) << ": " << var << endl

const bool debugging = 0;


void io_on()
{
#ifndef ONLINE_JUDGE
    freopen("./input.txt", "r", stdin);
    freopen("./output.txt", "w", stdout);
#endif
}


void solve()
{
    long long n;
    cin >> n;
    long long temp,s = 0;
    vector<long long> v;
    for(long long i = 0; i < n; i++)
    {
        cin >> temp;
        s += temp;
        v.push_back(temp);

    }

    long long q, l , r;
    cin >> q;
    while(q-- > 0){
        cin >> l >> r;
        r--;
        l--;
        long long sumr = 0, suml = 0;
        if(l == 0){ 
            for(long long i = 0; i < r+1; i++)
            {
                sumr += v[i];
            }
            cout << sumr << nl;
        }else{
            for(long long i = 0; i < l; i++)
            {
                suml += v[i];
            }
            for(long long i = 0; i < r+1; i++)
            {
                sumr += v[i];
            }
            cout << (sumr-suml)<< nl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // io_on();
    solve();
    return 0;
}
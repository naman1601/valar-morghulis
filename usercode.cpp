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
    vector<long long> sum;
    for(long long i = 0; i < n; i++)
    {
        cin >> temp;
        s += temp;
        v.push_back(temp);
        sum.push_back(s);

    }

    long long q, l , r;
    cin >> q;
    while(q-- > 0){
        cin >> l >> r;
        r--;
        l--;
        if(l == 0){
            cout << sum[r] << nl;
        }else{
            cout << (sum[r] - sum[l-1])<< nl;
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
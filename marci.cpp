#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k;
    cin >> n >> k;
    int detikke[n];
    for (int i = 0; i < n; i++)
        cin >> detikke[i];
    int ans = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (detikke[i] + k > detikke[i+1])
            ans += (detikke[i+1] - detikke[i]);
        else
            ans += k;
    }
    ans += k;
    cout << ans << endl;
    return 0;
}

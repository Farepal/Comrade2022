#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> x;
    for (int i = 2; i < n; i++)
    {
        bool flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0 && i != j)
            {
                flag = false;
            }
        }
        if (flag)
            x.push_back(i);
    }
    if (x.size() == 0)
        cout << "-1" << endl;
    else {
        for (int i = 0; i < x.size();i++)
        {
            for (int j = 1; j <= x[i]; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}

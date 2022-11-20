#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    int n;
    getline (cin, x);
    cin >> n;
    for (int i = 0;i < x.size(); i++)
    {
        if (x[i]==' ')
            cout << "_";
        else{
            int j = x[i];
            j = (j-65+n)%26+65;
            cout << char(j);
        }
    }
    cout << endl;
    return 0;
}

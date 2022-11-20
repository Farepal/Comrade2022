#include <iostream>
#include <string>
#include <vector>

using namespace std;

string pesan;
int sum;
vector <int> posisi01;

bool kurangin()
{
    int pos = pesan.find("01", 0);
    if (pos != string::npos)
    {
        while (pos != string::npos)
        {
            posisi01.push_back(pos);
            pos = pesan.find("01",pos+2);
        }
        sum += (posisi01.size() * 2);
        return true;
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    vector <int> hasil;
    while (T--)
    {
        pesan = "";
        cin >> pesan;
        sum = 0;
        posisi01.clear();
        while (kurangin())
        {
            string tempPesan = pesan;
            pesan = "";
            vector <bool> ygDitambah (tempPesan.length(), 0);
            for (int i = 0; i < posisi01.size(); i++)
            {
                ygDitambah[posisi01[i]] = 1;
            }
            for (int i = 0; i < tempPesan.length(); i++)
            {
                if (ygDitambah[i] == 1)
                {
                    i++;
                }
                else 
                {
                    pesan+= pesan[i];
                }
            }
            posisi01.clear();
        }
        hasil.push_back(sum);
    }
    for (auto it = hasil.cbegin(); it != hasil.cend(); it++)
        cout << *it << endl;
    return 0;
}

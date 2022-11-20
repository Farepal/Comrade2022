#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string Joko;
    getline(cin, Joko);
    string Galang;
    getline(cin, Galang);
    int langkahJoko = 0;
    int langkahGalang = 0;

    for (int i = 0; i < Joko.length(); i+=2)
    {
        if (Joko[i] == 'B')
        {
            if (Galang[i] == 'K')
                langkahGalang += 5;
            else if (Galang[i] == 'G')
                langkahJoko += 1;
        }
        else if (Joko[i] == 'K')
        {
            if (Galang[i] == 'G')
                langkahGalang += 2;
            else if (Galang[i] == 'B')
                langkahJoko += 5;
        }
        else if (Joko[i] == 'G')
        {
            if (Galang[i] == 'B')
                langkahGalang += 1;
            else if (Galang[i] == 'K')
                langkahJoko += 2;
        }
    }
    if (langkahJoko > langkahGalang)
        cout << "Pak Joko menang" << endl;
    else if (langkahJoko == langkahGalang)
        cout << "Seri" << endl;
    else
        cout << "Pak Galang Menang" << endl;
    return 0;
}

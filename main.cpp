#include <iostream>

using namespace std;

int main()
{
    string ps;
    int jam, mnt;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "   Paket  |   PS 3    |   PS 4    |   PS 5    |   Durasi   |   Bonus   |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "   1.     |   5.000   |   7.000   |   10.000  |  60 menit  |      0    |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "   2.     |   10.000  |   14.000  |   20.000  |  120 menit |  20 menit |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "   3.     |   15.000  |   20.000  |   27.000  |  180 menit |  30 menit |" << endl;
    cout << "------------------------------------------------------------------------" << endl;

    cout << "Jam mulai bermain: ";
    cin >> jam;

    cout << "Menit mulai bermain: ";
    cin >> mnt;

    cout << "Jenis PS? (capslock + spasi): ";
    cin >> ps;

    cout << "Pilih paket: ";
    cin >> paket;

    if (ps == "PS 3")
    {
        if (paket == 1)
        {
            durasi = 60;
            bayar = 5000;
        }
        else if (paket == 2 )
        {
            durasi = 140;
            bayar
        }
        else
        {
            durasi = 210;
        }
    }
    else if (ps == "PS 4")
    {
        if paket
    }
    //cout << "Batas bermain " << jam_bts << " : " << menit_bts;//

    return 0;
}

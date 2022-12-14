#include <iostream>

using namespace std;

int main()
{
    string ps;
    int jam, mnt, paket, durasi, bayar, jam_ht, menit_ht, durasi_ht, jam_bts, menit_bts;

    cout << "Silahkan pilih paket: " << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "   Paket  |   PS 3    |   PS 4    |   PS 5    |   Durasi   |   Bonus   |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "   1.     |   5.000   |   7.000   |   10.000  |  60 menit  |      0    |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "   2.     |   10.000  |   14.000  |   20.000  |  120 menit |  20 menit |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "   3.     |   15.000  |   20.000  |   27.000  |  180 menit |  30 menit |" << endl;
    cout << "------------------------------------------------------------------------" << endl;

    cout <<"\n========================================================================" << endl;

    cout << "\nJam mulai bermain: ";
    cin >> jam;

    cout << "Menit mulai bermain: ";
    cin >> mnt;

    cout << "Jenis PS? (capslock tanpa spasi): ";
    cin >> ps;

    cout << "Pilih paket: ";
    cin >> paket;

    cout <<"\n========================================================================" << endl;

    if (ps == "PS3")
    {
        if (paket == 1)
        {
            durasi = 60;
            bayar = 5000;
        }
        else if (paket == 2 )
        {
            durasi = 140;
            bayar = 10000;
        }
        else if (paket == 3)
        {
            durasi = 210;
            bayar = 15000;
        }
        else
        {
            cout << "\nPaket tidak tersedia" << endl;
            exit(0);
        }
    }
    else if (ps == "PS4")
    {
        if (paket == 1)
        {
            durasi = 60;
            bayar = 7000;
        }
        else if (paket == 2)
        {
            durasi = 140;
            bayar = 14000;
        }
        else if (paket == 3)
        {
            durasi = 210;
            bayar = 20000;
        }
        else
        {
            cout << "\nPaket tidak tersedia" << endl;
            exit(0);
        }
    }
    else if (ps == "PS5")
    {
        if (paket == 1)
        {
            durasi = 60;
            bayar = 10000;
        }
        else if (paket == 2)
        {
            durasi = 140;
            bayar = 20000;
        }
        else if (paket == 3)
        {
            durasi = 210;
            bayar = 27000;
        }
        else
        {
            cout << "\nPaket tidak tersedia" << endl;
            exit(0);
        }
    }
    else
    {
        cout << "\nPS tidak tersedia" << endl;
        exit(0);
    }

    jam_ht = jam * 60;
    menit_ht = mnt + jam_ht;
    durasi_ht = menit_ht + durasi;

    jam_bts = durasi_ht / 60;
    menit_bts = durasi_ht % 60;

    cout << "\nBatas bermain hingga jam " << jam_bts << " : " << menit_bts << endl;
    cout << "Bayar : " << bayar << endl;

    return 0;
}

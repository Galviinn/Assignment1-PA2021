#include <iostream>
#include <string>
#include <array>
#include <algorithm>

using namespace std;


void frekuensipermatkul(string x[8][20]){
    int d[8][5] = {};
    for(int i = 0; i < 8; ++i){
        for(int p = 0; p < 20; ++p)
        {
            if (x[i][p] == "A")
            {
                d[i][0] += 1;
            }
            if (x[i][p] == "B")
            {
                d[i][1] += 1;
            }
            if (x[i][p] == "C")
            {
                d[i][2] += 1;
            }
            if (x[i][p] == "D")
            {
                d[i][3] += 1;
            }
            if (x[i][p] == "E")
            {
                d[i][4] += 1;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout << "Matakuliah No. " << i + 1 << endl;
        for (int p = 0; p < 5; p++)
        {
            if (p == 0)
            {
                cout << "Banyak Nilai A : ";
            }
            if (p == 1)
            {
                cout << "Banyak Nilai B : ";
            }
            if (p == 2)
            {
                cout << "Banyak Nilai C : ";
            }
            if (p == 3)
            {
                cout << "Banyak Nilai D : ";
            }
            if (p == 4)
            {
                cout << "Banyak Nilai E : ";
            }
            cout << d[i][p] << " Orang " << endl;
        }
    }
    return;
}

void frekuensipersiswa(string x[8][20]){
    int e[20][5] = {};
    for (int i = 0; i < 20; ++i)
    {
        for (int p = 0; p < 8; ++p)
        {
            if (x[p][i] == "A")
            {
                e[i][0] += 1;
            }
            if (x[p][i] == "B")
            {
                e[i][1] += 1;
            }
            if (x[p][i] == "C")
            {
                e[i][2] += 1;
            }
            if (x[p][i] == "D")
            {
                e[i][3] += 1;
            }
            if (x[p][i] == "E")
            {
                e[i][4] += 1;
            }
        }
    }
    for (int i = 0; i < 20; i++)
    {
        cout << "Nomor urut Mahaiswa : " << i + 1 << endl;
        for (int p = 0; p < 5; p++)
        {
            if (p == 0)
            {
                cout << "Jumlah Nilai A : ";
            }
            if (p == 1)
            {
                cout << "Jumlah Nilai C : ";
            }
            if (p == 2)
            {
                cout << "Jumlah Nilai C : ";
            }
            if (p == 3)
            {
                cout << "Jumlah Nilai D : ";
            }
            if (p == 4)
            {
                cout << "Jumlah Nilai E : ";
            }
            cout << e[i][p] << " Mata Kuliah" << endl;
        }
    }
    return;
}

int main (){
    string x[8][20] = 
        {{"A","B","C","D","E","A","B","C","D","E","A","B","C","D","E","A","B","C","D","E"},
        {"A","B","C","D","E","A","B","C","D","E","A","B","C","D","E","A","B","C","D","E"},
        {"A","B","C","D","E","A","B","C","D","E","A","B","C","D","E","A","B","C","D","E"},
        {"A","B","C","D","E","A","B","C","D","E","A","B","C","D","E","A","B","C","D","E"},
        {"A","B","C","D","E","A","B","C","D","E","A","B","C","D","E","A","B","C","D","E"},
        {"A","B","C","D","E","A","B","C","D","E","A","B","C","D","E","A","B","C","D","E"},
        {"A","B","C","D","E","A","B","C","D","E","A","B","C","D","E","A","B","C","D","E"},
        {"A","B","C","D","E","A","B","C","D","E","A","B","C","D","E","A","B","C","D","E"}};

    int in;

    cout << "Main Menu : " << endl;
    cout << "1. Frekuensi nilai per matkul" << endl;
    cout << "2. Frekuensi nilai per mahasiswa" << endl;
    cout << "Masukan pilihan : ";cin>>in;

    if (in == 1)
    {
        frekuensipermatkul(x);
    }

    if (in == 2)
    {
        frekuensipersiswa(x);
    }
}

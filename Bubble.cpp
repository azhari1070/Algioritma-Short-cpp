//Bubble
#include <iostream>
using namespace std;

int main()
{
    
    int N; // untuk banyaknya data

    cin >> N; //input banyaknya data

    int nilai[N]; // deklarasi array sebanyak N

    //looping untuk input N nilai
    for(int a=0; a<N; a++)
        cin >> nilai[a];//input nilai

    int n = N-2; // untuk acuan batasan (lihat algoritma bubble sort)

    //Bubble Sort
    for(int a=0; a<=n-1; a++) //mengapa n-1 karna untuk menghemat looping dan sebagai pengurang di looping di dalamnya
    {
        for(int b=0; b<=n-a; b++) //sebagai acuan batasan index yang akan dibandingkan, semakin besar a maka semakin pendek loopingnya
        {
            if(nilai[b]>nilai[b+1]) // perbandingan nilai untuk di swap
            {
                swap(nilai[b],nilai[b+1]); // jika memenuhi maka di swap
            }
        }
    }

    //cetak data setelah disorting
    for(int a=0; a<N; a++)
        cout << nilai[a] << endl;

}

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    bool ketemu, nolsemua;
    int matrix[10][10];
    int i,j,jumlah_simpul,jumlah_sisi,asal,tujuan;
    cout<<"*======================================Tugas Praktikum Graph 1======================================*"<<endl;
    cout<<" Struktur Data & Pemrograman"<<endl;
    cout<<" Program 1 - Keterhubungan Graph"<<endl;
    cout<<" Created By Abdul Latif Munjiat (1610631170004)"<<endl;
    cout<<" Kelas 3'A Fasilkom Unsika\n"<<endl;


    cout<<"jumlah simpul\t\t: ";
    cin>>jumlah_simpul;
    cout<<"jumlah sisi\t\t: ";
    cin>>jumlah_sisi;

    for(i=1;i<=jumlah_simpul;i++)
    for(j=1;j<=jumlah_simpul;j++)
    matrix[i][j]=0;

    for(i=1;i<=jumlah_sisi;i++){
    cout<<"Simpul asal\t\t: ";
    cin>>asal;
    cout<<"Simpul tujuan\t\t: ";
    cin>>tujuan;
    matrix[asal][tujuan]=1;
    matrix[tujuan][asal]=1;
}
    i=1;nolsemua=false;
    while(i<=jumlah_simpul&&!nolsemua)
    {
        j=1;ketemu=false;
    while(j<=jumlah_simpul&&!ketemu)
    {
        if(matrix[i][j]==1)
        ketemu=true;
    else
        j++;
    }
    if(!ketemu)
        nolsemua=true;
    else
        i++;
}
    if(nolsemua)
    cout<<"\n\tGraf Tidak Terhubung\n\n";
    else
    cout<<"\n\tGraf Terhubung\n\n";
}

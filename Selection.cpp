#include <iostream>
using namespace std;
int main ()
{
int a[200];
int n,i,j,temp,nilai;

cout<<"Masukkan Nilai yang ingin diurutkan : "; cin>>n; cout<<endl;

for(i=0; i<n; i++){
    cout<<"Nilai Ke :"<<i+1<<" : ";cin>>a[i];
}

cout<<"Input Data : ";
for(i=0; i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
for(i=0; i<n-1; i++){
nilai=i;
    for(j=i+1; j<n; j++){
    if(a[nilai]>a[j]){
    nilai=j;
    }
    }
    temp=a[i];
    a[i]=a[nilai];
    a[nilai]=temp;
}
cout<<"Data setelah diurutkan : ";
for(i=0; i<n; i++){
    cout<<a[i]<<" ";
}
}

#include <iostream>
Using namespace std;

void Merge(int* A, int kiri,int tengah, int kanan){
int B[kiri+kanan];
int i,bagian1,bagian2;
bagian1=kiri;
bagian2=tengah+1;
i=kiri;
while (bagian1<=tengah && bagian2 <= kanan){
if(A[bagian1] <= A[bagian2]){
B[i]=A[bagian1];
bagian1++;
}
else{
B[i]=A[bagian2];
Bagian2++;
}
i++;
}
    while ( bagian1 <= tengah ){
        B[i] = A[bagian1];
        bagian1++;
        i++;
        }

    while ( bagian2 <= kanan ){
        B[i] = A[bagian2];
        bagian2++;
        i++;
        }

for (int i=kiri;i<= kanan;i++){
A[i]=B[i];
}

}

void MergeSort (int* A, int i, int j){
int k;
if (i<j){
k= ((i+j)/2);
MergeSort(A, i, k);
MergeSort(A, k+1, j);
Merge(A, i, k, j);
}
}

int main(int argc, char *argv[])
{
int n;
int i;
int j;
cout<<"Rifky,Iqbal,Azhari"; 
cout<<"Banyak data :";
cin>>n;
i=1;
j=n;
int A[n];
for (int x=1;x<=n;x++){
cout<<"Masukan data ke-"<<x<<" : ";
cin>>A[x];
}
cout<<"Data Sebelum diurutkan "<<endl; 
for (int x=1;x<=j;x++){
cout<<A[x]<<" ";
    }
    cout<<endl;
MergeSort(A,i,j);
cout<<"Data Setelah diurutkan "<<endl; 
for (int x=1;x<=j;x++){
cout<<A[x]<<" ";
    }
    cout<<endl;
system("pause");
return 0;
}

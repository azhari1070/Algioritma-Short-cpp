#include <iostream>
#include <conio.h>
using namespace std;

void M(int *a, int rendah, int tinggi, int tengah){
	int i, j, k, temp[tinggi-rendah+1];
	i = rendah;
	k = 0;
	j = tengah + 1;
    
	while (i <= tengah && j <= tinggi)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
    
	while (i <= tengah)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	while (j <= tinggi)
	{
		temp[k] = a[j];
		k++;
		j++;
	}

    for (i = rendah; i <= tinggi; i++)
	{
		a[i] = temp[i-rendah];
	}
}

void S(int *a, int rendah, int tinggi)
{
	int tengah;
	if (rendah < tinggi)
	{
		tengah=(rendah+tinggi)/2;

		S(a, rendah, tengah);
		S(a, tengah+1, tinggi);

		M(a,rendah, tinggi, tengah);
	}
}
int main()
{
	int n, i;
	cout<<"\nBanyaknya nilai yang ingin diinputkan: ";
	cin>>n;

	int A[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Masukan nilai ke "<<i+1<<": ";
		cin>>A[i];
	}

	S(A, 0, n-1);

	cout<<"\nUrutan Nilai : ";
	for (i = 0; i < n; i++)
        cout<<" "<<A[i];

	getch();
}

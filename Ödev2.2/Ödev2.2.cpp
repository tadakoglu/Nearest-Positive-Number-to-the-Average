#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
double ort(int *dizi, int n);
void yakinvepoz(int *dizi, int n);
void main()
{
	int n;
	printf("N degerini giriniz ?:");
	scanf("%d", &n);
	int *dizi;
	dizi=(int*) malloc(n*sizeof(int));
	int i;
	for(i=0; i<n; i++) 
		{
		printf("Lutfen %d. sayiyi giriniz", i+1);
		scanf("%d", &dizi[i]);
		}
	printf("Ortalama : %f\n", ort(dizi,n) );
	yakinvepoz(dizi,n);
	getch();
}
double ort(int *dizi, int n)
{
	int toplam=0;
	int i;
	for(i=0; i<n; i++)
	toplam+=dizi[i];
	return (float)toplam/n;
	
}
void yakinvepoz(int *dizi, int n)
{
		int i,konum;
		int enyakin = dizi[0];
		for(i=0; i<n; i++) // 1 3 5 = 
		{
		if((ort(dizi,n) - dizi[i]) < (ort(dizi,n) - enyakin) ) {
		enyakin = dizi[i];
		konum = i;
		}
		}

	printf("Ortalamaya En Yakin Sayi %d:\n Onun konumu : %d", enyakin, konum);
} 


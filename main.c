  #include <stdio.h>
#include <stdlib.h>


int minBul(int dizi[],int eleman,int eleman_sayisi){

	int i;   // 1 kez calisir

int	min = dizi[0];  // 1 kez calisir

	for(i=0;i<eleman_sayisi;i++){  // 1 kez , n+1 kez , n kez

		if(dizi[i]<min){   // n kez calisir

			min=dizi[i]; // n kez calisir
		}


	}


	return min;   // 1 kez calisir
}

// T(n) = 1+1+1+(n+1)+n+n+n
// T(n)=4n+4


int main(){

int eleman_sayisi;

int i;
int eleman;

printf("eleman sayisini gir:");
scanf("%d",&eleman_sayisi);

int dizi[eleman_sayisi];

for(i=0; i <eleman_sayisi ; i++){

	printf("dizinin elemanlarini girin:");
	scanf("%d",&dizi[i]);



}


int sonuc = minBul(dizi,eleman,eleman_sayisi)	;

	printf("sonuc:%d",sonuc);


return 0;
}

















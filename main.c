#include <stdio.h>
#include <stdlib.h>


int linearSearch(int dizi[],int boyut,int aranacak){    //L�NEAR SEARCH ARAMA YAPACAK FONKS�YON
	int i;       
	for(i=0;i<boyut;i++){            //L�NEAR OLARAK D�Z�DEK� ELEMANLARA BAKILIR
		if(dizi[i]==aranacak){      //E�ER ARANAN ELEMAN D�Z�N� �. �NDEKS�NE E��T �SE
			return i;               //� DE�ER� D�ND�R�L�R
		}
	}
	
	
	return -1;             //ARANAN ELEMAN YOKSA -1 DE�ER� D�ND�R�L�R
	
	
}

int main(int argc, char *argv[]) {
	int boyut,sayilar[100],i;          //KULLANILACAK ELEMANLAR TANIMLANIR
	int aranacak,sonuc;               //KULLANILACAK ELEMANLAR TANIMLANIR
	printf("DIZI KAC ELEMANLI:");    //D�Z�N�N ELEMAN SAYISI KULLANICIDAN ALINIR
	scanf("%d",&boyut);
	
	printf("%d boyutlu dizinin elemanlarini giriniz: \n",boyut);      //D�Z�N�N ELEMANLARI KULLANICIDAN ALINIR
		for(i = 0; i <boyut; i++) {
      scanf("%d", &sayilar[i]);
   }
	
	
	printf("ARANACAK ELEMAN:");        //ARANACAK ELEMAN KULLANICIDAN ALINIR 
	scanf("%d",&aranacak);
	
	sonuc=linearSearch(sayilar,boyut,aranacak);       //L�NEAR SEARCH FONKS�YONU �ALI�TIRILIR
	
	if(sonuc==-1)             //SONUC -1 �SE ELEMAN YOKTUR
	printf("\tARANAN ELEMAN DIZIDE YOK!");
	
	
	else            //SONUC -1 DE��L �SE D�ND�R�LEN � DE�ER� �NDEKS NUMARASINI EKRANA YAZDIRIR
	printf("\tARANAN ELEMAN DIZIDE %d. INDISTE VAR",sonuc);
	
	
	return 0;
}

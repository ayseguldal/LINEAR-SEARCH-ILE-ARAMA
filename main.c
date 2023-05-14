#include <stdio.h>
#include <stdlib.h>


int linearSearch(int dizi[],int boyut,int aranacak){    //LÝNEAR SEARCH ARAMA YAPACAK FONKSÝYON
	int i;       
	for(i=0;i<boyut;i++){            //LÝNEAR OLARAK DÝZÝDEKÝ ELEMANLARA BAKILIR
		if(dizi[i]==aranacak){      //EÐER ARANAN ELEMAN DÝZÝNÝ Ý. ÝNDEKSÝNE EÞÝT ÝSE
			return i;               //Ý DEÐERÝ DÖNDÜRÜLÜR
		}
	}
	
	
	return -1;             //ARANAN ELEMAN YOKSA -1 DEÐERÝ DÖNDÜRÜLÜR
	
	
}

int main(int argc, char *argv[]) {
	int boyut,sayilar[100],i;          //KULLANILACAK ELEMANLAR TANIMLANIR
	int aranacak,sonuc;               //KULLANILACAK ELEMANLAR TANIMLANIR
	printf("DIZI KAC ELEMANLI:");    //DÝZÝNÝN ELEMAN SAYISI KULLANICIDAN ALINIR
	scanf("%d",&boyut);
	
	printf("%d boyutlu dizinin elemanlarini giriniz: \n",boyut);      //DÝZÝNÝN ELEMANLARI KULLANICIDAN ALINIR
		for(i = 0; i <boyut; i++) {
      scanf("%d", &sayilar[i]);
   }
	
	
	printf("ARANACAK ELEMAN:");        //ARANACAK ELEMAN KULLANICIDAN ALINIR 
	scanf("%d",&aranacak);
	
	sonuc=linearSearch(sayilar,boyut,aranacak);       //LÝNEAR SEARCH FONKSÝYONU ÇALIÞTIRILIR
	
	if(sonuc==-1)             //SONUC -1 ÝSE ELEMAN YOKTUR
	printf("\tARANAN ELEMAN DIZIDE YOK!");
	
	
	else            //SONUC -1 DEÐÝL ÝSE DÖNDÜRÜLEN Ý DEÐERÝ ÝNDEKS NUMARASINI EKRANA YAZDIRIR
	printf("\tARANAN ELEMAN DIZIDE %d. INDISTE VAR",sonuc);
	
	
	return 0;
}

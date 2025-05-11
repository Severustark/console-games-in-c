//                                      PROJE ODEVÝ 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int secim;
	do
	{

		printf("OYUN 1 ICIN 1'E BASINIZ: \n");
		printf("OYUN 2 ICIN 2'E BASINIZ: \n");
		printf("CIKMAK ICIN 3'E BASINIZ: \n");

		scanf_s("%d", &secim);

		switch (secim) {
		case 1:
			oyun1(); break;
		case 2:
			oyun2(); break;
		case 3:
			printf("OYUN BITTI!!");  break;
		default:
			printf("yanlis sayi girdiniz \n");
		}
	} while (secim != 3);

	return 0;
}
oyun1()
{
	printf("OYUN BASLIYOR:)\n");

	int konum, i;
	float sayi, hata;
	int toplamhata = 0;
	int puan = 0;
	int basariliatis = 0;
	int yakinbasarili = 0;
	int basarisizatis = 0;
	srand(time(NULL));
	for (i = 1; i <= 10; i++)
	{
		printf("%d.DUSMAN BELIRDI\n", i);
		konum = rand() % 10 + 1;
		//printf("Uretilen sayiniz:%d \n", konum);
		printf("Hangi konuma ates edeceksiniz:\n");
		scanf_s("%f", &sayi);
		hata = sayi - konum;
		if (hata < 0)
		{
			hata = hata * (-1);
		}
		printf("%d atis hata oraniniz:%f\n", i, hata);
		toplamhata += hata;
		if (konum == sayi)
		{
			basariliatis += 1;
			puan += 10;
			printf("Basarili atis gerceklestirdiniz +10 puan kazandiniz\n");
		}
		else if (hata <= 0.5)
		{      
			yakinbasarili += 1;
			puan += 5;
			printf("COK YAKIN ATES ETTINIZ +5 PUAN KAZANDINIZ\n\n");
		}
		else if (hata > 0.5)
		{
			basarisizatis += 1;
			printf("Basarisiz atis gerceklestirdiniz:(\n\n");
		}
	}
	printf("10 oyundaki toplam hataniz:%d\n",toplamhata);
	printf("10 atistaki toplam puaniniz:%d\n", puan);
	printf("10 atistaki basarili atis sayisi:%d\n", basariliatis);
	printf("10 atistaki yakin basarili atis sayisi: %d\n", yakinbasarili);
	printf("10 atistaki basarisiz atis sayisi:%d\n",basarisizatis);

}
oyun2()
{
	int A[3];
	int B[3];
	int C[3]={0,0,0};
	int uretilensayi, tahmin;
	int skor = 100;
	srand(time(NULL));
	for (int i = 1;; i++)
	{
		uretilensayi = rand() % 900 + 100;
		A[0] = uretilensayi / 100;
		A[1] = (uretilensayi / 10) % 10;
		A[2] = uretilensayi % 10;
		//printf("Rastgele uretilen sayi:%d\n", uretilensayi);

		if (A[0] != A[1] && A[1] != A[2] && A[0]!=A[2])
		{
			break;
		}
	}
	for (int i = 1; i <= 10; i++)
	{
		printf("%d.tahmininizi giriniz:", i);
		scanf_s("%d", &tahmin);
		B[0] = tahmin / 100;
		B[1] = (tahmin / 10) % 10;
		B[2] = tahmin % 10;
		if (uretilensayi == tahmin)
		{
			printf("TEBRIKLER %d.TAHMINIZDE BILDINIZ.SKORUNUZ:%d\n", i, skor);
			break;
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{
				C[i] = 0;
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (B[i] == A[j])
					{
						C[i] = 9;
					}					
				}
			}

			for (int i = 0; i < 3; i++)
			{
				if (B[i] == A[i])
				{
					C[i] = 1;
				}
			}
			printf("Ipucu sayi:");
			for (int i = 0; i < 3; i++)
			{
				printf("%d", C[i]);
			}
			printf("\n");

			skor = skor - 10;
		}
	}
	return 0;
}
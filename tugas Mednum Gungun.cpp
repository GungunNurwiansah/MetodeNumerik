//preprocessor

#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<math.h>


int pertambahan(int a, int b);
int pengurangan(int a, int b);
int perkalian(int a, int b);
int perpangkatan(int a, int b);
void Fungsi(int a, int b);
void menu();

//algoritma
//main driver

int main(){
	
	int i,a,b,pilih,hasil,z;
	char opsi;	
	Home:
	menu();
	printf("\nPilih Menu : "); scanf("%d", &pilih);
	switch(pilih){

	case 1:
   	system("cls");
		printf(" *-- pertambahan --* ");
		printf("\n");
		printf("\nBilangan 1 : "); scanf("%d", &a);
		printf("Bilangan 2 : "); scanf("%d", &b);
		hasil = pertambahan(a,b);
		printf("\nHasil : %d",hasil);
		getch();
		system("cls");
		goto Home;
		break;

    case 2:
   	system("cls");
		printf(" *-- Pengurangan --* ");
		printf("\n");
		printf("\nBilangan 1 : "); scanf("%d", &a);
		printf("Bilangan 2 : "); scanf("%d", &b);
		hasil = pengurangan(a,b);
		printf("\nHasil : %d",hasil);
		getch();
		system("cls");
		goto Home;
		break;
		
    case 3:
   	system("cls");
		printf(" *-- perkalian --* ");
		printf("\n");
		printf("\nBilangan 1 : "); scanf("%d", &a);
		printf("Bilangan 2 : "); scanf("%d", &b);
		hasil = perkalian(a,b);
		printf("\nHasil : %d",hasil);
		getch();
		system("cls");
		goto Home;
		break;

    case 4:
   	system("cls");
		printf(" *-- perpangkatan --* ");
		printf("\n");
		printf("\nBilangan : "); scanf("%d", &a);
		printf("Bilangan perpangkatan : "); scanf("%d", &b);
		hasil = perpangkatan(a,b);
		printf("Hasil : %d",hasil);
		getch();
		system("cls");
		goto Home;
		break;

    case 5:
   	system("cls");
		printf(" *-- Fungsi --* ");
		printf("\n");
		printf("\nBilangan 1 : "); scanf("%d", &a);
		printf("Bilangan 2 : "); scanf("%d", &b);
		for(i=a;i<=b;i++){
      		hasil = (2*(i*i))-((3*i)+1);
      		printf("hasil : %d",hasil);
      		printf("\n");
    	}
		getch();
		system("cls");
		goto Home;
		break;
    }
}

void menu(){
	int pilih;
	printf(" *-- Menu --* ");
	printf("\n 1. pertambahan");
	printf("\n 2. pengurangan");
	printf("\n 3. perkalian");
	printf("\n 4. perpangkatan");
	printf("\n 5. Fungsi");
}

int pertambahan(int a, int b){
	int hasil;
	hasil = a + b;
	return(hasil);
}

int pengurangan(int a, int b){
	int hasil;
	hasil = a - b;
	return(hasil);
}

int perkalian(int a, int b){
	int hasil;
	hasil = a * b;
	return(hasil);
}

int perpangkatan(int a, int b){
	int i,hasil;
	hasil=1;
	for(i=1;i<=b;i++){
		hasil=hasil*a;
	}
	return hasil;
}

void Fungsi(int a, int b){
	
}

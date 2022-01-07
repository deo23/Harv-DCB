#include <stdio.h>
#include <time.h>
void LangkahPemain7(int player){
    /*
    Author : Muhammad Deo Audha Rizki
    
    Modul untuk menerima input pemain pada papan 7x7, jika player tidak menginput dalam waktu 10 detik
    maka input akan diacak

    int player : parameter input bertipe integer dengan passing paramter passing by value
    int player : berfungsi untuk menunjukkan jenis player yang akan melakukan input

    I.S : Papan belum menampilkan input simbol dari player
    F.S : Papan menampilkan input simbol dari player
    */

  int baris, kolom, kotak, startwaktu, move, acaksimbol;
  double waktuinput;
  char simbol;
  time_t t;

	
  do
  {
	startwaktu = starttime();
	
	board7();
    printf("\nPlayer %d Masukkan kotak yang akan diisi : \n",player);
        
	do
	{
		scanf("%d", &kotak);
	}while (!Cek_Kotak(kotak));
	startwaktu = endtime() - startwaktu;
	waktuinput = ((double)startwaktu)/CLOCKS_PER_SEC;
		
    if(waktuinput >10){
		printf("\n Waktu habis \n");
		system("pause");
		srand((unsigned) time(&t));
		acaksimbol = 1 + rand()% 2;
    	if(acaksimbol == 1){
        simbol = 'S';
    	}
    	else{
        simbol = 'O';
    	}
		reset:
    	move = 1 + rand()% 49;

    	baris = (move-1)/n;
		kolom = (move-1)%n;

    	if(papan[baris][kolom] != ' '){
        	goto reset;
    	}
		papan[baris][kolom] = simbol;
	}else if(waktuinput <=10){
		baris = (kotak-1)/n;
		kolom = (kotak-1)%n;
		printf("Simbol yang ingin dimasukkan %d? (S atau O) \n", kotak);
		do
		{
			simbol = getchar();
		}while ((simbol != 'S') && (simbol != 's') && (simbol != 'O') && (simbol != 'o') && (simbol != '0'));

		if((simbol == 'S') || (simbol == 's'))
		{
			simbol = 'S';
		}
		else 
		{
			simbol = 'O';	
		}
			
		papan[baris][kolom] = simbol;
	}
   }while(cek_sos (player, kotak, simbol)); 
   
   return;
}

#include <stdio.h>
#include <time.h>
void KomputerMudah5(){
    /*
    Author : Muhammad Deo Audha Rizki
    
    Modul untuk menentukan langkah Komputer dengan tingkat kesulitan mudah pada papan 5x5, 
    dengan mengacak input simbol dan kotak
    

    I.S : Input simbol dan kotak dari komputer belum ada
    F.S : Input simbol dan kotak dari komputer sudah ada
    
    */
	
    int i,move, acaksimbol, baris, kolom;
    char simbol;
	time_t t;
	do{
   	srand((unsigned) time(&t));


    
    acaksimbol = 1 + rand()% 2;
    if(acaksimbol == 1){
        simbol = 'S';
    }
    else{
        simbol = 'O';
    }

    reset:
    move = 1 + rand()% 25;

    baris = (move-1)/n;
	kolom = (move-1)%n;

    if(papan[baris][kolom] != ' '){
        goto reset;
    }
    else{
        papan[baris][kolom] = simbol;
    }
	printf("Komputer memasukkan %c ke kotak %d\n", simbol, move);
	}while(cek_sos (3, move, simbol));
}

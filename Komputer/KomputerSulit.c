#include <stdio.h>
void KomputerSulit(){
    /*
    Author : Github HYanofsky
    
    Modul untuk menentukan pergerakan Komputer dengan tingkat kesulitan sulit
    

    I.S : Papan belum menampilkan input dari Komputer
    F.S : Papan menampilkan input dari Komputer
    
    */
    int kotak;
    int baris, kolom;
    char simbol;

    do{
       
	    if(comp_find_os()){
		kotak = comp_find_os();
		simbol = 'S';
	    }
	    else if(comp_find_ss()){
		kotak = comp_find_ss();
		simbol = 'O';
	    }
	    else{
		kotak = find_square();
		simbol = 'S';
	    }
	    baris = (kotak-1)/n;
	    kolom = (kotak-1)%n;
        
		if(kotak!=0){
   	    	papan[baris][kolom] = simbol;
	    	printf("Saya menempatkan %c di kotak %d\n", simbol, kotak);
		}
   }while(cek_sos(3, kotak, simbol));
   return;
}

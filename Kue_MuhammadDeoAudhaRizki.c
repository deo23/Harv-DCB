/* 	
Program			: Kue_Muhammad Deo Audha Rizki.c
Deskripsi		: Menentukan apakah kompisisi kue K dan kue L sama atau tidak
Author			: Muhammad Deo Audha Rizki
Versi/Tanggal	: 19112021
Compiler		: Dev C++ 5.1.1
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    /* Kamus Data */
    int i,j,sama,ada;
    char kue1[9],kue2[9];
    float persentase,persenSama;
    
    /* Algoritma */
    scanf("%f", &persentase);
    
    for(i=0; i<9; i++){
        scanf("%c",&kue1[i]);
    }
    
    for(j=0; j<9; j++){
        scanf("%c",&kue2[i]);
    }
    
    sama=0;
    for(i=0; i<9; i++){
        ada=false;
        j=0;
        while(j<9 && !ada){
            if(kue1[i] == kue2[j]){
                sama++;
                ada = true;
            }
            j++;
        }
    }
    persenSama = (float)sama/8*100;
    if(persenSama >= persentase){
        printf("sama\n");
    }else{
        printf("tidak sama\n");
    }
    return 0;
}
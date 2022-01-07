void LangkahPemain5(int player);
//Modul ini untuk  menerima input pemain pada papan 5x5, jika player tidak menginput dalam waktu 10 detik maka input akan diacak
//Author : Cintia Ningsih
//int player : parameter input bertipe integer dengan passing paramter passing by value
//int player : berfungsi untuk menunjukkan jenis player yang akan melakukan input
//I.S        : Simbol yang di inputkan dari permain belum tampil pada papan permainan
//F.S        : Simbol yang di inputkan dari permain sudah tampil pada papan permainan

void LangkahPemain5(int player)
{
  int baris, kolom, kotak, startwaktu, move, acaksimbol;
  double waktuinput;
  char simbol;
  time_t t;
/* 
    startwaktu = endtime() - startwaktu;
	waktuinput = ((double)startwaktu)/CLOCKS_PER_SEC;
  
    if(waktuinput >3){
		printf("\n Waktu habis \n");
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
	*/
	
  do
  {
	startwaktu = starttime();
	
	board5();
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
    	move = 1 + rand()% 25;

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


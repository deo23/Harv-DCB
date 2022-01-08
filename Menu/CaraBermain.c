void CaraBermain();
//Modul untuk menampilkan cara bermain
//Author : Cintia Ningsih
//I.S    : Cara bermain dan aturan dalam permainan belum di tampilkan
//F.S    : Cara bermain dan aturan dalam permainan sudah ditampilkan

void CaraBermain(){
	FILE*the_file = fopen("Cara_Bermain.txt", "r");
	if(the_file == NULL){
		perror("tidak ada file");
		exit(1);
	}
	
	char line[100];
	while(fgets(line, sizeof(line), the_file)){
		printf("%s", line);
	}
}

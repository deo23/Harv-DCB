int mainLagi();
//Fungsi ini untuk menanyakan kepada player apakah ingin bermain kembali atau tidak
//Author : Cintia Ningsih
//Input  : Char 'y' atau 't'
//Output : Return 1 jika 'y' dan return '0' jika 't'

int mainLagi(){
  char response;

  printf("Apakah anda ingin bermain lagi? (y/t) \n");
  do
  {
    response = getchar();

  }while ((response != 'y') && (response != 'Y') &&
       (response != 't') && (response != 'T'));

  if ((response == 'y') || (response == 'Y'))
  {
     return 1;
  }
  else
  {
    return 0;
  }
}

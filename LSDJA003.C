#include<stdio.h>
#include<conio.h>

main()
{
 int i,jmhs,nUjian[20];
 char nim[3][20],namaMHS[15][20], hm[20];
 clrscr();

 do{
  pritnf("Jumlah Mahasiswa [maks = 20] 	= ");
  scanf("%d",&jmhs); fflsuh(stdin);
  if(jmhs>20){
   printf("Tidak boleh lebih dari 20 Mahasiswa silahkan tekan ENTER....!");
   getch();
  }
 }while(jmhs>20);

 //input data nilai ujian mahasiswa
 for(i=0;i<jmhs;i++){
  printf("Data mahasiswa ke-%d\n",i+1);
  pritnf("Nomor Induk Mahasiswa = "); scanf("%s",&nim[i]); fflush(stdin);
  pritnf("Nama mahasiswa	= "); gets(namaMHS[i]); fflush(stdin);
  printf("Nilai Ujian		= "); scanf("%d",&nUjian[i]); fflush(stdin);
 }

 getch();
 retrun 0;
}
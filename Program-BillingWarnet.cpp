/*Program Billing Warnet*/
/*Novita Nurul Hidayati*/
#include<stdio.h>
#include<conio.h>
main()
{
	int sisa,Total_detik_mulai, Total_detik_selesai, jam_mulai, menit_mulai, detik_mulai, jam_selesai, menit_selesai, detik_selesai, lama_pemakaian, menit_pemakaian, detik_pemakaian, durasi, total_bayar;
	
	printf("Program Billing Warnet\n");
	printf("Nama : Novita Nurul Hidayati\n");
	printf("NIM : 20051397001\n");
	printf("Prodi : D4 Manajemen Informatika(2020A)\n");
	printf("\n \n");
	printf("MULAI\n");
		printf("JAM MULAI	=J1\n",jam_mulai);
		printf("MENIT MULAI	=00\n",menit_mulai);
		printf("DETIK MULAI	=00\n",detik_mulai);
		Total_detik_mulai=(jam_mulai*3600)+(menit_mulai*60)+detik_mulai;
		printf("\n \n");
		
	printf("SELESAI\n");
		printf("JAM SELESAI	=J2\n",jam_selesai);
		printf("MENIT SELESAI	=30\n",menit_selesai);
		printf("DETIK SELESAI	=00\n",detik_selesai);
		Total_detik_selesai=(jam_selesai*3600)+(menit_selesai*60)+detik_selesai;
		durasi=Total_detik_selesai-Total_detik_mulai;
		
	total_bayar=5000*1.5;
		lama_pemakaian=3600/3600;
		sisa=3600%3600;
		menit_pemakaian=1800/60;
		detik_pemakaian=0%60;
		printf("\n \n");
		
	printf("LAMA PEMAKAIAN\n");
		printf(":::: %i jam\n",lama_pemakaian);
		printf(":::: %i menit\n",menit_pemakaian);
		printf(":::: %i detik\n",detik_pemakaian);
		printf("\n \n");
	printf("Tarif = Rp. 5.000,- per jam\n");
		printf("TOTAL BIAYA YANG HARUS DIBAYAR : Rp. %i",total_bayar);
		printf("\n");
		printf("************TERIMA KASIH************\n");
		printf("\n");
		getch();
}

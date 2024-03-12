#include "header.h"

// https://www.youtube.com/watch?v=StEBDXY2WBk&t=223s (inspirasi menggeser menu menggunakan panah)
void printPanah(int posisiMenu, int posisiPanah) // berfungsi untuk mengontrol panah
{
    if (posisiMenu == posisiPanah)
    {
        printf("\t|            ---> "); // jika true maka panah akan diprint
    }
    else
    {
        printf("\t|                 "); // jika false maka hanya akan ngeprint spasi
    }  
}

int pilihKomputer()
{
    int posisiPanah = 1;
    int tombolDitekan = 0;
    while(tombolDitekan != 13)
    {
        printBanner();
        printf("\t __________________________________________________ \n");
        printf("\t|                                                  |\n");
        printf("\t|               Pilih Level Komputer               |\n");
        printf("\t|__________________________________________________|\n");
        printf("\t|                                                  |\n");
        printf("\t|                                                  |\n");
        printPanah(1,posisiPanah); printf("Pemula                           |\n");
        printPanah(2,posisiPanah); printf("Menengah                         |\n");
        printPanah(3,posisiPanah); printf("Sepuh TicTacToe                  |\n");
        printf("\t|                                                  |\n");
        printf("\t|                                                  |\n");
        printf("\t|__________________________________________________|\n");

        tombolDitekan = getch();
        if (tombolDitekan == 80 && posisiPanah < 3) // 80 adalah kode ascii tombol panah bawah
        {
            posisiPanah++;
        }
        else if (tombolDitekan == 72 && posisiPanah > 1) // 72 adalah kode ascii tombol panah atas
        {
            posisiPanah--;
        }
        else
        {
            posisiPanah = posisiPanah;
        }
        system("cls");
    }
    return posisiPanah;
}


int pilihUkuranPapan()
{
    int posisiPanah = 1;
    int tombolDitekan = 0;
    while(tombolDitekan != 13)
    {
        printBanner();
        printf("\t __________________________________________________ \n");
        printf("\t|                                                  |\n");
        printf("\t|                Pilih Ukuran Papan                |\n");
        printf("\t|__________________________________________________|\n");
        printf("\t|                                                  |\n");
        printf("\t|                                                  |\n");
        printPanah(1,posisiPanah); printf("   Papan 3x3                     |\n");
        printPanah(2,posisiPanah); printf("   Papan 5x5                     |\n");
        printPanah(3,posisiPanah); printf("   Papan 7x7                     |\n");
        printf("\t|                                                  |\n");
        printf("\t|                                                  |\n");
        printf("\t|__________________________________________________|\n");

        tombolDitekan = getch();
        if (tombolDitekan == 80 && posisiPanah < 3) // 80 adalah kode ascii tombol panah bawah
        {
            posisiPanah++;
        }
        else if (tombolDitekan == 72 && posisiPanah > 1) // 72 adalah kode ascii tombol panah atas
        {
            posisiPanah--;
        }
        else
        {
            posisiPanah = posisiPanah;
        }
        system("cls");
    }
    return posisiPanah;
}

int pilihLawan()
{
    int posisiPanah = 1;
    int tombolDitekan = 0;
    while(tombolDitekan != 13)
    {
        printBanner();
        printf("\t ______________________________________________________ \n");
        printf("\t|                                                      |\n");
        printf("\t|                  Pilih Lawan Kamu                    |\n");
        printf("\t|______________________________________________________|\n");
        printf("\t|                                                      |\n");
        printf("\t|                                                      |\n");
        printPanah(1,posisiPanah); printf(" Pemain VS Pemain                    |\n");
        printPanah(2,posisiPanah); printf(" Pemain VS Komputer                  |\n");
        printf("\t|                                                      |\n");
        printf("\t|                                                      |\n");
        printf("\t|                                                      |\n");
        printf("\t|______________________________________________________|\n");

        tombolDitekan = getch();
        if (tombolDitekan == 80 && posisiPanah < 2)
        {
            posisiPanah++;
        }
        else if (tombolDitekan == 72 && posisiPanah > 1)
        {
            posisiPanah--;
        }
        else
        {
            posisiPanah = posisiPanah;
        }
        system("cls");
    }
    return posisiPanah;
}

int pilihMenuUtama()
{
    int posisiPanah = 1;
    int tombolDitekan = 0;
    while(tombolDitekan != 13)
    {
        printBanner();
        printf("\t ______________________________________________________ \n");
        printf("\t|                                                      |\n");
        printf("\t|                     Menu Utama                       |\n");
        printf("\t|______________________________________________________|\n");
        printf("\t|                                                      |\n");
        printPanah(1,posisiPanah); printf(" Mulai Permainan                     |\n");
        printPanah(2,posisiPanah); printf(" Lihat Papan Peringkat               |\n");
        printPanah(3,posisiPanah); printf(" Tutorial Permainan                  |\n");
        printPanah(4,posisiPanah); printf(" Kredit                              |\n");
        printPanah(5,posisiPanah); printf(" Keluar                              |\n");
        printf("\t|                                                      |\n");
        printf("\t|______________________________________________________|\n");

        tombolDitekan = getch();
        if (tombolDitekan == 80 && posisiPanah < 5) // 80 adalah kode ascii tombol panah bawah
        {
            posisiPanah++;
        }
        else if (tombolDitekan == 72 && posisiPanah > 1) // 72 adalah kode ascii tombol panah atas
        {
            posisiPanah--;
        }
        else
        {
            posisiPanah = posisiPanah;
        }
        system("cls");
    }
    return posisiPanah;
}
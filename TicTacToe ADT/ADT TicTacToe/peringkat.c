#include "header.h"

void sortPeringkat()
{
    PEMAIN temp;
    int i, j;
    for (i = 1; i < jmlData; i++)
    {
        temp = riwayatPemain[i];
        j = i - 1;
        while (j >= 0 && riwayatPemain[j].skor < temp.skor) 
        {
            riwayatPemain[j + 1] = riwayatPemain[j];
            j = j - 1;
        }
        riwayatPemain[j + 1] = temp;
    }
}

void readPeringkat()
{
    fileSkor = fopen("dataSkor.txt", "r");
    int i = 0;
    while (!feof(fileSkor))
    {
        fscanf(fileSkor,"%[^#]#%c#%d\n", riwayatPemain[i].nama, &riwayatPemain[i].bidak, &riwayatPemain[i].skor);
        fflush(stdin);
        i++;
    }
    fclose(fileSkor);
    jmlData = i;
}

void printPeringkat()
{
    printBanner();
    printf("\t\t\t    Papan Peringkat\n\n");
    printf("\t   %-21s %-18s %s\n", "NamaPemain", "Bidak", "SkorTertinggi");
    for (int i = 0; i < jmlData; i++)
    {
        printf("\t   %-23s %-22c %d\n", riwayatPemain[i].nama, riwayatPemain[i].bidak, riwayatPemain[i].skor);
    }
    printf("\n\n\t\t   tekan tombol apapun untuk kembali");
    getch();
    system("cls");
}

void lihatPeringkat()
{
    readPeringkat();
    sortPeringkat();
    printPeringkat();
}
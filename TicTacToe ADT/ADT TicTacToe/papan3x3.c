#include "header.h"

//https://www.youtube.com/watch?v=gSitgqAJn_I (logic mekanisme permainan tic tac toe)
void resetPapan3x3()
{
    papan3x3[1] = '1';
    papan3x3[2] = '2';
    papan3x3[3] = '3';
    papan3x3[4] = '4';
    papan3x3[5] = '5';
    papan3x3[6] = '6';
    papan3x3[7] = '7';
    papan3x3[8] = '8';
    papan3x3[9] = '9';
}

void giliranPemain1_3x3()
{
    int langkahSah = false;
    char pilihKotak;

    printf("Giliran %s (%c)\n", pemain1.nama, pemain1.bidak);

    while (langkahSah == false) // selama belum sah, maka terus melangkah
    {
        printf("Inputkan pilihan kamu: ");
        scanf(" %c", &pilihKotak);
        fflush(stdin);

        if (pilihKotak == '1' && papan3x3[1] == '1') // jika pemain menginput '1' dan kotaknya juga berisi '1' maka bidak pemain akan ditempatkan pada kotak tersebut
        {
            papan3x3[1] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '2' && papan3x3[2] == '2')
        {
            papan3x3[2] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '3' && papan3x3[3] == '3')
        {
            papan3x3[3] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '4' && papan3x3[4] == '4')
        {
            papan3x3[4] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '5' && papan3x3[5] == '5')
        {
            papan3x3[5] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '6' && papan3x3[6] == '6')
        {
            papan3x3[6] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '7' && papan3x3[7] == '7')
        {
            papan3x3[7] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '8' && papan3x3[8] == '8')
        {
            papan3x3[8] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '9' && papan3x3[9] == '9')
        {
            papan3x3[9] = pemain1.bidak;
            langkahSah = true;
        }
        else
        {
            printf("nomor tidak valid atau kotak sudah diisi, coba lagi!\n");
        }
    }
}

void giliranPemain2_3x3()
{
    int langkahSah = false;
    char pilihKotak;

    printf("Giliran %s (%c)\n", pemain2.nama, pemain2.bidak);

    while (langkahSah == false)
    {
        printf("Inputkan pilihan kamu: ");
        scanf(" %c", &pilihKotak);
        fflush(stdin);

        if (pilihKotak == '1' && papan3x3[1] == '1') // jika pemain menginput '1' dan kotaknya juga berisi '1' maka bidak pemain akan ditempatkan pada kotak tersebut
        {
            papan3x3[1] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '2' && papan3x3[2] == '2')
        {
            papan3x3[2] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '3' && papan3x3[3] == '3')
        {
            papan3x3[3] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '4' && papan3x3[4] == '4')
        {
            papan3x3[4] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '5' && papan3x3[5] == '5')
        {
            papan3x3[5] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '6' && papan3x3[6] == '6')
        {
            papan3x3[6] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '7' && papan3x3[7] == '7')
        {
            papan3x3[7] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '8' && papan3x3[8] == '8')
        {
            papan3x3[8] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '9' && papan3x3[9] == '9')
        {
            papan3x3[9] = pemain2.bidak;
            langkahSah = true;
        }
        else
        {
            printf("nomor tidak valid atau kotak sudah diisi, coba lagi!\n");
        }
    }
}

void printPapan3x3()
{
    system("cls");
    printf("\t\t ___ ___ ___ \n");
    
    printf("\t\t|   |   |   |\n");
    printf("\t\t|");
    setColor(papan3x3[1]);
    printf("|");

    setColor(papan3x3[2]);
    printf("|");

    setColor(papan3x3[3]);
    printf("|\n");
    
    printf("\t\t|___|___|___|\n");
    printf("\t\t|   |   |   |\n");
    printf("\t\t|");

    setColor(papan3x3[4]);
    printf("|");

    setColor(papan3x3[5]);
    printf("|");

    setColor(papan3x3[6]);
    printf("|\n");

    printf("\t\t|___|___|___|\n");
    printf("\t\t|   |   |   |\n");
    printf("\t\t|");

    setColor(papan3x3[7]);
    printf("|");

    setColor(papan3x3[8]);
    printf("|");

    setColor(papan3x3[9]);
    printf("|\n");

    printf("\t\t|___|___|___|\n\n");
    printSkor();
}

char cekMenang3x3()
{
    // Cek baris
    for (int i = 1; i <= 7; i += 3)
    {
        if (papan3x3[i] == papan3x3[i + 1] && papan3x3[i + 1] == papan3x3[i + 2])
        {
            return papan3x3[i];
        }
    }

    // Cek kolom
    for (int i = 1; i <= 3; ++i)
    {
        if (papan3x3[i] == papan3x3[i + 3] && papan3x3[i + 3] == papan3x3[i + 6])
        {
            return papan3x3[i];
        }
    }

    // Cek diagonal
    if (papan3x3[1] == papan3x3[5] && papan3x3[5] == papan3x3[9])
    {
        return papan3x3[1];
    }
    else if (papan3x3[3] == papan3x3[5] && papan3x3[5] == papan3x3[7])
    {
        return papan3x3[3];
    }

    return '\0';
}

void mainPapan3x3()
{
    inisialisasi();
    char inputUser;
    inputNamaPemain1();
    inputNamaPemain2();
    pilihBidak();
    do
    {
        int totalLangkah = 0;
        pemenang = '\0';
        resetPapan3x3();
        while (totalLangkah != 9 && pemenang == '\0')
        {
            printPapan3x3();
            if (pemain1.bidak == 'X')
            {
                giliranPemain1_3x3();
                printPapan3x3();
                pemenang = cekMenang3x3();
                if (pemenang !='\0')
                {
                    break;
                }
                totalLangkah++;
                if (totalLangkah == 9)
                {
                    break;
                }
                giliranPemain2_3x3();
                printPapan3x3();
                pemenang = cekMenang3x3();
                if (pemenang !='\0')
                {
                    break;
                }
                totalLangkah++;
            }
            else if (pemain1.bidak == 'O')
            {
                giliranPemain2_3x3();
                printPapan3x3();
                pemenang = cekMenang3x3();
                if (pemenang !='\0')
                {
                    break;
                }
                totalLangkah++;
                if (totalLangkah == 9)
                {
                    break;
                }
                giliranPemain1_3x3();
                printPapan3x3();
                pemenang = cekMenang3x3();
                if (pemenang !='\0')
                {
                    break;
                }
                totalLangkah++;
            }
        }
        printPemenang();
        inputUser = nanyaMainLagi();
    }while (inputUser == 'Y');
    printPenutup();    
}

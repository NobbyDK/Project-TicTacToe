#include "header.h"

//https://www.youtube.com/watch?v=gSitgqAJn_I (logic mekanisme permainan tic tac toe)

void resetPapan5x5()
{
    papan5x5[0] = '\0';
    papan5x5[1] = '1';
    papan5x5[2] = '2';
    papan5x5[3] = '3';
    papan5x5[4] = '4';
    papan5x5[5] = '5';
    papan5x5[6] = '6';
    papan5x5[7] = '7';
    papan5x5[8] = '8';
    papan5x5[9] = '9';
    papan5x5[10] = 'a';
    papan5x5[11] = 'b';
    papan5x5[12] = 'c';
    papan5x5[13] = 'd';
    papan5x5[14] = 'e';
    papan5x5[15] = 'f';
    papan5x5[16] = 'g';
    papan5x5[17] = 'h';
    papan5x5[18] = 'i';
    papan5x5[19] = 'j';
    papan5x5[20] = 'k';
    papan5x5[21] = 'l';
    papan5x5[22] = 'm';
    papan5x5[23] = 'n';
    papan5x5[24] = 'o';
    papan5x5[25] = 'p';
}

void giliranPemain1_5x5()
{
    int langkahSah = false;
    char pilihKotak;

    printf("Giliran %s (%c)\n", pemain1.nama, pemain1.bidak);

    while (langkahSah == false)
    {
        printf("Inputkan pilihan kamu: ");
        scanf(" %c", &pilihKotak);
        fflush(stdin);

        if (pilihKotak == '1' && papan5x5[1] == '1') // jika pemain menginput '1' dan kotaknya juga berisi '1' maka bidak pemain akan ditempatkan pada kotak tersebut
        {
            papan5x5[1] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '2' && papan5x5[2] == '2')
        {
            papan5x5[2] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '3' && papan5x5[3] == '3')
        {
            papan5x5[3] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '4' && papan5x5[4] == '4')
        {
            papan5x5[4] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '5' && papan5x5[5] == '5')
        {
            papan5x5[5] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '6' && papan5x5[6] == '6')
        {
            papan5x5[6] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '7' && papan5x5[7] == '7')
        {
            papan5x5[7] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '8' && papan5x5[8] == '8')
        {
            papan5x5[8] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '9' && papan5x5[9] == '9')
        {
            papan5x5[9] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'a' && papan5x5[10] == 'a')
        {
            papan5x5[10] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'b' && papan5x5[11] == 'b')
        {
            papan5x5[11] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'c' && papan5x5[12] == 'c')
        {
            papan5x5[12] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'd' && papan5x5[13] == 'd')
        {
            papan5x5[13] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'e' && papan5x5[14] == 'e')
        {
            papan5x5[14] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'f' && papan5x5[15] == 'f')
        {
            papan5x5[15] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'g' && papan5x5[16] == 'g')
        {
            papan5x5[16] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'h' && papan5x5[17] == 'h')
        {
            papan5x5[17] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'i' && papan5x5[18] == 'i')
        {
            papan5x5[18] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'j' && papan5x5[19] == 'j')
        {
            papan5x5[19] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'k' && papan5x5[20] == 'k')
        {
            papan5x5[20] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'l' && papan5x5[21] == 'l')
        {
            papan5x5[21] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'm' && papan5x5[22] == 'm')
        {
            papan5x5[22] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'n' && papan5x5[23] == 'n')
        {
            papan5x5[23] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'o' && papan5x5[24] == 'o')
        {
            papan5x5[24] = pemain1.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'p' && papan5x5[25] == 'p')
        {
            papan5x5[25] = pemain1.bidak;
            langkahSah = true;
        }
        else
        {
            printf("nomor tidak valid atau kotak sudah diisi, coba lagi!\n");
        }
    }
}

void giliranPemain2_5x5()
{
    int langkahSah = false;
    char pilihKotak;

    printf("Giliran %s (%c)\n", pemain2.nama, pemain2.bidak);

    while (langkahSah == false)
    {
        printf("Inputkan pilihan kamu: ");
        scanf(" %c", &pilihKotak);
        fflush(stdin);

        if (pilihKotak == '1' && papan5x5[1] == '1')
        {
            papan5x5[1] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '2' && papan5x5[2] == '2')
        {
            papan5x5[2] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '3' && papan5x5[3] == '3')
        {
            papan5x5[3] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '4' && papan5x5[4] == '4')
        {
            papan5x5[4] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '5' && papan5x5[5] == '5')
        {
            papan5x5[5] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '6' && papan5x5[6] == '6')
        {
            papan5x5[6] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '7' && papan5x5[7] == '7')
        {
            papan5x5[7] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '8' && papan5x5[8] == '8')
        {
            papan5x5[8] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == '9' && papan5x5[9] == '9')
        {
            papan5x5[9] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'a' && papan5x5[10] == 'a')
        {
            papan5x5[10] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'b' && papan5x5[11] == 'b')
        {
            papan5x5[11] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'c' && papan5x5[12] == 'c')
        {
            papan5x5[12] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'd' && papan5x5[13] == 'd')
        {
            papan5x5[13] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'e' && papan5x5[14] == 'e')
        {
            papan5x5[14] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'f' && papan5x5[15] == 'f')
        {
            papan5x5[15] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'g' && papan5x5[16] == 'g')
        {
            papan5x5[16] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'h' && papan5x5[17] == 'h')
        {
            papan5x5[17] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'i' && papan5x5[18] == 'i')
        {
            papan5x5[18] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'j' && papan5x5[19] == 'j')
        {
            papan5x5[19] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'k' && papan5x5[20] == 'k')
        {
            papan5x5[20] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'l' && papan5x5[21] == 'l')
        {
            papan5x5[21] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'm' && papan5x5[22] == 'm')
        {
            papan5x5[22] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'n' && papan5x5[23] == 'n')
        {
            papan5x5[23] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'o' && papan5x5[24] == 'o')
        {
            papan5x5[24] = pemain2.bidak;
            langkahSah = true;
        }
        else if(pilihKotak == 'p' && papan5x5[25] == 'p')
        {
            papan5x5[25] = pemain2.bidak;
            langkahSah = true;
        }
        else
        {
            printf("nomor tidak valid atau kotak sudah diisi, coba lagi!\n");
        }
    }
}

char cekMenang5x5()
{
    // Cek baris
    for (int i = 1; i <= 21; i += 5)
    {
        for (int j = 0; j <= 1; ++j)
        {
            if (papan5x5[i + j] == papan5x5[i + j + 1] && papan5x5[i + j + 1] == papan5x5[i + j + 2] && papan5x5[i + j + 2] == papan5x5[i + j + 3])
            {
                return papan5x5[i + j];
            }
        }
    }

    // Cek kolom
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 0; j <= 15; j += 5)
        {
            if (papan5x5[i + j] == papan5x5[i + j + 5] && papan5x5[i + j + 5] == papan5x5[i + j + 10] && papan5x5[i + j + 10] == papan5x5[i + j + 15])
            {
                return papan5x5[i + j];
            }
        }
    }

    // Cek diagonal

	if (papan5x5[1] == papan5x5[7] && papan5x5[7] == papan5x5[13] && papan5x5[13] == papan5x5[19])
	{
		return papan5x5[1];
	}
    else if (papan5x5[6] == papan5x5[12] && papan5x5[12] == papan5x5[18] && papan5x5[18] == papan5x5[24])
    {
        return papan5x5[6];
    }
    else if (papan5x5[2] == papan5x5[8] && papan5x5[8] == papan5x5[14] && papan5x5[14] == papan5x5[20])
    {
        return papan5x5[2];
    }
    else if (papan5x5[10] == papan5x5[14] && papan5x5[14] == papan5x5[18] && papan5x5[18] == papan5x5[22])
    {
        return papan5x5[10];
    }
    else if (papan5x5[4] == papan5x5[8] && papan5x5[8] == papan5x5[12] && papan5x5[12] == papan5x5[16])
    {
        return papan5x5[4];
    }
    else if (papan5x5[5] == papan5x5[9] && papan5x5[9] == papan5x5[13] && papan5x5[13] == papan5x5[17])
    {
        return papan5x5[5];
    }
    else if (papan5x5[9] == papan5x5[13] && papan5x5[13] == papan5x5[17] && papan5x5[17] == papan5x5[21])
    {
        return papan5x5[9];
    }
    else if (papan5x5[7] == papan5x5[13] && papan5x5[13] == papan5x5[19] && papan5x5[19] == papan5x5[25])
    {
        return papan5x5[7];
    } 
    return '\0';
}

void printPapan5x5() {
    system("cls");
    printf("\t\t \n");
    printf("\t\t ___ ___ ___ ___ ___\n");
    printf("\t\t|   |   |   |   |   |\n");
    for (int i = 0; i < 5; ++i) {
        printf("\t\t|");

        for (int j = 0; j < 5; ++j) 
        {
            int index = i * 5 + j + 1;
            setColor(papan5x5[index]);
            printf("|");
        }
        printf("\n");
        if (i < 4) {
            printf("\t\t|---|---|---|---|---|\n");
        }
    }
    printf("\t\t|___|___|___|___|___|\n\n");
    printSkor();
}

void mainPapan5x5()
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
        resetPapan5x5();
        while (totalLangkah != 25 && pemenang == '\0')
        {
            printPapan5x5();
            if (pemain1.bidak == 'X')
            {
                giliranPemain1_5x5();
                printPapan5x5();
                pemenang = cekMenang5x5();
                if (pemenang !='\0')
                {
                    break;
                }
                totalLangkah++;
                if (totalLangkah == 25)
                {
                    break;
                }
                giliranPemain2_5x5();
                printPapan5x5();
                pemenang = cekMenang5x5();
                if (pemenang !='\0')
                {
                    break;
                }
                totalLangkah++;
            }
            else if (pemain1.bidak == 'O')
            {
                giliranPemain2_5x5();
                printPapan5x5();
                pemenang = cekMenang5x5();
                if (pemenang !='\0')
                {
                    break;
                }
                totalLangkah++;
                if (totalLangkah == 25)
                {
                    break;
                }
                giliranPemain1_5x5();
                printPapan5x5();
                pemenang = cekMenang5x5();
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

#include "header.h"

//https://www.youtube.com/watch?v=CJ37J_Cdd8Q&t=89s (inspirasi menggunakan random number untuk langkah komputer)

void giliranKomputerPemula_3x3()
{
    int langkahSah = false;
    srand(time(0)); // angka random dimulai dari 0
    int langkahKomputer;
    while (langkahSah == false)
    {
        langkahKomputer = 1 + rand() % 9; // bilangan 0 sampai berapapun jika dimoduluskan dengan 9 maka akan menghasilkan bilangan 0 - 8
        if (langkahKomputer == 1 && papan3x3[1] == '1')
        {
            papan3x3[1] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 2 && papan3x3[2] == '2')
        {
            papan3x3[2] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 3 && papan3x3[3] == '3')
        {
            papan3x3[3] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 4 && papan3x3[4] == '4')
        {
            papan3x3[4] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 5 && papan3x3[5] == '5')
        {
            papan3x3[5] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 6 && papan3x3[6] == '6')
        {
            papan3x3[6] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 7 && papan3x3[7] == '7')
        {
            papan3x3[7] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 8 && papan3x3[8] == '8')
        {
            papan3x3[8] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 9 && papan3x3[9] == '9')
        {
            papan3x3[9] = bidakKomputer;
            langkahSah = true;
        }
    }
}

void pilihBidakKomputer() 
{
    printf("      pilih bidak untuk %s (hanya input X atau O): ", pemain1.nama);
    scanf(" %c", &pemain1.bidak);
    pemain1.bidak = toupper(pemain1.bidak);
    while (pemain1.bidak != 'X' && pemain1.bidak != 'O') {
        printf("inputkan yang valid (X atau O): ");
        scanf(" %c", &pemain1.bidak);
        pemain1.bidak = toupper(pemain1.bidak);
    }
    if (pemain1.bidak == 'X')
    {
        bidakKomputer = 'O';
    }
    else if (pemain1.bidak == 'O')
    {
        bidakKomputer = 'X';
    }
}

void mainPapanKomputerPemula3x3()
{
    inisialisasi();
    char inputUser;
    inputNamaPemain1();
    pilihBidakKomputer();
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
                giliranKomputerPemula_3x3();
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
                giliranKomputerPemula_3x3();
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
    if (pemenang != bidakKomputer)
    {
        saveSkor();
    }
    printPenutup();    
}

void giliranKomputerPemula_5x5()
{
    int langkahSah = false;
    srand(time(0));
    int langkahKomputer;

    while (langkahSah == false)
    {
        int randomValue = rand() % 2; // untuk menghasilkan bilangan 0 atau 1
        if (randomValue == 0) 
        {
            langkahKomputer = '1' + rand() % 9; // untuk mengkonversi karakter ke integer berdasarkan bilangan ascii
        } 
        else 
        {
            langkahKomputer = 'a' + rand() % 16; // untuk mengkonversi karakter ke integer berdasarkan bilangan ascii
        }
        if (langkahKomputer == '1' && papan5x5[1] == '1')
        {
            papan5x5[1] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == '2' && papan5x5[2] == '2')
        {
            papan5x5[2] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == '3' && papan5x5[3] == '3')
        {
            papan5x5[3] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == '4' && papan5x5[4] == '4')
        {
            papan5x5[4] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == '5' && papan5x5[5] == '5')
        {
            papan5x5[5] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == '6' && papan5x5[6] == '6')
        {
            papan5x5[6] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == '7' && papan5x5[7] == '7')
        {
            papan5x5[7] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == '8' && papan5x5[8] == '8')
        {
            papan5x5[8] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == '9' && papan5x5[9] == '9')
        {
            papan5x5[9] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'a' && papan5x5[10] == 'a')
        {
            papan5x5[10] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'b' && papan5x5[11] == 'b')
        {
            papan5x5[11] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'c' && papan5x5[12] == 'c')
        {
            papan5x5[12] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'd' && papan5x5[13] == 'd')
        {
            papan5x5[13] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'e' && papan5x5[14] == 'e')
        {
            papan5x5[14] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'f' && papan5x5[15] == 'f')
        {
            papan5x5[15] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'g' && papan5x5[16] == 'g')
        {
            papan5x5[16] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'h' && papan5x5[17] == 'h')
        {
            papan5x5[17] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'i' && papan5x5[18] == 'i')
        {
            papan5x5[18] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'j' && papan5x5[19] == 'j')
        {
            papan5x5[19] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'k' && papan5x5[20] == 'k')
        {
            papan5x5[20] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'l' && papan5x5[21] == 'l')
        {
            papan5x5[21] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'm' && papan5x5[22] == 'm')
        {
            papan5x5[22] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'n' && papan5x5[23] == 'n')
        {
            papan5x5[23] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'o' && papan5x5[24] == 'o')
        {
            papan5x5[24] = bidakKomputer;
            langkahSah = true;
        }
        else if(langkahKomputer == 'p' && papan5x5[25] == 'p')
        {
            papan5x5[25] = bidakKomputer;
            langkahSah = true;
        }
    }
}

void mainPapanKomputerPemula5x5()
{
    inisialisasi();
    char inputUser;
    inputNamaPemain1();
    pilihBidakKomputer();
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
                giliranKomputerPemula_5x5();
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
                giliranKomputerPemula_5x5();
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
    if (pemenang != bidakKomputer)
    {
        saveSkor();
    }
    printPenutup();   
}

void giliranKomputerPemula_7x7() 
{
    int langkahSah = false;
    srand(time(0));
    int langkahKomputer;

    while (langkahSah == false) {
        char langkahKomputer;
        int randomValue = rand() % 3;
        if (randomValue == 0) 
        {
            langkahKomputer = '1' + rand() % 9;
        } 
        else if (randomValue == 1) 
        {
            langkahKomputer = 'a' + rand() % 26;
        } 
        else 
        {
            langkahKomputer = 'A' + rand() % 17;
        }

        if (langkahKomputer == '1' && papan7x7[1] == '1') 
        {
            papan7x7[1] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == '2' && papan7x7[2] == '2') {
            papan7x7[2] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == '3' && papan7x7[3] == '3') {
            papan7x7[3] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == '4' && papan7x7[4] == '4') {
            papan7x7[4] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == '5' && papan7x7[5] == '5') {
            papan7x7[5] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == '6' && papan7x7[6] == '6') {
            papan7x7[6] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == '7' && papan7x7[7] == '7') {
            papan7x7[7] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == '8' && papan7x7[8] == '8') {
            papan7x7[8] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == '9' && papan7x7[9] == '9') {
            papan7x7[9] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'a' && papan7x7[10] == 'a') {
            papan7x7[10] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'b' && papan7x7[11] == 'b') {
            papan7x7[11] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'c' && papan7x7[12] == 'c') {
            papan7x7[12] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'd' && papan7x7[13] == 'd') {
            papan7x7[13] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'e' && papan7x7[14] == 'e') {
            papan7x7[14] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'f' && papan7x7[15] == 'f') {
            papan7x7[15] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'g' && papan7x7[16] == 'g') {
            papan7x7[16] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'h' && papan7x7[17] == 'h') {
            papan7x7[17] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'i' && papan7x7[18] == 'i') {
            papan7x7[18] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'j' && papan7x7[19] == 'j') {
            papan7x7[19] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'k' && papan7x7[20] == 'k') {
            papan7x7[20] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'l' && papan7x7[21] == 'l') {
            papan7x7[21] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'm' && papan7x7[22] == 'm') {
            papan7x7[22] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'n' && papan7x7[23] == 'n') {
            papan7x7[23] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'p' && papan7x7[24] == 'p') {
            papan7x7[24] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'q' && papan7x7[25] == 'q') {
            papan7x7[25] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'r' && papan7x7[26] == 'r') {
            papan7x7[26] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 's' && papan7x7[27] == 's') {
            papan7x7[27] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 't' && papan7x7[28] == 't') {
            papan7x7[28] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'u' && papan7x7[29] == 'u') {
            papan7x7[29] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'v' && papan7x7[30] == 'v') {
            papan7x7[30] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'w' && papan7x7[31] == 'w') {
            papan7x7[31] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'y' && papan7x7[32] == 'y') {
            papan7x7[32] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'z' && papan7x7[33] == 'z') {
            papan7x7[33] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'A' && papan7x7[34] == 'A') {
            papan7x7[34] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'B' && papan7x7[35] == 'B') {
            papan7x7[35] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'C' && papan7x7[36] == 'C') {
            papan7x7[36] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'D' && papan7x7[37] == 'D') {
            papan7x7[37] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'E' && papan7x7[38] == 'E') {
            papan7x7[38] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'F' && papan7x7[39] == 'F') {
            papan7x7[39] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'G' && papan7x7[40] == 'G') {
            papan7x7[40] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'H' && papan7x7[41] == 'H') {
            papan7x7[41] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'I' && papan7x7[42] == 'I') {
            papan7x7[42] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'J' && papan7x7[43] == 'J') {
            papan7x7[43] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'K' && papan7x7[44] == 'K') {
            papan7x7[44] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'L' && papan7x7[45] == 'L') {
            papan7x7[45] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'M' && papan7x7[46] == 'M') {
            papan7x7[46] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'N' && papan7x7[47] == 'N') {
            papan7x7[47] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'P' && papan7x7[48] == 'P') {
            papan7x7[48] = bidakKomputer;
            langkahSah = true;
        } else if (langkahKomputer == 'Q' && papan7x7[49] == 'Q') {
            papan7x7[49] = bidakKomputer;
            langkahSah = true;
        } else {
            printf("Nomor tidak valid atau kotak sudah diisi, coba lagi!\n");
        }
    }
}

void mainPapanKomputerPemula7x7()
{
    inisialisasi();
    char inputUser;
    inputNamaPemain1();
    pilihBidakKomputer();
    do
    {
        int totalLangkah = 0;
        pemenang = '\0';
        resetPapan7x7();
        while (totalLangkah != 49 && pemenang == '\0')
        {
            printPapan7x7();
            if (pemain1.bidak == 'X')
            {
                giliranPemain1_7x7();
                printPapan7x7();
                pemenang = cekMenang7x7();
                if (pemenang !='\0')
                {
                    break;
                }
                totalLangkah++;
                if (totalLangkah == 49)
                {
                    break;
                }
                giliranKomputerPemula_7x7();
                printPapan7x7();
                pemenang = cekMenang7x7();
                if (pemenang !='\0')
                {
                    break;
                }
                totalLangkah++;
            }
            else if (pemain1.bidak == 'O')
            {
                giliranKomputerPemula_7x7();
                printPapan7x7();
                pemenang = cekMenang7x7();
                if (pemenang !='\0')
                {
                    break;
                }
                totalLangkah++;
                if (totalLangkah == 49)
                {
                    break;
                }
                giliranPemain1_7x7();
                printPapan7x7();
                pemenang = cekMenang7x7();
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
    if (pemenang != bidakKomputer)
    {
        saveSkor();
    }
    printPenutup();    
}


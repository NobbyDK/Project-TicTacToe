#include "header.h"

//https://www.youtube.com/watch?v=gSitgqAJn_I (logic mekanisme permainan tic tac toe)

void resetPapan7x7()
{
    papan7x7[0] = '\0';
    papan7x7[1] = '1';
    papan7x7[2] = '2';
    papan7x7[3] = '3';
    papan7x7[4] = '4';
    papan7x7[5] = '5';
    papan7x7[6] = '6';
    papan7x7[7] = '7';
    papan7x7[8] = '8';
    papan7x7[9] = '9';
    papan7x7[10] = 'a';
    papan7x7[11] = 'b';
    papan7x7[12] = 'c';
    papan7x7[13] = 'd';
    papan7x7[14] = 'e';
    papan7x7[15] = 'f';
    papan7x7[16] = 'g';
    papan7x7[17] = 'h';
    papan7x7[18] = 'i';
    papan7x7[19] = 'j';
    papan7x7[20] = 'k';
    papan7x7[21] = 'l';
    papan7x7[22] = 'm';
    papan7x7[23] = 'n';
    papan7x7[24] = 'p';
    papan7x7[25] = 'q';
    papan7x7[26] = 'r';
    papan7x7[27] = 's';
    papan7x7[28] = 't';
    papan7x7[29] = 'u';
    papan7x7[30] = 'v';
    papan7x7[31] = 'w';
    papan7x7[32] = 'y';
    papan7x7[33] = 'z';
    papan7x7[34] = 'A';
    papan7x7[35] = 'B';
    papan7x7[36] = 'C';
    papan7x7[37] = 'D';
    papan7x7[38] = 'E';
    papan7x7[39] = 'F';
    papan7x7[40] = 'G';
    papan7x7[41] = 'H';
    papan7x7[42] = 'I';
    papan7x7[43] = 'J';
    papan7x7[44] = 'K';
    papan7x7[45] = 'L';
    papan7x7[46] = 'M';
    papan7x7[47] = 'N';
    papan7x7[48] = 'P';
    papan7x7[49] = 'Q';
}

void printPapan7x7()
{
    system("cls");
    printf("\t\t \n");
    printf("\t\t ___ ___ ___ ___ ___ ___ ___\n");
    printf("\t\t|   |   |   |   |   |   |   |\n");
    for (int i = 0; i < 7; ++i) {
        printf("\t\t|");

        for (int j = 0; j < 7; ++j)
        {
            int index = i * 7 + j + 1;
            setColor(papan7x7[index]);
            printf("|");
        }

        printf("\n");

        if (i < 6) {
            printf("\t\t|---|---|---|---|---|---|---|\n");
        }
    }
    printf("\t\t|___|___|___|___|___|___|___|\n\n");
    printSkor();
}

void giliranPemain1_7x7() {
    int langkahSah = false;
    char pilihKotak;

    printf("Giliran %s (%c)\n", pemain1.nama, pemain1.bidak);

    while (langkahSah == false) {
        printf("Inputkan pilihan kamu: ");
        scanf(" %c", &pilihKotak);
        fflush(stdin);

        if (pilihKotak == '1' && papan7x7[1] == '1')  // jika pemain menginput '1' dan kotaknya juga berisi '1' maka bidak pemain akan ditempatkan pada kotak tersebut
        {
            papan7x7[1] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == '2' && papan7x7[2] == '2') {
            papan7x7[2] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == '3' && papan7x7[3] == '3') {
            papan7x7[3] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == '4' && papan7x7[4] == '4') {
            papan7x7[4] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == '5' && papan7x7[5] == '5') {
            papan7x7[5] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == '6' && papan7x7[6] == '6') {
            papan7x7[6] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == '7' && papan7x7[7] == '7') {
            papan7x7[7] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == '8' && papan7x7[8] == '8') {
            papan7x7[8] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == '9' && papan7x7[9] == '9') {
            papan7x7[9] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'a' && papan7x7[10] == 'a') {
            papan7x7[10] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'b' && papan7x7[11] == 'b') {
            papan7x7[11] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'c' && papan7x7[12] == 'c') {
            papan7x7[12] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'd' && papan7x7[13] == 'd') {
            papan7x7[13] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'e' && papan7x7[14] == 'e') {
            papan7x7[14] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'f' && papan7x7[15] == 'f') {
            papan7x7[15] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'g' && papan7x7[16] == 'g') {
            papan7x7[16] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'h' && papan7x7[17] == 'h') {
            papan7x7[17] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'i' && papan7x7[18] == 'i') {
            papan7x7[18] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'j' && papan7x7[19] == 'j') {
            papan7x7[19] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'k' && papan7x7[20] == 'k') {
            papan7x7[20] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'l' && papan7x7[21] == 'l') {
            papan7x7[21] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'm' && papan7x7[22] == 'm') {
            papan7x7[22] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'n' && papan7x7[23] == 'n') {
            papan7x7[23] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'p' && papan7x7[24] == 'p') {
            papan7x7[24] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'q' && papan7x7[25] == 'q') {
            papan7x7[25] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'r' && papan7x7[26] == 'r') {
            papan7x7[26] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 's' && papan7x7[27] == 's') {
            papan7x7[27] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 't' && papan7x7[28] == 't') {
            papan7x7[28] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'u' && papan7x7[29] == 'u') {
            papan7x7[29] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'v' && papan7x7[30] == 'v') {
            papan7x7[30] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'w' && papan7x7[31] == 'w') {
            papan7x7[31] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'y' && papan7x7[32] == 'y') {
            papan7x7[32] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'z' && papan7x7[33] == 'z') {
            papan7x7[33] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'A' && papan7x7[34] == 'A') {
            papan7x7[34] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'B' && papan7x7[35] == 'B') {
            papan7x7[35] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'C' && papan7x7[36] == 'C') {
            papan7x7[36] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'D' && papan7x7[37] == 'D') {
            papan7x7[37] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'E' && papan7x7[38] == 'E') {
            papan7x7[38] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'F' && papan7x7[39] == 'F') {
            papan7x7[39] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'G' && papan7x7[40] == 'G') {
            papan7x7[40] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'H' && papan7x7[41] == 'H') {
            papan7x7[41] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'I' && papan7x7[42] == 'I') {
            papan7x7[42] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'J' && papan7x7[43] == 'J') {
            papan7x7[43] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'K' && papan7x7[44] == 'K') {
            papan7x7[44] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'L' && papan7x7[45] == 'L') {
            papan7x7[45] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'M' && papan7x7[46] == 'M') {
            papan7x7[46] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'N' && papan7x7[47] == 'N') {
            papan7x7[47] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'P' && papan7x7[48] == 'P') {
            papan7x7[48] = pemain1.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'Q' && papan7x7[49] == 'Q') {
            papan7x7[49] = pemain1.bidak;
            langkahSah = true;
        } else {
            printf("Nomor tidak valid atau kotak sudah diisi, coba lagi!\n");
        }
    }
}

void giliranPemain2_7x7() {
    int langkahSah = false;
    char pilihKotak;

    printf("Giliran %s (%c)\n", pemain2.nama, pemain2.bidak);

    while (langkahSah == false) {
        printf("Inputkan pilihan kamu: ");
        scanf(" %c", &pilihKotak);
        fflush(stdin);

        if (pilihKotak == '1' && papan7x7[1] == '1') {
            papan7x7[1] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == '2' && papan7x7[2] == '2') {
            papan7x7[2] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == '3' && papan7x7[3] == '3') {
            papan7x7[3] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == '4' && papan7x7[4] == '4') {
            papan7x7[4] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == '5' && papan7x7[5] == '5') {
            papan7x7[5] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == '6' && papan7x7[6] == '6') {
            papan7x7[6] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == '7' && papan7x7[7] == '7') {
            papan7x7[7] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == '8' && papan7x7[8] == '8') {
            papan7x7[8] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == '9' && papan7x7[9] == '9') {
            papan7x7[9] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'a' && papan7x7[10] == 'a') {
            papan7x7[10] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'b' && papan7x7[11] == 'b') {
            papan7x7[11] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'c' && papan7x7[12] == 'c') {
            papan7x7[12] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'd' && papan7x7[13] == 'd') {
            papan7x7[13] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'e' && papan7x7[14] == 'e') {
            papan7x7[14] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'f' && papan7x7[15] == 'f') {
            papan7x7[15] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'g' && papan7x7[16] == 'g') {
            papan7x7[16] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'h' && papan7x7[17] == 'h') {
            papan7x7[17] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'i' && papan7x7[18] == 'i') {
            papan7x7[18] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'j' && papan7x7[19] == 'j') {
            papan7x7[19] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'k' && papan7x7[20] == 'k') {
            papan7x7[20] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'l' && papan7x7[21] == 'l') {
            papan7x7[21] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'm' && papan7x7[22] == 'm') {
            papan7x7[22] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'n' && papan7x7[23] == 'n') {
            papan7x7[23] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'p' && papan7x7[24] == 'p') {
            papan7x7[24] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'q' && papan7x7[25] == 'q') {
            papan7x7[25] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'r' && papan7x7[26] == 'r') {
            papan7x7[26] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 's' && papan7x7[27] == 's') {
            papan7x7[27] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 't' && papan7x7[28] == 't') {
            papan7x7[28] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'u' && papan7x7[29] == 'u') {
            papan7x7[29] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'v' && papan7x7[30] == 'v') {
            papan7x7[30] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'w' && papan7x7[31] == 'w') {
            papan7x7[31] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'y' && papan7x7[32] == 'y') {
            papan7x7[32] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'z' && papan7x7[33] == 'z') {
            papan7x7[33] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'A' && papan7x7[34] == 'A') {
            papan7x7[34] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'B' && papan7x7[35] == 'B') {
            papan7x7[35] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'C' && papan7x7[36] == 'C') {
            papan7x7[36] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'D' && papan7x7[37] == 'D') {
            papan7x7[37] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'E' && papan7x7[38] == 'E') {
            papan7x7[38] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'F' && papan7x7[39] == 'F') {
            papan7x7[39] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'G' && papan7x7[40] == 'G') {
            papan7x7[40] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'H' && papan7x7[41] == 'H') {
            papan7x7[41] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'I' && papan7x7[42] == 'I') {
            papan7x7[42] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'J' && papan7x7[43] == 'J') {
            papan7x7[43] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'K' && papan7x7[44] == 'K') {
            papan7x7[44] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'L' && papan7x7[45] == 'L') {
            papan7x7[45] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'M' && papan7x7[46] == 'M') {
            papan7x7[46] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'N' && papan7x7[47] == 'N') {
            papan7x7[47] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'P' && papan7x7[48] == 'P') {
            papan7x7[48] = pemain2.bidak;
            langkahSah = true;
        } else if (pilihKotak == 'Q' && papan7x7[49] == 'Q') {
            papan7x7[49] = pemain2.bidak;
            langkahSah = true;
        } else {
            printf("Nomor tidak valid atau kotak sudah diisi, coba lagi!\n");
        }
    }
}

char cekMenang7x7()
{
    for (int i = 1; i <= 7; i++)
    {
        // baris
        if (papan7x7[1] == papan7x7[2] && papan7x7[2] == papan7x7[3] && papan7x7[3] == papan7x7[4] && papan7x7[4] == papan7x7[5])
        {
            return papan7x7[1];
        }
        if (papan7x7[2] == papan7x7[3] && papan7x7[3] == papan7x7[4] && papan7x7[4] == papan7x7[5] && papan7x7[5] == papan7x7[6])
        {
            return papan7x7[2];
        }
        if (papan7x7[3] == papan7x7[4] && papan7x7[4] == papan7x7[5] && papan7x7[5] == papan7x7[6] && papan7x7[6] == papan7x7[7])
        {
            return papan7x7[3];
        }
        if (papan7x7[8] == papan7x7[9] && papan7x7[9] == papan7x7[10] && papan7x7[10] == papan7x7[11] && papan7x7[11] == papan7x7[12])
        {
            return papan7x7[8];
        }
        if (papan7x7[9] == papan7x7[10] && papan7x7[10] == papan7x7[11] && papan7x7[11] == papan7x7[12] && papan7x7[12] == papan7x7[13])
        {
            return papan7x7[9];
        }
        if (papan7x7[10] == papan7x7[11] && papan7x7[11] == papan7x7[12] && papan7x7[12] == papan7x7[13] && papan7x7[13] == papan7x7[14])
        {
            return papan7x7[10];
        }
        if (papan7x7[15] == papan7x7[16] && papan7x7[16] == papan7x7[17] && papan7x7[17] == papan7x7[18] && papan7x7[18] == papan7x7[19])
        {
            return papan7x7[15];
        }
        if (papan7x7[16] == papan7x7[17] && papan7x7[17] == papan7x7[18] && papan7x7[18] == papan7x7[19] && papan7x7[19] == papan7x7[20])
        {
            return papan7x7[16];
        }
        if (papan7x7[17] == papan7x7[18] && papan7x7[18] == papan7x7[19] && papan7x7[19] == papan7x7[20] && papan7x7[20] == papan7x7[21])
        {
            return papan7x7[17];
        }
        if (papan7x7[22] == papan7x7[23] && papan7x7[23] == papan7x7[24] && papan7x7[24] == papan7x7[25] && papan7x7[25] == papan7x7[26])
        {
            return papan7x7[22];
        }
        if (papan7x7[23] == papan7x7[24] && papan7x7[24] == papan7x7[25] && papan7x7[25] == papan7x7[26] && papan7x7[26] == papan7x7[27])
        {
            return papan7x7[23];
        }
        if (papan7x7[24] == papan7x7[25] && papan7x7[25] == papan7x7[26] && papan7x7[26] == papan7x7[27] && papan7x7[27] == papan7x7[28])
        {
            return papan7x7[24];
        }
        if (papan7x7[29] == papan7x7[30] && papan7x7[30] == papan7x7[31] && papan7x7[31] == papan7x7[32] && papan7x7[32] == papan7x7[33])
        {
            return papan7x7[29];
        }
        if (papan7x7[30] == papan7x7[31] && papan7x7[31] == papan7x7[32] && papan7x7[32] == papan7x7[33] && papan7x7[33] == papan7x7[34])
        {
            return papan7x7[30];
        }
        if (papan7x7[31] == papan7x7[32] && papan7x7[32] == papan7x7[33] && papan7x7[33] == papan7x7[34] && papan7x7[34] == papan7x7[35])
        {
            return papan7x7[31];
        }
        if (papan7x7[36] == papan7x7[37] && papan7x7[37] == papan7x7[38] && papan7x7[38] == papan7x7[39] && papan7x7[39] == papan7x7[40])
        {
            return papan7x7[36];
        }
        if (papan7x7[37] == papan7x7[38] && papan7x7[38] == papan7x7[39] && papan7x7[39] == papan7x7[40] && papan7x7[40] == papan7x7[41])
        {
            return papan7x7[37];
        }
        if (papan7x7[38] == papan7x7[39] && papan7x7[39] == papan7x7[40] && papan7x7[40] == papan7x7[41] && papan7x7[41] == papan7x7[42])
        {
            return papan7x7[38];
        }
        if (papan7x7[43] == papan7x7[44] && papan7x7[44] == papan7x7[45] && papan7x7[45] == papan7x7[46] && papan7x7[46] == papan7x7[47])
        {
            return papan7x7[43];
        }
        if (papan7x7[44] == papan7x7[45] && papan7x7[45] == papan7x7[46] && papan7x7[46] == papan7x7[47] && papan7x7[47] == papan7x7[48])
        {
            return papan7x7[44];
        }
        if (papan7x7[45] == papan7x7[46] && papan7x7[46] == papan7x7[47] && papan7x7[47] == papan7x7[48] && papan7x7[48] == papan7x7[49])
        {
            return papan7x7[45];
        }

        // kolom
        if (papan7x7[i] == papan7x7[i + 7] && papan7x7[i + 7] == papan7x7[i + 14] && papan7x7[i + 14] == papan7x7[i + 21] && papan7x7[i + 21] == papan7x7[i + 28])
        {
            return papan7x7[i];
        }
    }

/* DIAGONAL */
    //diagonal kiri ke kanan
    if (papan7x7[1] == papan7x7[9] && papan7x7[9] == papan7x7[17] && papan7x7[17] == papan7x7[25] && papan7x7[25] == papan7x7[33])
    {
        return papan7x7[1];
    }
    else if (papan7x7[15] == papan7x7[23] && papan7x7[23] == papan7x7[31] && papan7x7[31] == papan7x7[39] && papan7x7[39] == papan7x7[47])
    {
        return papan7x7[15];
    }
    else if (papan7x7[8] == papan7x7[16] && papan7x7[16] == papan7x7[24] && papan7x7[24] == papan7x7[32] && papan7x7[32] == papan7x7[40])
    {
        return papan7x7[8];
    }
    else if (papan7x7[16] == papan7x7[24] && papan7x7[24] == papan7x7[32] && papan7x7[32] == papan7x7[40] && papan7x7[40] == papan7x7[48])
    {
        return papan7x7[16];
    }
    else if (papan7x7[9] == papan7x7[17] && papan7x7[17] == papan7x7[25] && papan7x7[25] == papan7x7[33] && papan7x7[33] == papan7x7[41])
    {
        return papan7x7[9];
    }
    else if (papan7x7[17] == papan7x7[25] && papan7x7[25] == papan7x7[33] && papan7x7[33] == papan7x7[41] && papan7x7[41] == papan7x7[49])
    {
        return papan7x7[17];
    }
    else if (papan7x7[2] == papan7x7[10] && papan7x7[10] == papan7x7[18] && papan7x7[18] == papan7x7[26] && papan7x7[26] == papan7x7[34])
    {
        return papan7x7[2];
    }
    else if (papan7x7[10] == papan7x7[18] && papan7x7[18] == papan7x7[26] && papan7x7[26] == papan7x7[34] && papan7x7[34] == papan7x7[42])
    {
        return papan7x7[10];
    }
    else if (papan7x7[3] == papan7x7[11] && papan7x7[11] == papan7x7[19] && papan7x7[19] == papan7x7[27] && papan7x7[27] == papan7x7[35])
    {
        return papan7x7[3];
    } //diagonal kanan ke kiri
    else if (papan7x7[5] == papan7x7[11] && papan7x7[11] == papan7x7[17] && papan7x7[17] == papan7x7[23] && papan7x7[23] == papan7x7[29])
    {
        return papan7x7[5];
    }
    else if (papan7x7[6] == papan7x7[12] && papan7x7[12] == papan7x7[18] && papan7x7[18] == papan7x7[24] && papan7x7[24] == papan7x7[30])
    {
        return papan7x7[6];
    }
    else if (papan7x7[12] == papan7x7[18] && papan7x7[18] == papan7x7[24] && papan7x7[24] == papan7x7[30] && papan7x7[30] == papan7x7[36])
    {
        return papan7x7[12];
    }
    else if (papan7x7[7] == papan7x7[13] && papan7x7[13] == papan7x7[19] && papan7x7[19] == papan7x7[25] && papan7x7[25] == papan7x7[31])
    {
        return papan7x7[7];
    }
    else if (papan7x7[13] == papan7x7[19] && papan7x7[19] == papan7x7[25] && papan7x7[25] == papan7x7[31] && papan7x7[31] == papan7x7[37])
    {
        return papan7x7[13];
    }
    else if (papan7x7[19] == papan7x7[25] && papan7x7[25] == papan7x7[31] && papan7x7[31] == papan7x7[37] && papan7x7[37] == papan7x7[43])
    {
        return papan7x7[19];
    }
    else if (papan7x7[14] == papan7x7[20] && papan7x7[20] == papan7x7[26] && papan7x7[26] == papan7x7[32] && papan7x7[32] == papan7x7[38])
    {
        return papan7x7[14];
    }
    else if (papan7x7[20] == papan7x7[26] && papan7x7[26] == papan7x7[32] && papan7x7[32] == papan7x7[38] && papan7x7[38] == papan7x7[44])
    {
        return papan7x7[20];
    }
    else if (papan7x7[21] == papan7x7[27] && papan7x7[27] == papan7x7[33] && papan7x7[33] == papan7x7[39] && papan7x7[39] == papan7x7[45])
    {
        return papan7x7[21];
    }
    return '\0';
}

void mainPapan7x7()
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
                giliranPemain2_7x7();
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
                giliranPemain2_7x7();
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
    printPenutup();    
}
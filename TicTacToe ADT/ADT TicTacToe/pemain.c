#include "header.h"

void inputNamaPemain1() 
{
    fflush(stdin);
    printf("\n\n\t\tinputkan nama pemain 1 : ");
    gets(pemain1.nama);
}

void inputNamaPemain2() 
{
    fflush(stdin);
    printf("\t\tinputkan nama pemain 2 : ");
    gets(pemain2.nama);
}

void pilihBidak() 
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
        pemain2.bidak = 'O';
    }
    else if (pemain1.bidak == 'O')
    {
        pemain2.bidak = 'X';
    }
}
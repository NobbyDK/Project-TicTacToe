#include "header.h"

//kami mendapatkan modul ubah warna karakter 'X' dan 'O' dari ChatGPT (lupa tidak menyimpan riwayat chat)
void resetColor() 
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // Mengembalikan warna ke default
}

void setColor(char isiKotak) 
{
    if (isiKotak == 'X') {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);  // Kode warna biru
    } else if (isiKotak == 'O') {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // Kode warna merah
    } else {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // Kode warna putih (default)
    }
    printf(" %c ", isiKotak);
    resetColor();
}

void printBanner() 
{
    printf("    _______ _ ______   _______ ______ ______   _______ ______ ______\n");
    printf("   |__   __| | _____| |__   __|  __  |  ____| |__   __|  __  |  ____|\n");
    printf("      | |  | | |         | |  | |__| | |         | |  | |  | |  |___ \n");
    printf("      | |  | | |         | |  |  __  | |         | |  | |  | |   ___| \n");
    printf("      | |  | | |____     | |  | |  | | |____     | |  | |__| |  |___    \n");
    printf("      |_|  |_|______|    |_|  |_|  |_|______|    |_|  |______|______|  \n\n");
}

void inisialisasi()
{
    bidakKomputer = 'N'; // N artinya belum memilih bidak
    pemain1.bidak = 'N';
    pemain2.bidak = 'N';
    pemain1.skor = 0;
    pemain2.skor = 0;
}

void printSkor()
{
    if (pemain2.bidak != 'N') // != 'N' berarti pemain 2 telah mempunyai bidak, sehingga sudah pasti pemain 1 melawan pemain 2
    {
        printf("Skor %s: %d\n", pemain1.nama, pemain1.skor);
        printf("Skor %s: %d\n\n", pemain2.nama, pemain2.skor);
    }
    else if (bidakKomputer != 'N') // != 'N' berarti komputer telah mempunyai bidak, sehingga sudah pasti pemain 1 melawan komputer
    {
        printf("Skor : %d\n\n", pemain1.skor);
    }
}


void saveSkor()
{
    fileSkor = fopen("dataSkor.txt", "a");
    fprintf(fileSkor,"%s#%c#%d\n", pemain1.nama, pemain1.bidak, pemain1.skor);
    fclose(fileSkor);
    jmlData++;
}

char nanyaMainLagi()
{
    char inputUser;
    printf("ingin bermain lagi ? (Y/N)\n"); scanf(" %c", &inputUser); inputUser = toupper(inputUser);
    while (inputUser != 'Y' && inputUser != 'N')
    {
        printf("inputkan yang valid!! (hanya Y atau N)\n"); scanf(" %c", &inputUser); inputUser = toupper(inputUser);
    }
    return inputUser;
}

void printPenutup()
{
    printf("Permainan Telah Berakhir !\n\n");
    printf("      tekan tombol apapun untuk kembali ke menu utama");
    getch();
    system("cls");
}

void printPemenang()
{
    if (pemenang == pemain1.bidak)
    {
        PlaySound(TEXT("Win.wav"),NULL,SND_ASYNC);
        printf("selamat %s, kamu menang dengan bidak %c\n", pemain1.nama, pemain1.bidak);
        pemain1.skor++;
    }
    else if (pemenang == pemain2.bidak)
    {
        PlaySound(TEXT("Win.wav"),NULL,SND_ASYNC);
        printf("selamat %s, kamu menang dengan bidak %c\n", pemain2.nama, pemain2.bidak);
        pemain2.skor++;
    }
    else if (pemenang == bidakKomputer)
    {
        saveSkor();
        PlaySound(TEXT("Lose.wav"),NULL,SND_ASYNC);
        printf("yah kamu kalah :(\n");
        pemain1.skor = 0;
    }
    else if (pemenang == '\0')
    {
        printf("tidak ada kotak tersisa, permainan DRAW !!\n");
    }
}

void maaf()
{
    printBanner();
    printf("\t ______________________________________________________ \n");
    printf("\t|                                                      |\n");
    printf("\t|                   Segera Rilis !!                    |\n");
    printf("\t|______________________________________________________|\n");
    printf("\t|                                                      |\n");
    printf("\t|                                                      |\n");
    printf("\t|           maaf mode ini belum tersedia :(            |\n");
    printf("\t|       kamu masih bisa memainkan level pemula         |\n");
    printf("\t|                                                      |\n");
    printf("\t|    tekan tombol apapun untuk kembali ke menu utama   |\n");
    printf("\t|                                                      |\n");
    printf("\t|______________________________________________________|\n");
    getch();
    system("cls");
}

void kredit()
{
    printBanner();
    printf("\t ______________________________________________________ \n");
    printf("\t|                                                      |\n");
    printf("\t|                     Tentang Kami                     |\n");
    printf("\t|______________________________________________________|\n");
    printf("\t|                                                      |\n");
    printf("\t|   231524007 | Farrel Zandra         | @farrel29__    |\n");
    printf("\t|   231524020 | Nobby Dharma Khaulid  | @nobbykhaulid  |\n");
    printf("\t|   231524026 | Satria Permata Sejati | @WeirdoKitten  |\n");
    printf("\t|                                                      |\n");
    printf("\t|    tekan tombol apapun untuk kembali ke menu utama   |\n");
    printf("\t|                                                      |\n");
    printf("\t|______________________________________________________|\n");
    getch();
    system("cls");
}

void printPembuka()
{
    printBanner();
    printf("\t     Selamat Datang Di TicTacToe !! - TriFantastici\n\n");
    printf("\t    tips : sebelum main, lihat tutorialnya dulu ya :)\n\n");
    printf("\t            Loading...\n\t            ");
    for (int i = 0; i < 5; i++)
    {
        printf("%c%c%c%c%c%c",219 , 219, 219, 219, 219, 219, 219);
        sleep(1);
    }
    printf("\n\n\t         tekan tombol apapun untuk lanjut main\n");
    getch();
    system("cls");
}

void tutorGame() 
{
    printf("\t\t\tPertama kali memainkan permainan ini? Berikut penjelasan permainan!\n");
    printf("\t\t ______________________________________________________________________________ \n");
    printf("\t\t|                                                                              |\n");
    printf("\t\t|                       TUTOR SEBELUM MEMASUKI PERMAINAN                       |\n");
    printf("\t\t|______________________________________________________________________________|\n");
    printf("\t\t|                                                                              |\n");
    printf("\t\t|1. Pilih opsi Mulai Permainan.                                                |\n");
    printf("\t\t|2. Pilih lawan yang anda inginkan.                                            |\n");
    printf("\t\t|3. Pilih tingkat kesulitan yang anda inginkan                                 |\n");
    printf("\t\t|   (apabila memilih lawan komputer).                                          |\n");
    printf("\t\t|4. Pilih ukuran papan yang anda inginkan.                                     |\n");
    printf("\t\t|5. Inputkan nama pemain 1.                                                    |\n");
    printf("\t\t|6. Inputkan nama pemain 2 (apabila memilih lawan manusia).                    |\n");
    printf("\t\t|7. Pilih bidak dengan cara menginputkan antara X atau O sebagai pilihan       |\n");
    printf("\t\t|   bidak pemain pertama. Secara otomatis pemain kedua akan mendapatkan bidak  |\n");
    printf("\t\t|   lainnya.                                                                   |\n");
    printf("\t\t|8. Permainan dimulai!                                                         |\n");
    printf("\t\t|______________________________________________________________________________|\n\n");

    printf("\t\t ______________________________________________________________________________ \n");
    printf("\t\t|                                                                              |\n");
    printf("\t\t|                                TUTOR PERMAINAN                               |\n");
    printf("\t\t|______________________________________________________________________________|\n");
    printf("\t\t|                                                                              |\n");
    printf("\t\t|1. Ketikkan angka 1-9 yang merepresentasikan masing-masing kotak yang         |\n");
    printf("\t\t|   tersedia dan klik enter. Maka kotak kosong akan diisi dengan bidak pemain  |\n");
    printf("\t\t|   1.                                                                         |\n");
    printf("\t\t|   (apabila memilih lawan komputer).                                          |\n");
    printf("\t\t|2. Giliran Pemain selanjutnya. Jika pemain 2 adalah manusia, maka lakukan     |\n");
    printf("\t\t|   seperti langkah 1 (pastikan memilih kotak yang masih kosong. Namun jika    |\n");
    printf("\t\t|   pemain 2 adalah komputer maka kotak kosong akan otomatis terisi.           |\n");
    printf("\t\t|3. Ulangi langkah 1 dan 2 hingga sistem memberitahukan status permainan       |\n");
    printf("\t\t|   seperti, menang, kalah, ataupun seri.                                      |\n");
    printf("\t\t|4. Permainan selesai, anda dapat mengulangi permainan ataupun menyudahinya.   |\n");
    printf("\t\t|______________________________________________________________________________|\n");
    printf("\n\n\t\t\t\t\ttekan tombol apapun untuk kembali\n");
    getch();
    system("cls");
}
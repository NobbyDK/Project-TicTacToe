#include "header.h"

int main()
{
    system("cls");
    int pilihanMenu;
    int pilihanLawan;
    int pilihanPapan;
    int pilihanKomputer;
    printPembuka();
    while (true)
    {
        inisialisasi(); // mereset seluruh nilai, contohnya skor & bidak pemain
        pilihanMenu = pilihMenuUtama();
        switch (pilihanMenu)
        {
        case 1 : // jika memilih 1, maka mulai permainan, diawali dengan pilih lawan kemudian pilih ukuran papan
            pilihanLawan = pilihLawan();
            if (pilihanLawan == 1) //jika memilih 1 maka akan dimainkan mode human vs human
            {
                pilihanPapan = pilihUkuranPapan();
                if (pilihanPapan == 1) // jika memilih 1 maka akan dimainkan permainan dengan papan 3x3
                {
                    mainPapan3x3();
                }
                else if (pilihanPapan == 2) // jika memilih 2 maka akan dimainkan permainan dengan papan 5x5
                {
                    mainPapan5x5();
                }
                else if (pilihanPapan == 3) // jika memilih 3 maka akan dimainkan permainan dengan papan 7x7
                {
                    mainPapan7x7();
                }
                
            }
            else if (pilihanLawan == 2) //jika memilih 2 maka akan dimainkan mode human vs computer
            {
                pilihanKomputer = pilihKomputer();
                if (pilihanKomputer == 1) // jika memilih 1 maka level komputer yag dilawan adalah pemula
                {
                    pilihanPapan = pilihUkuranPapan();
                    if (pilihanPapan == 1) // jika memilih 1 maka akan dimainkan permainan dengan papan 3x3
                    {
                        mainPapanKomputerPemula3x3();
                    }
                    else if (pilihanPapan == 2) // jika memilih 2 maka akan dimainkan permainan dengan papan 5x5
                    {
                        mainPapanKomputerPemula5x5();
                    }
                    else if (pilihanPapan == 3) // jika memilih 3 maka akan dimainkan permainan dengan papan 7x7
                    {
                        mainPapanKomputerPemula7x7();
                    }
                }
                else if (pilihanKomputer == 2) // jika memilih 2 maka level komputer yag dilawan adalah menengah
                {
                    maaf();
                }
                else if (pilihanKomputer == 3) // jika memilih 3 maka level komputer yag dilawan adalah SepuhTicTacToe
                {
                    maaf();
                }
            }
            break;
        case 2 :
            lihatPeringkat();
            break;
        case 3 :
            tutorGame();
            break;
        case 4 :
            kredit();
            break;
        case 5 :
            exit(false);
            break;
        }
    }
    return 0;
}
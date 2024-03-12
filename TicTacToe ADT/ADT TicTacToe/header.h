#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>
#include <mmsystem.h>

/*=========================================================== Deklarasi Variabel Global ===========================================================*/

typedef struct{
    char nama[50];
    char bidak;
    int skor;
}PEMAIN;

char bidakKomputer;
char pemenang;
PEMAIN pemain1;
PEMAIN pemain2;
FILE *fileSkor;
char papan3x3[10];
char papan5x5[26];
char papan7x7[50];
PEMAIN riwayatPemain[10];
int jmlData;

/*=========================================================== Deklarasi Fungsi & Prosedur ===========================================================*/

void sortPeringkat();
/*
    Deskripsi   : modul ini berfungsi untuk mnegurutkan data skor pemain dari yang tertinggi ke yang terendah.
    I.S         : data pemain belum terurut
    F.S         : data pemain sudah terurut dari tertinggi hingga terendah.        
*/

void resetColor();
/*
    Deskripsi   : modul ini berfungsi untuk mereset warna ke warna default (putih) pada papan.
    I.S         : warna pada papan belum terdefinisi.
    F.S         : warna pada papan telah berubah ke warna default (Putih).
*/

void setColor(char isiKotak);
/*
    Deskripsi   : modul ini berfungsi untuk merubah warna default (putih) menjadi warna biru untuk bidak ‘x’ dan warna merah untuk bidak ‘o’.
    I.S         : warna char dan number pada papan masih berwarna putih (default).
    F.S         : warna Bidak yang diinputkan ke papan berubah menjadi biru untuk bidak ‘x’ dan merah untuk bidak ‘o’. 
*/

void printSkor();
/*
    Deskripsi   : modul ini berfungsi untuk mencetak hasil skor setelah permainan selesai (diketahui pemenangnya).
    I.S         : pada saat permainan berlangsung nilai skor masih 0
    F.S         : setelah permainan selesai jika player manusia menang maka skor akan bertambah dan apabila kalah skor yang sebelumnya sudah dicapai akan kembali ke 0   
*/

void inisialisasi();
/*
    Deskripsi   : modul ini berfungsi untuk memberikan nilai awal sebelum program dijalankan.
    I.S         : nilai pada variabel belum ditentukan.
    F.S         : nilai pada variabel telah ditentukan.  
*/

void printBanner();
/*
    Deskripsi   : modul ini berfungsi untuk menampilkan banner pada layar permainan.
    I.S         : banner belum ditampilkan pada layar.
    F.S         : banner ditampilkan pada layar.   
*/

void readPeringkat();
/*
    Deskripsi   : modul ini bertujuan untuk membaca data pada file dataSkor.txt
    I.S         : data dari file belum terbaca
    F.S         : data dari file telah terbaca
*/

void printPeringkat();
/*
Deskripsi   : Modul ini berfungsi untuk menampilkan data peringkat ke layar.
I.S         : Data peringkat belum ditampilkan pada layar.
F.S         : Data peringkat telah ditampilkan pada layar.
      
*/

void lihatPeringkat();
/*
    Deskripsi   : modul ini berfungsi untuk mengkombinasikan beberapa modul, yaitu readPeringkat, sortPeringkat, printPeringkat supaya dapat melihat hasil akumulasi peringkat dari tiap pemain.
    I.S         : data peringkat belum ditampilkan pada layar.
    F.S         : data peringkat telah ditampilkan pada layar.
*/

void saveSkor();
/*
    Deskripsi   : modul ini bertujuan untuk menyimpan data hasil permainan ke dalam file dataSkor.txt
    I.S         : data hasil permainan belum disimpan ke dalam file dataSkor.txt
    F.S         : data hasil permainan telah disimpan ke dalam file dataSkor.txt
*/

char nanyaMainLagi();
/*
    Deskripsi   : modul ini berfungsi untuk menanyakan apakah permainan akan dilanjutkan atau tidak. Jika ya maka akan muncul papan baru dan jika tidak akan ada menu untuk kembali ke menu utama.
    Input       : character ‘Y’/’N’
    Output      : mengembalikkan nilai Inputan dari user.    
*/

void printPenutup();
/*
    Deskripsi   : modul ini berfungsi untuk mengembalikan tampilan ke menu utama ketika permainan telah selesai dan tidak ingin dilanjutkan.
    I.S         : Tampilan masih berupa hasil permainan yang baru saja selesai.
    F.S         : Tampilan berubah menjadi tampilan pada menu utama.     
*/

void printPemenang();
/*
    Deskripsi   : modul ini berfungsi untuk menampilkan tampilan kondisi menang, kalah, dan seri pada pemain.
    I.S         : tampilan kondisi menang, kalah, dan seri belum ditampilkan pada layar.
    F.S         : tampilan kondisi menang, kalah, dan seri telah ditampilkan pada layar.    
*/

void resetPapan3x3();
/*
    Deskripsi   : modul ini berfungsi untuk mendefinisikan papan 3x3 sehingga setiap kotak pada papan berisi karakter angka dari 1 – 9.
    I.S.        : Papan 3x3 belum terdefinisi.
    F.S.        : Papan 3x3 berisi terdefinisi dengan karakter angka 1 - 9       
*/

void kredit();
/*
    Deskripsi   : modul ini berfungsi untuk menampilkan profil dari orang-orang yang mengembangkan program ini.
    I.S.        : profil pengembang belum tampil di layar
    F.S.        : profil pengembang telah tampil di layar       
*/

void printPanah(int posisiMenu, int posisiPanah);
/*
    Deskripsi   : modul ini berfungsi untuk menampilkan panah pada layar supaya mempermudah pemilihan menu.
    I.S         : panah belum ditampilkan pada layar.
    F.S         : panah telah ditampilkan pada layar.
*/

int pilihKomputer();
/*
    Deskripsi   : modul ini berfungsi untuk memilih tingkat kesulitan ketika melawan komputer (Pemula, Menengah, Sepuh Tic Tac Toe).
    Input       : panah atas atau panah bawah.
    Output      : mengembalikkan nilai posisi panah.        
*/

int pilihUkuranPapan();
/*
    Deskripsi   : modul ini berfungsi untuk memilih ukuran papan ketika akan mulai untuk bermain (papan 3x3, papan 5x5, papan 7x7).
    Input       : panah atas atau panah bawah.
    Output      : mengembalikkan Nilai Posisi panah     
*/

int pilihLawan();
/*
    Deskripsi   : modul ini berfungsi untuk memilik vs manusia atau komputer dalam permainan.
    Input       : panah atas atau panah bawah.
    Output      : mengembalikkan Nilai Posisi panah
*/

int pilihMenuUtama();
/*
    Deskripsi   : modul ini berfungsi untk memilih salah satu menu dari keseluruhan menu utama yang tersedia dalam aplikasi tic tac toe.
    Input       : panah atas atau panah bawah.
    Output      : mengembalikkan Nilai Posisi panah
*/

void giliranPemain1_3x3();
/*
    Deskripsi   : modul ini berufungsi untuk mengisi papan dengan karakter yang dipilih pemain 1
    I.S.        : kotak pada papan 3x3 yang ingin dipilih pemain 1 kosong.
    F.S.        : kotak terisi oleh karakter yang dipilih pemain 1.       
*/

void giliranPemain2_3x3();
/*
    Deskripsi   : modul ini berufungsi untuk mengisi papan dengan karakter yang dipilih pemain 2
    I.S.        : kotak pada papan 3x3 yang ingin dipilih pemain 2 kosong.
    F.S.        : kotak terisi oleh karakter yang dipilih pemain 2.    
*/

void printPapan3x3();
/*
    Deskripsi   : modul ini berfungsi untuk menampilkan papan permainan berukuran 3x3 pada layar.
    I.S.        : papan 3x3 belum ditampilkan pada layar
    F.S.        : Papan 3x3 ditampilkan pada layar.       
*/

void inputNamaPemain1();
/*
    Deskripsi   : modul ini berfungsi untuk menginputkan nama pemain pertama.
    I.S         : nama pemain pertama belum ditampilkan pada layar
    F.S         : nama pemain pertama telah ditampilkan pada layar      
*/

void inputNamaPemain2();
/*
    Deskripsi   : modul ini berfungsi untuk menginputkan nama pemain kedua.
    I.S         : nama pemain kedua belum ditampilkan pada layar
    F.S         : nama pemain kedua telah ditampilkan pada layar             
*/

void pilihBidak();
/*
    Deskripsi   : modul ini bertujuan untuk memilih salah satu bidak dalam permainan, yaitu ‘X’ atau ‘O’
    I.S         : karakter yang dipilih pemain belum ditampilkan pada layar
    F.S         : Karakter yang dipilih pemain telah ditampilkan pada layar.
*/

char cekMenang3x3();
/*
    Deskripsi   : modul ini berfungsi untuk mengembalikan karakter yang berderet 3(jika ada) atau karakter kosong
    Input       : -
    Output      : mengembalikan karakter kosong atau karakter X atau karakter O yang berhasil membuat 3 deret.       
*/

void mainPapan3x3();
/*
    Deskripsi   : modul ini berfungsi untuk memainkan permainan tic tac toe dengan papan 3x3
    I.S.        : permainan belum dimulai.
    F.S.        : permainan telah diketahui hasil akhirnya.       
*/

void resetPapan5x5();
/*
    Deskripsi   : modul ini berfungsi untuk mendefinisikan papan 5x5 sehingga setiap kotak pada papan berisi karakter angka dari 1 - 9 dan a - q
    I.S.        : Papan 5x5 belum terdefinisi.
    F.S.        : Papan 5x5 berisi  karakter angka 1 - 9 dan alfabet a - q    
*/

void giliranPemain1_5x5();
/*
    Deskripsi   : modul ini berufungsi untuk mengisi papan dengan karakter yang dipilih pemain 1
    I.S.        : kotak pada papan 5x5 yang ingin dipilih pemain 1 kosong.
    F.S.        : kotak terisi oleh karakter yang dipilih pemain 1.       
*/

void giliranPemain2_5x5();
/*
    Deskripsi   : modul ini berufungsi untuk mengisi papan dengan karakter yang dipilih pemain 2
    I.S.        : kotak pada papan 5x5 yang ingin dipilih pemain 2 kosong.
    F.S.        : kotak terisi oleh karakter yang dipilih pemain 2.        
*/

char cekMenang5x5();
/*
    Deskripsi   : modul ini berfungsi untuk mengembalikan karakter yang berderet 4(jika ada) atau karakter kosong
    Input       : -
    Output      : mengembalikan karakter kosong atau karakter X atau karakter O yang berhasil membuat 4 deret.              
*/

void printPapan5x5();
/*
    Deskripsi   : modul ini berfungsi untuk menampilkan papan permainan berukuran 5x5 pada layar.
    I.S.        : papan 5x5 belum ditampilkan pada layar.
    F.S.        : papan 5x5 ditampilkan pada layar.       
*/

void mainPapan5x5();
/*
    Deskripsi   : modul ini berfungsi untuk memainkan permainan tic tac toe dengan papan 5x5
    I.S.        : permainan belum dimulai.
    F.S.        : permainan telah diketahui hasil akhirnya.         
*/

void resetPapan7x7();
/*
    Deskripsi   : modul ini berfungsi untuk mendefinisikan papan 7x7 sehingga setiap kotak pada papan berisi karakter angka dari 1 - 9 dan a - z dan A - Q 
    I.S.        : papan 7x7 belum terdefinisi.
    F.S.        : papan 7x7 berisi karakter angka dari 1 - 9 dan alfabet a - z dan A - Q             
*/

void printPapan7x7();
/*
    Deskripsi   : modul ini berfungsi untuk menampilkan papan permainan berukuran 7x7 pada layar.
    I.S.        : Papan 7x7 belum ditampilkan pada layar
    F.S.        : Papan 7x7 ditampilkan pada layar.       
*/

void giliranPemain1_7x7();
/*
    Deskripsi   : modul ini berfungsi untuk mengisi papan dengan karakter yang dipilih pemain 1
    I.S.        : kotak pada papan 7x7 yang ingin dipilih pemain 1 kosong.
    F.S.        : kotak terisi oleh karakter yang dipilih pemain 1.        
*/

void giliranPemain2_7x7();
/*
    Deskripsi   : modul ini berfungsi untuk mengisi papan dengan karakter yang dipilih pemain 2
    I.S.        : kotak pada papan 7x7 yang ingin dipilih pemain 2 kosong.
    F.S.        : kotak terisi oleh karakter yang dipilih pemain 2.        
*/

char cekMenang7x7();
/*
    Deskripsi   : modul ini berfungsi untuk mengembalikan karakter yang berderet 5(jika ada) atau karakter kosong
    Input       : -
    Output      : mengembalikan karakter kosong atau karakter X atau karakter O yang berhasil membuat 3 deret.             
*/

void mainPapan7x7();
/*
    Deskripsi   : modul ini berfungsi untuk memainkan permainan tic tac toe dengan papan 7x7
    I.S.        : permainan belum dimulai.
    F.S.        : permainan telah diketahui hasil akhirnya.        
*/

void giliranKomputerPemula_3x3();
/*
    Deskripsi   : modul ini bertujuan untuk menginputkan karakter yang sudah dipilih oleh komputer ke papan 3x3.
    I.S         : kotak pada papan 3x3 yang ingin dipilih komputer masih kosong
    F.S         : kotak terisi oleh karakter yang dipilih oleh komputer.     
*/

void mainPapanKomputerPemula3x3();
/*
    Deskripsi   : modul ini berfungsi untuk menjalankan permainan tic tac toe melawan komputer dengan papan 3x3.
    I.S         : permainan belum berjalan.
    F.S         : kondisi hasil permainan pada papan 3x3 diketahui (akan muncul tampilan menang/kalah/seri)
*/

void pilihBidakKomputer();
/*
    Deskripsi   : modul ini bertujuan untuk memilih salah satu bidak dalam permainan, yaitu ‘X’ atau ‘O’
    I.S         : terdapat 2 karakter jika pemain memilih ‘x’ maka komputer akan otomatis o
    F.S         : karakter yang dipilih pemain telah ditampilkan pada layar.
*/

void giliranKomputerPemula_5x5();
/*
    Deskripsi   : modul ini bertujuan untuk menginputkan karakter yang sudah dipilih oleh komputer ke papan 5x5.
    I.S         : kotak pada papan 5x5 yang ingin dipilih komputer masih kosong
    F.S         : kotak terisi oleh karakter yang dipilih oleh komputer.    
*/

void mainPapanKomputerPemula5x5();
/*
    Deskripsi   : modul ini berfungsi untuk menjalankan permainan tic tac toe melawan komputer dengan papan 5x5.
    I.S         : permainan belum berjalan.
    F.S         : kondisi hasil permainan pada papan 3x3 diketahui (akan muncul tampilan menang/kalah/seri)
*/

void giliranKomputerPemula_7x7();
/*
    Deskripsi   : modul ini bertujuan untuk menginputkan karakter yang sudah dipilih oleh komputer ke papan 7x7.
    I.S         : kotak pada papan 7x7 yang ingin dipilih komputer masih kosong
    F.S         : kotak terisi oleh karakter yang dipilih oleh komputer.     
*/

void mainPapanKomputerPemula7x7();
/*
    Deskripsi   : modul ini berfungsi untuk menjalankan permainan tic tac toe melawan komputer dengan papan 7x7.
    I.S         : permainan belum berjalan.
    F.S         : kondisi hasil permainan pada papan 3x3 diketahui (akan muncul tampilan menang/kalah/seri)
*/

void tutorGame();
/*
    Deskripsi   : modul ini berfungsi untuk menampilkan tutor game pada program yang telah dibuat.
    I.S         : tutor game belum ditampilkan pada layar.
    F.S         : tutor game telah ditampilkan pada layar.
*/

void printPembuka();
/*
    Deskripsi   : modul ini berfungsi untuk menampilkan kalimat pembuka ketika program pertama kali jalankan.
    I.S         : kalimat pembuka belum ditampilkan pada layar.
    F.S         : kalimat pembuka telah ditampilkan pada layar.
*/

void maaf();
/*
    Deskripsi   : modul ini berfungsi untuk menampilkan kalimat permohonan maaf karena program belum rampung
    I.S         : kalimat belum ditampilkan pada layar.
    F.S         : kalimat telah ditampilkan pada layar.
*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int skor = 0;

void soal1()
{
	int jawab;

	system("cls");
	cout << "1. Gunung Tertinggi di dunia adalah : \n" << endl;
	cout << "[1] Gunung Everest" << endl;
	cout << "[2] Gunung Makalu" << endl;
	cout << "[3] Gunung Annapurna\n" << endl;
	cout << "Masukkan Jawaban : ";
	cin >> jawab;

	if (jawab == 1) {
		skor = skor + 10;
		cout << "\nJawaban Anda Benar !!" << endl;
	}
	else {
		cout << "\nJawaban Anda Salah !" << endl;
	}
	cout << "Gunung Everest merupakan gunung tertinggi di dunia dengan ketinggian 8.849 meter" << endl;
	cout << "\nTekan tombol apa saja untuk lanjut ke soal yang berikutnya : ";
	_getch();
}
void soal2()
{
	int jawab;

	system("cls");
	cout << "2. Pusat peredaran tata surya adalah : \n" << endl;
	cout << "[1] Bulan" << endl;
	cout << "[2] Matahari" << endl;
	cout << "[3] Mars\n" << endl;
	cout << "Masukkan Jawaban : ";
	cin >> jawab;
	if (jawab == 2) {
		skor = skor + 10;
		cout << "\nJawaban Anda Benar !!" << endl;
	}
	else {
		skor = skor + 0;
		cout << "\nJawaban Anda Salah !" << endl;
	}
	cout << "Matahari menarik planet-planet dengan gaya gravitasinya yang besar" << endl;
	cout << "sehingga mereka mengitari Matahari sesuai dengan orbitnya." << endl;
	cout << "\nTekan tombol apa saja untuk lanjut ke soal yang berikutnya : " << endl;
	_getch();
	
}
void soal3()
{
	int jawab;

	system("cls");
	cout << "3. Negara terluas ketiga di dunia adalah : \n" << endl;
	cout << "[1] Kanada" << endl;
	cout << "[2] Republik Rakyat Tiongkok" << endl;
	cout << "[3] Amerika Serikat\n" << endl;
	cout << "Masukkan Jawaban : ";
	cin >> jawab;
	if (jawab == 3) {
		skor = skor + 10;
		cout << "\nJawaban Anda Benar !!" << endl;
	}
	else {
		skor = skor + 0;
		cout << "\nJawaban Anda Salah !" << endl;
	}
	cout << "Negara yang dikenal dengan sebutan negara paman Sam memiliki luas wilayah sekitar 9,8 juta kilometer persegi" << endl;
	cout << "\nTekan tombol apa saja untuk lanjut ke soal yang berikutnya : " << endl;
	_getch();
	
}
void soal4()
{
	int jawab;

	system("cls");
	cout << "4. Simbol garis-garis yang dibawahnya ada angka-angka yang selalu ditemukan pada produk disebut : \n" << endl;
	cout << "[1] Codec" << endl;
	cout << "[2] Barcode" << endl;
	cout << "[3] Captcha\n" << endl;
	cout << "Masukkan Jawaban : ";
	cin >> jawab;
	if (jawab == 2) {
		skor = skor + 10;
		cout << "\nJawaban Anda Benar !!" << endl;
	}
	else {
		skor = skor + 0;
		cout << "\nJawaban Anda Salah !" << endl;
	}
	cout << "Barcode adalah suatu kumpulan data optik yang dibaca mesin" << endl;
	cout << "\nTekan tombol apa saja untuk lanjut ke soal yang berikutnya : " << endl;
	_getch();
	
}
void soal5()
{
	int jawab;

	system("cls");
	cout << "5. Hewan terkecil di dunia adalah : \n" << endl;
	cout << "[1] Amoeba" << endl;
	cout << "[2] Plankton" << endl;
	cout << "[3] Kutu\n" << endl;
	cout << "Masukkan Jawaban : ";
	cin >> jawab;
	if (jawab == 1) {
		skor = skor + 10;
		cout << "\nJawaban Anda Benar !!" << endl;
	}
	else {
		skor = skor + 0;
		cout << "\nJawaban Anda Salah !" << endl;
	}
	cout << "Amoeba adalah organisme kecil bersel tunggal yang hidup dalam kondisi lembap" << endl;
	cout <<	"seperti di air tawar, air asin, tanah, dan di dalam hewan" << endl;
	cout << "\nTekan tombol apa saja untuk lanjut ke soal yang berikutnya : " << endl;
	_getch();
	
}
void soal6()
{
	int jawab;

	system("cls");
	cout << "6. Kepanjangan dari RAM : \n" << endl;
	cout << "[1] Random Anti Memory" << endl;
	cout << "[2] Random Access Memory" << endl;
	cout << "[3] Random Air Memory\n" << endl;
	cout << "Masukkan Jawaban : ";
	cin >> jawab;
	if (jawab == 2) {
		skor = skor + 10;
		cout << "\nJawaban Anda Benar !!" << endl;
	}
	else {
		skor = skor + 0;
		cout << "\nJawaban Anda Salah !" << endl;
	}
	cout << "Random Access Memory adalah sebuah tipe penyimpanan komputer yang isinya dapat diakses dalam waktu yang tetap tidak memperdulikan letak data tersebut dalam memori" << endl;
	cout << "\nTekan tombol apa saja untuk lanjut ke soal yang berikutnya : " << endl;
	_getch();
	
}
void soal7()
{
	int jawab;

	system("cls");
	cout << "7. Vitamin yang banyak terkandung dalam buah-buahan adalah  : \n" << endl;
	cout << "[1] Vitamin A" << endl;
	cout << "[2] Vitamin E" << endl;
	cout << "[3] Vitamin C\n" << endl;
	cout << "Masukkan Jawaban : ";
	cin >> jawab;
	if (jawab == 3) {
		skor = skor + 10;
		cout << "\nJawaban Anda Benar !!" << endl;
	}
	else {
		skor = skor + 0;
		cout << "\nJawaban Anda Salah !" << endl;
	}
	cout << "Vitamin C adalah antioksidan terbaik yang dikenal memiliki manfaat untuk meningkatkan kekebalan tubuh" << endl;
	cout << "\nTekan tombol apa saja untuk lanjut ke soal yang berikutnya : " << endl;
	_getch();
	
}
void soal8()
{
	int jawab;

	system("cls");
	cout << "8. Paus Pembunuh adalah nama lain dari : \n" << endl;
	cout << "[1] Paus Orca " << endl;
	cout << "[2] Paus Sperma" << endl;
	cout << "[3] Paus Beluga\n" << endl;
	cout << "Masukkan Jawaban : ";
	cin >> jawab;
	if (jawab == 1) {
		skor = skor + 10;
		cout << "\nJawaban Anda Benar !!" << endl;
	}
	else {
		skor = skor + 0;
		cout << "\nJawaban Anda Salah !" << endl;
	}
	cout << "Saat pelaut kuno melihat Paus Orca sedang berburu dan memangsa spesies paus lainnya disaat itulah mengapa Paus Orca disebut Paus Pembunuh" << endl;
	cout << "\nTekan tombol apa saja untuk lanjut ke soal yang berikutnya : " << endl;
	_getch();
	
}
void soal9()
{
	int jawab;

	system("cls");
	cout << "9. Burung tercepat di dunia adalah : \n" << endl;
	cout << "[1] Burung Elang" << endl;
	cout << "[2] Burung Merlin" << endl;
	cout << "[3] Burung Falcon\n" << endl;
	cout << "Masukkan Jawaban : ";
	cin >> jawab;
	if (jawab == 3) {
		skor = skor + 10;
		cout << "\nJawaban Anda Benar !!" << endl;
	}
	else {
		skor = skor + 0;
		cout << "\nJawaban Anda Salah !" << endl;
	}
	cout << "Burung Falcon dapat terbang dengan kecepatan 323 kilometer per jam, menyamai kecepatan mobil dalam sirkuit Formula 1." << endl;
	cout << "\nTekan tombol apa saja untuk lanjut ke soal yang berikutnya : " << endl;
	_getch();
	
}
void soal10()
{
	int jawab;

	system("cls");
	cout << "10. Primata paling cerdas di dunia adalah : \n" << endl;
	cout << "[1] Orang Utan" << endl;
	cout << "[2] Simpanse" << endl;
	cout << "[3] Kera\n" << endl;
	cout << "Masukkan Jawaban : ";
	cin >> jawab;
	if (jawab == 2) {
		skor = skor + 10;
		cout << "\nJawaban Anda Benar !!" << endl;
	}
	else {
		skor = skor + 0;
		cout << "\nJawaban Anda Salah !" << endl;
	}
	cout << "Primata Simpanse ini dapat dilatih menjadi makhluk yang cerdas dari hewan lainnya karena" << endl;
	cout << "memiliki kemampuan kapasitas otak setara dengan anak manusia berusia lima tahun" << endl;
	cout << "\nSelamat Anda telah menyelesaikan kuis ini silahkan tekan tombol apa saja untuk melihat skor yang diperoleh : " << endl;
	_getch();
	system("cls");
	cout << "Total Skor Yang Anda Peroleh : " << skor << endl;
	
	
}

void caraBermain()
{
	cout << "============================================================================" << endl;
	cout << "                             Cara Bermain " << endl;
	cout << "============================================================================" << endl;
	cout << "> Terdapat 10 soal pengetahuan umum" << endl;
	cout << "> Setiap soal terdapat 3 jawaban yang harus anda pilih " << endl;
	cout << "> Setiap jawaban yang benar akan memperoleh skor +10 dan jika jawabannya salah tidak memperoleh skor" << endl;
	cout << "> Jika anda memperoleh skor 100 maka anda menjawab semua soal dengan benar" << endl;
	cout << endl;
	cout << endl;
}

void tentang()
{
	cout << "============================================================================" << endl;
	cout << "                               Tentang " << endl;
	cout << "============================================================================" << endl;
	cout << "Program ini dibuat untuk memenuhi tugas Ujian Akhir Semester (UAS)" << endl;
	cout << "Mata kuliah Dasar Pemrograman" << endl;
	cout << "Dibuat oleh Muhammad Dean Setiawan Putra" << endl;
	cout << "S1 Teknik Informatika - 1B , Universitas Muhammadiyah Sukabumi " << endl;
	cout << endl;
	cout << endl;
}


int main() {

	int menu, akhir;

mulai:
	cout << "======================================" << endl;
	cout << "     Game Kuis Pengetahuan Umum" << endl;
	cout << "======================================" << endl;
	cout << "<1> Mulai Kuis				" << endl;
	cout << "<2> Cara Bermain			" << endl;
	cout << "<3> Tentang				" << endl;
	cout << "<4> Exit					" << endl;
	cout << "======================================" << endl;
	cin >> menu;
	system("cls");
	switch (menu)
	{
	case 1:
		soal1();
		soal2();
		soal3();
		soal4();
		soal5();
		soal6();
		soal7();
		soal8();
		soal9();
		soal10();
		if (skor = 100)
		{
			cout << "Pengetahuan Umum Anda Sangat Bagus!" << endl;
		}
		else if (skor >= 80)
		{
			cout << "Pengetahuan Umum Anda Bagus !" << endl;
		}
		else if (skor >= 60)
		{
			cout << "Pengetahuan Umum Anda Cukup !" << endl;
		}
		else if (skor <= 40)
		{
			cout << "Pengetahuan Umum Anda Kurang, Kembangkan Lagi Yah !" << endl;
		}
		else;
		{
			cout << endl;
		}

		cout << "Untuk mereset skor silahkan jalankan ulang kembali programnya yah !\n" << endl;
		cout << "Apakah anda ingin kembali ke menu awal ?" << endl;
		cout << "<1> Yes" << endl;
		cout << "<2> No" << endl;
		cin >> akhir;
		system("cls");
		switch (akhir)
		{
			case 1:
				goto mulai;
			case 2:
				goto selesai;
			default:
				goto mulai;
		}
			break;
		case 2:
			caraBermain();
			cout << "Apakah anda ingin kembali ke menu awal ?" << endl;
			cout << "<1> Yes" << endl;
			cout << "<2> No" << endl;
			cin >> akhir;
			system("cls");
			switch (akhir)
			{
			case 1:
				goto mulai;
			case 2:
				goto selesai;
			default:
				goto mulai;
			}
			break;
		case 3:
			tentang();
			cout << "Apakah anda ingin kembali ke menu awal ?" << endl;
			cout << "<1> Yes" << endl;
			cout << "<2> No" << endl;
			cin >> akhir;
			system("cls");
			switch (akhir)
			{
			case 1:
				goto mulai;
			case 2:
				goto selesai;
			default:
				goto mulai;
			}
			break;
		case 4:
			goto selesai;
			break;
		default:
			goto mulai;
	}	selesai:
			cout << "Terimakasih Telah Menjalankan Program Game Kuis Ini" << endl;
			cout << "Jangan berkecil hati apabila mendapatkan skor kecil, tetap semangat dan terus menuntut ilmu yah !" << endl;

		return 0;
}




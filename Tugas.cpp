#include <conio.h>
#include <iostream>
#include <array>
#include <stdio.h>
#include <ctime>
#include <math.h>
#include <fstream>
#include <ncurses.h>
#include <stdlib.h>
//Program With Proseduran//
using namespace std;
void Time();
void first();
void Calculate();
void Persegipanjang();
void Lingkaran();
void Segitiga();
void GRAFIK();
void Genap();
void Ganjil();
void Kelulusan();
void Predikat();
void Kecepatan();
void ConvertTime();
void Pyt();
void file();
void name();
void option();
void Start();

static int *A = NULL;
static int width;
static int height;
static int size;

static void sizechanged(){
	
}
int main()
{       //Program With type Proseduran//
      		Start();


}














void first()
{			  ///////
	int a, b; //////integern
	cout << "=============" << endl;
	cout << "Looping Star" << endl;
	cout << "=============" << endl;

	cout << "" << endl;

	cout << "Masukan nilai :";
	cin >> a;
	getch();
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
	cout << "" << endl;
	cout << "" << endl;
	getch();

	/////Looping
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
	cout << "" << endl;
	cout << "" << endl;
	getch();

	for (int i = 1; i <= a; i++)
	{
		for (int j = i; j <= a; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
	cout << "" << endl;
	cout << "" << endl;
	cout << "____________" << endl;
}
void Calculate()
{
	int i, j, a;
	char x;
	cout << "==================" << endl;
	cout << "Simple Kalkulator" << endl;
	cout << "==================" << endl;
	cout << "" << endl;
	cout << "" << endl;

	cout << "Pick Operator *,+,/,-  :";
	cin >> x;

	if (x == '*')
	{
		cout << "Put Value 1 :";
		cin >> i;
		cout << "Put Value 2 :";
		cin >> j;
		a = (i * j);
		cout << "Result =" << a << endl;
	}
	else if (x == '+')
	{
		cout << "Put Value 1 :";
		cin >> i;
		cout << "Put Value 2 :";
		cin >> j;
		a = (i + j);
		cout << "Result =" << a << endl;
	}
	else if (x == '/')
	{
		cout << "Put Value 1 :";
		cin >> i;
		cout << "Put Value 2 :";
		cin >> j;
		a = (i / j);
		cout << "Result =" << a << endl;
	}
	else if (x == '-')
	{
		cout << "Put Value 1 :";
		cin >> i;
		cout << "Put Value 2 :";
		cin >> j;
		a = (i - j);
		cout << "Result =" << a << endl;
	}
	else
	{
		cout << "" << endl;
		printf("TrY Again");
		cout << "" << endl;
	}
}
void Persegipanjang()
{
	float p;
	float l;
	float luas;
	int keliling;
	cout << "==============" << endl;
	cout << "Persegi Panjang" << endl;
	cout << "==============" << endl;
	getch();
	cout << "Hai " << endl;
	cout << "" << endl;
	cout << "Put Value P :";
	cin >> p;
	cout << "Put Value L :";
	cin >> l;
	cout << "" << endl;
	luas = (p * l);
	keliling = 2 * (p + l);

	cout << "Luas  = " << luas << endl;
	cout << "" << endl;
	cout << "Keliling =" << keliling << endl;
}
void Lingkaran()
{
	float luas,v = 3.14;
	int r;

	cout << "==============" << endl;
	cout << "Lingkaran" << endl;
	cout << "==============" << endl;
	cout << "" << endl;
	cout << "Put  r  :";
	cin >> r;
	luas = v * r * r;

	cout << "Luas =" << luas << endl;
}
void Segitiga()
{
	float luas;
	int a, t;
	cout << "==============" << endl;
	cout << "Segitiga" << endl;
	cout << "==============" << endl;
	cout << "" << endl;

	cout << "Put Value  a :";
	cin >> a;
	cout << "Put Value  t :";
	cin >> t;

	luas = (a * t);

	cout << "Luas  Segitiga =" << luas / 2 << endl;
}
void GRAFIK()
{
	cout << "=============" << endl;
	cout << "Grafik" << endl;
	cout << "=============" << endl;
	array<int, 9> data;

	for (int i = 0; i <= data.size(); i++)
	{
		if (i == 0)
		{
			cout << "Masukan "
				 << "0 - 9 :";
			cin >> data[i];
		}
		else
		{
			cout << "Masukan " << i * 10 << "-" << i * 10 + 9 << ":";
			cin >> data[i];
		}
	}
	cout << endl;
	for (int i = 0; i <= data.size(); i++)
	{
		cout << i * 10 << "-" << i * 10 + 9 << ":";

		for (int j = 1; j <= data[i]; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
}
void Genap()

{
	int a, c, i;

	cout << "=============" << endl;
	cout << "Bilalngan Genap" << endl;
	cout << "=============" << endl;

	cout << "Put Number :";
	cin >> i;
	while (i < 100)
	{
		i++;

		if (i % 2 == 0)
		{
			cout << " " << i;
		}
	}
	cout << "" << endl;
}
void Ganjil()
{
	int i;
	cout << "=============" << endl;
	cout << "Bilalngan Ganjil" << endl;
	cout << "=============" << endl;

	cout << "Put Number :";
	cin >> i;
	while (i < 100)
	{
		i++;

		if (i % 2 != 0)
		{
			cout << " " << i;
		}
	}
	cout << "" << endl;
}
void Kelulusan()
{
	int nilai;
	cout << "=============" << endl;
	cout << "Menentukan Kelulusan" << endl;
	cout << "=============" << endl;
	cout << "Masukkan Nilai Anda: ";

	cin >> nilai;

	if (nilai >= 75)
	{
		cout << "Anda Lulus\nDengan Nilai: " << nilai;
		cout << "" << endl;
	}
	else
	{
		cout << "Anda tidak lulus\nDengan Nilai: " << nilai;

		cout << endl;
		cout << "" << endl;
	}
}
void Predikat()
{
	cout << "=============" << endl;
	cout << "Menentukan Kelulusan dengan Predikat" << endl;
	cout << "=============" << endl;
	int nilai;
	cout << "Masukkan Nilai Anda: ";
	cin >> nilai;
	if (nilai >= 85)
	{
		nilai == 'A';
		cout << "" << endl;
	}
	else if (nilai >= 75)
	{
		nilai == 'B';
		cout << "" << endl;
	}
	else if (nilai >= 60)
	{
		nilai == 'C';
		cout << "" << endl;
	}
	else if (nilai < 60)
	{
		nilai == 'D';
		cout << "" << endl;
	}
	if (nilai >= 75)
	{
		cout << "Anda Lulus\n";
		cout << "" << endl;
	}
	else if (nilai < 75)
	{
		cout << "Anda tidak lulus\n";
		cout << "" << endl;
	}
	if (nilai >= 85)
	{
		cout << "Dengan Nilai: A";
		cout << "" << endl;
	}
	else if ((nilai >= 75) && (nilai < 85))
	{
		cout << "Dengan Nilai: B";
		cout << "" << endl;
	}
	else if ((nilai >= 60) && (nilai < 75))
	{
		cout << "Dengan Nilai: C";
		cout << "" << endl;
	}
}
void Kecepatan()
{
	int m, s;
	float v;
	cout << "Masukkan Jarak : ";
	cin >> m;
	cout << "Masukkan Waktu : ";
	cin >> s;
	v = m / s;
	cout << "Kecepatan : " << v << endl;
}
void ConvertTime()
{
	int pilihan;
	int jam, menit, detik, jam1, menit1, detik1;
	cout << "Program Konversi Waktu\n\n";
	cout << "Masukkan Jam: ";
	cin >> jam;
	cout << "Masukkan Menit: ";
	cin >> menit;
	cout << "Masukkan Detik: ";
	cin >> detik;
	cout << "\nKonversi Ke? \n";
	cout << "1. Jam | 2. Menit | 3. Detik\n";
	cout << "Pilihan: ";
	cin >> pilihan;
	jam1 = jam + (menit / 60) + (detik / 3600);
	menit1 = (jam * 60) + menit + (detik / 60);
	detik1 = (jam * 3600) + (menit * 60) + detik;
	if (pilihan == 1)
	{
		cout << "Hasil Konversi : " << jam1 << " Jam\n";
	}
	else if (pilihan == 2)
	{
		cout << "Hasil Konversi : " << menit1 << " Menit\n";
	}
	else if (pilihan == 3)
	{
		cout << "Hasil Konversi : " << detik1 << " Detik\n";
	}
}
void Pyt()
{
	int a, b;
	int p;
	cout << "Program Menentukan Pythagoras\n\n";

	cout << "Masukkan sisi A : ";

	cin >> a;

	cout << "Masukkan sisi B : ";

	cin >> b;

	p = (a * a) + (b * b);

	cout << "Pythagoras nya adalah " << (p) << endl;
}
void file()
{
	cout << "=============" << endl;
	cout << "Menulis File Txt" << endl;
	cout << "=============" << endl;
	string name, kelas;
	cout << "Masukan Nama :";
	cin >> name;
	cout << "Masukan Kelas  :";
	cin >> kelas;
	ofstream Myfile;
	Myfile.open("Baru.txt",ios::out);

	Myfile << "Nama saya : " << name << endl;
	Myfile << "Kelas           :" << kelas;
	Myfile.close();
}
void option()
{
	int a, c;
	string b;
	cout << "=============" << endl;
	cout << "   OPTION" << endl;
	cout << "=============" << endl;
	cout << "" << endl;
	cout << "==========================" << endl;
	Time();
	cout << "==========================" << endl;
	cout << "1.Looping Star" << endl;
	cout << "2.Simple Calculate " << endl;
	cout << "3.Grafik     " << endl;
	cout << "4.Mencari luas Persegi Panjang" << endl;
	cout << "5.Mencari luas lingkaran" << endl;
	cout << "6.Mencari luas Segitiga" << endl;
	cout << "7.Mencari Bilangan Genap" << endl;
	cout << "8.Mencari Bilangan Ganjil" << endl;
	cout << "9.Mencari  Kelulusan " << endl;
	cout << "10.Mencari Kelulusan dengan pridikat" << endl;
	cout << "11.Mencari Pythagoras" << endl;
	cout << "12.Convert Time" << endl;
	cout << "13.Menentukan Kecepatan" << endl;
	cout << "14.Menulis File" << endl;
	cout << "99.Keluar" << endl;
	cout << "=========================" << endl;
	cout << "Masukan nomor program yang anda ingin gunakan " << endl;
	cout << "Pilihan Nomor :";
	cin >> a;

	switch (a)
	{
	case 1:
		system("cls");
		first();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;

	case 2:
		system("cls");
		Calculate();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;
	case 3:
		system("cls");
		GRAFIK();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;

	case 4:
		system("cls");
		Persegipanjang();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;
	case 5:
		system("cls");
		Lingkaran();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;
	case 6:
		system("cls");
		Segitiga();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;
	case 7:
		system("cls");
		Genap();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;
	case 8:
		system("cls");;
		Ganjil();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;
	case 9:
		system("cls");
		Kelulusan();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;
	case 10:
		system("cls");
		Predikat();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;
	case 11:
		system("cls");
		Pyt();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;
	case 12:
		system("cls");
		ConvertTime();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;
	case 13:
		system("cls");
		Kecepatan();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
	case 14:
		system("cls");
		file();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
		break;
	case 99:
		system("cls");
		name();
		cout << "Tekan  y untuk Keluar  :";
		cin >> b;
		if (b == "y")
		{
			system("cls");
			option();
		}
	}
}
void name()
{
	cout << "" << endl;
	cout << "" << endl;
	cout << "               =============================" << endl;
	cout << "                    Nama: Bilal Syahputra" << endl;
	cout << "                    Kelas : XI TKJ-2 " << endl;
	cout << "               =============================" << endl;
}
void Start()
{
	char Y;
	name();
	cout << "Tekan y :";
	cin>>Y;
	
	if (Y == 'y'){
		system("cls");
		option();
	}
	
}
void Time()
{
	time_t now = time(0);
	char *date = ctime(&now);
	cout << date;
}

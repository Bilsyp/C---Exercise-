#include <iostream>
#include <fstream>
using namespace std;
//void Alamat(int *b)
//{
//	*b = *b * 50;
//}
//void Kata(string &name)
//{
//	name = "Udin";
//	cout << "Name anda telah kami rubah menjadi :" << name << endl;
//}
void Switch(int &a){
	switch(a){
		case 1:
		cout << "Hello World";
		break;
		case 2:
		cout << "Hai";
		break;
	}
}
int main(int argc, char *argv[])
{
	int b;
	string Name;
	cout << "Masukan 1/2:";
	cin>>b;
	Switch(b);
	//	cout << "Address a :"<< &a<<endl;
	//	cout << "Value  a before:"<< a<<endl;
	//	cout << ""<<endl;
	//	Alamat(&a);
	//	cout << "Value a After :"<< a;
	//cout << "Name :";
//	cin >> Name;
//	cout << "Name adalah :" << Name << endl;
//	cout << "" << endl;
//	Kata(Name);

//	cout << "" << endl;
//	cout << "Name yang sekarang dipakai adalah " << Name;
}
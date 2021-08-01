#include <iostream>
#include <fstream>
using namespace std;
void fungsiRefence(int &b){
	b = b * b
      
}
 int main()
{
	int a = 10;
	int b = 15;
	cout << "isi Nilai A Sebelumnya :"<< a<<endl;
	cout<< ""<<endl;
	fungsiRefence(a);
	cout << "isi Nilai A Sesud
	hnya :"<< a<<endl;
	
	

	
}
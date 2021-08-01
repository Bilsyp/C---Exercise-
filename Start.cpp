#include <iostream>
#include <ctime>
#include <string>
#include "Close.hpp"
#include "setTime.hpp"
using namespace std;

int main(){
	string a;
	cout<< "________________________"<<endl;
	cout<<"Name in Game :";
	cin>>a;
	system("cls");
	setTime Now;
	Now.Time();
	Start* Player = new Start(a);
	cout <<""<<endl;
	Player->display();
	cout << ""<<endl;
	
	cout << "Bertarung Melawan Moster!!!!"<<endl;
	cout << endl;
	Player->Levelup(10);
	Player->Levelup(70);
	Player->Levelup(10);
	Player->Levelup(10);
	Player->Layout();
	cout << ""<<endl;
	Player->display();
	cout << ""<<endl;
	cout << "Bertarung Melawan Moster!!!!"<<endl;
	cout << ""<<endl;
	Player->Levelup(10);
	Player->Levelup(70);
	Player->Levelup(10);
	Player->Levelup(10);
	Player->display();
	Player->Layout();
	cout << ""<<endl;
	Player->display();
	
	
}
///Prototype///
Start::Start(std::string name){
  	this->name = name;
  	this->power = 100;
  	this->level =1;
  	this->exp =0;
  	this->job = "Petualang biasa";
}
void Start::display(){
	cout <<"====Status===="<<endl;
	std::cout << "Name :"<<this->name<<std::endl;
	std::cout << "Power :"<<this->power<<std::endl;
	std::cout << "Level :"<<this->level<<std::endl;
	std::cout << "Exp :"<<this->exp<<std::endl;
	cout << "Job :"<<this->job<<endl;
	
}
void Start::Levelup(int expvalue){  
     int Maxexp = 100;
     this->exp += expvalue;
     if(this-> exp >= Maxexp){
     	cout << "Level Up"<<endl;
     	this->power += 100;
     	this->level += 1;
     	this->exp =0;
     
}
}
void Start::Layout(){
	char p;
     int o;
	cout << "Want to Change your job y/n :";
     cin>>p;
     if(p == 'y'){
     	cout << "=======List====="<<endl;
     	cout << "1.Assassin"<<endl;
     	cout << "2.Mage"<<endl;
     	cout << "Pick Your Choice :";
     	cin>>o;
     	system("cls");
     	switch(o){
     		case 1:
     		cout << "Assassin!!!"<<endl;
     		this->job = "Assasin";
     		this->power += 500;
     		break;
     	
     	    case 2:
     	    cout << "Mage!!!!"<<endl;
     	    this->job = "Mage";
     	    this->power += 400;
     	    break;
     	    
     	}
     }
}


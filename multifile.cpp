
#ifndef __Xxdroid
#define __Xxdroid
#include <string>
#include <ctime>
#include <iostream>
class Start{
	//Declaration
  public:
	std::string name;
	std::string text;
	int Class;

  private:
	std::string namePrivate;

 public:
	Start(const char *name){
	this->name = name;
    this->namePrivate = name;
	
	}
void setTime(){
time_t now = time(0);
const char *date = ctime(&now);
std::cout << date << std::endl;
}
void setNameprivate(){

std::cout <<"Name private :"<<Start::namePrivate<<std::endl;
}
void setNamepublic(){
	std::cout << "Name public :"<< Start::name<<std::endl;
}
};
#endif
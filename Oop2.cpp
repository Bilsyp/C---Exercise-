#include <iostream>
#include "setTime.hpp"

using namespace std;

class Player{
	protected:
	string Name;
	double Power =100;
	public:
	//Player(const char* name){
	//this->Name = name;
	
};
class Weapon: public Player{
	private:
	string Names;
	double powers = 200;
	public:
    void display(string name,string names){
	this->Name = name;
	this->Names = names;
   
    }
};
class Item: public Player,public Weapon{
};
int main(int argc, char *argv[])
{
	Weapon star;
	star.display("Tony"," Stark");
	
	
}
#include <iostream>

using namespace std;

class Parent{
	protected:
	int salary;
	string name = "Hobs";
    public:
	void display (){
	
	}
};
class child: public Parent{
	public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
   
	
};
int main(int argc, char *argv[])
{
	/*child start;
	start.setSalary(8000);
	start.bonus = 10000;
	cout << start.getSalary()
	*/
	string name = "Tony";
	string names = " Stark";
	string fullname ;//= name.append(names);
	fullname [0] = 'J';
	cout << "Fullname :";
	getline (cin,fullname);
	cout << fullname;
}
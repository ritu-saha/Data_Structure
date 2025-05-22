#include <iostream>
 using namespace std;


 class Phonebook
 {
private:

 string name;
 int postcode;
 int number;
 string address;
 float height;
 public:

 void userinput()
 {
cout << "Enter name: ";
 cin >> name;
 cout << "Enter postcode: ";
 cin >> postcode;
 cout << "Enter address: ";
 cin >> address;
 cout << "Enter number: ";
 cin >> number;
 cout << "Enter height: ";
 cin >> height;
 cout << "---------------------------------"<< endl;
 }
void display()
{
cout << "*****OUTPUT******" << endl;
 cout << "Name : " << name << endl;
 cout << "Address : " << address << endl;
 cout << "Number : " << number << endl;
 cout << "Height : " << height << endl;
 cout << "Postcode: " << postcode << endl;
 cout << "---------------------------------"<< endl;
 }
 };
 struct Phoneentry
 {
 string name;
 int postcode;
 int number;
 string address;
 float height;
 void userinput()
 {
 cout << "Enter name: ";
 cin >> name;
 cout << "Enter postcode: ";
 cin >> postcode;
 cout << "Enter address: ";
cin >> address;
 cout << "Enter number: ";
 cin >> number;
cout << "Enter height: ";
 cin >> height;
 cout << "---------------------------------"<< endl;
}
void input(string n, int p, int num, string add, float h)
 {
 name = n;
 postcode = p;
 number = num;
 address = add;
 height = h;
 }
 void display()
 {

cout << "*****OUTPUT******" << endl;
 cout << "Name : " << name << endl;
cout << "Address : " << address << endl;
 cout << "Number : " << number << endl;
cout << "Height : " << height << endl;
 cout << "Postcode: " << postcode << endl;
 cout << "---------------------------------"<< endl;
 }
 };
 int main()
 {
 Phoneentry entry1[10];
 //structure /*
 for(int i=0; i<10; i++)
 {
 entry1[i].userinput();
 entry1[i].display();
 }
*/ //Class
 Phonebook book1; book1.userinput();
 book1.display();
 return 0;
 }

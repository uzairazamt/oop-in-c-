#include <iostream>
using namespace std;

class Employe{

string Name ;
string Company_name ;
int Age ;
int Salary ;
int Sale;

public:
Employe (string name, string company_name ,int age ,int salary ,int sale ){
  Name =  name ;
  Company_name =  company_name ;
  Age = age ;
  Sale = sale;
  Salary = salary;

  
}
void print(){
cout<<"name--> ="<<Name<< endl;
cout<<"company name--> ="<<Company_name<<endl;
cout<<"age --> = "<<Age<< endl;
  cout<<"salary --> = "<<Salary<< endl;
  cout<<"sale --> = "<<Sale<< endl;

  
}

void promotion(){
  // a gets the total slaes in month if sales greater than equal to 20 20%
  if (Sale>=20){
    
   Salary  += Salary*0.20;
    cout<< "Total Salary after promotion---=-->" <<Salary;}

  else{
    cout<<"NO promotion";}
    
    
  
}
};

int main() {

  Employe employe1 = Employe("uzii","amazon",10,300,40);

employe1.print();
employe1.promotion();
}
#include<iostream>
#include<string>
using namespace std;
class Person{
private:
string surname;
string name;
string patronymic;
string address;
int year;
int phone;
int height;
int weight;
string floor;
public: 
Person ();
void get_Person(string surname_1);
friend void kol( string floor_1, Person *ptr, int n);
};

Person ::Person()
{  
cout<<"Vvedite prizvyshche: ";
cin>>surname;
cout<<"Vvedite imia: ";
cin>>name;
cout<<"Vvedite po_batkovi: ";
cin>>patronymic;
cout<<"Vvedite adresa: ";
cin>>address;
cout<<"Vvedite rik narodzhennia: ";
cin>>year;
cout<<"Vvedite telefon: ";
cin>>phone;
cout<<"Vvedite zrist: ";
cin>>height;
cout<<"Vvedite vaha: ";
cin>>weight;
cout<<"Vvedite stat: ";
cin>>floor;
cout<<endl;
}

void Person::get_Person(string surname_1)
{  
if(surname_1==surname)
{cout<<"prizvyshche: "<<surname<<endl;
cout<<"imia: "<<name<<endl;
cout<<"po_batkovi: "<<patronymic<<endl;
cout<<"adresa: "<<address<<endl;
cout<<"rik narodzhennia: "<<year<<endl;
cout<<"telefon: "<<phone<<endl;
cout<<"zrist: "<<height<<endl;
cout<<"vaha: "<<weight<<endl;
cout<<"stat: "<<floor<<endl;
} 
}


 void kol( string floor_1, Person *ptr,int n)
{ 
int c=0;
for(int i=0; i<n; i++)
  {
  if(floor_1==ptr[i].floor)
  c++;}
  cout<<"Otvet:"<<c<<endl;
}


int main()

{  int n, t;
 string surname_1;
 string mas;
cout<<"vvedite colichestvo lyidei: ";
cin>>n;
Person *people=new Person [n];


while(t!=0)


{  cout <<"Viberit: "<<endl;
   cout<<"1)Vivesti informatsiyu pro cheloveka."<<endl;
   cout<<"2)Podschitat kolichestvo lyudey po polu."<<endl;
    cout<<"Exit = 0"<<endl;
	cin>>t;
   
   switch(t)
   { case 1: {  
cout<<"vvedite familiyu cheloveka: ";
cin>>surname_1;
   
                 for(int i=0; i<n; i++)
                {
				people[i].get_Person(surname_1);}
    break;}
    
    case 2: { cout<<"vvedite stat:";
              cin>>mas;
              kol(mas, people, n);
		break;
	}
   
 

}}
delete [] people;

return 0;
}

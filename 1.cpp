#include<iostream>
#include<string>
using namespace std;

class Company_Admin_Side {
	
	public:
	// DATA MEMBERS DECLERATION
	int Id;
	float salary;
	string name;
	string address;
	double phone;
	string department;
	
	// null constructor
	
	public :
	Company_Admin_Side ( )
	{
		 
		 Id=0;
		 salary = 0;
		 name = "\0";
		 address = "\0";
		 phone = 0;
		 department ="\0";
	}
	
	// destructor
	
	~ Company_Admin_Side ( ) {
	   cout<<"Destructor is running "; 
	}
	
	// Parameteric constructor
	
	Company_Admin_Side (int id,float sal,string n, string adrs,double p, string dept )
	{
		Id=id;
		salary = sal;
		name = n;
		address=adrs;
		phone= p;
		department = dept;
	}
	
	
	
	void Show_Menu_of_AdminSide()
	{
			int choice;
	cout<<"\n\n \t\t  COMPANY MANAGEMENT SYSTEM:\n";
	cout<<"\t\t  ----------------------------------------------\n";
	cout<<"\t\t  1- INSERT THE DATA OF THE EMPLOYEE:\n";
	cout<<"\t\t  ----------------------------------------------\n";
	cout<<"\t\t  2- SEARCH RECENTLY ADDED DATA OF EMPLOYEE:\n";
	cout<<"\t\t  ----------------------------------------------\n";
	cout<<"\t\t  3- MODIFY THE DATA OF THE EMPLOYEE:\n";
	cout<<"\t\t  ----------------------------------------------\n";
	cout<<"\t\t  4- DELETE THE DATA OF THE EMPLOYEE:\n";
	cout<<"\t\t  ----------------------------------------------\n";
	cout<<"\t\t  5- SHOW ALL THE EMPLOYEES DATA:\n";
	cout<<"\t\t  ----------------------------------------------\n";
	cout<<"\t\t  6- EXIT FROM THE SYSTEM:\n";
	cout<<"\t\t  ----------------------------------------------\n";
	cout<<"\t\t  ENTER YOUR CHOICE: ";
	cin>>choice;
	switch(choice)
	{
		case 1: 
			system("cls");
		  insertdata();
			break;
		case 2:
		  Displaydata();
			break;
    }
	  }
	
	void insertdata()
	{
	         cout<<"\n\n \t\t   COMPANY MANAGEMENT SYSTEM:\n";
         	 cout<<"\t\t  ----------------------------------------------\n";
	         cout<<"\t\t     ----  ADD DETAILS OF THE EMPLOYEE  ----\n";
	         cout<<"\t\t  ----------------------------------------------\n";
	         cout<<"\t\t   ENTER EMPLOYEE ID: ";
	         cin>>Id;
	         cout<<"\t\t  ----------------------------------------------\n";
	         cout<<"\t\t   ENTER EMPLOYEE NAME: ";
	         cin>>name;
	         cout<<"\t\t  ----------------------------------------------\n";
	         cout<<"\t\t   ENTER EMPLOYEE ADDRESS: ";
             cin>>address;
	         cout<<"\t\t  ----------------------------------------------\n";
	         cout<<"\t\t   ENTER EMPLOYEE PHONE NUMBER: ";
             cin>>phone;
	         cout<<"\t\t  ----------------------------------------------\n";
	         cout<<"\t\t   ENTER EMPLOYEE DEPARTMENT: ";
	         cin>>department;
	         cout<<"\t\t  ----------------------------------------------\n";
	         cout<<"\t\t   ENTER EMPLOYEE SALARY: ";
	         cin>>salary;
    }
    
    void Displaydata()
    {
	
				cout<<"\n EMPLOYEE ID: "<<Id<<endl;
				cout<<" ENTER EMPLOYEE NAME: "<<name<<endl;
				cout<<" ENTER EMPLOYEE ADDRESS: "<<address<<endl;
				cout<<" ENTER EMPLOYEE PHONE NO: "<<phone<<endl;
				cout<<" ENTER EMPLOYEE DEPARTMENT: "<<department<<endl;
				cout<<" ENTER EMPLOYEE SALARY: "<<salary<<endl;
				
	}
	
	
};

// EMPLOYEES CAN SEE THEIR DATA BY ENTERING THEIR USER ID!
// Using Inheritance to using this feature 

class Employee_User_Side: public Company_Admin_Side{
	
	 public :
	void Employee_See_data()
	{
		    	cout<<"\n EMPLOYEE ID: "<<Id<<endl;
				cout<<" ENTER EMPLOYEE NAME: "<<name<<endl;
				cout<<" ENTER EMPLOYEE ADDRESS: "<<address<<endl;
				cout<<" ENTER EMPLOYEE PHONE NO: "<<phone<<endl;
				cout<<" ENTER EMPLOYEE DEPARTMENT: "<<department<<endl;
				cout<<" ENTER EMPLOYEE SALARY: "<<salary<<endl;
		
	}
	
	
};


int main()
{
	Employee_User_Side Employee;
     p:	
	int choice;
	cout<<"\n\n \t\t  COMPANY MANAGEMENT SYSTEM:\n";
	cout<<"\t\t  ----------------------------------------------\n";
	cout<<"\t\t  1- ADMIN OF THE COMPANY :\n";
	cout<<"\t\t  ----------------------------------------------\n";
	cout<<"\t\t  2- EMPLOYEE OF THE COMPANY :\n";
	cout<<"\t\t  ----------------------------------------------\n";
	cout<<"\t\t  3- EXIT FROM THE  PORTAL:\n";
	cout<<"\t\t  ----------------------------------------------\n";
	cout<<"\t\t  ENTER YOUR CHOICE: ";
	cin>>choice;
	switch(choice)
	{
		case 1: 
			system("cls");
		  Employee.Show_Menu_of_AdminSide();
			break;
		case 2:
		  Employee.Employee_See_data();
			break;
}
   goto p;
   
   return 0;
	
}

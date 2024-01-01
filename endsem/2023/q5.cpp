#include<iostream>
using namespace std;

class Employee{
private:
    string emp_name;
    int emp_id;
    int contact;
public:
    Employee(string n="null",int i=0,int m=0){
        emp_id=i;
        emp_name=n;
        contact=m;
    }
    virtual void getDetails() {
        cout << "Base class details: " << emp_name << ", " << emp_id << ", " << contact << endl;
    }
};

class child: public Employee{
private:
    string emp_add;
    string department;
public:
    child(string emp_add="nope",string department="nope",string n="null",int i=0,int m=0):Employee(n,i,m){
        this->emp_add=emp_add;
        this->department=department;
    }
    void getDetails() override{
        Employee::getDetails();
        cout<<"Child class details: "<<emp_add<<", "<<department<<endl;
    }
};

int main()
{
    Employee* e = new child("balawala","cs and it","prince",1,72480);
    e->getDetails();

    delete e;
    return 0;
}
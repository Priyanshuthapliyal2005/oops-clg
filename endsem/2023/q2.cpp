#include<iostream>
using namespace std;

class student{
private:
    int age;
    string name;
    string address;
public:
    student(){
        age=0;
        name="unknown";
        address="not available";
    }

    void setInfo(int a,string name){
        age=a;
        this->name=name;
    }

    void setInfo(string address){
        this->address=address;
    }

    void print(){
        cout<<"student name is "<<name<<" age is "<<age<<" lives at "<<address<<endl;
    }

    ~student(){
        cout<<"\nDestructor called for "<<name<<endl;
    }

};

int main()
{
    int n;
    cout<<"Enter number of students:"<<endl;
    cin>>n;
    student students[n];
    for(int i=0;i<n;i++){
        string name, address;
        int age;

        cout << "Enter name for student " << i + 1 << ": ";
        cin>>name;

        cout << "Enter age for student " << i + 1 << ": ";
        cin >> age;

        cout << "Enter address for student " << i + 1 << ": ";
        cin>>address; 

        students[i].setInfo(age, name);
        students[i].setInfo(address);
    }

    cout << "\nPrinting information for "<<n<<" students:\n";
    for (int i = 0; i < n; ++i) {
        students[i].print();
    }

    return 0;
}
#include<iostream>
using namespace std;
class student{
    public:
        string name="";
        int roll;
        void setroll(int roll){
            roll=roll;
        }
        void setname(string name){
            name=name;
        }
        int getroll(int roll){
            return roll;
        }
        string getname(string name){
            return name;
        }
};
int main()
{
    student e1;
    cout<<" roll :"<<e1.getroll(6)<<endl;
    cout<<" name :"<<e1.getname("aman")<<endl;

   return 0;
}
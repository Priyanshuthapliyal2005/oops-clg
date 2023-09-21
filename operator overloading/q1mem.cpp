#include<iostream>
using namespace std;
class ss{
    private :
        string s1;
        string s2;
    public:
        ss(string s1,string s2){
            this->s1=s1;
            this->s2=s2;
        }
        void operator+(){
            s1.append(s2);
        }
        void show(){
            cout<<s1<<endl;
        }

};
int main()
{
    int x=123;
    string b="xyz";
    string a=to_string(x);
    ss d1(a,b);
    d1.show();
    d1.operator+();
    d1.show();
    return 0;
}
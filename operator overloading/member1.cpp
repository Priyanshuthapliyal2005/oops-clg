#include<iostream>
using namespace std;
class xyz{
    private:
        int x,y;
    public:
        xyz(int x,int y){
           this->x=x;
           this->y=y;
        }
        void operator++(){
             x++;y++;
        }
        void show(){
            cout<<x<<"\t"<<y<<endl;
        }
};
int main()
{
    xyz d1(10,20);
    cout<<"before:";
    d1.show();
    d1.operator++();
    //++d1;
    cout<<"after:";
    d1.show();
    return 0;
}
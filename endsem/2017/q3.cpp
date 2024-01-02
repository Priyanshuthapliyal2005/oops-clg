#include<iostream>
#include<vector>
using namespace std;

class v{
private:
    vector<int>data;
public:
    v(vector<int>data){
        this->data = data;
    }
    v operator+(v &other){
        vector<int>result;
        for(int i=0;i<data.size();i++){
            result.push_back(data[i]+other.data[i]);
        }
        return v(result);
    }
    void show(){
        for(int i=0;i<data.size();i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    vector<int>data1 = {1,2,3,4,5};
    v v1(data1);
    v1.show(); 
    vector<int>data2 = {6,7,8,9,10};
    v v2(data2);
    v2.show(); 
    cout<<"After overloading with + : \n";
    v v3=v1+v2;
    v3.show(); 
    return 0;
}
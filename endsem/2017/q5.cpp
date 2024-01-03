#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream in1("a.txt");
    ifstream in2("b.txt");
    ofstream out("c.txt");

    string content1,content2;
    int cnt=0,cnt1=0;

    while(!in1.eof() && !in2.eof())
    {

        getline(in1,content1);
        getline(in2,content2);
        
        out<<content1<<endl;
        out<<content2<<endl;
    }

    return 0;
}
#include<iostream>
#include<fstream>

using namespace std;


int main()
{
    ifstream hin("a.txt");
    ofstream hout("b.txt");
    string content;
    while(!hin.eof())
    {
        getline(hin,content);
        hout<<content<<endl;
    }    
    hin.close();
    hout.close();
    return 0;
}
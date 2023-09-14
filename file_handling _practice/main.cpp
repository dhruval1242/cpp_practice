#include<iostream>
#include <fstream>

using namespace std;

int main(){
    fstream fs;
    string inp;
    fs.open("example.txt");
    while(cin>>inp){
        if(inp=="eof")
        break;
        // int l=inp.size();
        // cout<<inp[l-1]<<"@";
        // if(inp=="\n"){
        // cout<<"@";
        // fs<<"\n\n";
        // }
        fs<<inp<<"\n";
    }
    // fs<<"This is a testing code";
    cout<<"here";
    fs.close();
    string line;
    fs.open("example.txt");
    while(getline(fs, line)){
        cout<<line<<"\n";
    }
    fs.close();
    return 0;
}
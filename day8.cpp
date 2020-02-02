#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include<string>
using namespace std;


int main() {
    int n;
    string name;
    int number;
    string usr_input;
    map <string,int> phone_book;
    cin>>n;
    for(int i{0};i<n;i++){
        cin>>name;
        cin>>number;
        phone_book[name] = number;
    }
    while(cin>>usr_input){
        
        
        if(phone_book.find(usr_input) == phone_book.end()){
            cout<<"Not found"<<endl;
        }
        else{
            cout<<usr_input<<"="<<phone_book[usr_input]<<endl;
            
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

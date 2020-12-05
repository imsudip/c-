#include <iostream> 
#include <string>
using namespace std; 

int main(int argc, char** argv){

    string str=argv[1];
    cout<<argv[1]<<endl;
    
    static int alpha[26];
    for(int i=0;i<str.length();i++){
        if(str[i]>='a'&&str[i]<='z'){
            alpha[int(str[i])-97]++;
        }
    }
    for(int i=0;i<25;i++){
        if(alpha[i]!=0){
            cout<<char(i+97)<<" : "<<alpha[i]<<endl;
        }
    }
    return 0;
}
//
// Created by tushar on 20/7/24
//
#include<iostream>
using namespace std;

void lowerToUppercase(char ch[]){
   int index = 0;
   while(ch[index] != '\0'){
       if(ch[index] >='a' && ch[index] <='z')
           ch[index] = ch[index] - 'a' +'A';  // upper -> lower -'A' + 'a'
       index++;
   }

}

int main(){
    char name[20];
    cin.getline(name,20);
    lowerToUppercase(name);
    cout<<"\n"<<name;
    return 0;
}
#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;
int main(){
string temp;
string arr[150];
int i=0,j=0;
while(1){
cout << "Bir karakter gir : ";
cin >> temp;
if(temp=="0"){
break;
}else{
arr[i]=temp;
i++;
}
}

while(1){
if(j%2==0){
cout <<arr[j] << endl;
}else{
cout << "\t" << arr[j] << endl;
}
sleep(1);
j++;

if(j==i){
break;
}
}
}
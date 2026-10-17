//void=which does not return anything
/*
#include<iostream>
using namespace std;
void printName(){
    cout<<"heyyy";
}
int main(){
     printName();
    return 0;
} 
*/
/*
//void parameterised
#include<iostream>
using namespace std;
void printName(string name){
    cout<<"heyyy " << name<<"\n";
}
int main(){
    string name;
    cin >> name;
    printName(name);
                       //re-using the code
    string name2;
    cin>>name2;
    printName(name2);

    return 0;
}
    */

/*
// return
#include<iostream>
using namespace std;
int sum(int num1,int num2){
    int num3=num1+num2;
    return num3;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int res=sum(num1,num2);
    cout<<res;
    return 0;
}
 */

//pass by value
/*ex1
#include<iostream>
using namespace std;
int sum(int num1,int num2){
    int num=num1+num2;
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;
}
int main(){
    int num1,num2,num;
    cin>>num1>>num2;
    sum(num1,num2);
    num=num1+num2;
    cout<<num;
    return 0;
}
*/
/*
//ex2
#include<iostream>
using namespace std;
void doFunction(int num){
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num=20;
    doFunction(num);
    cout<<num<<endl;
    return 0;
}
    */

//pass by reference
#include<iostream>
using namespace std;
void doFunction(int &num){
    num +=5;
    cout<<num<<endl;
}
int main(){
    int num=20;
    doFunction(num);
    cout<<num;
    return 0;
}
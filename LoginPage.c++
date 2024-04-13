#include<iostream>
#include<fstream>
using namespace std;

class temp{
    string userName,Email,password;
    string searchName,searchPassword,searchEmail;
    fstream file;
    public:
    void login();
    void signUP();
    void forgot();
}obj;
int main(){
    int choice;
    cout<<endl<<"1- Login";
    cout<<endl<<"2- Sign-Up";
    cout<<endl<<"3- Forget Password";
    cout<<endl<<"4- Exit";
    cout<<endl<<"Enter Your Choice :: ";
    cin>>choice;

    switch(choice){
        case 1:
        obj.login();
        break;
        case 2:
        obj.signUP();
        break;
        case 3:
        obj.forgot();
        break;
        case 4:
        return 0;
        break;
        default:
        cout<<"Invalid Selection....";
    }
}
void temp ::signUP(){
    cout<<endl<<"Enter Your User Name :: ";
    cin>>userName;
    cout<<endl<<"Enter Your Email Address :: ";
    cin>>Email;
    cout<<"Enter Your Password :: ";
    cin>>password;

    file.open("LoginData.txt",ios :: out | ios :: app);
    file<<userName<<"*"<<Email<<"*"<<password<<endl;
    file.close();
}

void temp ::login(){
    cout<<"----------LOGIN----------"<<endl;
    cout<<"Enter Your UserName :: "<<endl;
    cin>>searchName;
    cout<<"Enter Your Password :: "<<endl;
    cin>>searchPassword;
    file.open("LoginData.txt",ios :: in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    while(!file.eof()){
        if(userName==searchName){
            if(password==searchPassword){
                cout<<"UserName :: "<<userName<<endl;
                cout<<"Email :: "<<Email<<endl;
            }
            else{
                cout<<"Password Is In Correct";
            }
        }
        getline(file,userName,'*');
        getline(file,Email,'*');
        getline(file,password,'\n');
    }
        file.close();
}

void temp :: forgot(){
    cout<<endl<<"Enter The UserName :: ";
    cin>>searchName;
    cout<<endl<<"Enter Your Email Address :: ";
    cin>>searchEmail;

    file.open("LoginData.txt",ios :: in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    while(file.eof()){
        if(userName==searchName){
            if(Email==searchEmail){
                cout<<endl<<"Account Found...";
                cout<<"Your Password :: "<<password;
            }
            else{
                cout<<"Not Found...";
            }
        }
        else{
            cout<<"Not Found...";
        }
    }
    file.close();
}
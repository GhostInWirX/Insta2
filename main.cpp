#include<iostream>
#include<string>
#include"FIP.h"
#include"Functions.cpp" 
using namespace std;
int main(void)
{
    int option=0;
    string call[10]={"Jhon","Stiffler","Adam","Sergei","Aidra","Scarlet","Natasha","Kiran","Shafaq","Rupanzal"};//We Made It Permannet Cause We Not Gonna Dlete This Further As This Would B The Permanent Thing There
    int followers[10]={23,192,98,12,1232,210,762,12,0};
    int following[10]={21,981,45,32,123,98,709,809,1021,0};
    /*Objects*/
     regizter obj;
     login obj2;
     profile obj3;
     fakeNotifications obj4;
     searching obj5;
     friends obj6;
     deletefiles obj7;
     char opt;
    /**/
    int choice;
   bool verify1=false;
   bool verify3=false;
   while(opt!='e')
   {
    while(verify1==false&&verify3==false)
    {
    cout<<"Press 1 To Register And 2 Already A Member"<<endl;
    cin>>choice;
    if(choice==1)
    {
    obj.reg();
    system("pause");
    system("cls");
    }
    else
    {
    obj2.log(&verify1,&verify3);
    }
    }
    //system("cls");
    if(verify1==true&&verify3==true)
    {
        while(option!=8)
        {
        cout<<"Press 1 To Your Show Profile "<<endl;
        cout<<"Press 2 To Your Show Followers Follwed Ya "<<endl;
        cout<<"Press 3 To Your Show Comments On Your Posts "<<endl;
        cout<<"Press 4 To Your Search/Follow/Add To Friend's List "<<endl;
        cout<<"Press 5 To Your See Who Accepts Your Friend's Request "<<endl;
        cout<<"Press 6 To Show Friend List/Unfriend/Text Your Friend  :"<<endl;
        cout<<"Press 7 To delete files :"<<endl;
        cout<<"Press 8 To logout :"<<endl;
        cin>>option;
        switch(option)
        {
         case 1:
        obj3.prof();
        system("pause");
        system("cls");
        break;
        case 2:
        obj4.generatefollowers(call);
         system("pause");
        system("cls");
        break;
        case 3:
        obj4.generatecomments(call);
         system("pause");
        system("cls");
        break;
        case 4:
        obj5.search(call,followers,following);//Search Follow And Add
         system("pause");
        system("cls");
        break;
        case 5:
        obj6.onlyfriends(obj5);
         system("pause");
        system("cls");
        break;
        case 6:
        obj6.friendlist(obj5,call);
         system("pause");
        system("cls");
        break;
        case 7:
       obj7.del();
        break;
        }
        }
    }
    system("cls");
   // verify1=false;
   // verify3=false;
    cout<<"Press e To Exit Program And Any Key To Go To Logout Page : "<<endl;
    cin>>opt;
    system("cls");
   }
}
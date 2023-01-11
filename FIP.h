#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<ctime>
using namespace std;
class regizter
{
  public:
  static string rname;
  string rpass;
    public:  
    regizter(){rname="\n";rpass="\n";}
    void reg();
};
class login
{
    protected:
    string ipass;//Protected As We Need That In The Further Functions
    public: 
    string iname;
    void log(bool *verify1,bool *verify3);
};
/*    Combine Programming */
class profile
{
  //Name
  //Gender
  //DOB
  //Age
  //Status
  //Pictures
  //Posts
   public: 
   static int follow;
   static int followng;
   void prof();
   void extras();
  
};
class fakeNotifications:public profile
{

public:
  //Someone Likes You
  //Someone Follows You
  //Someone Comment You
  void generatefollowers(string call[]);
  void generatecomments(string call[]);
 // void globalgenerate(int call[],int followers[],int following[])
};
class searching
{
  public:
  bool frnd[10]={false,false,false,false,false,false,false,false,false,false};
  void search(string call[],int followers[],int following[]);
};
class friends
{
  public:
  void onlyfriends(searching obj);
  void friendlist(searching &obj,string call[]);
};
class deletefiles
{
  public:
  void del();
};
//For Funcs
string regizter::rname="\n";
int profile::follow=0;
int profile::followng=0;
void regizter::reg()
{ 
  string regdet;
  string store;
  string gender;
   int dob=0;
   int age;
    bool verify2=true;
    cout<<"Enter Register Name :"<<endl;
    cin>>rname;
    cout<<"Enter Password To Register :"<<endl;
    cin>>rpass;
    cout<<"What's Your Gender Male ,Female Or Disguised :"<<endl;
    cin>>gender;
    for(int i=0;i<3;i++)
    {
    cout<<"Enter Date Of Birth D/M/Y Formate:"<<endl;
    cin>>dob;
    if(i==2){age=2023-dob;}
    }
    /***/
    fstream eric;
    eric.open("global.txt",ios::out|ios::app);
    if(eric.is_open())
    {
      eric<<rname<<endl;
    }

    /**/
    string line;
    fstream endo;
    regdet=rname+"regdetails.txt";
    endo.open(regdet,ios::in);
    if(endo.is_open())
    {
      while(getline(endo,line))
      {
        cout<<line<<endl;
        if(line==rname)
        {
           verify2=false;
           cout<<"User Already Exists :"<<endl;
        }
      }
    }
    /**/
    if(verify2==true)
    {
    fstream ecto;
    store=rname + "input.txt";
    ecto.open(store,ios::out);
    if(ecto.is_open())
    {
      ecto<<"Profile Name :"<<rname<<endl;
      ecto<<"Gender :"<<gender<<endl;
      ecto<<"Date Of Birth :"<<dob<<endl;
      ecto<<"Present Age Is :"<<age<<endl;
    }
    ecto.close();
    }
     fstream exo;
     string use;
        exo.open(regdet,ios::out);
        if(exo.is_open()&&verify2==true)
        {
            
            exo<<rname<<endl;
            exo<<rpass<<endl;
            cout<<"User Registered Successfully :"<<endl;
        }
        exo.close();
}
void login::log(bool *verify1,bool *verify3)
{
    cout<<"Input Login Name :"<<endl;
    cin>>iname;
    cout<<"Input Login Password"<<endl;
    cin>>ipass;
    string line;
    fstream endo;
    string hu;
    string hk;
    string f;
   fstream read;

   read.open("global.txt",ios::in);
   if(read.is_open())
   {
         while(getline(read,hu))
      {
        cout<<hu<<endl;
        if(hu==iname)
        {
          hk=hu;
        }
      }

   }
    
    f=hk + ("regdetails.txt");
    endo.open(f,ios::in);
    if(endo.is_open())
    {
      while(getline(endo,line))
      {
        cout<<line<<endl;
        
        if(line==iname)
        {
           *verify1=true;
        }
        if(line==ipass)
        {
            *verify3=true;
        }
      }
    }
    endo.close();  
}


void profile::prof()
{
    string erex;
    string line;
    fstream endo;
    erex=regizter::rname+("input.txt");//Profile Read Horai Hai
    endo.open(erex,ios::in);
    if(endo.is_open())
    {
      while(getline(endo,line))
      {
        cout<<line<<endl;
      }
    }
    else
    {
      cout<<"Not Found"<<endl;
    }
}
void profile::extras()
{
  int status;
  cout<<"Status:"<<endl;
  cin>>status;
  cout<<"Posts Added By Rupanzel"<<endl;
  cout<<"Profile Picture Too :"<<endl;
  cout<<"Number Of Followers :"<<endl;
  cout<<follow;
}


void fakeNotifications::generatefollowers(string call[])
{

       string fol;
       fol=regizter::rname+("followerslogs.txt");
     int  number;
     int nb;
     fstream esco;
     esco.open(fol,ios::out|ios::app);
     srand(time(0));
     nb=rand()%10;
     if(esco.is_open())
     {
     for(int i = 0; i < nb; i++)
    {
      number = rand() % 10;
    esco<<call[number] <<" Follows You "<<number <<" Minutes Ago "<<endl;
    esco<<"***************************************************************"<<endl;
      follow++;
    }
     }
     string line;
     fstream er;
    er.open(fol,ios::in);
    if(er.is_open())
    {
      while(getline(er,line))
      {
        cout<<line<<endl;
      }
  }
}
  void fakeNotifications::generatecomments(string call[])
  {
    string cmnts[15]={" Woah "," Thumbs Up","Awesome"," Nice"," Fazool Post Hai "," Hmm "," Kia Baat "," Sad Lyfe "," Oh Wow"," Kewl"," Nice Post"," Okay Nice ","HAHAHA","bRUUUU","Lmao"};

     int  number;
     int nb;
     fstream esco;
      string fol;
      fol=regizter::rname+("commentslogs.txt");
     esco.open(fol,ios::out|ios::app);
     srand(time(0));
     nb=rand()%10;
     if(esco.is_open())
     {
     for(int i = 0; i < nb; i++)
    {
      number = rand() % 10;
    esco<<call[number] <<" Commented On Your Post "<<number <<" Minutes Ago "<<endl;
    esco<<cmnts[number+5]<<endl;
    esco<<"***************************************************************"<<endl;
    }
     }
      string line;
      fstream eko;
    eko.open(fol,ios::in);
    if(eko.is_open())
    {
      while(getline(eko,line))
      {
        cout<<line<<endl;
      }
  }

  }
  void searching::search(string call[],int followers[],int following[])
  {
       // bool frnd[10]={false,false,false,false,false,false,false,false,false,false};
           // folow();
            string text[10];
            bool v=false;
            
            int choice;
            string place;
            int temp;
            cout<<"Place Your Keywords On SearchBar :"<<endl;
            cin>>place;
            for(int i=0;i<10;i++)
            {
                if(place==call[i])
                {
                    temp=i;
                    cout<<"User Name :" <<call[i]<<endl;
                    cout<<"Profile Picture Is :"<<endl;
                    cout<<"No Of Following :"<<followers[i]<<endl;
                    cout<<"No Of Followers :"<<following[i]<<endl;
          /***************************************************************Followers*****************************/
            cout<<"Press 1 To Follow Him/Her"<<endl;
            cout<<"Press 2 To Add To Friends List"<<endl;
            cin>>choice;
            switch(choice)
            {
                case 1:
                cout<<"Successfully Followed "<<call[temp]<<endl;
                followers[temp]=followers[temp] + 1;
                break;
                case 2:
                cout<<"Friend Request Sent :"<<call[temp]<<endl;
               frnd[i]=true;
                break;
                default:
                cout<<"Wrong choice Entered:"<<endl;
                break;
            }
                }
                else if(i>9&&place!=call[i])
                {
                   cout<<"User Not Found :"<<endl;
                }
            }
           
  }


  void friends::onlyfriends(searching obj)
  {
    for(int i=0;i<10;i++)
    {
     if( obj.frnd[i]==true)
     {
        obj.frnd[i]=false;
    int  number;
    srand(time(0));
     number = rand() % 2;
        if(number==1)
        {
          cout<<"Friend Request Accepted :"<<endl;
          cout<<"You Can Now Message EachOther & Share "<<endl;
          obj.frnd[i]=true;
        }
        else
        {
          cout<<"Friend Requested Rejected :"<<endl;
          obj.frnd[i]=false;
        }

      }
     }
  }
    void friends::friendlist(searching &obj,string call[])
    { 
      string chiu;
      bool count=false;
        string name2;
      string name;
      string text;
       fstream erid;
       string line; 
       fstream egor;
      fstream rem;
          fstream fstr;
          chiu=regizter::rname+("friends.txt");
      int set;
      cout<<"Press 1 To Show Friend's List :"<<endl; 
      cout<<"Press 2 If You Want To Text Your Friend :"<<endl;
      cout<<"Press 3 If You Want To Unfriend Your Friend :"<<endl;
      cin>>set;
      switch(set)
      {
        case 1:
       
      for(int i=0;i<10;i++)
      {
      if(obj.frnd[i]==true)
      {
        egor.open(chiu,ios::out);
        if(egor.is_open())
        {
         egor<< " *) "<<call[i]<<endl;
        }
        egor.close();
      }
      }
       erid.open(chiu,ios::in);
           if(erid.is_open())
         {
           while(getline(erid,line))
          {
        cout<<line<<endl;
            }
         }
       erid.close();
      system("pause");
      system("cls");
      break;
        case 2:
        cout<<"Enter Name Of Your Friend You Want To Text :"<<endl;
        cin>>name;
        for(int i=0;i<10;i++)
        {
        if(obj.frnd[i]==true)
        { 

          if(call[i]==name)
          {
            string chaw;
              chaw=regizter::rname+("chatslogs.txt");
            cout<<"Write Your Text To Mr :"<<name<<endl;
            cin.ignore();
            getline(cin,text);
            fstr.open(chaw,ios::out|ios::app);
              fstr<<text;
              fstr.close();
          }
        }
        
        else if(i>9&&obj.frnd[i]!=true)
        {
          cout<<"User Not In Your Friend's List "<<endl;
        }
        }
        break;
        case 3:
        cout<<"Enter Name Of Your Friend You Want To Unfriend :"<<endl;
        cin>>name2;
          for(int i=0;i<10;i++)
        {
        if(obj.frnd[i]==true)
        { 
        if(call[i]==name2)
        { 
          
          rem.open(chiu,ios::out);
          if(rem.is_open())
          {    cout<<"Value Of Obj Friend iS  :"<< obj.frnd[i] <<endl;
            cout<<"we fhwe f ew fwef wef wefewf "<<endl;
          rem<<call[i]<<endl;
          rem<<"Removed From Friend's List :"<<endl; 
          
          } 
          rem.close();
        }
        }
        } 
        // obj.frnd[0]=false;
        break; 
      }
    }
  void deletefiles::del()
    {
      //Delete Accounts
      int status;
      string hes;
      string hoe;
      string fer;
        fer= regizter::rname + "followerslogs.txt";
        hoe= regizter::rname + "followerslogs.txt"; 
        hes= regizter::rname + "commentslogs.txt";
          char s[hes.length()]; 
          char w[hoe.length()];
          char k[fer.length()];
          strcpy(k,fer.c_str());
         strcpy(w,hoe.c_str());
        strcpy(s,hes.c_str());//c_str() We Use To Copy The String Into The Respective Array Of Characters E.g Conversion Of String Into Character Array
         remove(w);
         remove(s);
         remove(k);
         //Now We Gonna Remove The Names 
          
    }

    
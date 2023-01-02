#include<iostream>
#include<fstream>
#include <cstring>
#include<iomanip>
#include<conio.h>
#include<string>
#include<windows.h>
#include<ctime>

using namespace std;

int choice;
void welcome();
void table(int a, string b, int c, int d, int e, int f);
void menu();
void analyse();
void Tax(float a);
void page();
ofstream myfile;

int Total=0,Tprofit=0,v=0;
float taxe;
int main(){
	system ("cls");
welcome();

menu();

return 0;
}
void welcome(){
  system("color 30");
cout<<endl<<"                **    *    **  **********  **          *********  *********  ***       ***  ********** "<<endl;
      cout<<"                **   * *   **  **          **          **         **     **  ** *     * **  **         "<<endl;
      cout<<"                **  *   *  **  **********  **          **         **     **  **  *   *  **  ********** "<<endl;
      cout<<"                ** *     * **  **          **      **  **         **     **  **   * *   **  **          "<<endl;
      cout<<"                ***       ***  **********  **********  *********  *********  **    *    **  **********  \n"<<endl;

cout<<"                **************************************************************************************\n\n";
cout<<"                                                  Z REPORT ANALYZER\n\n";
cout<<"                **************************************************************************************\n\n"<<endl;

}
void menu(){ 

      cout<<"                                               1. To Daily Report Analyzer                               "<<endl;
      cout<<"                                               2. Annual Tax                                             "<<endl;
      cout<<"                                               3. Help                                                   "<<endl;
      cout<<"                                               4. About                                                  "<<endl;
      cout<<"                                               5. Exit                                                   "<<endl;
      if(v!=0){   
      cout<<"           ------You Can Get The Analyzed Report in txt format in the path of this source code---------   "<<endl;
        }

cin>>choice;
switch(choice){
  case 1:{
system("cls");
  analyse();
    break;
  }
  case 2:{
system("cls");
  system("cls");
  float b;
  cout<<"Enter Your Annual Income"<<endl;
  cin>>b;
   Tax(b);
break;
  }
  case 3:
    {
    system("cls");
    char s;
    cout<<"           ||HELP  CENTER||         "<<endl;
    cout<<"-Fill all the nessesary steps as you are asked.           "<<endl;
    cout<<"-Any input can not be empty or 0.         "<<endl;
    cout<<"-For further detail contact us on telegram by using the link below:         "<<endl;
    cout<<"    1: @Um_kf_smith                     "<<endl;
    cout<<"    2: @a25212                           "<<endl;
    cout<<"    3: @@Oliyaadab                       "<<endl;
    cout<<"Press Any Key To Go Back "<<endl;
    _getch();
   system("cls");
   menu();

  }
  case 4:{ char s;
    system("cls");
    cout<<"        ||ABOUT Z-REPORT||         "<<endl;
    cout<<" This program helps peoples who are"<<endl;
    cout<<" having hard time to analyse their "<<endl;
    cout<<" daily income status.             "<<endl;
    cout<<" It provide a nit summerization of all"<<endl;
    cout<<" the nessesary detail in to a table which"<<endl;
    cout<<" is much more easy to analyse.            "<<endl;
    cout<<"Press Any Key To Go Back "<<endl;
    _getch();
    system("cls");
    menu();
  }
  case 5:{
    system("cls");
    exit(0);
    break;
  }
  
  default:
      system("cls");
    cout<< "INVALID INPUT!!! Please Enter The Available options."<<endl;
    cout<<"Press Any Key To Go Back "<<endl;
    _getch();
    system("cls");
    menu();
}
}
void analyse(){
int n;

    cout<<"How Much Item Do You Sell Today?"<<endl;

    cin>>n;
    system("cls");
    if(n<=0){

            cout<<"INVALID INPUT !!!  Enter Again"<<endl;

            cin>>n;
            system("cls");
            }
            string aa[18];

     int  bb[50],cc[50],dd[50],ee[50];

    for(int ii=1;ii<=n;ii++){

        cout<<"Enter Item "<<ii<<" Name: "<<endl;
        cin.ignore();
        getline(cin,aa[ii]);
        system("cls");
        cout<<"Enter The Buying Price: "<<endl;
        cin>>bb[ii];
        system("cls");
        for(int z=0;z>=0;z++){

        if(bb[ii]<=0){

            cout<<"Value Can't Be Zero"<<endl;
            cin>>bb[ii];
            system("cls");
            }
        else if(bb[ii]>0) {
        break;
        }
        else{
            break;
        }
        }
        cout<<"Enter The Selling Price"<<endl;

        cin>>cc[ii];
        
        for(int z=0;z>=0;z++){

        if(cc[ii]<bb[ii]){
            int oo;
            cout<<"The Amount You Entered is Less Than The Buying Price"<<endl;
            cout<<" Press 1 To Continue :"<<endl;
            cout<<" Press 0 To To Enter Again :"<<endl;
            cin>>oo;
            system("cls");
            if(oo==1){
            break;
            }
            else if(oo==0){
            cout<<"Enter Again"<<endl;

            cin>>cc[ii];
            system("cls");
            }
            }
            else if( cc[ii]>bb[ii]){
            break;
            }
            else{
            break;
            } 
        }
        system ("cls");
        cout<<"Enter The No Of Iteam You Have At The Beginning Of The Day"<<endl;

        cin>>dd[ii];
        system("cls");
        for(int z=0;z>=0;z++){

          if(dd[ii]<=0){

            cout<<"Value Can't Be Zero"<<endl;

            cout<<"Enter Again"<<endl;

            cin>>dd[ii];
            system("cls");
        }
        else if(dd[ii]>0) {
        break;
        }
        else{
            break;
        }
        }
        cout<<"Enter No Of Iteam You Sell Today"<<endl;

        cin>>ee[ii];
       
        for(int z=0;z>=0;z++){

         if(ee[ii]>dd[ii]){

            cout<<"The Amount You Entered is greater Than The Iteam You Have At The Beginning Of The Day"<<endl;

            cout<<"Enter Again"<<endl;

            cin>>ee[ii];
            system("cls");
        }
        else if(ee[ii]>dd[ii]){
            break;
        }
        else{
            break;
        }
        }
        system("cls");
}
system("cls");
 page();
 

 for(int jj=1;jj<=n;jj++){

     int profit[50],left[50],total[50];

    left[jj]=dd[jj]-ee[jj];
    total[jj]=cc[jj]*ee[jj];
    profit[jj]=(cc[jj]-bb[jj])*ee[jj];
    Tprofit+=profit[jj];
    Total+=cc[jj]*ee[jj];
   
  table ( jj, aa[jj], ee[jj], left[jj],total[jj],profit[jj]);

    }
    	 myfile.open("Your Analyzed Data Storage.txt", ios::app);
       myfile<<"----------------------------------------------------------------------------------------------------------------\n";

  cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
  cout<<"      - You have Totally sold "<<Total<<" ETB "<<endl;
  cout<<"      - And You have made a Total Profit of "<<Tprofit<<" ETB "<<endl;
          myfile<<"      - You have Totally sold "<<Total<<" ETB \n";
          myfile<<"      - And You have made a Total Profit of "<<Tprofit<<" ETB \n";
          myfile.close();
  cout<<"      *********************************************************"<<endl;
  cout<<"      *********************************************************"<<endl;
  cout<<"      ~~~~~~~~YOU SUCCESSFULLY ANALYSE YOU DAILY REPORT~~~~~~~~"<<endl;
  cout<<"      *********************************************************"<<endl;
  cout<<"      *********************************************************"<<endl;
  cout<<"Press 1 to Your Tax :"<<endl;
  cout<<"press 0 To Go Back : "<<endl;
  v++;
  for(int z=0;z>=0;z++){ 
   int r;
  cin>>r;
system("cls");
    if(r==1){
    Tax(Total);
    }
    else if(r==0){
  	 menu();
     }
     else{
     cout<<"Try Again";
	 } 
	 }  
char s;
cout<<"Press Enter To Go Back "<<endl;
  system("cls");
    menu();
}
void table(int a, string b, int c, int d, int e, int f){
cout<<"-------+--------------------+--------------------+--------------------+--------------------+--------------------"<<endl;
cout<< "|"<<left<<setw(6)<<a<<"|" <<left<<setw(20)<<b<< "|"<<left<<setw(20)<< c<< "|"<<left<<setw(20)<<d<< "|"<< left<<setw(20)<< e<< "|"<<left<<setw(20)<< f<< "|\n";
	 myfile.open("Your Analyzed Data Storage.txt", ios::app);
   myfile<<"-------+--------------------+--------------------+--------------------+--------------------+--------------------\n";
   myfile<< "|"<<left<<setw(6)<<a<<"|" <<left<<setw(20)<<b<< "|"<<left<<setw(20)<< c<< "|"<<left<<setw(20)<<d<< "|"<< left<<setw(20)<< e<< "|"<<left<<setw(20)<< f<< "|\n";
   myfile.close();
}

void page(){

cout<<"\n\n----------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"|"<<left<<setw(6)<<"NO"<< "|"<<left<<setw(20)<<"ITEM NAME"<<"|" <<left<<setw(20)<<"NO OF ITEM SOLD"<< "|"<<left<<setw(20)<< "NO ITEM LEFT "<<"|"<<left<<setw(20)<< "INCOME FROM THE ITEM"<<"|"<<left<<setw(20)<< "PROFIT"<< "|\n";
	
		myfile.open("Your Analyzed Data Storage.txt", ios::app);

		  time_t curr_time;
	    curr_time = time(NULL);
	    char *tm = ctime(&curr_time);
myfile<<"\n\n*****************************************************************************************************************\n"; 
myfile<<"                                                "<<tm;
myfile<<"*****************************************************************************************************************\n \n";
myfile<<"\n\n----------------------------------------------------------------------------------------------------------------\n";
myfile<<"|"<<left<<setw(6)<<"NO"<< "|"<<left<<setw(20)<<"ITEM NAME"<<"|" <<left<<setw(20)<<"NO OF ITEM SOLD"<< "|"<<left<<setw(20)<< "NO ITEM LEFT "<<"|"<<left<<setw(20)<< "INCOME FROM THE ITEM"<<"|"<<left<<setw(20)<< "PROFIT"<< "|\n";
myfile.close();
}

void Tax(float a){
  int tt;
    if(choice!=2){
cout<<" ~~Choose Your Annual Income Rate~~"<<endl<<endl;    
cout<<"      1: 0 - 7,200"<<endl;
cout<<"      2: 7,201 - 19,800"<<endl;
cout<<"      3: 19,801 - 38,400"<<endl;
cout<<"      4: 38,401 - 63,000"<<endl;
cout<<"      5: 63,001 - 93,600"<<endl;
cout<<"      6: 93,601 - 130,800"<<endl;
cout<<"      7: Over 130,800"<<endl;
    
cin>>tt;
}
else if(choice==2){
  if(a<7200){
  tt=1;
  }
   else if(tt>7200 && tt<19800){
     tt=2;
   }
   else if(tt>19800 && tt<38400){
     tt=3;
   }
     else if(tt>38400 && tt<63000){
       tt=4;
     }
      else if(tt>63000 && tt<93600){
        tt=5;
      }
       else if(tt>93600 && tt<130800){
         tt=6;
       }
        else if(tt>130800){
          tt=7;
        }
          else{
    cout<<"INVALID INPUT!!!";
     cout<<"Press Any Key To Go Back "<<endl;
     system("cls");
   menu();
  }
}
else{
  cout<<"invalid input";
    system("cls");
   menu();
}
system("cls");
switch(tt){
    case 1:{
        
    int zz;
    cout<<"* Your Are Not Going To Be Taxed."<<endl;
      if(choice!=2){
    cout<<"* Your Have A Total Profit of : "<<Tprofit<<" ETB"<<endl;
      }
    cout<<"Press 1 To Go Back "<<endl;
    cin>>zz;
    system("cls");
		if(zz==1){
    system ("cls");
    menu();
    }
    }
    case 2:{

        int zz,hh;
	
    taxe=(a/100)*10;
	  if(choice==2){
      cout<<"* Your Annual Taxe Is : "<<taxe<<" ETB"<<endl;
    }
    else{
      cout<<"* Your Daily Taxe Is : "<<taxe<<" ETB"<<endl;
    }
    if(choice==2){
    hh=Tprofit-taxe;
    cout<<"* Your Profit After You Pay For Tax : "<<hh<<" ETB"<<endl;
    }
    cout<<"Press 1 To Go Back "<<endl;
    cin>>zz;
    
		if(zz==1){
    system ("cls");
    menu();
    }
    }
    case 3:{
         int zz,hh;

    taxe=(a/100)*15;
	
  	if(choice==2){
      cout<<"* Your Annual Taxe Is : "<<taxe<<" ETB"<<endl;
    }
    else{
      cout<<"* Your Daily Taxe Is : "<<taxe<<" ETB"<<endl;
    }
    if(choice!=2){
    hh=Tprofit-taxe;
    cout<<"* Your Profit After You Pay For Tax : "<<hh<<" ETB"<<endl;
    }
    cout<<"Press 1 To Go Back "<<endl;
    cin>>zz;
		if(zz==1){
    system ("cls");
    menu();
    } 
    }
    case 4:{
         int zz,hh;
	
    taxe=(a/100)*20;
	
   	if(choice==2){
      cout<<"* Your Annual Taxe Is : "<<taxe<<" ETB"<<endl;
    }
    else{
      cout<<"* Your Daily Taxe Is : "<<taxe<<" ETB"<<endl;
    }
     if(choice!=2){
    hh=Tprofit-taxe;
    cout<<"* Your Profit After You Pay For Tax : "<<hh<<" ETB"<<endl;
    }
    cout<<"Press 1 To Go Back "<<endl;
    cin>>zz;
		if(zz==1){
    system ("cls");
    menu();
    }
    }
    case 5:{
         int zz,hh;
	
    taxe=(a/100)*25;
	
	if(choice==2){
      cout<<"* Your Annual Taxe Is : "<<taxe<<" ETB"<<endl;
    }
    else{
      cout<<"* Your Daily Taxe Is : "<<taxe<<" ETB"<<endl;
    }
  if(choice!=2){
    hh=Tprofit-taxe;
    cout<<"* Your Profit After You Pay For Tax : "<<hh<<" ETB"<<endl;
    }
    cout<<"Press 1 To Go Back "<<endl;
    cin>>zz;
		if(zz==1){
    system ("cls");
    menu();
    }
    }
    case 6:{
          int zz,hh;

    taxe=(a/100)*30;
	
if(choice==2){
      cout<<"* Your Annual Taxe Is : "<<taxe<<" ETB"<<endl;
    }
    else{
      cout<<"* Your Daily Taxe Is : "<<taxe<<" ETB"<<endl;
    }
   if(choice!=2){
    hh=Tprofit-taxe;
    cout<<"* Your Profit After You Pay For Tax : "<<hh<<" ETB"<<endl;
    }
    cout<<"Press 1 To Go Back "<<endl;
    cin>>zz;
		if(zz==1){
    system ("cls");
    menu();
    }
    }
    case 7:{
          int zz,hh;
	
    taxe=(a/100)*35;
	
	  if(choice==2){
      cout<<"* Your Annual Taxe Is : "<<taxe<<" ETB"<<endl;
    }
    else{
      cout<<"* Your Daily Taxe Is : "<<taxe<<" ETB"<<endl;
    }
     if(choice!=2){
    hh=Tprofit-taxe;
    cout<<"* Your Profit After You Pay For Tax : "<<hh<<" ETB"<<endl;
    }
    cout<<"press 1 to go back "<<endl;
    cin>>zz;
		if(zz==1){
    system ("cls");
    menu();
    }
    }
    default:
      system("cls");
    cout<< "INVALID INPUT!!! Please Enter The Available options."<<endl;
    menu();
}
}
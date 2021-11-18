#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;

void Hacking_momento()
{
  system("cls");
  int numbah;
  char list[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  for(int i=0;i<75000;i++)
  {
    numbah = rand() % 61;
    cout<<list[numbah];
  }
  system("cls");
  sleep(1);
  cout<<"..."<<endl;
  sleep(1);
  cout<<".."<<endl;
  sleep(1);
  cout<<"."<<endl;
  sleep(1);
}



int main()
{
  string answer;
  system("color 0a");
  cout<<"Start fake hacking?(yes/no)"<<endl;
  cin>>answer;
  if(answer=="yes")
  {
    system("cls");
    sleep(0.1);
    cout<<"Starting in 3..."<<endl;
    sleep(1);
    system("cls");
    cout<<"2..."<<endl;
    sleep(1);
    system("cls");
    cout<<"1..."<<endl;
    sleep(1);
    system("cls");
    cout<<"Started."<<endl;
    sleep(0.25);
    system("cls");
    //start hacking
    Hacking_momento();
    cout<<"Federal Bureal of Investigation(FBI) hacked."<<endl;
    sleep(3);
    system("cls");
    Hacking_momento();
    cout<<"National Aeronautics and Space Administration(NASA) hacked."<<endl;
    sleep(3);
    system("cls");
    Hacking_momento();
    cout<<"Activated the nuclear bomb."<<endl;
    sleep(1);
    cout<<"Now... happy yet?"<<endl;
    return 0; //
  }
  else if(answer=="no")
  {
    cout<<"ok"<<endl;
    return 0;
  }
  else
  {
    cout<<"i will consider it as a no"<<endl;
    return 0;
  }

}

#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;

void Hacking_momento()
{
  int numbah;
  char list[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  for(int i=0;i<50000;i++)
  {
    numbah = rand() % 61;
    cout<<list[numbah];
  }
  sleep(0.25);
  cout<<"..."<<endl;
  sleep(0.25);
  cout<<".."<<endl;
  sleep(0.25);
  cout<<"."<<endl;
  sleep(0.25);
}



int main()
{
  string answer;
  system("color 0a");
  int numbah;
  cout<<"Start fake hacking?(yes/no)"<<endl;
  cin>>answer;
  if(answer=="yes")
  {
    sleep(0.1);
    cout<<"Starting in 3..."<<endl;
    sleep(1);
    cout<<"2..."<<endl;
    sleep(1);
    cout<<"1..."<<endl;
    sleep(1);
    cout<<"Started."<<endl;
    sleep(0.25);
    //start hacking
    Hacking_momento();
    cout<<"Federal Bureal of Investigation(FBI) hacked."<<endl;
    sleep(2);
    Hacking_momento();
    cout<<"National Aeronautics and Space Administration(NASA) hacked."<<endl;
    sleep(2);
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

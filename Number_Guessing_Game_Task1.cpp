#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    
    int choice;
    int maxnum=10,minnum=1;
    do
    {
        
    int guess;
    

    cout<<"MENU\n1.Play game\n2.Change maximum number\n3.Change minimum number\n4.Exit game\n";

    cin>>choice;
    
    if(choice==1)
    {
    cout<<"New game started"<<endl;
    cout<<"Guess the number (between "<<minnum<<" and "<<maxnum<<")"<<endl;
    cin>>guess;
    int num;
    srand(time(NULL));
    num=rand() % (maxnum - minnum + 1) + minnum;
    
        if(guess==num)
        {
    cout<<"Congratulations! You guessed the secret number "<<num<<endl;
        }
        while(guess!=num)
    {
    if(guess<num)
    {cout<<"Your guess is to low"<<endl;
    cout<<"Guess the number (between "<<minnum<<" and "<<maxnum<<")"<<endl;
    cin>>guess;
    }
    else if(guess>num)
    {cout<<"Your guess is to high"<<endl;
    cout<<"Guess the number (between "<<minnum<<" and "<<maxnum<<")"<<endl;
    cin>>guess;
    }
     if(guess==num)
        {
    cout<<"Congratulations! You guessed the secret number "<<num<<endl;
        }
    }
    }
    

    else if(choice==2)
    {
        
      cout<<"Enter new maximum number"<<endl;
      cin>>maxnum;
    }
     else if(choice==3)
    {
        
      cout<<"Enter new minimum number"<<endl;
      cin>>minnum;
    }
   else if(choice==4)
   break;

}while(1);
}
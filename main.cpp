#include<string>
#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

const char alphNumSymb[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
int alphNumSymb_len = sizeof(alphNumSymb) - 1;

int main()
{
  int num;
  cout << "Enter your password length: " << endl;
  cin>> num;

  srand (time(0));
  cout<< "Generate Password :";

  for(int i = 0; i < num; i++)
  {
    cout << alphNumSymb[rand() % alphNumSymb_len];
  }
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
  bool active = true;
  while (active)
  {
    string firstWord;
    string secondWord;
    string continueString;
    cout << "Enter first word: ";
    //cin >> firstWord;
    getline(cin, firstWord);
    cout << "Enter second word: ";
    //cin >> secondWord;
    getline(cin, secondWord);
    if(firstWord.length() > secondWord.length())
    {
      cout << "The first word is bigger than the second word" << endl;
    }
    if(firstWord.length() < secondWord.length())
    {
      cout << "The second word is bigger than the firts word" << endl;
    }
    if(firstWord.length() == secondWord.length())
    {
      cout << "The first and second word have the same lenght" << endl;
    }
    cout << "Would you wish to continue (y/n)";
    getline(cin, continueString);
    if(continueString == "y")
    {
      active = true;
    }else{
      active = false;
    }
  }
}

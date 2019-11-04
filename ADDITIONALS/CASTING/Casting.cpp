#include <iostream>
using namespace std;

int main()
{
  // Creating  a variable value
  double value;
  // Asking the user the age
  cout << "What is your age: " << endl;
  // Inserting the answer of the user inside the value variable
  cin >> value;
  // Casting the value inserted into an integer
  int valueCasted = static_cast<int>(value)
  // Showing the age to the user
  cout << "The value was: " << valueCasted <<endl;
}

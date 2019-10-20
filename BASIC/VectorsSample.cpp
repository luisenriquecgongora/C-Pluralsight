#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> vi;
  for(int i=0; i<10; i++)
  {
    vi.push_back(i);
  }
  for(auto item:vi){
    cout << item << " ";
  }
  cout << endl;

  vector<string> vs;
  cout << "Enter 3 words ";
  for(int i=0;i<3;i++)
  {
    string s;
    cin >> s;
    vs.push_back(s);
  }
  cout << count(begin(vs),end(vs),"l") <<endl;
  for(unsigned int i=0; i<vi.size(); i++)
  {
    cout << vi[i] << endl;
  }
  for(auto i=begin(vi); i<end(vi); i++)
  {
    cout << *i;
  }
  for(auto item:vs){
    cout << item << " ";
  }
  sort(begin(vs),end(vs));
  for(auto item:vs){
    cout << item << " ";
  }
}

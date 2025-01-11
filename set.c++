#include<iostream>
#include<set>
using namespace std;

int main()
{
    /*set<char> s1 = {'C','D','C','D'};
    s1.insert('B');
    s1.erase('C');

    if(s1.find('C') == s1.end())
    {
        cout << "Could not find C" << endl;
    }
    else
    {
      cout << "Found C!" << endl;
    }
    for(auto itr = s1.begin();itr != s1.end();++itr)
    {
        cout << *itr << endl;
    }*/
    string test = "this is a test iii jj hhh aaa";
    string find = "hello";
    set<char> findLetters;

   /* for(int i = 0;i < test.length(); ++i)
    {
        char letter = test[i];
        exists.insert(letter);
    }
    for(auto itr = exists.begin();itr != exists.end();++itr)
    {
        cout << *itr << endl;
    }*/

    for(int i = 0;i < find.length(); ++i)
    {
        char letter = find[i];
        findLetters.insert(letter);
    }
    for(int i = 0;i < test.length(); ++i)
    {
        char letter = test[i];
        findLetters.erase(letter);
    }
    if(findLetters.size() > 0)
    {
        cout << "No" << endl;

    }
    else{
        cout << "Yes" ;
    }
    

    
}

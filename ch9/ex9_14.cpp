#include<list>
#include<string>
#include<vector>
#include<iostream>
using std::vector;
using std::string;
using std::list;
int main()
{
    list<char*> lst1 = {"i","am","a","pig"};
    vector<std::string> vec;

    vec.assign(lst1.cbegin(),lst1.cend());
    for(auto i : vec)
    {
        std::cout<<i << " ";
    }
}


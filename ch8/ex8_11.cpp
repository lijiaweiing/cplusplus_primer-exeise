#include<string>
#include<vector>
#include<iostream>
#include<sstream>
#include<fstream>
using std::string;
using std::vector;

struct PersonInfo
{
    string name;
    vector<string> phones;
};
void func(const string &str,vector<PersonInfo> &people)
{

    string line,word;
    std::ifstream is(str);
    std::istringstream record;
    while (std::getline(is,line)) {
        PersonInfo info;
        record.clear();
        record.str(line);
        record>>info.name;
        while (record>> word) {
           info.phones.push_back(word);
        }
        people.push_back(info);
    }

    for(auto i : people)
    {
        std::cout<<i.name<<" ";
        for(auto s : i.phones)
        {
            std::cout<<s<<" ";
        }
        std::cout<<std::endl;
    }
}
int main()
{
    vector<PersonInfo> people;
    string s("/home/li/opop/one.txt");
    func(s,people);

}

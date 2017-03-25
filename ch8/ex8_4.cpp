#include<fstream>
#include<string>
#include<iostream>
#include<vector>
void func(const std::string &str, std::vector<std::string> &vec)
{
    std::ifstream is(str);
    if(is)
    {
        std::string buffs;
        while (getline(is,buffs)) {
          vec.push_back(buffs);
        }
    }
    else {
       std::cerr<<"this is wrong";
    }

}
int main()
{
    std::string s("/home/li/opop/one.txt");
    std::vector<std::string> vec;
    func(s,vec);
    for(auto i: vec)
    {
        std::cout<<i<<std::endl;
    }

}


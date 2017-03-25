#include<sstream>
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
void func(const std::string &s)
{
    std::ifstream is(s);
    if(is)
    {
        std::string str;
        std::vector<std::string> vec;
        while (std::getline(is,str)) {
            vec.push_back(str);
        }
        for(auto i = vec.begin();i != vec.end();++i)
        {
            std::string buff;
            std::istringstream line(*i);
            while (line >> buff) {
                std::cout<<buff<<std::endl;
            }
        }

    }else {
       std::cerr<<"this is wrong";
    }
}
int main()
{
    std::string name("/home/li/opop/one.txt");
    func(name);
}

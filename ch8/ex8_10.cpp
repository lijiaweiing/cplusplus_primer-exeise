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
        std::string lol;
        while (std::getline(is,str)) {
            std::istringstream line(str);
            while(line >> lol)
                std::cout<<lol<<std::endl;
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


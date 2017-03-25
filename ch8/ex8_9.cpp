#include<sstream>
#include<iostream>
#include<string>
std::istream& func(std::istream & is)
{
    std::string buff;
    while (is>>buff) {
        std::cout<<buff<<" "<<std::endl;
    }
    is.clear();
    return is;
}
int main()
{
    std::istringstream line("hello ha ha");
    func(line);
}


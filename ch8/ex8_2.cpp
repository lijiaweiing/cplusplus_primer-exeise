#include<iostream>
#include<string>
std::istream& fun(std::istream &is)
{
    std::string buff;
    while (is >> buff) {
       std::cout<<buff;
    }
    is.clear();
    return is;
}
int main()
{
    std::istream& i = fun(std::cin);
    std::cout<<i.rdstate();

}


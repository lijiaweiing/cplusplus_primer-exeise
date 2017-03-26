#include<iostream>
#include<vector>
#include<iterator>
bool find_t(std::vector<int>::iterator a,std::vector<int>::iterator b,int num)
{
    for(auto i = a;i!= b;++i)
    {
        if(*i == num)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    std::vector<int> vec= {1,2,3,4,56,4};
    std::cout<<find_t(vec.begin(),vec.end(),4);
}

# 第九章顺序容器

## 练习9.1 
>对于下面的程序任务,vector deque 和list 哪种容器最为适合?解释你的选择的理由.如果没有哪种优于其他容器,也请解释理由.
>(a)读取固定数量的单词,将它们按字典插入到容器中.
>(b)读取未知数量的单词,总是将新单词插入到末尾.删除操作在头部进行.
>(c)从一个文件读取未知数量的整数.将这些数排序,然后将它们打印到标准输出.

a list 因为在任何位置进行插入/删除操作速度都很快
b deque 在头尾部位置插入/删除速度很快
c vector 是可变大小的数组

## 练习9.2
>定义一个list对象,其元素类型是int 的deque

list<deque<int>> l;

## 练习9.3
>构成迭代器范围的迭代器有何限制?

它们指向同一个容器中的元素 或者是容器最后一个元素之后的元素

## [练习9.4](ex9_4.cpp)
>编写函数,接受一对指向vector<int>的迭代器和一个int值.在两个迭代器指定的范围中查找给定的值,返回一个布尔值来指出是否找到.

## 练习9.5
>重写上一题的函数,返回一个迭代器指向找到的元素.注意,程序必须处理未找到给定值的情况.
```cpp
std::vector<int>::iterator find_t(std::vector<int>::iterator a,std::vector<int>::iterator b,int num)
{
    for(auto i = a;i!= b;++i)
    {
        if(*i == num)
        {
            return i;
        }
    }
    return b;
}
```
## 练习9.6
>下面程序有何错误?你应该如何修改它?
```cpp
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(),iter2 = lst1.end();
while(iter1 < iter2) /*...*/
```
iter1 != iter2

## 练习9.7
>为了索引int 的vector中的元素,应该使用什么类型?

vector<int>::iterator

## 练习9.8
>为了读取string的list中的元素,应该使用什么类型?如果写入list,又该使用什么类型?

读取: list<int>::const_iterator
写入: list<int>::iterator



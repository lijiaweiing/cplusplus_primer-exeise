#第八章IO类

##练习8.1
>编写函数，接受一个istream&参数,返回值类型也为istream&.此函数须从给定流中读取数据,直到遇到文件結束标识为止.它将读取的数据打印在标准输出上.完成这些操作后,在流进行复位,使其处于有效状态.

```cpp
istream& functions(istream& a)
{
	std::string buf;
    	while (is >> buf)
        std::cout << buf << std::endl;
    	is.clear();
    	return is;
}
```	

##练习8.2
>测试函数,调用参数为cin()

##练习8.3
>什么情况下,下面的while循环会终止? while(cin >> i)/*... */
当


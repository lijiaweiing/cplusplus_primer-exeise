# 第八章IO类

## 练习8.1
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

## [练习8.2](ex8_2.cpp)
>测试函数,调用参数为cin
## 练习8.3
>什么情况下,下面的while循环会终止? while(cin >> i)/*... */
当输入元素与i的类型不符时循环终止
## [练习8.4](ex8_4.cpp)
>编写函数,以读模式打开一个文件,将其内容读入到一个string的vector中,将每一行作为一个独立的元素存于vector中.
##[练习8.5](ex8_5.cpp)
>重写上面的函数,将每个单词作为一个独立的元素进行存储.





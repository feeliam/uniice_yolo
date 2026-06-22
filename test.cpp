#include "test.h"
#include <vector>
#include <array>
#include <algorithm>

Test::Test()
{
    std::cout << "Hello" << std::endl;    
}

//拷贝构造
// Test::Test(const Test&other)
// {

// }

// Test::Test& operator=(const Test&)
// {

// }

Test::~Test()
{

}

int Test::add(int a,int b)
{
    int sum = a + b;
    return sum;
}

void Test::test1()
{
    // 50 到 99  限制  <= i,for循环
    int sum = 0;
    for(int i = 1; i < 100; i++)
    {
        sum += i;
    }
    std::cout << sum <<std::endl;
}


void Test::test2()
{
    // 1 到 99,while循环
    int sum = 0;
    int i = 1;
    while(i < 100)
    {
        sum += i;
        i++;
    }
    std::cout << sum <<std::endl;
}

void Test::test3()
{
    // 0 到 101,do while循环
    int sum = 0;
    int i = 0;
    do
    {
        sum += i;
        i ++;
    }while(i<102);
    
    //while中为ture会<执行,false不执行
    std::cout << sum <<std::endl;
}

void Test::test4()
{
    // 一维数组  三个
    
    //裸数组
    int a[5] = {0,1,2,3,4};
    std::cout << a[4] << std::endl;

    //vector一维数组
    std::vector<int> b = {0,1,2,3,4,5};
    std::cout << b.at(5) << std::endl;
    

    //array一维数组
    std::array<int,3> c = {0,1,2};
    std::cout << c.at(2) << std::endl;
    std::cout <<"上面是一维数组,下面是二维数组" << std::endl;
     
    // 二维 两个

    //二维裸数组
    int d[3][3] = {
        {0,1,2},
        {3,4,5},
        {6,7,8},
    };
    std::cout << d[1][2] << std::endl;

    //二维vector数组
    std::vector<std::vector<int>> e = {
        {0,1,2},
        {3,4,5},
        {6,7,8}
    };
    std::cout << e[1][2] << std::endl;
    std::cout << e[1].at(2) << std::endl;
    std::cout << e.at(1).at(2) << std::endl;

    //未初始化的vector
    int rows = 3;
    int cols = 3;
    std::vector<std::vector<int>> f(rows,std::vector<int>(cols));
    f.clear();
    f.push_back(std::vector<int>({0,1,2}));
    f.emplace_back(std::vector<int>{3,4,5});
    f.emplace_back(std::vector<int>{6,7,8});

    std::cout << f[1][1] << std::endl;
    std::cout << f[1].at(1) << std::endl;
    std::cout << f.at(1).at(1) << std::endl;

    std::cout << "上面是Vector,下面是array" << std::endl;

    //二维array数组
    std::array<std::array<int,4>,3> g ={{
        {1,2,3,3},
        {4,5,6,6},
        {7,8,9,9}
    }};
    std::cout << g[1][1] << std::endl;
    std::cout << g[1].at(1) << std::endl;
    std::cout << g.at(1).at(1) << std::endl;
}

void Test::test5()
{
    // int a[9] = {0,1,6,7,8,2,3,4,5};
    // for(int i = 0 ; i < 9 ; i++)
    // {
    //     if(a[i] == 6)
    //     {
    //         continue;
    //     }
    //     std::cout << a[i] <<std::endl;
    // }

    int b[3][3] = {
        {0,1,2},
        {3,4,5},
        {6,7,8}
    };
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ;j++)
        {
            if(b[i][0] == 6)
            {
                std::cout << b[i][j] <<std::endl;
            }
        }
    }

    // std::vector<std::vector<int>> 


}

//string字符串的拼接替换查找



void Test::test6()
{
    std::vector<std::vector<int>> a = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11},
    };
    std::cout << a.at(1).at(2) << std::endl;
    
    std::vector<std::vector<int>> b(3,std::vector<int>(4));
    b.clear();
    b.push_back(std::vector<int>{0,1,2,3});
    std::cout << b.at(0).at(3) << std::endl;

    std::array<std::array<int,4>,3> c = {{
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11},
    }};
    std::cout << c.at(2).at(3) << std::endl;
    
}

void Test::test7()
{
    using namespace std;
    //初始化以及构造
    std::string a ;
    a = "hi";
    std::string b("world"); //构造
    string c = b;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    //拼接
    a += b ;
    a.append("!");
    cout << a << endl;

    
    cout << a.at(5) << endl;
    

    std::string d("hello world!");
    size_t pos = d.find("world");
    if(pos == std::string::npos)
    {
        cout<<"NOT FIND"<<endl;
    }
    else
    {
        cout << "pos的位置" << pos << endl;
    }
    
    //删除与替换
    d.erase(5,7);
    cout << "d = " <<  d << endl;

    d.replace(0,5,"Hi,C++");
    cout << d << endl;

    // const char* p = d.c_str();
    // cout << p << endl;
    const char *p = "Hello";
    string s = p ;
    cout << s << endl;

    //字符串反转
    // for(size_t i = s.size()-1 ; i >= 0 ; --i )
    // {
    //     cout << s[i] << endl;
    // }

}

void Test::test8()
{
    int arr[5] = {10,20,30,40,50};
    for( int i = 0 ; i < 5 ; i++ )
    {
        std::cout << *( arr + i ) << std::endl; 
    }
    // std::cout << arr[1] << std::endl;
    // std::cout << arr[2] << std::endl;
    // std::cout << &arr   << std::endl;
    // std::cout << *(arr + 5) << std::endl;
    // std::cout << arr[5] << std::endl;
}

//交换a与b的值
void Test::swap1(int*x ,int* y)
{
    int temp = *x ;
    *x = *y;
    *y = temp;
}

void Test::swap2(int &a, int &b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;
}

void Test::pointer()
{
    //指针初始化,可以通过取地址符（&）来获取变量的内存地址
    // int* Ptr = nullptr;  //初始化为空指针，指针不指向任何有效的内存地址
    int num   = 10;       //初始化为10这个变量的地址
    int* Ptr2 = &num;     //ptr指向num变量的地址

    //指针解引用 * 的作用：获取指针指向的内存的值
    int value = *Ptr2;     //在这里用a接收Ptr的值
    std::cout << " " << value << std::endl; 

    //指针运算：指针支持加减与比较等简单的运算
    int a[6] = {0,1,2,3,4,5};
    int *p   = a;
    p++;                 // 移动到数组的下一个元素
    std::cout << *p << std::endl;
    
    // a的大小size，将size作为参数传到函数里面去
    int size   = sizeof(a) / sizeof(a[0]) ;
    int acount = std::count(a, a + size, 3);
    std::cout << acount << std::endl;

    //打印a
    std::vector<int> b = {0,1,2,3,3,4,5};
    int count = std::count(b.begin(), b.end(), 3);
    std::cout <<  count << std::endl;

    reverseArray(a,size);
    for(int i = 0; i <= size - 1; i++)
    {
        std::cout << a[i] << std::endl;
    }
}

void Test::reverseArray(int a[],int size)
{

    for(int i = 0; i < size / 2; i++)
    {
        int temp      = a [i];
        a[i]          = a[size -1 -i];
        a[size -1 -i] = temp;
    }

    //这个函数写错了，边界错了所以多循环一次
    // for(int i = 0 ; i < size/2 + 1 ;i++)
    // {
    //     int temp = a [i];
    //     a[i] = a[size -1 -i];
    //     a[size -1 -i] = temp;
   
    // }

    // i = 0;  0 < 4    0   5
    // i = 1;  1 < 4    1   4
    // i = 2;  2 < 4    2   3    543210
    // i = 3;  3 < 4    2   3    542310
    // i = 4;  4 < 4    
    
}

void Test::test11()
{

}

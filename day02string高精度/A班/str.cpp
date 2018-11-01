//string函数用法详解！附代码，写具体的用法！ 
#include <iostream>
#include <string>
#include <sstream> 
using namespace std;
 
 
int main()
{
    //1.string类重载运算符operator>>用于输入，同样重载运算符operator<<用于输出操作
    string str1;
    cin >> str1;//当用cin>>进行字符串的输入的时候，遇到空格的地方就停止字符串的读取输入 
    cout << str1 << endl;
    cin.get();//这个的作用就是读取cin>>输入的结束符，不用对getline的输入产生影响！ 
    getline(cin, str1);//字符串的行输入
    cout << str1 << endl; 
    
    
    //2.string类的构造函数 
    string str2 = "aaaaa";//最简单的字符串初始化 
    string str2b("bbbbb");
    cout << str2 << endl; 
    
    char *s = "bbbbb";
    string str3(s);//用c字符串s初始化 
    cout << str3 << endl;
    
    char ch = 'c';
    string str4(5, ch);//用n个字符ch初始化 
    cout << str4 << endl; 
    
    //3.string类的字符操作
    string str5 = "abcde"; 
    ch = str5[3];//operator[]返回当前字符串中第n个字符的位置 
    cout << ch << endl; 
    
    string str6 = "abcde";
    ch = str6.at(4);//at()返回当前字符串中第n个字符的位置,并且提供范围检查，当越界时会抛出异常！  
    cout << ch << endl; 
    
    //4.string的特性描述
    string str7 = "abcdefgh";
    int size;
    size = str7.capacity();//返回当前容量 
    cout << size << endl; 
    size = str7.max_size();//返回string对象中可存放的最大字符串的长度 
    cout << size << endl; 
    size = str7.size();//返回当前字符串的大小 
    cout << size << endl; 
    size = str7.length();//返回当前字符串的长度 
    cout << size << endl; 
    bool flag;
    flag = str7.empty();//判断当前字符串是否为空 
    cout << flag << endl;
    int len = 10; 
    str7.resize(len, ch);//把字符串当前大小置为len，并用字符ch填充不足的部分 
    cout << str7 << endl; 
    
    //5.string的赋值
    string str8;
    str8 = str7;//把字符串str7赋给当前字符串
    cout << str8 << endl;
    str8.assign(str7);//把字符串str7赋给当前字符串 
    cout << str8 << endl; 
    str8.assign(s);//用c类型字符串s赋值 
    cout << str8 << endl; 
    str8.assign(s, 2);//用c类型字符串s开始的n个字符赋值 
    cout << str8 << endl; 
    str8.assign(len, ch);//用len个字符ch赋值给当前字符串 
    cout << str8 << endl; 
    str8.assign(str7, 0, 3);//把字符串str7中从0开始的3个字符赋给当前字符串 
    cout << str8 << endl; 
    string str9 = "0123456789";
    str8.assign(str9.begin(), str9.end());//把迭代器之间的字符赋给字符串 
    cout << str8 << endl; 
    
    //6.string的连接
    string str10;
    str10 += str9;//把字符串str9连接到当前字符串的结尾 
    cout << str10 << endl;
    str10.append(s);//把c类型字符串s连接到当前字符串的结尾 
    cout << str10 << endl; 
    str10.append(s, 2);//把c类型字符串s的前2个字符连接到当前字符串的结尾 
    cout << str10 << endl; 
    str10.append(str9.begin(), str9.end());//把迭代器之间的一段字符连接到当前字符串的结尾 
    cout << str10 << endl; 
    str10.push_back('k');//把一个字符连接到当前字符串的结尾 
    cout << str10 << endl; 
    
    //7.string的比较
    flag = (str9 == str10);//判断两个字符串是否相等 
    cout << flag << endl;
    flag = (str9 != str10);//判断两个字符串是否不相等 
    cout << flag << endl; 
    flag = (str9 > str10);//判断两个字符串是否大于关系 
    cout << flag << endl;
    flag = (str9 < str10);//判断两个字符串是否为小于关系 
    cout << flag << endl;
    flag = (str9 >= str10);//判断两个字符串是否为大于等于关系 
    cout << flag << endl;
    flag = (str9 <= str10);//判断两个字符串否为小于等于关系 
    cout << flag << endl; 
    
    //以下的3个函数同样适用于c类型的字符串，在compare函数中>时返回1，<时返回-1，=时返回0 
    flag = str10.compare(str9);//比较两个字符串的大小，通过ASCII的相减得出！ 
    cout << flag << endl; 
    flag = str10.compare(6, 12, str9);//比较str10字符串从6开始的12个字符组成的字符串与str9的大小 
    cout << flag << endl;
    flag = str10.compare(6, 12, str9, 3, 5);//比较str10字符串从6开始的12个字符组成的字符串与str9字符串从3开始的5个字符组成的字符串的大小 
    cout << flag << endl; 
    
    //8.string的字串
    string str11;
    str11 = str10.substr(10, 15);//返回从下标10开始的15个字符组成的字符串 
    cout << str11 << endl; 
    
    //9.string的交换
    str11.swap(str10);//交换str11与str10的值 
    cout << str11 << endl; 
    
    //10.string的查找，查找成功时返回所在位置，失败时返回string::npos的值，即是-1 
    string str12 = "abcdefghijklmnopqrstuvwxyz";
    int pos;
    pos = str12.find('i', 0);//从位置0开始查找字符i在当前字符串的位置 
    cout << pos << endl;
    pos = str12.find("ghijk", 0);//从位置0开始查找字符串“ghijk”在当前字符串的位置 
    cout << pos << endl; 
    pos = str12.find("opqrstuvw", 0, 4);//从位置0开始查找字符串“opqrstuvw”前4个字符组成的字符串在当前字符串中的位置 
    cout << pos << endl; 
    pos = str12.rfind('s', string::npos);//从字符串str12反向开始查找字符s在字符串中的位置 
    cout << pos << endl; 
    pos = str12.rfind("klmn", string::npos);//从字符串str12反向开始查找字符串“klmn”在字符串中的位置 
    cout << pos << endl;
    pos = str12.rfind("opqrstuvw", string::npos, 3);//从string::pos开始从后向前查找字符串s中前n个字符组成的字符串在当前串中的位置 
    cout << pos << endl; 
    
    string str13 = "aaaabbbbccccdddeeefffggghhhiiijjjkkllmmmandjfaklsdfpopdtwptioczx";
    pos = str13.find_first_of('d', 0);//从位置0开始查找字符d在当前字符串第一次出现的位置 
    cout << pos << endl; 
    pos = str13.find_first_of("eefff", 0);//从位置0开始查找字符串“eeefff“在当前字符串中第一次出现的位置 
    cout << pos << endl; 
    pos = str13.find_first_of("efff", 0, 3);//从位置0开始查找当前串中第一个在字符串”efff“的前3个字符组成的数组里的字符的位置 
    cout << pos << endl;
    pos = str13.find_first_not_of('b', 0);//从当前串中查找第一个不在串s中的字符出现的位置 
    cout << pos << endl; 
    pos = str13.find_first_not_of("abcdefghij", 0);//从当前串中查找第一个不在串s中的字符出现的位置 
    cout << pos << endl; 
    pos = str13.find_first_not_of("abcdefghij", 0, 3);//从当前串中查找第一个不在由字符串”abcdefghij”的前3个字符所组成的字符串中的字符出现的位置 
    cout << pos << endl; 
    //下面的last的格式和first的一致，只是它从后面检索！ 
    pos = str13.find_last_of('b', string::npos);
    cout << pos << endl;
    pos = str13.find_last_of("abcdef", string::npos);
    cout << pos << endl;
    pos = str13.find_last_of("abcdef", string::npos, 2);
    cout << pos << endl; 
    pos = str13.find_last_not_of('a', string::npos);
    cout << pos << endl; 
    pos = str13.find_last_not_of("abcdef", string::npos);
    cout << pos << endl;
    pos = str13.find_last_not_of("abcdef", string::npos, 3);
    cout << pos << endl;
     
    //11.string的替换 
    string str14 = "abcdefghijklmn";
    str14.replace(0, 3, "qqqq");//删除从0开始的3个字符，然后在0处插入字符串“qqqq” 
    cout << str14 << endl; 
    str14.replace(0, 3, "vvvv", 2);//删除从0开始的3个字符，然后在0处插入字符串“vvvv”的前2个字符 
    cout << str14 << endl; 
    str14.replace(0, 3, "opqrstuvw", 2, 4);//删除从0开始的3个字符，然后在0处插入字符串“opqrstuvw”从位置2开始的4个字符 
    cout << str14 << endl; 
    str14.replace(0, 3, 8, 'c');//删除从0开始的3个字符，然后在0处插入8个字符 c 
    cout << str14 << endl; 
    //上面的位置可以换为迭代器的位置，操作是一样的，在这里就不再重复了！ 
    
    //12.string的插入，下面的位置处亦可以用迭代器的指针表示，操作是一样的 
    string str15 = "abcdefg";
    str15.insert(0, "mnop");//在字符串的0位置开始处，插入字符串“mnop” 
    cout << str15 << endl; 
    str15.insert(0, 2, 'm');//在字符串的0位置开始处，插入2个字符m 
    cout << str15 << endl; 
    str15.insert(0, "uvwxy", 3);//在字符串的0位置开始处，插入字符串“uvwxy”中的前3个字符 
    cout << str15 << endl;
    str15.insert(0, "uvwxy", 1, 2);//在字符串的0位置开始处，插入从字符串“uvwxy”的1位置开始的2个字符 
    cout << str15 << endl; 
    
    //13.string的删除
    string str16 = "gfedcba";
    string::iterator it;
    it = str16.begin();
    it++;
    str16.erase(it);//删除it指向的字符，返回删除后迭代器的位置 
    cout << str16 << endl;
    str16.erase(it, it+3);//删除it和it+3之间的所有字符，返回删除后迭代器的位置 
    cout << str16 << endl; 
    str16.erase(2);//删除从字符串位置3以后的所有字符，返回位置3前面的字符 
    cout << str16 << endl; 
    
    //14.字符串的流处理
    string str17("hello,this is a test");
    istringstream is(str17);
    string s1,s2,s3,s4;
    is>>s1>>s2>>s3>>s4;//s1="hello,this",s2="is",s3="a",s4="test"
    ostringstream os;
    os<<s1<<s2<<s3<<s4;
    cout<<os.str() << endl;
    
    return 0;
}


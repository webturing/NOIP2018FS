//string�����÷���⣡�����룬д������÷��� 
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main() {
    //1.string�����������operator>>�������룬ͬ�����������operator<<�����������
    string str1;
    cin >> str1;//����cin>>�����ַ����������ʱ�������ո�ĵط���ֹͣ�ַ����Ķ�ȡ���� 
    cout << str1 << endl;
    cin.get();//��������þ��Ƕ�ȡcin>>����Ľ����������ö�getline���������Ӱ�죡 
    getline(cin, str1);//�ַ�����������
    cout << str1 << endl;


    //2.string��Ĺ��캯�� 
    string str2 = "aaaaa";//��򵥵��ַ�����ʼ�� 
    string str2b("bbbbb");
    cout << str2 << endl;

    char *s = "bbbbb";
    string str3(s);//��c�ַ���s��ʼ�� 
    cout << str3 << endl;

    char ch = 'c';
    string str4(5, ch);//��n���ַ�ch��ʼ�� 
    cout << str4 << endl;

    //3.string����ַ�����
    string str5 = "abcde";
    ch = str5[3];//operator[]���ص�ǰ�ַ����е�n���ַ���λ�� 
    cout << ch << endl;

    string str6 = "abcde";
    ch = str6.at(4);//at()���ص�ǰ�ַ����е�n���ַ���λ��,�����ṩ��Χ��飬��Խ��ʱ���׳��쳣��  
    cout << ch << endl;

    //4.string����������
    string str7 = "abcdefgh";
    int size;
    size = str7.capacity();//���ص�ǰ���� 
    cout << size << endl;
    size = str7.max_size();//����string�����пɴ�ŵ�����ַ����ĳ��� 
    cout << size << endl;
    size = str7.size();//���ص�ǰ�ַ����Ĵ�С 
    cout << size << endl;
    size = str7.length();//���ص�ǰ�ַ����ĳ��� 
    cout << size << endl;
    bool flag;
    flag = str7.empty();//�жϵ�ǰ�ַ����Ƿ�Ϊ�� 
    cout << flag << endl;
    int len = 10;
    str7.resize(len, ch);//���ַ�����ǰ��С��Ϊlen�������ַ�ch��䲻��Ĳ��� 
    cout << str7 << endl;

    //5.string�ĸ�ֵ
    string str8;
    str8 = str7;//���ַ���str7������ǰ�ַ���
    cout << str8 << endl;
    str8.assign(str7);//���ַ���str7������ǰ�ַ��� 
    cout << str8 << endl;
    str8.assign(s);//��c�����ַ���s��ֵ 
    cout << str8 << endl;
    str8.assign(s, 2);//��c�����ַ���s��ʼ��n���ַ���ֵ 
    cout << str8 << endl;
    str8.assign(len, ch);//��len���ַ�ch��ֵ����ǰ�ַ��� 
    cout << str8 << endl;
    str8.assign(str7, 0, 3);//���ַ���str7�д�0��ʼ��3���ַ�������ǰ�ַ��� 
    cout << str8 << endl;
    string str9 = "0123456789";
    str8.assign(str9.begin(), str9.end());//�ѵ�����֮����ַ������ַ��� 
    cout << str8 << endl;

    //6.string������
    string str10;
    str10 += str9;//���ַ���str9���ӵ���ǰ�ַ����Ľ�β 
    cout << str10 << endl;
    str10.append(s);//��c�����ַ���s���ӵ���ǰ�ַ����Ľ�β 
    cout << str10 << endl;
    str10.append(s, 2);//��c�����ַ���s��ǰ2���ַ����ӵ���ǰ�ַ����Ľ�β 
    cout << str10 << endl;
    str10.append(str9.begin(), str9.end());//�ѵ�����֮���һ���ַ����ӵ���ǰ�ַ����Ľ�β 
    cout << str10 << endl;
    str10.push_back('k');//��һ���ַ����ӵ���ǰ�ַ����Ľ�β 
    cout << str10 << endl;

    //7.string�ıȽ�
    flag = (str9 == str10);//�ж������ַ����Ƿ���� 
    cout << flag << endl;
    flag = (str9 != str10);//�ж������ַ����Ƿ���� 
    cout << flag << endl;
    flag = (str9 > str10);//�ж������ַ����Ƿ���ڹ�ϵ 
    cout << flag << endl;
    flag = (str9 < str10);//�ж������ַ����Ƿ�ΪС�ڹ�ϵ 
    cout << flag << endl;
    flag = (str9 >= str10);//�ж������ַ����Ƿ�Ϊ���ڵ��ڹ�ϵ 
    cout << flag << endl;
    flag = (str9 <= str10);//�ж������ַ�����ΪС�ڵ��ڹ�ϵ 
    cout << flag << endl;

    //���µ�3������ͬ��������c���͵��ַ�������compare������>ʱ����1��<ʱ����-1��=ʱ����0 
    flag = str10.compare(str9);//�Ƚ������ַ����Ĵ�С��ͨ��ASCII������ó��� 
    cout << flag << endl;
    flag = str10.compare(6, 12, str9);//�Ƚ�str10�ַ�����6��ʼ��12���ַ���ɵ��ַ�����str9�Ĵ�С 
    cout << flag << endl;
    flag = str10.compare(6, 12, str9, 3,
                         5);//�Ƚ�str10�ַ�����6��ʼ��12���ַ���ɵ��ַ�����str9�ַ�����3��ʼ��5���ַ���ɵ��ַ����Ĵ�С
    cout << flag << endl;

    //8.string���ִ�
    string str11;
    str11 = str10.substr(10, 15);//���ش��±�10��ʼ��15���ַ���ɵ��ַ��� 
    cout << str11 << endl;

    //9.string�Ľ���
    str11.swap(str10);//����str11��str10��ֵ 
    cout << str11 << endl;

    //10.string�Ĳ��ң����ҳɹ�ʱ��������λ�ã�ʧ��ʱ����string::npos��ֵ������-1 
    string str12 = "abcdefghijklmnopqrstuvwxyz";
    int pos;
    pos = str12.find('i', 0);//��λ��0��ʼ�����ַ�i�ڵ�ǰ�ַ�����λ�� 
    cout << pos << endl;
    pos = str12.find("ghijk", 0);//��λ��0��ʼ�����ַ�����ghijk���ڵ�ǰ�ַ�����λ�� 
    cout << pos << endl;
    pos = str12.find("opqrstuvw", 0, 4);//��λ��0��ʼ�����ַ�����opqrstuvw��ǰ4���ַ���ɵ��ַ����ڵ�ǰ�ַ����е�λ�� 
    cout << pos << endl;
    pos = str12.rfind('s', string::npos);//���ַ���str12����ʼ�����ַ�s���ַ����е�λ�� 
    cout << pos << endl;
    pos = str12.rfind("klmn", string::npos);//���ַ���str12����ʼ�����ַ�����klmn�����ַ����е�λ�� 
    cout << pos << endl;
    pos = str12.rfind("opqrstuvw", string::npos, 3);//��string::pos��ʼ�Ӻ���ǰ�����ַ���s��ǰn���ַ���ɵ��ַ����ڵ�ǰ���е�λ�� 
    cout << pos << endl;

    string str13 = "aaaabbbbccccdddeeefffggghhhiiijjjkkllmmmandjfaklsdfpopdtwptioczx";
    pos = str13.find_first_of('d', 0);//��λ��0��ʼ�����ַ�d�ڵ�ǰ�ַ�����һ�γ��ֵ�λ�� 
    cout << pos << endl;
    pos = str13.find_first_of("eefff", 0);//��λ��0��ʼ�����ַ�����eeefff���ڵ�ǰ�ַ����е�һ�γ��ֵ�λ�� 
    cout << pos << endl;
    pos = str13.find_first_of("efff", 0, 3);//��λ��0��ʼ���ҵ�ǰ���е�һ�����ַ�����efff����ǰ3���ַ���ɵ���������ַ���λ�� 
    cout << pos << endl;
    pos = str13.find_first_not_of('b', 0);//�ӵ�ǰ���в��ҵ�һ�����ڴ�s�е��ַ����ֵ�λ�� 
    cout << pos << endl;
    pos = str13.find_first_not_of("abcdefghij", 0);//�ӵ�ǰ���в��ҵ�һ�����ڴ�s�е��ַ����ֵ�λ�� 
    cout << pos << endl;
    pos = str13.find_first_not_of("abcdefghij", 0,
                                  3);//�ӵ�ǰ���в��ҵ�һ���������ַ�����abcdefghij����ǰ3���ַ�����ɵ��ַ����е��ַ����ֵ�λ��
    cout << pos << endl;
    //�����last�ĸ�ʽ��first��һ�£�ֻ�����Ӻ�������� 
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

    //11.string���滻 
    string str14 = "abcdefghijklmn";
    str14.replace(0, 3, "qqqq");//ɾ����0��ʼ��3���ַ���Ȼ����0�������ַ�����qqqq�� 
    cout << str14 << endl;
    str14.replace(0, 3, "vvvv", 2);//ɾ����0��ʼ��3���ַ���Ȼ����0�������ַ�����vvvv����ǰ2���ַ� 
    cout << str14 << endl;
    str14.replace(0, 3, "opqrstuvw", 2, 4);//ɾ����0��ʼ��3���ַ���Ȼ����0�������ַ�����opqrstuvw����λ��2��ʼ��4���ַ� 
    cout << str14 << endl;
    str14.replace(0, 3, 8, 'c');//ɾ����0��ʼ��3���ַ���Ȼ����0������8���ַ� c 
    cout << str14 << endl;
    //�����λ�ÿ��Ի�Ϊ��������λ�ã�������һ���ģ�������Ͳ����ظ��ˣ� 

    //12.string�Ĳ��룬�����λ�ô�������õ�������ָ���ʾ��������һ���� 
    string str15 = "abcdefg";
    str15.insert(0, "mnop");//���ַ�����0λ�ÿ�ʼ���������ַ�����mnop�� 
    cout << str15 << endl;
    str15.insert(0, 2, 'm');//���ַ�����0λ�ÿ�ʼ��������2���ַ�m 
    cout << str15 << endl;
    str15.insert(0, "uvwxy", 3);//���ַ�����0λ�ÿ�ʼ���������ַ�����uvwxy���е�ǰ3���ַ� 
    cout << str15 << endl;
    str15.insert(0, "uvwxy", 1, 2);//���ַ�����0λ�ÿ�ʼ����������ַ�����uvwxy����1λ�ÿ�ʼ��2���ַ� 
    cout << str15 << endl;

    //13.string��ɾ��
    string str16 = "gfedcba";
    string::iterator it;
    it = str16.begin();
    it++;
    str16.erase(it);//ɾ��itָ����ַ�������ɾ�����������λ�� 
    cout << str16 << endl;
    str16.erase(it, it + 3);//ɾ��it��it+3֮��������ַ�������ɾ�����������λ��
    cout << str16 << endl;
    str16.erase(2);//ɾ�����ַ���λ��3�Ժ�������ַ�������λ��3ǰ����ַ� 
    cout << str16 << endl;

    //14.�ַ�����������
    string str17("hello,this is a test");
    istringstream is(str17);
    string s1, s2, s3, s4;
    is >> s1 >> s2 >> s3 >> s4;//s1="hello,this",s2="is",s3="a",s4="test"
    ostringstream os;
    os << s1 << s2 << s3 << s4;
    cout << os.str() << endl;

    return 0;
}


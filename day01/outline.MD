day01 
2018.10.29晚上NOIP复赛上课提纲

### 1.分支结构：if，if-else，if-else if-else，注意事项else必须结合if出现
### 2.循环，for、while 花括号的作用域，分号的坑坑

### 3.多组输入，两种情况，有没有指定组数。
- 未指定组数：
```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin >> n){
	    //TODO
	}
	return 0;
}
```

- 指定组数t：
```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
  cin >> t;
	while(t--){
	    //TODO
      
	}
	return 0;
}
```


### 4.字符串的读入，string的使用。行读取用getline（cin，str）
```cpp
string str;
cin >> str;
```


### 5.格式化输出 定义了double x;
- i:指定小数位数，cout << fixed << setprecision(4) << x << endl;
- ii:指定数字的宽度，cout << setw(8) << fill('0') << x << endl;


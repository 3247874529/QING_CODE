//P1.课程安排
//NO.1:C++基础语法入门
//NO.2:C++核心编程
//NO.3:C++提高编程 

//P2.第一个程序：打印Hello world!
//@程序：打印"Hello world!"
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "Hello world!" << endl;
//	system("pause");
//	return 0;
//}

//P3.注释
//单行注释：//注释内容
//多行注释：/*注释内容*/

//P4.变量
//定义方式：数据类型 变量名 = 变量值

//P5.常量
//两种定义方式：
//1.宏常量:#define 常量名 = 常量值
//2.const修饰变量:const 数据类型 常量名 = 常量值

//P6.关键字（标识符）
//ps:变量名不能与关键字重复

//P7.标识符命名规则
//1.不能是关键字
//2.只能由字母、数字、下划线组成
//3.第一个字符必须为字母或下划线
//4.区分大小写

//P8.数据类型-整型
//short（2字节）		范围：-2^15~2^15-1
//int（4字节）		范围：-2^31~2^31-1
//long（Win为4字节）	范围：-2^31~2^31-1
//long long(8字节)	范围：-2^63~2^63-1
//意义：给变量分配合适的内存空间

//P9.数据类型-sizeof关键字
//语法:sizeof(数据类型/变量）
//@程序：用sizeof输出各数据类型占用内存
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "sizeof(short) = " << sizeof(short) << endl;
//	cout << "sizeof(int) = " << sizeof(int) << endl;
//	cout << "sizeof(long) = " << sizeof(long) << endl;
//	cout << "sizeof(long long) = " << sizeof(long long) << endl;
//	system("pause");
//	return 0;
//}

//P10.数据类型-实型（浮点型）
//1.单精度（float,7位有效数字）,4个字节
//2.双精度(double,15-16位有效数字）,8个字节
//3.默认情况下输出一个小数，只显示6位有效数字
//@程序：用sizeof输出浮点数占用内存
//#include <iostream>
//using namespace std;
//int main()
//{
//	float f1 = 3.1415926f;//末尾加f意在提醒编译器此浮点数为单精度
//	double d2 = 3.1415926;
//	cout << "f1 = " << f1 << endl;
//	cout << "d2 = " << d2 << endl;
//	cout << "sizeof(float) = " << sizeof(float) << endl;
//	cout << "sizeof(double) = " << sizeof(double) << endl;
//	system("pause");
//	return 0;
//}

//P11.数据类型 - 字符型
//作用：用于显示单个字符
//语法：char ch = 'a'//单引号,单字符,1个字节！

//P12.数据类型-转义字符
//常用(均为1个字节)： 
// \n(换行) 
// \\(代表一个反斜线字符"\")
// \t(水平制表HT，跳到下一个TAB位置)
//@程序：输出转义字符
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "Hello world!\n";
//	cout << "\\" << endl;
//	cout << "Hello: \twjh\tcpa\tny" << endl;
//	system("pause");
//	return 0;
//}

//P13.数据类型-字符串类型
//两种风格：
//1.C风格字符串：char 变量名[] = "字符串值" //双引号
//2.C++风格字符串：先包含头文件<string>,再定义：string 变量名 = "字符串值"
//@程序：输出字符串
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	char str1[] = "Hello,I'm Cstr!";
//	string str2 = "Hello,I'm CPPstr!";
//	//为什么字符串变量可以随意初始化，但在输入赋值时却困难重重？
//	cout << str1 << endl;
//	cout << str2 << endl;
//}

//P14.数据类型-布尔类型
//两个值（1字节）：True···真（1） 或 False···假（0）
//@程序：输出布尔变量
//#include <iostream>
//using namespace std;
//int main()
//{
//	bool flag1 = true;//首字母大写没有意义
//	bool flag2 = false;
//	cout << "flag1 = " << flag1 << endl;
//	cout << "flag2 = " << flag2 << endl;
//}

//P15.数据类型-数据的输入
//@程序：各种数据类型的输入输出
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	//1.整型
//	int a = 0;
//	cout << "请给整型a赋值：";
//	cin >> a;
//	cout << "a = " << a << endl;
//	//2.浮点型
//	float f = 3.14f;
//	cout << "请给单浮f赋值：";
//	cin >> f;
//	cout << "f = " << f << endl;
//	//3.字符型
//	char ch = 'a';
//	cout << "请给字符ch赋值：";
//	cin >> ch;
//	cout << "ch = " << ch << endl;
//	//4.字符串型
//	string str = "Hello world!";
//	cout << "请给字符串str赋值：";
//	cin >> str;
//	cout << "str = " << str << endl;//字符串赋值不能含空格，否则会出奇怪的问题（联111行）
//	//5.布尔型
//	bool flag = false;
//	cout << "请给布尔量flag赋值：";
//	cin >> flag;
//	cout << "flag = " << flag << endl;
//	system("pause");
//	return 0;
//}

//P16.运算符-算术运算符-加减乘除运算
//两个整数相除，结果依然为整数
//除数不为0

//P17.运算符-算术运算符-取模运算
//两个小数不能做取模运算
//除数不为0

//P18.运算符-算术运算符-递增递减
//前置递增/递减：先让变量+1/-1，再进行表达式运算
//后置递增/递减：先进行表达式运算，再让变量+1/-1
//@程序：探究前置/后置的递增/递减
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int a1 = a;
//	int a2 = a;
//	int b1 = ++a1 * 10;
//	int b2 = a2++ * 10;
//	cout << "a1 = " << a1 << " " << "| ++a * 10 = " << b1 << endl;
//	cout << "a2 = " << a2 << " " << "| a++ * 10 = " << b2 << endl;
//	system("pause");
//	return 0;
//}

//P19.运算符-赋值运算符
// =(赋值) +=(加等于) -=(减等于) *=(乘等于) /=(除等于) %=(模等于)

//P20.运算符-比较运算符
// 满足，则返回结果为1，否则为0
// ==(相等于) !=(不等于) <(小于) >(大于) <=(小于等于) >=(大于等于)
//@程序：输出比较运算符输出的结果
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "a = " << a << " b = " << b << endl;
//	cout << "a==b? " << (a == b) << endl;
//	cout << "a!=b? " << (a != b) << endl;
//	cout << "a<b? " << (a < b) << endl;
//	cout << "a>b? " << (a > b) << endl;
//	cout << "a<=b? " << (a <= b) << endl;
//	cout << "a>=b? " << (a >= b) << endl;
//	system("pause");
//	return 0;
//}

//P21.运算符-逻辑运算符-非
// !(非)
//示例：!a  若a真，则!a为假，若a为假，则!a为真
//C++中，非0均为真！
//@程序：探究逻辑非运算符的返回结果
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	cout << "a = " << a << endl;
//	cout << "!a = " << !a << endl;
//	cout << "!!a = " << !!a << endl;
//	system("pause");
//	return 0;
//}

//P22.运算符-逻辑运算符-与
// &&(与)
//示例：a&&b  若a,b均为真，则结果为真，否则为假

//P23.运算符-逻辑运算符-或
// ||(或)
//示例：a||b  若a和b均为假，则结果为假，否则为真

//P24.程序流程结构-选择结构-单行if语句
//语句：if(条件){条件满足执行的语句}

//P25.程序流程结构-选择结构-多行if语句
//语句：if(条件){条件满足执行语句}else{条件不满足执行语句}

//P26.程序流程结构-选择结构-多条件if语句
//语句：if(条件1){条件1满足执行语句}else if(条件2){条件2满足执行语句}……else{都不满足执行语句}

//P27.程序流程结构-选择结构-嵌套if语句
//@程序：嵌套if判断考大学
//#include <iostream>
//using namespace std;
//int main()
//{
//	int score = 0;
//	cout << "请输入你的分数：";
//	cin >> score;
//	cout << "你的分数是：" << score << endl;
//	if (score > 600) {
//		cout<< "你考上了本科！"<<endl;
//		if (score >= 650&&score < 700) {
//			cout << "恭喜你，你考上了人民大学！" << endl;
//		}
//		else if (score >= 700) {
//			cout << "恭喜你，你考上了清华大学！" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

//P28.程序流程结构-选择结构案例-三只小猪称体重
//@程序：三只小猪比体重
//#include <iostream>
//using namespace std;
//int main()
//{
//	int pig1, pig2, pig3;
//	pig1 = pig2 = pig3 = 0;
//	cout << "请输入小猪A的体重：";
//	cin >> pig1;
//	cout << "请输入小猪B的体重：";
//	cin >> pig2;
//	cout << "请输入小猪C的体重：";
//	cin >> pig3;
//	if (pig1 > pig2) {
//		if (pig1 > pig3) {
//			cout<< "最重的是小猪A" << endl;
//		}
//		else {
//			cout << "最重的是小猪B" << endl;
//		}
//	}
//	else {
//		if (pig2 > pig3) {
//			cout << "最重的是小猪B" << endl;
//		}
//		else {
//			cout << "最重的是小猪C" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

//P29.程序流程结构-选择结构案例-三目运算符
//语法：表达式1 ? 表达式2 : 表达式3
//返回的是变量，可赋值！
//@探究三目运算符的返回结果
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	int c = 0;
//	c = (a > b ? a : b);
//	cout << "c = (a > b ? a : b)" << endl;
//	cout << "c = " << c << endl;
//	(a > b ? a : b) = 100;
//	cout << "(a > b ? a : b) = 100" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	system("pause");
//	return 0;
//}

//P30.程序流程结构-选择结构-switch语句
//作用：执行多条件分支语句
//与if相比：
	//优点：结构清晰，效率高
	//缺点：只能判断整型或字符型，不能是区间
//语法：
//switch (表达式)
//{
//case 结果1:执行语句; break;
//case 结果2:执行语句; break;
//		……
//default:执行语句; break;
//}
//@程序：运用switch_case语句评价电影
//#include <iostream>
//using namespace std;
//int main()
//{
//	int sco = 0;
//	cout << "请给该电影评分：";
//	cin >> sco;
//	cout << "你的评分为：" << sco << endl;
//	switch (sco) {
//	case 10:cout << "你认为这是一部经典电影" << endl; break;
//	case 9:cout << "你认为这是一部经典电影" << endl; break;
//	case 8:cout << "你认为这是一部好电影" << endl; break;
//	case 7:cout << "你认为这是一部好电影" << endl; break;
//	case 6:cout << "你认为这电影还行" << endl; break;
//	case 5:cout << "你认为这电影还行" << endl; break;
//	default:cout << "你认为这是烂片" << endl; break;
//	}
//	system("pause");
//	return 0;
//}

//P31.程序流程结构-循环结构-while语句
//语法：while(循环条件){循环语句}
//解释：只要循环条件的结果为真，就执行循环语句

//P32.程序流程结构-循环结构案例-猜数字
//@程序：猜数字游戏
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	cout << "###猜数字游戏###" << endl;
//	cout << "系统将生成一个1到100的数字，猜猜它是多少吧！" << endl;
//	cout << "START!" << endl;
//	int gnum = 0;
//	int count = 0;
//	while (1) {
//		cin >> gnum;
//		count += 1;
//		if (gnum > num) {
//			cout << "你猜的数字大了！" << endl;
//		}
//		else if (gnum < num) {
//			cout << "你猜的数字小了！" << endl;
//		}
//		else {
//			cout << "你猜对了！你一共猜了" << count << "次！" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//P33.程序流程结构-循环结构-do_while语句
//do{循环语句}while(循环条件);
//与while的区别在于do_while会先执行一次循环语句，再判断循环条件

//P34.程序流程结构-循环结构案例-水仙花数
//@程序：输出输出所有三位数的水仙花数
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout<<"###输出所有三位数的水仙花数###" << endl;
//	int num = 100;
//	while (num < 1000) {
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = num % 10;
//		b = num / 10 % 10;
//		c = num / 100;
//		if (a * a * a + b * b * b + c * c * c == num) {
//			cout << num << endl;
//		}
//		num++;
//	}
//	system("pause");
//	return 0;
//}

//P35.程序流程结构-循环结构-for循环
//语法：for(起始表达式;条件表达式;末尾循环体){循环语句}
//@程序：打印0到9
//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int i = 0; i < 10; i++) {
//		cout << i << endl;
//	}
//	system("pause");
//	return 0;
//}

//P36.程序流程结构-循环结构案例-敲桌子
//@程序：敲桌子游戏
//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int n = 1; n < 101; n++) {
//		if (n % 7 == 0 || n % 10 == 7 || n / 10 == 7) {
//			cout << "敲桌子！" << endl;
//		}
//		else {
//			cout << n << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

//P37.程序流程结构-嵌套循环
//作用：在循环体中再嵌套一层循环，解决一些实际问题
//@程序：打印*矩阵
//#include <iostream>endl
//using namespace std;
//int main()
//{
//	for (int i = 0; i < 11; i++) {
//		for (int j = 0; j < 11; j++) {
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}

//P38.程序流程结构-嵌套循环案例-乘法口诀表
//@程序：打印乘法口诀表
//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int i = 1; i < 10; i++) {
//		for (int j = 1; j <= i; j++) {
//			cout << j << "*" << i << "=" << j * i << "   ";
//			//如何格式化输出，使得输出结果更好看？
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}

//P39.程序程序流程结构-跳转语句-break语句
//作用：用于跳出选择结构(终止case并跳出switch)或者循环结构()
//1.在switch语句中，终止case并跳出switch
//2.在循环语句中，跳出当前循环语句（在嵌套循环中，跳出最近的内层循环语句）

//P40.程序流程结构-continue语句
//作用：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
//@程序：打印1到100的所有奇数
//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int i = 1; i <= 100; i++) {
//		if (i % 2 == 0) {
//			continue;
//		}
//		cout << i << endl;
//	}
//	system("pause");
//	return 0;
//}

//P41.程序流程结构-goto语句
//语法：goto 标记
//如果标记的名称存在，执行到goto语句时，会跳转到标记的位置
//不建议使用
//@程序：goto语句测试
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "1" << endl;
//	goto FLAG;
//	cout << "2" << endl;
//	cout << "3" << endl;
//	cout << "4" << endl;
//FLAG:
//	cout << "5" << endl;
//	system("pause");
//	return 0;
//}

//P42.数组-一维数组定义方式
//数组中每个数据元素数据类型相同
//数组是由连续的内存位置组成的
//定义方式：
//1. 数据类型 数组名[数组长度]
//2. 数据类型 数组名[数组长度] = {值1,值2……}
//3. 数据类型 数组名[] = {值1,值2……}

//P43.数组-一维数组-数组名
//用途：
//1. 可以统计整个数组在内存中的长度
//2. 可以获取数组在内存中的首地址(第一个元素地址)
//@程序：探究一维数组
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	cout << "整个数组所占空间为：" << sizeof(arr) << endl;
//	cout << "每个元素所占空间为：" << sizeof(arr[0]) << endl;
//	cout << "数组的元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "数组首地址为：" << (int)arr << endl;
//	cout << "数组第一个元素地址为：" << (int)&arr[0] << endl;
//	cout << "数组第二个元素地址为：" << (int)&arr[1] << endl;
//	cout << "数组第三个元素地址为：" << (int)&arr[2] << endl;
//	system("pause");
//	return 0;
//}

//P44.数组-一维数组案例-五只小猪称体重
//@程序：五只小猪称体重
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[5] = { 300,350,200,400,250 };
//	int max = 0;
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	cout << "最重小猪的体重是：" <<max<< endl;
//	system("pause");
//	return 0;
//}

//P45.数组-一维数组案例-元素逆置
//@程序：元素逆置
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[] = { 100,200,300,400,500 };
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	int temp = 0;
//	cout << "元素逆置前数组：";
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	for (; start < end; start++, end--) {
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//	}
//	cout << "元素逆置后数组：";
//	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
//		cout << arr[j] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//P46.数组-一维数组-冒泡排序
//@程序：冒泡排序数组
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[6] = { 5,6,4,3,2,1 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int temp = length;//经常因为这个出问题，要注意！
//	cout << "原数组：";
//	for (int i = 0; i < temp; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	for (; length > 1; length--) {
//		for (int i = 0; i < length-1; i++) {//此处i应该是小于length-1!!!不然会内存越界！！！
//			if (arr[i] > arr[i + 1]) {
//				arr[i] = arr[i] ^ arr[i + 1];
//				arr[i+1] = arr[i] ^ arr[i + 1];
//				arr[i] = arr[i] ^ arr[i + 1];
//			}
//		}
//	}
//	cout << "排序后数组：";
//	for (int i = 0; i < temp; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//P47.数组-二维数组定义方式
//1.数据类型 数组名[行数][列数];
//2.数据类型 数组名[行数][列数] = {{数据1,数据2},{数据3,数据4}};
//3.数据类型 数组名[行数][列数] = {数据1,数据2,数据3,数据4};
//4.数据类型 数组名[][列数] = {数据1,数据2,数据3,数据4};
//@程序：探究二维数组的四种定义方式
//#include <iostream>
//using namespace std;
//int main()
//{
//	//1.数据类型 数组名[行数][列数];
//	int arr1[2][2];
//	arr1[0][0] = 1;
//	arr1[0][1] = 2;
//	arr1[1][0] = 3;
//	arr1[1][1] = 4;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			cout << arr1[i][j] << " ";
//		}
//	}
//	cout << endl;
//	//2.数据类型 数组名[行数][列数] = {{数据1,数据2},{数据3,数据4}};
//	int arr2[2][2] = { {1,2},{3,4} };
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			cout << arr1[i][j] << " ";
//		}
//	}
//	cout << endl;
//	//3.数据类型 数组名[行数][列数] = {数据1,数据2,数据3,数据4};
//	int arr3[2][2] = { 1,2,3,4 };
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			cout << arr1[i][j] << " ";
//		}
//	}
//	cout << endl;
//	//4.数据类型 数组名[][列数] = {数据1,数据2,数据3,数据4};
//	int arr4[][2] = { 1,2,3,4 };
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			cout << arr1[i][j] << " ";
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//P48.数组-二维数组-数组名
//用途：
//查看二维数组所占用空间
//获取二维数组首地址】
//@程序：探究二维数组名
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	cout << "二维数组所占用空间为：" << sizeof(arr) << endl;
//	cout << "二维数组第一行所占用空间为：" << sizeof(arr[0]) << endl;
//	cout << "二维数组每个元素所占用空间为：" << sizeof(arr[0][0]) << endl;
//	cout << "二维数组行数为：" << sizeof(arr)/sizeof(arr[0]) << endl;
//	cout << "二维数组列数为：" << sizeof(arr)/sizeof(arr[0][0]) << endl;
//	cout << "二维数组的首地址为：" << (int)arr << endl;
//	cout << "二维数组第一行的首地址为：" << (int)arr[0] << endl;
//	cout << "二维数组第二行的首地址为：" << (int)arr[1] << endl;
//	cout << "二维数组第一个元素的地址为：" << (int)&arr[0][0] << endl;//查看具体元素地址时要加&符！
//	cout << "二维数组第二个元素的地址为：" << (int)&arr[0][1] << endl;
//	system("pause");
//	return 0;
//}

//P49.数组-二维数组案例-考试成绩统计
//@程序：对三个人的三项成绩求和
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{ 
//	int arr[3][3] = { {100,100,100},{90,50,100},{60,70,80} };
//	string names[3] = { "张三","李四","王五" };
//	for (int i = 0; i < 3; i++) {
//		cout << names[i] << "的分数分别为：";
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	int sum[3] = { 0,0,0 };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			sum[i] += arr[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		cout << names[i] << "的总分为：" << sum[i] << " " << endl;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//P50.函数-函数的定义
//一般5个步骤：
//1.返回值类型
//2.函数名
//3.参数表列
//4.函数体语句
//5.return 表达式
//语法：
//返回值类型 函数名(参数列表)
//{
//	函数体语句
//	return 表达式
//}
//@程序：输出两个数的和(不完全)
//#include <iostream>
//using namespace std;
//int add(int num1, int num2)//对两个整数求和的函数
//{
//	int sum = num1 + num2;
//	return sum;
//}
//int main()
//{
//	system("pause");
//	return 0;
//}

//P51.函数-函数的调用
//语法：函数(参数)
//@程序：输出两个数的和
//#include <iostream>
//using namespace std;
//int add(int num1, int num2)//对两个整数求和的函数,num1,num2为形式参数(形参)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	cin >> a;
//	cin >> b;
//	int value = add(a, b);//a,b为实际参数(实参)
//	//函数调用时,实参的值传递给形参
//	cout << a << "+" << b << "=" << value << endl;
//}

//P52.函数-值传递
//函数调用时实参将数值传递给形参
//值传递时，如果形参发生任何改变，并不会影响实参
//@程序：探究实参与形参的关系 
//#include <iostream>
//using namespace std;
//void swap(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	system("pause");
//	return 0;
//}

//P53.函数-常见的形式
//1.无参无返
//2.有参无返
//3.无参有返
//4.有参有返

//P54.函数-函数的声明
//作用：告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。
//函数的声明可以多次，但是定义只能有一次。
//作用：提前告诉编译器函数的存在
//@程序：探究函数声明的作用
//#include <iostream>
//using namespace std;
//int max(int a, int b);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << max(a, b) << endl;
//}
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}

//P55.函数-函数的分文件编写
//作用：让代码结构更加清晰
//步骤：
//1.创建后缀名为.h的头文件
//2.创建后缀名为.cpp的源文件
//3.在头文件中写函数的声明
//4.在源文件中写函数的定义
//@程序：交换并输出两个变量的值
//#include <iostream>
//using namespace std;
//#include "swap.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "swap(a,b)" << endl;
//	swap(a, b);
//
//}

//P56.指针-指针的定义和使用
//作用：可以通过指针间接访问内存
//内存编号是从0开始记录的，一般用十六进制数字表示
//可以利用指针变量保存地址
//定义：数据类型* 变量名
//@程序：定义并输出指针
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int* p;
//	p = &a;//让指针记录变量a的地址
//	cout << "a的地址为：" << &a << endl;
//	cout << "指针p为：" << p << endl;
//	//使用指针
//	//可以通过解引用的方式来找到指针指向的内存
//	//指针前加 * 代表解引用，找到指针指向的内存中的数据
//	cout << "a=" << a << endl;
//	cout << "*p=" << *p << endl;
//	system("pause");
//	return 0;
//}

//P57.指针-指针所占内存空间
//32位操作系统占4个字节，64位操作系统占8个字节
//@程序：探究指针内存空间
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	cout << "sizeof(int*)=" << sizeof(p) << endl;
//	system("pause");
//	return 0;
//}

//P58.指针-空指针
//指针变量指向内存中编号为0的空间
//用途：初始化指针变量
//空指针不可以访问(0到255之间的内存编号是系统占用的，因此不可以访问)
//@程序：探究空指针
//#include <iostream>
//using namespace std;
//int main()
//{
//	int* p = NULL;
//	system("pause");
//	return 0;
//}

//P59.指针-野指针
//指针变量指向非法的内存空间,在程序中应该尽量避免
//@程序：探究野指针
//#include <iostream>
//using namespace std;
//int main()
//{
//	int* p = (int*)0x1100;
//	cout << *p << endl;
//	system("pause");
//	return 0;
//}

//P60.指针-const修饰指针
//三种情况
//1.const修饰指针---常量指针
	//const int* p = &a;
	//特点：指针指向可以修改，但是指针指向的值不可以改 
//2.const修饰变量---指针常量
	//int* const p = &a;
	//特点：指针指向不可以修改，但是指针指向的值可以改 
//3.const及既修饰指针，又修饰变量
	//const int* const p = &a;
	//特点：指针的指向与指针指向的值都不可以改

//P61.指针-指针和数组
//作用：利用指针访问数组中元素
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "第一个元素为：" << arr[0] << endl;
//	int* p = arr;//arr就是数组首地址
//	cout << "利用指针访问第一个元素：" << *p << endl;
//	p++;//让指针向后偏移四个字节(因为指针本身为整型指针)
//	cout << "利用指针访问第二个元素：" << *p << endl;
//	cout << "利用指针遍历数组：" << endl;
//	int* p2 = arr;
//	for (int i = 0; i < 10; i++) {
//		cout << *p2 << " ";
//		p2++;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//P62.指针-指针和函数
//作用：利用指针作函数参数，可以修改实参的值
//@程序：探究函数参数的地址传递
//#include <iostream>
//using namespace std;
//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "swap1_a=" << a << endl;
//	cout << "swap1_b=" << b << endl;
//}
//void swap2(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//	cout << "swap2a=" << *p1 << endl;
//	cout << "swap2b=" << *p2 << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "swap1(a, b)" << endl;
//	swap1(a, b);//值传递
//	//不改变实参的值
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "swap2(&a, &b)" << endl;
//	swap2(&a, &b);//地址传递
//	//改变实参的值
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	system("pause");
//	return 0;
//}

//P63.指针-指针配合数组和函数案例
//@程序：对数组元素进行冒泡排序
//#include <iostream>
//using namespace std;
//void bsort(int* arr, int n)
//{
//	for (; n > 1; n--) {
//		for (int i = 0; i < n - 1; i++) {
//			if (arr[i] > arr[i + 1]) {
//				arr[i] = arr[i] ^ arr[i + 1];
//				arr[i+1] = arr[i] ^ arr[i + 1];
//				arr[i] = arr[i] ^ arr[i + 1];
//			}
//		}
//	}
//}
//void print(int* arr, int n)
//{
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//}
//int main()
//{
//	int arr[10] = { 3,2,5,1,0,6,4,8,9,7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bsort(arr, len);//地址传递 参数1：数组首地址 参数二：数组长度
//	print(arr, len);
//	system("pause");
//	return 0;
//}

//P64.结构体-结构体定义和使用
//用户自定义的数据类型，允许用户存储不同的数据类型
//语法：struct 结构体名{结构体成员列表}
//通过结构体创建变量的方式有三种：
//1.struct 结构体名 变量名
//2.struct 结构体名 变量名 = {成员1值，成员2值……}
//3.定义结构体时顺便创建变量
//@程序：输出结构体内容
//#include <iostream>
//#include <string>
//using namespace std;
//struct student
//{
//	string name;
//	int age{};
//	int score{};//加{}是为了避免VS的警告C26495
//};
//int main()
//{
//	struct student s1;//创建结构体变量时struct可以省略
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 100;
//	cout << "姓名：" << s1.name << endl << "年龄：" << s1.age << endl << "分数：" << s1.score << endl;
//	system("pause");
//	return 0;
//}

//P65.结构体-结构体数组
//将自定义的结构体放到数组中方便维护
//语法：struct 结构体名 数组名[元素个数] = {{},{},{}……}
//@程序：输出结构体内容
//#include <iostream>
//using namespace std;
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	struct student arr[3] = { {"张三",18,80},{"李四",19,60},{"王五",19,100} };
//	system("pause");
//	return 0;
//}

//P66.结构体-结构体指针
//通过指针访问结构体中的成员
//利用操作符->可以通过结构体指针访问结构体属性
//@程序：指针输出结构体内容
//#include <iostream>
//#include <string>
//using namespace std;
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	struct student s = { "张三",18,100 };
//	struct student* p = &s;
//	cout << "姓名：" << p->name << endl;
//	cout << "年龄：" << p->age << endl;
//	cout << "分数：" << p->score << endl;
//	system("pause");
//	return 0;
//}

//P67.结构体-结构体嵌套结构体
//结构体中的成员可以是另一个结构体
//@程序：输出结构体嵌套结构体内容
//#include <iostream>
//#include <string>
//using namespace std;
//struct student
//{
//	string name;
//	int age{};
//	int score{};
//};
//struct teacher
//{
//	int id{};
//	string name;
//	int age{};
//	struct student stu;
//};
//int main()
//{
//	teacher t;
//	t.id = 1314520;
//	t.name = "老王";
//	t.age = 50;
//	t.stu.name = "小王";
//	t.stu.age = 20;
//	t.stu.score = 60;
//	cout << "老师的姓名：" << t.name << endl;
//	cout << "老师的id：" << t.id << endl;
//	cout << "老师的年龄：" << t.age << endl;
//	cout << "老师的学生姓名：" << t.stu.name << endl;
//	cout << "老师的学生年龄：" << t.stu.age << endl;
//	cout << "老师的学生成绩：" << t.stu.score << endl;
//	system("pause");
//	return 0;
//}

//P68.结构体-结构体做函数参数
//值传递 地址传递
//@程序：输出结构体内容
//#include <iostream>
//using namespace std;
//struct student
//{
//	string name;
//	int age{};
//	int score{};
//};
//void print1(struct student s)//值传递
//{
//	cout << "print1:" << endl;
//	cout << "name:" << s.name << endl;
//	cout << "age:" << s.age << endl;
//	cout << "score:" << s.score << endl;
//	cout << endl;
//}
//void print2(struct student* p)//地址传递(会改变实参的值)
//{
//	cout << "print2:" << endl;
//	cout << "name:" << p->name << endl;
//	cout << "age:" << p->age << endl;
//	cout << "score:" << p->score << endl;
//	cout << endl;
//}
//int main()
//{
//	struct student s;
//	s.name = "张三";
//	s.age = 18;
//	s.score = 100;
//	cout << "name:" << s.name << endl;
//	cout << "age:" << s.age << endl;
//	cout << "score:" << s.score << endl;
//	cout << endl;
//	print1(s);
//	print2(&s);
//	system("pause");
//	return 0;
//}

//P69.结构体-结构体中const使用场景
//作用：用const来防止误操作
//@程序：输出结构体内容
//#include <iostream>
//using namespace std;
//struct student
//{
//	string name;
//	int age{};
//	int score{};
//};
//void print(const struct student* p)//将函数形参改为指针，可以减少内存空间1，而且不会复制新的副本出来,加const可防止误操作修改结构体数据
//{
//	cout << "name:" << p->name << endl;
//	cout << "age:" << p->age << endl;
//	cout << "score:" << p->score << endl;
//}
//int main()
//{
//	struct student s;
//	s.name = "张三";
//	s.age = 18;
//	s.score = 100;
//	print(&s);
//	system("pause");
//	return 0;
//}

//P70.结构体-结构体案例1
//@程序：输出三名老师及各自五名学生的信息
//#include <iostream>
//#include <ctime>
//using namespace std;
//struct student
//{
//	string sname;
//	int score{};
//};
//struct teacher
//{
//	string tname;
//	struct student sarr[5];
//};
//void allocateSpace(struct teacher tarr[], int len)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++) {
//		tarr[i].tname = "Teacher_";
//		tarr[i].tname += nameSeed[i];
//		for (int j = 0; j < 5; j++) {
//			tarr[i].sarr[j].sname = "Student_";
//			tarr[i].sarr[j].sname += nameSeed[j];
//			int random = rand() % 61 + 40;
//			tarr[i].sarr[j].score = random;
//		}
//	}
//}
//void printInfo(struct teacher tarr[], int len)
//{
//	for (int i = 0; i < len; i++) {
//		cout << "teacher"<< i+1 <<"'s name:" << tarr[i].tname << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "\t" << tarr[i].tname << "'s student" << j + 1 << "'s name : " << tarr[i].sarr[j].sname << "   " << "score : " << tarr[i].sarr[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	struct teacher tarr[3];
//	int len = sizeof(tarr) / sizeof(tarr[0]);
//	allocateSpace(tarr, len);//向函数传递的数组为地址，类似于指针
//	printInfo(tarr, len);
//	system("pause");
//	return 0;
//}

//P71.结构体-结构体案例2
//#include <iostream>
//using namespace std;
//struct hero
//{
//	string name;
//	int age;
//	string gender;
//};
//void bsort(struct hero heroes[],int len)
//{
//	for (; len > 1; len--) {
//		for (int i = 0; i < len - 1; i++) {
//			if (heroes[i].age > heroes[i + 1].age) {
//				struct hero temp = heroes[i];//此步应切记
//				heroes[i] = heroes[i + 1];
//				heroes[i + 1] = temp;
//			}
//		}
//	}
//
//}
//void priintInfo(struct hero heroes[], int len)
//{
//	cout << "五位英雄年龄从小到大依次是：" << endl;
//	for (int i = 0; i < len; i++) {
//		cout << "\t姓名：" << heroes[i].name << "   年龄：" << heroes[i].age << "   性别：" << heroes[i].gender << endl;
//	}
//}
//int main()
//{
//	struct hero heroes[5] = { {"刘备",23,"男"},{"关羽",22,"男"},{"张飞",20,"男"},{"赵云",21,"男"},{"貂蝉",19,"女"} };
//	int len = sizeof(heroes) / sizeof(heroes[0]);
//	bsort(heroes, len);
//	priintInfo(heroes, len);
//	system("pause");
//	return 0;
//}

//P72.通讯录管理系统-系统功能介绍
//添加联系人 显示联系人 删除联系人 查找联系人 修改联系人 清空联系人 退出通讯录

//P73.通讯录管理系统-创建项目

//P74.通讯录管理系统-菜单功能

//P75.通讯录管理系统-退出功能实现

//P76.通讯录管理系统-添加联系人-结构体设计

//P77.通讯录管理系统-添加联系人-功能实现

//P78.通讯录管理系统-显示联系人

//P79.通讯录管理系统-删除联系人-检验联系人是否存在

//P80.通讯录管理系统-删除联系人-功能实现

//P81.通讯录管理系统-查找联系人

//P82.通讯录管理系统-修改联系人

//P83.通讯录管理系统-清空通讯录

//P84.程序的内存模型-内存四区-代码区（程序运行前）
//存放函数体的二进制代码，由操作系统进行管理
//共享，只读

//P85.程序的内存模型-内存四区-全局区（程序运行前）
//存放全局变量，静态变量及常量
//该区域数据在程序结束后由操作系统释放
//不在全局区中：
//	局部变量
//	const 修饰的局部变量（局部常量）
//
//在全局区中：
//	全局变量
//	静态变量（static关键字）
//	常量
//		字符串常量
//		const 修饰的全局变量（全局常量）
//@程序：输出不同区变量得地址
//#include <iostream>
//using namespace std;
//
////全局变量
//int g_a = 10;
//int g_b = 10;
//
////const修饰的全局变量，全局常量
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main()
//{
//	//普通局部变量
//	int a = 10;
//	int b = 10;
//	cout << "局部变量a的地址为：" << (int)&a << endl;
//	cout << "局部变量b的地址为：" << (int)&b << endl;
//
//	//const修饰的局部变量，局部常量
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "局部常量c_l_a的地址为：" << (int)&c_l_a << endl;
//	cout << "局部常量c_l_b的地址为：" << (int)&c_l_b << endl;
//
//	//静态变量：在普通变量前加static
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
//	cout << "静态变量s_b的地址为：" << (int)&s_a << endl;
//
//	//字符串常量
//	cout << "字符串常量的地址为：" << (int)&"hello world" << endl;
//
//	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
//	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;
//
//	cout << "局部变量c_g_a的地址为：" << (int)&c_g_a << endl;
//	cout << "局部变量c_g_b的地址为：" << (int)&c_g_b << endl;
//
//	system("pause");
//	return 0;
//}

//P86.程序的内存模型-内存四区-栈区（程序运行后）
//由编译器自动分配释放，存放函数的参数值，局部变量等
//注意事项：不要返回局部变量的地址！！！栈区开辟的数据由编译器自动释放！！！
//#include <iostream>
//using namespace std;
//int* func()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;//第一次可以打印正确的数字，是因为编译器做了保留
//	cout << *p << endl;//第二次则不再保留(x84环境下体现)
//	//杜绝此非法操作！
//	system("pause");
//	return 0;
//}

//P87.程序的内存模型-内存四区-堆区（程序运行后）
//由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
//在C++中主要利用new在堆区开辟内存
//#include <iostream>
//using namespace std;
//int* func()
//{
//	//利用new关键字，可以将数据开辟到堆区
//	//指针本质也是局部变量，存储在栈区
//	//指针保存的数据则存储在堆区
//	int* p = new int(10);
//	return p;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	system("pause");
//	return 0;
//}

//P88.程序的内存模型-new运算符
//C++利用new操作符在堆区开辟数据
//堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符delete
//语法：new 数据类型
//利用new创建的数据，会返回该数据对应的类型的指针
//#include <iostream>
//using namespace std;
//int* func()
//{
//	//在堆区创建整型数据
//	int* p = new int(10);//new返回该数据类型的指针
//	return p;
//}
//
//void test01()
//{
//	int* P = func();
//	cout << *P << endl;
//	cout << *P << endl;
//	cout << *P << endl;//堆区开辟的数据，由程序员手动开辟，手动释放
//	delete P;//释放利用操作符delete
//	//cout << *P << endl;//内存已经被释放，再次访问就是非法操作，会报错
//}
//
//void test02()
//{
//	//在堆区创建含10个整型数据的数组
//	int *arr = new int[10];//10代表数组有10个元素
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << " ";
//	}
//	//释放堆区数组
//	//释放数组时要加[]
//	delete[]arr;
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//P89.C++中的引用-引用的基本语法
//作用：给变量起别名
//语法：数据类型 &别名 = 原名
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& b = a;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	b = 100;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	system("pause");
//	return 0;
//}

//P90.C++中的引用-引用的注意事项
//引用必须初始化
//引用在初始化后不能再改变(好像也没法改变？)
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	//int& b;//未初始化，非法！
//	int& b = a;
//	int c = 20;
//	b = c;//赋值操作，而不是更改引用
//	system("pause");
//	return 0;
//}

//P91.C++中的引用-引用做函数参数
//作用：函数传参时，可利用引用技术让形参修饰实参
//优点：可以简化指针修改实参
//#include <iostream>
//using namespace std;
//void mySwap01(int a,int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "形参传递实参的值" << endl;
//	cout << "mySwap01:a = " << a << endl;
//	cout << "mySwap01:b = " << b << endl;
//}
//void mySwap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	cout << "指针传递实参地址" << endl;
//	cout << "mySwap02:*a = " << *a << endl;
//	cout << "mySwap02:*b = " << *b << endl;
//}
//void mySwap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "引用传递实参地址" << endl;
//	cout << "mySwap03:a = " << a << endl;
//	cout << "mySwap03:b = " << b << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	mySwap01(a, b);
//	cout << "mySwap01(a, b)" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << endl;
//	a = 10;
//	b = 20;
//	mySwap02(&a, &b);
//	cout << "mySwap02(a, b)" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << endl;
//	a = 10;
//	b = 20;
//	mySwap03(a, b);
//	cout << "mySwap03(a, b)" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	system("pause");
//	return 0;
//}

//P92.C++中的引用-引用做函数返回值
//注意：不要返回局部变量的引用
//函数的调用可作为左值赋值
//#include <iostream>
//using namespace std;
//int& test01()
//{
//	int a = 10;
//	return a;
//}
//int& test02()
//{
//	static int a = 10;
//	return a;
//}
//
//int main()
//{
//	int& ref01 = test01();
//	int& ref02 = test02();
//	cout << "ref01 = " << ref01 << endl;//返回局部变量的引用，出错
//	cout << "ref02 = " << ref02 << endl;//静态变量可作为返回值
//	test02() = 1000;//如果引用做函数返回值,函数的调用可作为左值赋值
//	cout << "test02 = 1000" << endl;
//	cout << "ref02 = " << ref02 << endl;
//	system("pause");
//	return 0;
//}

//P93.C++中的引用-引用的本质
//引用的本质在C++内部实现是一个指针常量
//#include <iostream>
//using namespace std;
//void func(int& ref)//发现是引用，转换为 int* const ref = &a;
//{
//	ref = 100;//ref是引用,转换为*ref = 100;
//}
//
//int main()
//{
//	int a = 10;
//	int& ref = a;//自动转换为 int* const ref = &a; 指针常量指针指向不可改，这也是引用不可更改的原因
//	ref = 20;//内部发现ref是引用，自动转换为： *ref = 20;
//	cout << "a = " << a << endl;
//	cout << "ref = " << ref << endl;
//	func(a);
//	cout << "a = " << a << endl;
//	cout << "ref = " << ref << endl;
//	system("pause");
//	return 0;
//}

//P94.C++中的引用-常量引用
//作用：主要用来修饰形参，防止误操作
//在函数形参列表中，可以加const修饰形参，防止形参改变实参
//#include <iostream>
//using namespace std;
//void showValue(const int& val)
//{
//	//val = 1000;
//	cout << "val = " << val << endl;
//}
//
//int main()
//{
//	int a = 10;
//	//int& ref = 10;//错误，引用必须引用一块合法内存空间
//	const int& ref = 10;//正确，加上const后，编译器将代码改为 int temp = 10; const int& ref = temp;
//	int b = 100;
//	showValue(b);
//	cout << "b = " << b << endl;
//	system("pause");
//	return 0;
//}

//P95.函数高级-函数的默认参数
//在C++中，函数的形参列表中的形参是可以有默认值的
//如果自己传入了数据，就用自己的，否则用默认值
//注意事项：
//如果某个位置已经有了默认参数，那么这个位置后的所有形参都必须有默认值
//如果函数声明有了默认参数，函数实现就不能有默认参数

//P96.函数高级-函数的占位参数
//现阶段函数的占位参数存在意义不大，但后面的课程会用到该技术
//占位参数可以有默认参数
//#include <iostream>
//using namespace std;
//void func01(int a, int)
//{
//	cout << "this is func01" << endl;
//}
//
//void func02(int a, int = 10)
//{
//	cout << "this is func02" << endl;
//}
//
//int main()
//{
//	func01(10, 10);
//	func02(10);
//	system("pause");
//	return 0;
//}

//P97.函数高级-函数重载-基本语法
//作用：函数名可以相同，提高复用性
//满足条件：
//同一作用域下
//函数名称相同
//函数参数或类型不同或个数不同或顺序不同
//注意：函数的返回值不可作为函数重载的条件

//P98.函数高级-函数重载-注意事项
//引用作为重载条件时
//函数重载遇到默认参数时
//#include <iostream>
//using namespace std;
//void func(int& a)//可读可写，int& a = 10;不合法！
//{
//	cout << "this is int& a func" << endl;
//}
//
//void func(const int& a)//只读，const int& a = 10;合法！常量引用
//{
//	cout << "this is const int& a func" << endl;
//}
//
////void func2(int a,int b = 10)//函数重载时若有默认参数，出现二义性，应避免
////{
////	cout << "this is func2" << endl;
////}
//
//void func2(int a)
//{
//	cout << "this is func2" << endl;
//}
//
//int main()
//{
//	int a = 10;
//	func(a);
//	func(10);
//	func2(10);
//	system("pause");
//	return 0;
//}

//P99.类和对象-封装-属性和行为作为整体
//C++面向对象的三大特性：封装，继承，多态
//C++中万事万物皆为对象，对象上有其属性和行为
//封装的意义：
//1.将属性和行为作为一个整体，表现生活中的事物
	//语法：class 类名{ 访问权限: 属性 / 行为 };
//2.将属性和行为加以权限控制
//#include <iostream>
//using namespace std;
//const double PI = 3.14;
//class circle//class代表设计一个类，类后面紧跟类的名称
//{
//	//访问权限
//public://公共权限
//	//属性
//	int r;//半径
//	//行为
//	double caculate()//获取周长
//	{
//		return 2 * PI * r;
//	}
//};
//int main()
//{
//	circle c1;//通过圆类，创建具体的圆（对象） 这个过程称为实例化
//	c1.r = 10;//给圆对象的属性进行赋值
//	cout << "圆的周长为：" << c1.caculate() << endl;
//	system("pause");
//	return 0;
//}

//P100.类和对象-封装-案例-设计学生类
//#include <iostream>
//using namespace std; 
//class student//类中的 属性 和 行为 统一称为 成员
//{
//public:
//	//属性 成员属性 成员变量
//	string name;
//	int id = 0;
//	//行为 成员函数 成员方法
//	void showStudent()
//	{
//		cout << "姓名：" << name << "\t学号：" << id << endl;
//	}
//	void setName(string str)//通过行为给属性赋值
//	{
//		name = str;
//	}
//
//	void setId(int num)
//	{
//		id = num;
//	}
//};
//
//int main()
//{
//	student s1;//实例化
//	s1.name = "张三";
//	s1.id = 1;
//	s1.showStudent();
//	student s2;
//	s2.name = "李四";
//	s2.id = 2;
//	s2.showStudent();
//	student s3;
//	s3.setName("王五");
//	s3.setId(3);//通过行为给属性赋值
//	s3.showStudent();
//	system("pause");
//	return 0;
//}

//P101.类和对象-封装-访问权限
//公共权限 public		成员 类内可访问   类外可访问
//保护权限 protected		成员 类内可访问   类外不可访问   子可以访问父保护内容
//私有权限 private		成员 类内可访问   类外不可访问   子不可访问父私有内容
//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	string m_name;
//protected:
//	string m_car;
//private:
//	int m_password;
//private:
//	void()
//	{
//		m_name = "张三";
//		m_car = "拖拉机";
//		m_password = 123456;
//	}
//};
//int main()
//{
//	Person p1;
//	p1.m_name = "李四";//其他成员因权限均不能在类外访问
//	system("pause");
//	return 0;
//}

//P102.类和对象-封装-C++中class和struct的区别
//唯一区别：默认的访问权限不同
//class: 默认权限是私有 private
//struct: 默认权限是公共 public

//P103.类和对象-封装-成员属性私有化
//优点1：将所有成员属性设置为私有，可以自己控制 读 写 权限
//优点2：对于 写 权限，我们可以检测数据的有效性
//#include <iostream>
//using namespace std;
//class Person
//{
//private://属性全部私有
//	//属性
//	string m_name;//姓名 可读可写
//	int m_age;//年龄 可读可写，写入数据必须大于0小于150
//	string m_lover;//爱人 只写
//public://公共行为作为与类外的接口
//	void setName(string name)//写入姓名
//	{
//		m_name = name;
//	}
//
//	string getName()//获取姓名
//	{
//		return m_name;
//	}
//
//	void setAge(int age)//写入年龄，写入数据必须大于0小于150
//	{
//		if (age >= 0 && age <= 150) {
//			m_age = age;
//		}
//		else {
//			cout << "拜托别搞" << endl; 
//		}
//	}
//
//	int getAge()//获取年龄
//	{
//		return m_age;
//	}
//
//	void setLover(string lover)//写入爱人
//	{
//		m_lover = lover;
//	}
//};
//int main()
//{
//	Person p1;
//	p1.setName("陈平安");
//	p1.setAge(40);
//	p1.setLover("宁姚");
//	cout << p1.getName() << "的年龄：" << p1.getAge() << endl;
//}

//P104.类和对象-封装-设计案例1-立方体类
//#include <iostream>
//using namespace std;
//class Cube
//{
//private://属性
//	int m_L = 0;//长
//	int m_W = 0;//宽
//	int m_H = 0 ;//高
//public://行为
//	//设置长
//	void setL(int L)
//	{
//		m_L = L;
//	}
//	//获取长
//	int getL()
//	{
//		return m_L;
//	}
//	//设置宽
//	void setW(int W)
//	{
//		m_W = W;
//	}
//	//获取宽
//	int getW()
//	{
//		return m_W;
//	}
//	//设置高
//	void setH(int H)
//	{
//		m_H = H;
//	}
//	//获取高
//	int getH()
//	{
//		return m_H;
//	}
//	//获取表面积
//	int calculateS()
//	{
//		return 2 * m_L * m_H + 2 * m_W * m_H + 2 * m_L * m_W;
//	}
//	//获取体积
//	int calculateV()
//	{
//		return m_L * m_H * m_W;
//	}
//	bool isSameByClass(Cube& c2)
//	{
//		if (m_L == c2.getL() && m_W == c2.getW() && m_H == c2.getH()) {
//			return true;
//		}
//		return false;
//	}
//};
//
//bool isSame(Cube& c1, Cube& c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "c1的表面积为：" << c1.calculateS() << endl;
//	cout << "c1的面积为：" << c1.calculateV() << endl;
//
//	//创建第二个立方体
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(11);
//
//	bool ret = isSame(c1, c2);//全局函数判断
//	if (ret) {
//		cout << "全局函数：两个立方体相同" << endl;
//	}
//	else {
//		cout << "全局函数：两个立方体不同" << endl;
//	}
//
//	ret = c1.isSameByClass(c2);
//	if (ret) {
//		cout << "成员函数：两个立方体相同" << endl;
//	}
//	else {
//		cout << "成员函数：两个立方体不同" << endl;
//	}
//
//}


//P105.类和对象-封装-设计案例2-点和圆的关系
//#include <iostream>
//using namespace std;
//#include "circle.h"
//#include "point.h"
////class Point//点类
////{
////public:
////	//行为
////	void setX(int x)
////	{
////		m_x = x;
////	}
////	void setY(int y)
////	{
////		m_y = y;
////	}
////	int getX()
////	{
////		return m_x;
////	}
////	int getY()
////	{
////		return m_y;
////	}
////
////private:
////	//属性
////	int m_x;
////	int m_y;
////};
//
////class Circle//圆类
////{
////public:
////	//行为
////	void setR(int r)
////	{
////		m_r = r;
////	}
////	void setCenter(Point center)
////	{
////		int x = center.getX();
////		int y = center.getY();
////		m_center.setX(x);
////		m_center.setY(y);
////	}
////	int getR()
////	{
////		return m_r;
////	}
////	int getCenterX()
////	{
////		return m_center.getX();
////	}
////	int getCenterY()
////	{
////		return m_center.getY();
////	}
////
////private:
////	//属性
////	int m_r;
////	Point m_center;//一个类中可以另一个类为成员
////};
//
//void isInCircle(Circle& c, Point& p)
//{
//	int rSquare = c.getR() * c.getR();
//	int dSquare = (p.getX() - c.getCenterX()) * (p.getX() - c.getCenterX()) + (p.getY() - c.getCenterY()) * (p.getY() - c.getCenterY());
//	if (rSquare == dSquare) {
//		cout << "在圆上" << endl;
//	}
//	else if (rSquare > dSquare) {
//		cout << "在圆内" << endl;
//	}
//	else {
//		cout << "在圆外" << endl;
//	}
//}
//
//int main()
//{
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//	Point p;
//	p.setX(10);
//	p.setY(10);
//	isInCircle(c, p);
//	system("pause");
//	return 0;
//}

//4.2 对象的初始化和清理
//P106.类和对象-对象特性-构造函数和析构函数
//构造函数：创建对象时为对象的成员属性赋值。可以有参数，可发生重载
// 语法： 类名(){}
//析构函数：在对象销毁前执行一些清理工作。不可有参数，不可重载
// 语法： ~类名(){}
//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	//构造函数
//	Person()//函数名同类名，无返回值，不需要void
//	{
//		cout << "Person 构造函数的调用" << endl;
//	}
//	//析构函数
//	~Person()//函数名同类名前加~，无返回值，不需要void
//	{
//		cout << "Person 析构函数的调用" << endl;
//	}
//};
//
//void test01()
//{
//	Person p;
//}
//
//int main()
//{
//	test01();
//	//Person p;
//	system("pause");
//	return 0;
//}

//P107.类和对象-对象特性-函数的分类以及调用
//两种分类：
// 按参数分类：有参构造和无参构造
// 按类型分类：普通构造和拷贝构造
//三种调用：
// 括号法
// 显示法
// 隐式转换法
//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//普通构造
//		//无参构造（默认构造）
//	Person()
//	{
//		cout << "Person 无参构造" << endl;
//	}
//		//有参构造
//	Person(int a)
//	{
//		age = a;
//		cout << "Person 有参构造" << endl;
//	}
//	//拷贝构造
//	Person(const Person &p)
//	{
//		//将传入人所有属性拷贝到当前人
//		cout << "Person 拷贝构造" << endl;
//		age = p.age;
//	}
//	//析构函数
//	~Person()
//	{
//		cout << "Person 析构函数" << endl;
//	}
//	int age;
//};
////调用
//void test01()
//{
//	//括号法
//	Person p1;//默认构造函数调用
//	Person p2(10);//有参构造函数
//	Person p3(p2);//拷贝构造函数
//	//注意事项1
//		//调用默认构造函数时不要加 ()，否则编译器会认为是一个函数的声明，而不会认为在创建对象
//	cout << "p2的年龄为：" << p2.age << endl;
//	cout << "p3的年龄为：" << p3.age << endl;
//
//	//显示法
//	Person p1;
//	Person p2 = Person(10);//有参构造
//	Person p3 = Person(p2);//拷贝构造
//	Person(10);//匿名对象 特点：当前行执行结束后，系统会立即收回
//	//注意事项2
//		//不要利用拷贝构造函数初始化匿名对象 Person(p3)
//		//编译器认为该对象等价于 Person p3 对象的声明,发生重定义报错
//
//	//隐式转换法
//	Person p4 = 10;//相当于 Person p4 = Person(10)
//	Person p5 = p4;//拷贝构造
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//P108.类和对象-对象特性-拷贝构造函数调用时机
//1.使用一个已经创建完毕的对象来初始化一个新对象
//2.值传递的方式给函数参数传值
//3.以值方式返回局部对象
//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person 默认构造函数" << endl;
//	}
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person 有参构造函数" << endl;
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "Person 拷贝构造函数" << endl;
//	}
//	~Person()
//	{
//		cout << "Person 析构函数" << endl;
//	}
//	int m_age;
//};
//
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2的年龄为" << p2.m_age << endl;
//}
//
//void doWork01(Person p)
//{
//
//}
//
//Person doWork02()
//{
//	Person p1;
//	return p1;
//}
//
//void test02()
//{
//	Person p;
//	doWork01(p);
//}
//
//void test03()
//{
//	Person p = doWork02();
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}

//P109.类和对象-对象特性-构造函数调用规则
//默认情况下，C++编译器至少给一个类添加3个函数
	//1.默认构造函数（无参，函数体为空）
	//2.默认析构函数（无参，函数体为空）
	//3.默认拷贝构造函数，对属性进行值拷贝
//调用规则
	//1.若用户定义有参构造函数，C++不再提供默认无参构造，但会提供默认拷贝构造
	//2.若用户定义拷贝构造函数，C++不再提供其他构造函数
#include <iostream>
using namespace std;
int main()
{


	system("pause");
	return 0;
}

//P110.类和对象-对象特性-深拷贝与浅拷贝

//P111.类和对象-对象特性-初始化列表

//P112.类和对象-对象特性-类对象作为类成员

//P113.类和对象-静态成员

//P114.类和对象-对象特性-成员变量和成员函数分开存储

//P115.类和对象-对象特性-this指针的用途

//P116.类和对象-对象特性-空指针访问成员函数

//P117.类和对象-对象特性-const修饰成员函数

//P118.类和对象-友元-全局函数做友元





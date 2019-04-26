#include <iostream>
#include<string>
#include<algorithm>
class Number {
private:
int dec;
int conv;
std::string s;
public:
Number(int n1, int n2);
Number(const Number&obj);
~Number();
Number converto(int n1);
void show();
};
Number::Number(int n1, int n2)
{
dec = n1;
conv = n2;
s = "";
}
Number::Number(const Number&obj)
{
dec = obj.dec;
conv = obj.conv;
s = obj.s;
}
Number::~Number()
{
}
Number Number::converto(int n1)
{
Number num(*this);
num.conv = n1;
do {
int a = dec % n1;
if (a >= 0 && a <= 9)num.s += a+ '0';
else num.s += a - 10 + '0';
dec /= n1;
} while (dec != 0);
reverse(num.s.begin(), num.s.end());
return num;
}
void Number::show()
{
std::cout << s << std::endl;
}

int main() {

int n, n1, n2;

std::cin >> n;

for (int i = 0; i < n; ++i) {

std::cin >> n1 >> n2;

Number no1(n1, 10);     //n1是10进制正整数

Number no3 = no1.converto(n2);  / 3是n2进制的正整数

no3.show();     //输出结果

}

return 0;
}

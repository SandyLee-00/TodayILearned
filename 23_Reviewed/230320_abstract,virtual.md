### abstract virtual

abstract : 해당 method의 기본 구현을 제공하지 않고, 하위 클래스에서 무조건 method를 구현한다

virtual : 해당 method의 기본 구현을 제공하면서, 하위 클래스에서 필요에 따라 해당 method를 override 한다

### abstract

객체로 만들 수 없고 상속으로 하위 클래스에서 구현한다

### virtual

클래스 선언에서 사용할 수 없다

### async() future promise()

async() : .함수를 비동기적으로 실행하는데 사용된다

future : 비동기 함수의 반환값을 받을 때 사용된다

promise() : 비동기 함수에서 예외를 던질 때 사용된다 

비동기 함수는 반환값으로 Promise객체를 반환한다

### 개미수열 구현

```cpp
#include <string>
#include <iostream>
using namespace std;
using ll = long long;
/*
숫자 + cnt
10 넘어가면 처리?
배열에 저장? 아니면 매번 새롭게 제작?
*/
string getAnt(string str) {
	string ret = "";
	int tmpNum = str[0] - '0';
	int	cnt = 1;

	for (int i = 1; i < str.size(); i++) {
		if (str[i] - '0' != tmpNum) {
			ret = ret + char(cnt + '0') + char(tmpNum + '0');
			tmpNum = str[i] - '0';
			cnt = 1;
		}
		else {
			cnt++;
		}
	}
	ret = ret + char(cnt + '0') + char(tmpNum + '0');

	return ret;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	string answer = "11";
	if (N == 1) answer = "1";
	if (N == 2) answer = "11";
	for (int i = 3; i <= N; i++) {
		answer = getAnt(answer);
		//cout << answer << "\n";

	}
	cout << answer;

	return 0;
}
```

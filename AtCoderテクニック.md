

# AtCoder

Int to char

```cpp
(char)(1+'0') = '1'
```

char to int

```cpp
(int)('1'-0) = 1
```

str.find

```cpp
str.find("hoge"); // 先頭から検索
str.rfind("hoge"); //末尾から検索
str.find("hoge",0,2); // 0から後でhoを検索
//見つからないとき std::string::npos
```

to_string
```cpp
to_string(123)
```

substr

一致する文字列を探す時

```cpp
for(){
	str.substr(i,5)== "tokyo"
}
```

順列反転

```cpp
std::reverse(str.begin(), str.end());
```

入れ替え

```cpp
std::swap(A,B);
```

辞書順比較

```cpp
str <= str2 
str > str2 
```

辞書順ソート

普通に文字列の配列をソートする

配列の初期値セット(-1 か 0 にしか使用できない)

```cpp
memset(araay, -1, sizeof(array));
```

構造体をソート

operatorを定義する

```cpp
struct Info
{
    std::string name;
    int age;

    Info(std::string inputted_name, int inputted_age)
    {
        name = inputted_name;
        age = inputted_age;
    }
    bool operator<(const Info &another) const
    {
        return age < another.age;//年齢を比較
    };
    //2つのconstを付けないとコンパイルエラーになるので注意!!
};
```

比較関数を作成する

```cpp
bool cmp(const Info &a, const Info &b)
{
    return a.age < b.age;
}
```

ラムダ式を使う

```cpp
std::sort(info.begin(), info.end(), [](const Info &a, const Info &b) {
		return a.age < b.age;
});//比較関数をラムダ式で作る
```

vectorを一部のみソートする

```cpp
sort(vec.begin(), vec.begin()+N);
```



memset バイト単位で値を設定する

```cpp
memset(配列名, 埋める値, sizeof(配列名));
```

fill

```cpp
fill(配列名, 最後の要素, 埋める値);
```



priority_queue

```cpp
priority_queue<T, vector<T>, greater<T>> hoge;
// pairの場合はfirstが比較される
```



小数点の桁数

```cpp
std::cout<<std::fixed<<std::setprecision(桁数)
```



文字列→int

```cpp
stoi(文字列)
```

数値->文字列

```
to_string(数値)
```



pairのsort

```cpp
bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

sort(aaa.begin(), aaa.end(), compare_by_b);
```



mapの値確認

```
m.count(key) == 1 ある　== 0 ない
countはmultimapなど複数値があるのには適さない
m.find(key) != m.end() ある　== end() ない
```



ダイクストラ





GCD (最大公約数)

```cpp
int gcd(int a, int b) {
    if (a%b == 0)
        return b;

    return gcd(b, a % b);
}
```

LCM（最小公倍数）

 ```cpp
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
 ```

組み合わせ

```cpp
void comb(vector<vector <long long int> > &v){
    for(int i = 0;i <v.size(); i++){
        v[i][0]=1;
        v[i][i]=1;
    }
    for(int k = 1;k <v.size();k++){
        for(int j = 1;j<k;j++){
            v[k][j]=(v[k-1][j-1]+v[k-1][j]);
        }
    }
}

int main(){
    N=2000;
    vector<vector<long long int> > v(N+1,vector<long long int>(N+1,0));
    comb(v);
  	// v[2][1] == 2C1
}
```

ビット計算、フラグが立っているか

```
if(flag & (1 << 何番め))
```

重複無しsorted_vector

```cpp
  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());
```

Bit出力

```
bitset<[byte]>(hoge)
```


| やりたいこと                                     | 実装                    |
| :----------------------------------------------- | :---------------------- |
| ビット bit に i 番目のフラグが立っているかどうか | if (bit & (1<<i))       |
| ビット bit に i 番目のフラグが消えているかどうか | if (!(bit & (1<<i)))    |
| ビット bit に i 番目のフラグを立てる             | bit｜= (1<<i)           |
| ビット bit に i 番目のフラグを消す               | bit &= ~(1<<i)          |
| ビット bit に何個のフラグが立っているか          | __builtin_popcount(bit) GCCビルトイン関数 |
| ビット bit に i 番目のフラグを立てたもの         | bit｜(1<<i)             |
| ビット bit に i 番目のフラグを消したもの         |            bit & ~(1<<i)            |

| やりたいこと                                                | 実装                          |
| :---------------------------------------------------------- | :---------------------------- |
| mask で表された部分のフラグをまとめて立てる                 | **bit ｜= mask**              |
| mask で表された部分のフラグをまとめて消す                   | **bit &= ~mask**              |
| mask で表された部分の情報のみを取り出したもの               | **bit & mask**                |
| mask で表された部分の**どれか**のフラグが立っているかどうか | **if (bit & mask)**           |
| mask で表された部分の**すべて**のフラグが立っているかどうか | **if ((bit & mask) == mask)** |

bit全探索

```cpp
int n = 5;
// {0, 1, ..., n-1} の部分集合の全探索
for (int bit = 0; bit < (1<<n); ++bit){
  /* bit で表される集合の処理を書く */
  vector<int> S;
  for (int i = 0; i < n; ++i) {
    if (bit & (1<<i)) { // i が bit に入るかどうか
    	S.push_back(i);
  	}
	}
}
```


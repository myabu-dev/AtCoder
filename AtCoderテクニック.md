# AtCoderテクニック

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


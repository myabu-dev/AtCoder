# AtCoderテクニック

Int to char

```
(char)(1+'0') = '1'
```

char to int

```
(int)('1'-0) = 1
```

str.find

```
str.find("hoge"); // 先頭から検索
str.rfind("hoge"); //末尾から検索
str.find("hoge",0,2); // 0から後でhoを検索
//見つからないとき std::string::npos
```

substr

一致する文字列を探す時

```
for(){
	str.substr(i,5)== "tokyo"
}
```

順列反転

```
std::reverse(str.begin(), str.end());
```

入れ替え

```
std::swap(A,B);
```

辞書順比較

```
str <= str2 
str > str2 
```

辞書順ソート

普通に文字列の配列をソートする

配列の初期値セット(-1 か 0 にしか使用できない)

```
memset(araay, -1, sizeof(array));
```

構造体をソート

operatorを定義する

```
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

```
bool cmp(const Info &a, const Info &b)
{
    return a.age < b.age;
}
```

ラムダ式を使う

```
std::sort(info.begin(), info.end(), [](const Info &a, const Info &b) {
		return a.age < b.age;
});//比較関数をラムダ式で作る
```

vectorを一部のみソートする

```
sort(vec.begin(), vec.begin()+N);
```


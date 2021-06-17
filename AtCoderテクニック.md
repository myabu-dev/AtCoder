

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

降順ソート

```
sort(x, x+N, std::greater<int>())
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

accumlate 範囲の集計

```
int sum = std::accumulate(v.begin(), v.end(), 0);

// (1) : 合計値をlong long型として求める
// accumulateの第3引数がlong long型のゼロを表す0LLになっていることに注意
// accumulateの戻り値型は、第3引数の型となるため、変数sum_llの型はlong long
auto sum_ll = std::accumulate(v.begin(), v.end(), 0LL);

// (1) : 文字列のリストを連結する
std::string concatenate = std::accumulate(v2.begin(), v2.end(), std::string());
std::cout << "concat : " << concatenate << std::endl;

// (2) : 任意の二項演算を行う
// ここでは、初期値を1として、全ての要素を掛け合わせている
int product = std::accumulate(v.begin(), v.end(), 1, [](int acc, int i) {
	return acc * i;
});
```



Next_permutation　**O(N!)**

```
// next_permutationは辞書順で次のものを出すので、ソートされていないとうまくいかない
do{
	// 123
	// 132
}while(next_permutation(array, array+N))
```

Prev_permutation (降順) **O(N!)**

```
// prev_permutationは辞書順で次のものを出すので、ソートされていないとうまくいかない
do{
	// 321
	// 312
}while(prev_permutation(array, array+N))
```



Next_permutationをうまく使って、配列の組み合わせを出す

```
	char array[5] = {'a', 'c', 'b', 'r', 'e'};
	vector<int> P = { 0, 1, 2, 3, 4 };
	do {
		for (int i = 0; i < 5; ++i) {
			cout<<array[P[i]]<<" ";
		}
		cout<<endl;
	} while (next_permutation(P.begin(), P.end()));
```



Mapをソートする方法

- mapのキーは自動的にソートされている、そもそもソートできないものはキーにできない
- valueは一度別のvectorとかに構造体として突っ込んでソートする

```
for(auto itr = map.begin(); itr != map.end(); ++itr){
	vec.pushback(itr->first, itr->second);
}

for(auto itr: map){
	vec.pushback(itr.first, itr.second);
}

sort(vec.begin(), vec.end());
```



素数列挙

エラストステネスの揮(オリジナル)

```c++
vector<bool> Eratosthenes(int N){
    vector<bool> is_prime(N, true);
    // 0 1は省く
    if(1 < N){
        is_prime[0] = false;
        is_prime[1] = false;
    }
    for (int i = 2; i * i < N; ++i) {
        if(is_prime[i]){
            for (int k = 2; i * k < N; ++k) {
                is_prime[i * k] = false;
            }
        }
    }
    return  is_prime;
}


int main(){
	int N = 100;
	vectot<bool> prime = Eratosthenes(N);
	
  for (int i = 0; i < prime.size(); ++i) {
    if(prime[i]){
    	cout<<i<<endl;
    }
  }
}
```

素数判定

https://qiita.com/EqualL2/items/b3c2530c458f8450d390

```
bool is_prime(const unsigned n){
    switch(n){
        case 0: // fall-through
        case 1: return false;
        case 2: // fall-through
        case 3: return true;
    } // n > 3 が保証された

    if(n%2 == 0) return false;
    if(n%3 == 0) return false;
    // 2と3の倍数でないので6の倍数ではないことが保証された

    if(n%6 != 1 && n%6 != 5) return false;
    // 6の倍数前後の数(素数かもしれない数)であることが保証された

    // 6の倍数前後の数を使って試し割りをする
    for(unsigned i=5;i*i<=n;i+=6){
        if(n%i     == 0) return false; // 6n-1
        if(n%(i+2) == 0) return false; // 6n+1
    }
    return true;
}
```

```
bool is_prime(int n){
    if(n < 2 )return false;
    if(n == 2 || n == 3)return true;

    if(n%2 == 0) return false;
    if(n%3 == 0) return false;
    
    for(int i = 5; i * i <= n; i += 6){
        if(n%i == 0) return false;
        if(n%(i+2) == 0) return false;
    }
    return true;
}
```



Vector 2次元初期化

```c++
vec.assign(N, vector<type>(M, 初期値))　// vec[N][M]
```



Union-find

参考書の一部カスタマイズ　struct->class

```c++
class UnionFind {
public:
    vector<int> par, siz; // par親頂点のインデックス根なら-1、siz各頂点の属する根付き木の頂点数
    UnionFind(int n): par(n, -1), siz(n, 1){ }

    // 根を求める
    int root(int x){
        if (par[x] == -1) return x;
        else return par[x] = root(par[x]);
    }

    // xとyが同じグループに属するかどうか
    bool issame(int x, int y){
        return root(x) == root(y);
    }

    // xを含むグループとyを含むグループとを併合する
    bool unite(int x, int y){
        // それぞれの根まで移動
        x = root(x);
        y = root(y);

        // すでに同じグループの時は何もしない
        if(x == y) return false;
        if(siz[x] < siz[y]) swap(x, y); // y側のサイズが小さくなるように

        // yをxの子とする
        par[y] = x;
        siz[x] += siz[y];
        return true;
    }

    // xを含むグループのサイズ
    int size(int x){
        return siz[root(x)];
    }
};
```

重み付きUnifon find

https://qiita.com/drken/items/cce6fc5c579051e64fab

```c++
template<class Abel> struct WeightedUnionFind {
    vector<int> par;
    vector<int> rank;
    vector<Abel> diff_weight;

    WeightedUnionFind(int n = 1, Abel SUM_UNITY = 0) {
        init(n, SUM_UNITY);
    }

    void init(int n = 1, Abel SUM_UNITY = 0) {
        par.resize(n); rank.resize(n); diff_weight.resize(n);
        for (int i = 0; i < n; ++i) par[i] = i, rank[i] = 0, diff_weight[i] = SUM_UNITY;
    }

    int root(int x) {
        if (par[x] == x) {
            return x;
        }
        else {
            int r = root(par[x]);
            diff_weight[x] += diff_weight[par[x]];
            return par[x] = r;
        }
    }

    Abel weight(int x) {
        root(x);
        return diff_weight[x];
    }

    bool issame(int x, int y) {
        return root(x) == root(y);
    }

    bool unite(int x, int y, Abel w) {
        w += weight(x); w -= weight(y);
        x = root(x); y = root(y);
        if (x == y) return false;
        if (rank[x] < rank[y]) swap(x, y), w = -w;
        if (rank[x] == rank[y]) ++rank[x];
        par[y] = x;
        diff_weight[y] = w;
        return true;
    }

    Abel diff(int x, int y) {
        return weight(y) - weight(x);
    }
};
```



DFS

```c++
using Graph = vector<vector<int>>;
vector<int> seen; // -1なら未探索、それ以外なら探索済み
void dfs(const Graph &G, int v){
    seen[v] = 1;
    for(int next_v : G[v]){
        if(seen[next_v] != -1) continue;
        dfs(G, next_v)
    }
}

for (int i = 0; i < M; ++i) {
  int a, b;
  cin>>a>>b;
  G[a].push_back(b);
  G[b].push_back(a);
}
seen.assign(N, -1);
for (int i = 0; i < N; ++i) {
  if(seen[i] != -1)continue;
  dfs(G, i);
}
```



BFS

```c++
// 入力: グラフGと始点s
// 出力: sから各頂点への最短経路長を表す配列
vector<int> BFS(const Graph &G, int s){
    int N = (int)G.size();
    vector<int> dist(N, -1);
    queue<int> que;

    dist[s] = 0;
    que.push(s);

    while(!que.empty()){
        int v = que.front();
        que.pop();

        for(int next_v: G[v]){
            if(dist[next_v] != -1)continue;
            dist[next_v] = dist[v] + 1;
            que.push(next_v);
        }
    }
    return dist;
}

Graph G(N);
for (int i = 0; i < M; ++i) {
  int a, b;
  cin>>a>>b;
  G[a].push_back(b);
}
    
vector<int>dest = BFS(G, s);
```

トポロジカルソート

```c++
using Graph = vector<vector<int>>;
vector<int> seen; // -1なら未探索、それ以外なら探索済み
vector<int> order; // トポロジカルソート順

void DFS(const Graph &G, int v){
    seen[v] = 1;
    for(int next_v : G[v]){
        if(seen[next_v] != -1) continue;
        DFS(G, next_v);
    }
    order.push_back(v);
}

// Graph G(N)
// seen.assign(N, -1);
// for (int i = 0; i < N; ++i) {
//     if(seen[i] != -1)continue;
//     DFS(G, i);
// }
// reverse(order.begin(), order.end());
// bool isDAG = order.size() == N; //DAGであるかどうか
```


class Parent{
protected:
    int foo;
};

class Child:public Parent{
public:
};

class Child_Child: public Child{
public:
    void set_foo(Child_Child aa){
        aa.foo = 10;
    }
};

int main() {
    return 0;
}
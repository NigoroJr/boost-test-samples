class Foo {
public:
    Foo()
        : x_{0}
    { }

    Foo(const int x)
        : x_{x}
    { }

    int x() const {
        return x_;
    }

private:
    int x_;
};

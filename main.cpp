#include <iostream>

//I am too lazy for writing enums
typedef int SomeEnum;
typedef int AnotherEnum;
typedef int YetAnotherEnum;
typedef int RefToBigClass;

class HugeClass
{
    int var1;
    int var2;
    SomeEnum var3;
    long long var4;
    AnotherEnum var5;
    int var6;
    YetAnotherEnum var7;
    RefToBigClass var8;

    public:
    HugeClass(int value1, int value2, int value3, long long value4,
              AnotherEnum value5, int value6, YetAnotherEnum value7, RefToBigClass value8)
    {
        var1 = value1;
        var2 = value2;
        var3 = value3;
        var4 = value4;
        var5 = value5;
        var6 = value6;
        var7 = value7;
        var8 = value8;
    }

    void Print()
    {
        std::cout << var1 << std::endl;
        std::cout << var2 << std::endl;
        std::cout << var3 << std::endl;
        std::cout << var4 << std::endl;
        std::cout << var5 << std::endl;
        std::cout << var6 << std::endl;
        std::cout << var7 << std::endl;
        std::cout << var8 << std::endl;
    }
};

class HugeClassBuilder
{
    int var1;
    int var2;
    SomeEnum var3;
    long long var4;
    AnotherEnum var5;
    int var6;
    YetAnotherEnum var7;
    RefToBigClass var8;

    public:
    void Set_Var1(int value)
    {
        var1 = value;
    }

    void Set_Var2(int value)
    {
        var2 = value;
    }

    void Set_Var3(SomeEnum value)
    {
        var3 = value;
    }

    void Set_Var4(long long value)
    {
        var4 = value;
    }

    void Set_Var5(AnotherEnum value)
    {
        var5 = value;
    }

    void Set_Var6(int value)
    {
        var6 = value;
    }

    void Set_Var7(YetAnotherEnum value)
    {
        var7 = value;
    }

    void Set_Var8(RefToBigClass value)
    {
        var8 = value;
    }

    HugeClass* Produce()
    {
        return new HugeClass(var1,var2,var3,var4,var5,var6,var7,var8);
    }
};

int main()
{
    HugeClass *A;
    HugeClassBuilder builder;

    builder.Set_Var1(1);
    builder.Set_Var2(2);
    builder.Set_Var3(3);
    builder.Set_Var4(4);
    builder.Set_Var5(5);
    builder.Set_Var6(6);
    builder.Set_Var7(7);
    builder.Set_Var8(8);
    A = builder.Produce();

    A->Print();

    return 0;
}

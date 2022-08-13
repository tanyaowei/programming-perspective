
struct Object
{
    unsigned int a = 1;
    unsigned char b = 2;
    unsigned short c = 3;
    unsigned long d = 4;

    int get_a();
    static int get_e();
    virtual int get_f()
    {
        return 23;
    }
};

int Object::get_a()
{
    return a;
}

int Object::get_e()
{
    return 100;
}

struct ObjectAlpha: public Object
{
    virtual int get_f()
    {
        return 47;
    }
};

struct ObjectOmega: public Object
{
    virtual int get_f()
    {
        return 99;
    }
};
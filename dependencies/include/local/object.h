
struct Object
{
    unsigned int a = 1;
    unsigned char b = 2;
    unsigned short c = 3;
    unsigned long d = 4;

    int get_a();
    static int get_e();
};

int Object::get_a()
{
    return a;
}

int Object::get_e()
{
    return 100;
}
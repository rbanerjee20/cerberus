int main()
{
    int x = 0;
    int *p = &x;
    char *p_char = (char *)p;
    /*@ to_bytes Owned<int>(p); @*/
    /*@ extract Owned<char>, 2u64; @*/
    p_char[2] = 0xff;
    *p;
}
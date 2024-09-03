int f(int x, int y)
    /*@ ensures return == x ^ y; @*/
{
    return x ^ y;
}

int main(void) {
    int r = f(9, 2);
    return 0;
}
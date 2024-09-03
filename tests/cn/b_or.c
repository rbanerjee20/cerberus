int f(int x, int y)
    /*@ ensures return == x | y; @*/
{
    return x | y;
}

int main(void) {
    int r = f(5, 9);
    return 0;
}
char *my_evil_str(char *str)
{
    char *copy = str;
    int len = my_strlen(str);

    for (int swapAmount = len - 1; swapAmount > 0; swapAmount--)
        for (int swapIndex = 0; swapIndex < swapAmount; swapIndex++)
            my_swap(str + swapIndex, str + swapIndex + 1);
    return copy;
}

void my_swap(char *a, char *b)
{
    char s = 0;

    if (!a || !b)
        return;
    s = *a;
    *a = *b;
    *b = s;
}

int my_strlen(const char *str)
{
    int count = 0;

    for (; str && *str != 0; ++str, ++count);
    return count;
}

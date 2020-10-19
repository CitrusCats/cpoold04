char *my_evil_str(char *str)
{
    char *copy = str;
    int len = my_strlen(str);

    for (int index = 0; index < len / 2; index++)
        my_swap(str + index, str + (len - 1 - index));
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

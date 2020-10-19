void my_sort_int_array(int *array, int size)
{
    for (int cycles = 0; array && cycles < (size - 1); cycles++)
        for (int counter = 0; counter < (size - 1 - cycles); counter++)
            if (array[counter] > array[counter + 1])
                my_swap(&array[counter], &array[counter + 1]);
}

void my_swap(int *a, int *b)
{
    int s = 0;

    if (!a || !b)
        return;
    s = *a;
    *a = *b;
    *b = s;
}

#include <stdio.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n);

void *ft_calloc(size_t count, size_t size) {
    void *array;

    array = (void *)malloc(count * size);
    if (array == NULL)
        return NULL;

    ft_bzero(array, count * size);
    return array;
}

int main() {
    size_t num_elements = 5;
    int *array = (int *)ft_calloc(num_elements, sizeof(int));

    if (array == NULL) {
        printf("Bellek tahsis edilemedi.\n");
        return 1;
    }

    for (size_t i = 0; i < num_elements; ++i) {
        printf("array[%zu] = %d\n", i, array[i]);
    }

    free(array);

    return 0;
}

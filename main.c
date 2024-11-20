#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include "calc.h"
#include "sorting.h"

void print_arr(int * arr, int size){
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
bool arrays_equal(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    srand(time(NULL));

    //    printf("%f + %f = %f\n", 2.0, 3.0, add(2.0,3.0));
    //    printf("%f\n", PI);
    //
    //    int cisla[] = {1, 2, 3, 4, 5, 6};
    //    int p_cisla = *cisla;
    //    printf("%d\n",p_cisla);
    //    p_cisla++;
    //    printf("%d\n",p_cisla);
    //
    //int list[] = {2, 4, 1, 3, 5 };
    //int ideal_list[] = {1, 2, 3, 4, 5};
    //int num_of_tries = 0;
    //
    //    print_arr(list, 5);
    //
    //    while (!arrays_equal(list, ideal_list, 5)) {
    //        bogo_sort(list, 5);
    //        print_arr(list, 5);
    //        num_of_tries++;
    //    }
    //
    //    printf("%d\n", num_of_tries);

    int list_selection[] = {2, 4, 1, 3, 5,2 };
    selection_sort(list_selection,6);
    print_arr(list_selection,6);

    int list_bubble[] = {2, 4, 1, 3, 5,2 };
    bubble_sort(list_bubble,6);
    print_arr(list_bubble,6);

    return 0;
}

#include "sorting.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>


void bogo_sort(int * arr, int size){
    int temp[size];
    bool swapped[size];
    int i = 0;

    while (i < size){

        int rand_num = rand() % size;

        if(!swapped[rand_num]) {
            temp[i] = arr[rand_num];
            swapped[rand_num] = true;
            i++;
        }
    }

    for (int j = 0; j < size; j++){
        arr[j] = temp[j];
    }
}

void bubble_sort(int * arr, int size){

    int temp[size];
    int current_cycle = 0;
    int temp1;
    int temp2;

    while (current_cycle < size) {

        for (int i = 0; i < size; i++) {

            temp1 = arr[i];
            temp2 = arr[i + 1];

            if (arr[i] > arr[i + 1]) { //leva jde do prava

                if(arr[i+1] == NULL){
                    temp[i] = arr[i];
                }
                else {
                    temp[i] = arr[i + 1];
                    arr[i] = temp2;
                    arr[i + 1] = temp1;
                }
            } else if (arr[i] < arr[i + 1]) { //nic se nemeni
                temp[i] = arr[i];
            }
        }
        current_cycle++;
    }

    for (int j = 0; j < size; j++){
        arr[j] = temp[j];
    }
}

void selection_sort(int * arr, int size){

    int temp[size];
    int smallest_number;
    int first_number;
    int min_index;

    for (int i = 0; i < size; i++) {
        first_number = arr[i];
        smallest_number = arr[i];

        for (int j = i + 1; j < size; j++) {

            if(arr[j]<smallest_number){
                smallest_number = arr[j];
                min_index = j;
            }
        }
        if(first_number == smallest_number){
            temp[i] = smallest_number;
        } else {
            temp[i] = smallest_number;
            arr[min_index] = first_number;
        }
    }
    for (int j = 0; j < size; j++){
        arr[j] = temp[j];
    }

}
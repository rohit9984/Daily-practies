// #include <stdio.h>

// int main() {
//     int i;
   
// int size = 5;
// int arr[size] = {4, 9, 7, 6, 5};
// for(i= 0; i<size; i++){
//     printf("%d\n", arr[i]);
// }

//     return 0;
// }

// error code

//  Main Error:
// int arr[size] = {4, 9, 7, 6, 5};

// यह लाइन C के पुराने स्टैंडर्ड (C90 या Turbo C) में सही नहीं मानी जाती। कारण यह है कि size एक variable है, और variable की value को array size के लिए initialization के समय इस्तेमाल नहीं किया जा सकता।


// Right Solution

// Option:- 1

// #include <stdio.h>

// int main() {
//     int i;
   

// int arr[5] = {4, 9, 7, 6, 5};
// for(i= 0; i<5; i++){
//     printf("%d\n", arr[i]);
// }

//     return 0;
// }

// Option:-2;

// #include <stdio.h>

// int main() {
//     int i;
   
// int size = 5;

// int arr[5] = {4, 9, 7, 6, 5};
// for(i= 0; i<size; i++){
//     printf("%d\n", arr[i]);
// }

//     return 0;
// }

// Option:-3;


// #include <stdio.h>
// #define size 5

// int main() {
//     int i;
   

// int arr[size] = {4, 9, 7, 6, 5};
// for(i= 0; i<size; i++){
//     printf("%d\n", arr[i]);
// }

//     return 0;
// }

// ===========================Searching Of Linear Array ===========================


#include <stdio.h>


int main() {
    int i;
    int key;
int size;
printf("Enter the Element size = ");
scanf("%d", &size);

int arr[size];


for(i = 0; i < size; i++){
printf("Enter the %dst element of the array = ", i);
scanf("%d", &arr[i]);

}
for(i = 0; i < size; i++){
    printf("%d \n", arr[i]);
    
}

printf("Enter key element = ");
scanf("%d", &key);
for(i = 0; i < size; i++){
    if(key == arr[i]){
    printf("%d \n", arr[i]);
    printf("found");
    }
    else{
        printf("Not Found");
    }
    
}


    return 0;
}



// ============================= Bubble Sort =============================
// #include<stdio.h>
// int main(){
//     int i, j, temp;
//     int n = 5;

//     int arr[5] = {4, 9, 7, 6, 5};

//     for(i= 0; i<n-1; i++){
//         for(j= i+1; j<n; j++){
//             if(arr[i] > arr[j]){
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     for(i= 0; i<n; i++){
//         printf("%d\n", arr[i]);
//     }
// } 



// --------------------------------------------- selection short ---------------------------------------------

// #include<stdio.h>
// int main(){
//     int i, j, minIndex, temp;
//     int n = 5;

//     int arr[5] = {4, 9, 7, 6, 5};

//     for(i= 0; i<n-1; i++){
//         minIndex = i;
//         for(j= i+1; j<n; j++){
//             if(arr[j] < arr[minIndex]){
//                 minIndex = j;
//             }
//         }
//         temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }

//     for(i= 0; i<n; i++){
//         printf("%d\n", arr[i]);
//     }
// }



// ======================= insertion short =======================


// #include<stdio.h>
// int main(){
//     int i, j, key;
//     int n = 5;

//     int arr[5] = {4, 9, 7, 6, 5};

//     for(i= 1; i<n; i++){
//         key = arr[i];
//         j = i - 1;
//         while(j >= 0 && arr[j] > key){
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }  

//     for(i= 0; i<n; i++){
//         printf("%d\n", arr[i]);
//     }



// ====================== Bubble short  ===========================
// #include<stdio.h>
// int main() {
//     int i , j, temp;
//     int n = 5;
//     int arr[5] = {9,6,8,3,5};
    
//     for(i = 0; i < n-1; i++){
   
//         for(j = i+1; j < n; j++){
        
//         if(arr[i] > arr[j]){
            
//               temp = arr[i];
//               arr[i] = arr[j];
//               arr[j] =temp;
               
//         }
//         }
         
      
//     }
//     for(i = 0; i < n; i++){
//         printf("%d\n", arr[i]);
//     }
//     return 0;
    
// }


// ================== seelection short ======================

// #include<stdio.h>
// int main() {
//     int i , j, temp;
//     int n = 5;
//     int arr[5] = {9,6,8,3,5};
//     int minIndex;
    
//     for(i = 0; i < n-1; i++){
        
//         minIndex = i;
   
//         for(j = i+1; j < n; j++){
        
//         if(arr[minIndex] > arr[j]){
            
//             minIndex = j;
            
              
               
//         }
//         }
//           temp = arr[i];
//               arr[i] = arr[minIndex];
//               arr[minIndex] =temp;
      
//     }
//     for(i = 0; i < n; i++){
//         printf("%d\n", arr[i]);
//     }
//     return 0;
    
// }


// ========================== Insertion short ==============================


// #include<stdio.h>
// int main() {
//     int i , j, temp;
//     int n = 5;
//     int arr[5] = {9,6,8,3,5};
//     int key;
    
//     for(i = 1; i < n; i++){
        
//         key = arr[i];
//         j = i-1;


   
//         while(j >= 0 && key < arr[j]){
//             arr[j+1] = arr[j];
//             j--;
            
//          }
//          arr[j+1] = key;
//         }
       
//     for(i = 0; i < n; i++){
//         printf("%d\n", arr[i]);
//     }
//     return 0;
    
// }





























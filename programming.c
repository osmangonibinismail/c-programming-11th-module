// #include <stdio.h>

// int main()

// {
//     char str[20] = "abcde 5 6 2 ?";

//     int length = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         length++;
//     }

//     printf("%d", length);
// }
// #include <stdio.h>
// #include<string.h>

// int main()

// {
//     char str[20] = "Osman?";

//     int length = strlen(str);

//     printf("%d", length);
// }
// #include <stdio.h>
// #include<string.h>

// int main()

// {
//     char str[20];

//     scanf("%s", str);

//     int length = strlen(str);

//     printf("%d", length);
// }
// #include <stdio.h>
// #include<string.h>

// int main()

// {
//     char a[20] = "string =;";

//     char b[10] = "abcde";

//     int length = strlen(b);

//     printf("%s %s\n", a, b);

//     for(int i = 0; i < length; i++){
//         a[i] = b[i];
//     }

//     a[length] = '\0';

//     printf("%s %s", a, b);

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char a[10] = "Arman";

//     char b[15] = "Osman";

//     printf("%s %s \n", a, b);

//     strcpy(b, a);

//     printf("%s %s \n", a, b);

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char a[10] = "Arman";

//     char b[15];

//     strcpy(b, "Osman");

//     printf("%s \n", b);

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char a[20] = "hello ";

//     char b[7] = "world?";

//     int len_a = strlen(a);

//     int len_b = strlen(b);

//     int length = len_a + len_b;

//     for(int i = len_a, j = 0; i < length; i++, j++){
//         a[i] = b[j];
//     }

//     a[length] = '\0';

//     printf("%s %s", a, b);

//     return 0;
// }
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char a[20] = "hello ";

//     char b[7] = "world?";

//     strcat(a, b);

//     printf("%s \n%s", a, b);

//     return 0;
// }

// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char a[] = "air";
//     char b[] = "air";

//     int champ = strcmp(b, a);

//     printf("%d", champ);

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20] = "Osman";

//     int length = strlen(str);

//     for(int i = 0, j = length - 1; i <= j; i++, j--){
//         char temp = str[i];

//         str[i] = str[j];

//         str[j] = temp;
//     }

//     printf("%s", str);

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20] = "Osman";

//     char str2[30];

//     strcpy(str2, str);

//     int length = strlen(str);

//     for(int i = 0, j = length - 1; i <= j; i++, j--){
//         char temp = str[i];

//         str[i] = str[j];

//         str[j] = temp;
//     }

//     printf("Before reverse = %s;\nAfter reverse = %s;",str2, str);

//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// int main(){
//     int i, j;

//     int arr[] = {16, 25, 44, 53, 62};
//     // int arr[20];

//     // scanf("%d", &arr);

//     for(i = 0; i < 5; i++){
//         printf("Iteration = %d: \n", i);
//         for(j = 0; j < 5 - i - 1; j++)
//         {
//             if(arr[j] > arr[j + 1]){
//                 int temp = arr[j];

//                 arr[j] = arr[j + 1];

//                 arr[j + 1] = temp;
//             }
//             for(int x = 0; x < 5; x++){
//                 printf("%d ", arr[x]);
//             }

//             printf("\n");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>

// int main()
// {
//     int n, r;
//     scanf("%d %d", &n, &r);

//     int permu = factorial_ber_koro(n) / factorial_ber_koro(n - r);
//     printf("%d", permu);
// }

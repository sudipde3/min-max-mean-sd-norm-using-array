// Name: Sudip De
// Entry No: 2023MAS7152

/*     ------     Programming Assignment-1     ------     */

/*--- Write a C program which should create 6 different arrays (using different 
math functions) of size N1, N2, N3, N4, N5, N6 obtained from user input. 
(Note, Ni (i = 1, 2,3,4,5, 6) should be different values)
-This program should find min, max, mean, SD values and pth norm 
(where p value should be entered by user) of all the arrays.
-Moreover, print which array has minimum value of pth norm.
-Next, print values of each array which lies in the interval [mean-sd, mean+sd] ---*/

#include <stdio.h>
#include <math.h>

int main() {
    int N1, N2, N3, N4, N5, N6;

    // N1, N2, N3, N4, N5, N6 obtained from user input...
    printf("Enter the sizes of the 6 arrays: ");
    scanf("%d %d %d %d %d %d", &N1, &N2, &N3, &N4, &N5, &N6);

    // p value should be entered by user input...
    double p;
    printf("\nEnter the value of p for p-th norm calculation: ");
    scanf("%lf", &p);

    // Create the 6 difference arrays...
    // Array size N1, N2, N3, N4, N5, N6...
    double array1[N1], array2[N2], array3[N3], array4[N4], array5[N5], array6[N6];

    // Fill the arrays using different math functions...
    for (int i = 0; i < N1; i++) {
        array1[i] = sin(i);
    }
    for (int i = 0; i < N2; i++) {
        array2[i] = cos(i);
    }
    for (int i = 0; i < N3; i++) {
        array3[i] = pow(i, 2) + 5*i - 10;
    }
    for (int i = 0; i < N4; i++) {
        array4[i] = exp(i);
    }
    for (int i = 0; i < N5; i++) {
        array5[i] = log(i + 1) + 3;
    }
    for (int i = 0; i < N6; i++) {
        array6[i] = sqrt(i);
    }

    // Calculates the min values, max values...
    // Calculates the mean values of each array using the formula Mean=(x_1+x_2+...+x_n)/n
    // Calculates the SD values for each array using the formula SD=sqrt(((x_1-mean)^2+(x_2-mean)^2+...+(x_n-mean)^2)/n)
    // Calculates the pth norm of each array using the formula ||x||_p=(|x_1|^p+|x_2|^p+...+|x_n|^p)^(1/p)

    // Array 1...
    double min1 = array1[0], max1 = array1[0], sum1 = 0, mean1, sd1 = 0, sum_pth_pow1 = 0;
    for (int i = 0; i < N1; i++) {
        if (array1[i] < min1) min1 = array1[i];
        if (array1[i] > max1) max1 = array1[i];
        sum1 += array1[i];
    }
    mean1 = sum1 / N1;
    for (int i = 0; i < N1; i++) {
        sd1 += pow(array1[i] - mean1, 2);
    }
    sd1 = sqrt(sd1 / N1);
    for (int i = 0; i < N1; i++) {
    sum_pth_pow1 += pow(fabs(array1[i]), p);
    }
    double p_norm1 = pow(sum_pth_pow1, 1/p);

    // Array 2...
    double min2 = array2[0], max2 = array2[0], sum2 = 0, mean2, sd2 = 0, sum_pth_pow2 = 0;
    for (int i = 0; i < N2; i++) {
        if (array2[i] < min2) min2 = array2[i];
        if (array2[i] > max2) max2 = array2[i];
        sum2 += array2[i];
    }
    mean2 = sum2 / N2;
    for (int i = 0; i < N2; i++) {
        sd2 += pow(array2[i] - mean2, 2);
    }
    sd2 = sqrt(sd2 / N2);
    for (int i = 0; i < N1; i++) {
        sum_pth_pow2 += pow(fabs(array2[i]), p);
    }
    double p_norm2 = pow(sum_pth_pow2, 1/p);

    // Array 3...
    double min3 = array3[0], max3 = array3[0], sum3 = 0, mean3, sd3 = 0, sum_pth_pow3 = 0;
    for (int i = 0; i < N3; i++) {
        if (array3[i] < min3) min3 = array3[i];
        if (array3[i] > max3) max3 = array3[i];
        sum3 += array3[i];
    }
    mean3 = sum3 / N3;
    for (int i = 0; i < N3; i++) {
        sd3 += pow(array3[i] - mean3, 2);
    }
    sd3 = sqrt(sd3 / N3);
    for (int i = 0; i < N1; i++) {
        sum_pth_pow3 += pow(fabs(array3[i]), p);
    }
    double p_norm3 = pow(sum_pth_pow3, 1/p);

    // Array 4...
    double min4 = array4[0], max4 = array4[0], sum4= 0, mean4, sd4= 0, sum_pth_pow4 = 0;
    for (int i= 0; i < N4; i++) {
        if(array4[i] < min4) min4 = array4[i];
        if(array4[i] > max4) max4 = array4[i];
        sum4 += array4[i];
    }
    mean4 = sum4 / N4;
    for(int i = 0; i < N4; i++) {
        sd4 += pow(array4[i] - mean4 , 2);
    }
    sd4 = sqrt(sd4 / N4);
    for (int i = 0; i < N1; i++) {
        sum_pth_pow4 += pow(fabs(array4[i]), p);
    }
    double p_norm4 = pow(sum_pth_pow4, 1/p);

    // Array 5...
    double min5 = array5[0], max5=array5[0], sum5 = 0, mean5, sd5 = 0, sum_pth_pow5 = 0;
    for(int i = 0; i < N5; i++){
        if(array5[i] < min5) min5 = array5[i];
        if(array5[i] > max5) max5 = array5[i];
        sum5 += array5[i];
    }
    mean5 = sum5 / N5;
    for(int i = 0; i < N5;i ++){
        sd5 += pow(array5[i] - mean5, 2);
    }
    sd5 = sqrt(sd5 / N5);
    for (int i = 0; i < N1; i++) {
        sum_pth_pow5 += pow(fabs(array5[i]), p);
    }
    double p_norm5 = pow(sum_pth_pow4, 1/p);

    // Array 6...
    double min6 = array6[0], max6 = array6[0], sum6 = 0, mean6, sd6 = 0, sum_pth_pow6 = 0;
    for(int i = 0; i < N6; i++){
        if(array6[i] < min6) min6 = array6[i];
        if(array6[i] > max6) max6=array6[i];
        sum6 += array6[i];
    }
    mean6 = sum6 / N6;
    for(int i = 0; i < N6; i++){
        sd6 += pow(array6[i] - mean6, 2);
    }
    sd6 = sqrt( sd6 / N6);
    for (int i = 0; i < N1; i++) {
        sum_pth_pow6 += pow(fabs(array6[i]), p);
    }
    double p_norm6 = pow(sum_pth_pow6, 1/p);

    // Find the minimum pth of norm value...
    double min_norm = sum_pth_pow1;
    int min_index = 1;

    if(sum_pth_pow2 < min_norm) {
        min_norm = sum_pth_pow2;
        min_index = 2;
    }
    if(sum_pth_pow3 < min_norm) {
        min_norm = sum_pth_pow3;
        min_index = 3;
    }
    if(sum_pth_pow4 < min_norm) {
        min_norm = sum_pth_pow4;
        min_index = 4;
    }
    if(sum_pth_pow5 < min_norm) {
        min_norm = sum_pth_pow5;
        min_index = 5;
    }
    if(sum_pth_pow6 < min_norm) {
        min_norm = sum_pth_pow6;
        min_index = 6;
    }

    // Print the results...
    printf("\nArray 1: Min = %0.4lf, Max = %0.4lf, Mean = %0.4lf, SD = %0.4lf, p-th norm = %0.4lf\n", min1, max1, mean1, sd1, p_norm1);
    printf("Array 2: Min = %0.4lf, Max = %0.4lf, Mean = %0.4lf, SD = %0.4lf, p-th norm = %0.4lf\n", min2, max2, mean2, sd2, p_norm2);
    printf("Array 3: Min = %0.4lf, Max = %0.4lf, Mean = %0.4lf, SD = %0.4lf, p-th norm = %0.4lf\n", min3, max3, mean3, sd3, p_norm3);
    printf("Array 4: Min = %0.4lf, Max = %0.4lf, Mean = %0.4lf, SD = %0.4lf, p-th norm = %0.4lf\n", min4, max4, mean4, sd4, p_norm4);
    printf("Array 5: Min = %0.4lf, Max = %0.4lf, Mean = %0.4lf, SD = %0.4lf, p-th norm = %0.4lf\n", min5, max5, mean5, sd5, p_norm5);
    printf("Array 6: Min = %0.4lf, Max = %0.4lf, Mean = %0.4lf, SD = %0.4lf, p-th norm = %0.4lf\n", min6, max6, mean6, sd6, p_norm6);
    printf("\nArray %d has the minimum value of pth norm: %0.4lf\n", min_index, min_norm);

    // Next, Print the values of each array that lie in the interval [mean - SD, mean + SD]
    printf("\nNext, Print the values of each array that lie in the interval [mean - SD, mean + SD]\n");
    printf("Array 1: ");
    for(int i = 0; i < N1; i++) {
        if(array1[i] >= mean1 - sd1 && array1[i] <= mean1 + sd1) {
            printf("%0.4lf ", array1[i]);
        }
    }
    printf("\n");

    printf("Array 2: ");
    for(int i = 0; i < N2; i++){
        if(array2[i] >= mean2 - sd2 && array2[i] <= mean2 + sd2){
            printf("%0.4lf ", array2[i]);
        }
    }
    printf("\n");

    printf("Array 3: ");
    for(int i = 0; i < N3; i++){
        if(array3[i] >= mean3 - sd3 && array3[i] <= mean3 + sd3){
            printf("%0.4lf ", array3[i]);
        }
    }
    printf("\n");

    printf("Array 4: ");
    for(int i = 0; i < N4; i++){
        if(array4[i] >= mean4 - sd4 && array4[i] <= mean4 + sd4){
            printf("%0.4lf ", array4[i]);
        }
    }
    printf("\n");

    printf("Array 5: ");
    for(int i = 0; i < N5; i++){
        if(array5[i] >= mean5 - sd5 && array5[i] <= mean5 + sd5){
            printf("%0.4lf ", array5[i]);
        }
    }
    printf("\n");

    printf("Array 6: ");
    for(int i = 0; i < N6; i++){
        if(array6[i] >= mean6 - sd6 && array6[i] <= mean6 + sd6){
            printf("%0.4lf ", array6[i]);
        }
    }
    printf("\n");

    return 0;
}
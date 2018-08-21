#include <stdio.h>






/*----------------------------------------------------calculator------------------------------------------------------- */
int calculatorInstruct(){

    printf("---------menu----------\n");
    printf("1. add\n");
    printf("2. minus\n");
    printf("3. times\n");
    printf("4. divide\n");
    printf("5. back\n");
    printf("------------------------\n");
    printf("\n");
    return 0;

}

int calculate(float a, float b, char method){
    float result;
    switch (method){
        case '1':
            result = a + b;
            printf("%f + %f = %f\n", a, b, result);
            return 0;
        case '2':
            result = a - b;
            printf("%f  -%f = %f\n", a, b, result);
            return 0;
        case '3':
            result = a * b;
            printf("%f * %f = %f\n", a, b, result);
            return 0;
        case '4':
            result = a / b;
            printf("%f / %f = %f\n", a, b, result);
            return 0;
        default:
            return 0;

    }

}

char make_calculate(){
    char method;

    for( ; ; ) {
        method = ' ';
        printf("please choose:");
        gets(&method);

        if(method == '1'|| method == '2' || method =='3'|| method == '4'){
            break;
        }else if(method == 5){
            return 0;
        }else{
            printf("value error, please input the number in the range of 1 to 5\n");
        }
    }

    float a =0;
    float b = 0;

    printf("please input the first number:");
    scanf("%f",&a);
    printf("please input the second number:");
    scanf("%f",&b);
    printf("the first number is %f, the second number is%f, method is %c\n", a, b, method);

    calculate(a, b, method);
}

int calculator(){
    calculatorInstruct();
    make_calculate();
    return 0;
}



/*----------------------------------------------------simple mis------------------------------------------------------- */

float average(float g1, float g2, float g3){
    float ave =(g1 + g2 + g3)/3;
    return ave;
}

int mis(){

    printf("-----student grades management information system-----\n");
    printf("please input 3 grades of 3 different students\n");

    float grade[3][3];
    float averageGrade[3];
    float averageCourseGrade[3];
    float higestCourseGrade = 0;
    int   higestCourseGradeID = 0;




    for(int i = 0; i < 3; i++){
        printf("please input grades of student%d\n", i+1);
        scanf("%f %f %f",&grade[i][0],&grade[i][1],&grade[i][2]);
        averageGrade[i] = average(grade[i][0],grade[i][1],grade[i][2]);
        printf("\n");


    }


    printf("average grade of student 1, student 2, student 3 are %f %f %f\n", averageGrade[0], averageGrade[1], averageGrade[2]);


    if(averageGrade[0] >= averageGrade[1] && averageGrade[1]>= averageGrade[2]){
        printf("the ranking is in the order of student 1, student 2 and student 3.\nstudent 1 get the highest grade\n");
    }else if(averageGrade[0] >= averageGrade[2] && averageGrade[2] >= averageGrade[1]){
        printf("the ranking is in the order of student 1, student 3 and student 2.\nstudent 1 get the highest grade\n");

    }else if(averageGrade[1] >= averageGrade[0] && averageGrade[0] >= averageGrade[2]){
        printf("the ranking is in the order of student 2, student 1 and student 3.\nstudent 2 get the highest grade\n");

    }else if(averageGrade[1] >= averageGrade[2] && averageGrade[2] >= averageGrade[0]){
        printf("the ranking is in the order of student 2, student 3 and student 1.\nstudent 2 get the highest grade\n");

    }else if(averageGrade[2] >= averageGrade[0] && averageGrade[0] >= averageGrade[1]){
        printf("the ranking is in the order of student 3, student 1 and student 2.\nstudent 3 get the highest grade\n");

    }else{
        printf("the ranking is in the order of student 3, student 2 and student 1.\nstudent 3 get the highest grade\n");

    }




    for(int i = 0; i < 3; i++){
        averageCourseGrade[i] = average(grade[0][i], grade[1][i], grade[2][i]);
        if (higestCourseGrade < averageCourseGrade[i]){
            higestCourseGrade = averageCourseGrade[i];
            higestCourseGradeID = i+1;
        }
    }
    printf("average grade of course 1, course 2, course 3 are %f %f %f\n", averageCourseGrade[0], averageCourseGrade[1], averageCourseGrade[2]);
    printf(" course %d has the highest mark.\n", higestCourseGradeID);










    return 0;

}

/*----------------------------------------------------other calculate----------------------------------------------------------- */

int otherInstruct(){

    printf("---------menu----------\n");
    printf("1. Narcissistic number\n");
    printf("2. greatest common divisor & least common multiple \n");
    printf("3. back\n");
    printf("------------------------\n");
    printf("\n");
    return 0;

}


int narcissistic () {
    int i;
    printf("narcissistic  ");
    for (i=100; i<1000; i++){
        int a;
        int b;
        int c;
        a = i%10;
        b = ((i-a)%100)/10;
        c = (i-a-b)/100;
        if (a*a*a+b*b*b+c*c*c == i) {
            printf("%d ",i);
        }
    }
    printf("\n-------------\n");
    return 0;
}

int common () {
    int a;
    int b;
    printf("please input two numbers\n");
    scanf("%d %d",&a,&b);
    int c=1;
    int d = a*b;
    while(c!=0){
        c = a%b;
        a = b;
        b = c;
        if (c==0) {
            printf("the greatest common divisor is %d, the least common multiple is %d",a, d/a);
            printf("\n-------------\n");
        }
    }
    return 0;
}

char otherStart(){
    char method;
    for( ; ; ) {
        method = ' ';
        printf("please choose:");
        gets(&method);

        if(method == '1'){
            narcissistic();
            return 0;
        }else if(method == '2'){
            common();
            return 0;
        }else if(method == '3'){
            return 0;
        }else{
            printf("value error, please input the number in the range of 1 to 3\n");
        }
    }

}



int others() {
    otherInstruct();
    otherStart();
}




/*----------------------------------------------------main--------------------------------------------------------- */


int instruct(){

    printf("\n");
    printf("simple calculator\n");
    printf("********************\n");
    printf("1. calculator\n");
    printf("2. mis\n");
    printf("3. others\n");
    printf("4. Exit\n");
    printf("********************\n");
    printf("\n");
    return 0;

}

int start(){
    int inputError = 0;
    for( ; ; ) {

        if (inputError == 0){
            instruct();
        }

        char i;
        printf("please choose:");
        gets(&i);

        switch (i){
            case '1' :
                calculator();
                inputError = 0;
                break;
            case '2' :
                mis();
                inputError = 0;
                break;
            case '3':
                others();
                inputError = 0;
                break;
            case '4':
                printf("exit \n");
                return 0;

            default:
                inputError = 1;
                printf("please input the number in the range of 1 to 4\n");
        }


    }
}



int main() {

    start();
    return 0;
}
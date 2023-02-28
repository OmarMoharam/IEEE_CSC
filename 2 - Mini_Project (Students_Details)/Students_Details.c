/* 
Write a program that allows the user to enter students’ names followed by their test scores.
The program shall output the following (assume that a maximum number of students is 20):
- The average score.
- Names of all the students whose test scores are below the average, with an appropriate warning message.
- Highest test score.
- Name of the top student, with an appreciation message.
*/

#include<stdio.h>
#include<string.h>

#define MAX 30 //max. array size

/*struct for student details*/
struct student 
{
    char name[MAX];
    float marks;
};

void bubble(struct student[], int N); // function for sorting marks and names
float average(struct student[] , int N); // function for calculate average of the marks
void belowAverage(struct student[] , int N ,float avg); // function for student's marks below average

/* function main begins execusion */
void main( )
{
    int noOfStudents, pos; 
    float avg, max;
    printf("Enter how many students you want to store (1 ~ 20): "); // promt
    scanf("%d",&noOfStudents); // store number of students the user will insert
        
    struct student studata[noOfStudents];

    /* loop for entering student's name and mark */
    for(int i = 0; i < noOfStudents; i++)
    {
        printf("Enter Name: "); // promt
        scanf("%s",studata[i].name); // storing names
        printf("Enter Marks: "); // promt
        scanf("%f",&studata[i].marks); // storing marks
    } // end for

    bubble(studata , noOfStudents); // sorting
    avg = average(studata , noOfStudents); // store average calculated in fuction
    
    /* loop for printing names and marks */
    printf("\n\tName\tMarks\tAverage\n");
    for(int i = 0; i < noOfStudents; i++)
    {
        printf("\t%s\t%.2f\t%.2f\t\n", studata[i].name, studata[i].marks, avg);
    } // end for

    printf("%33s" , "\n***Students below average***\n"); 
    printf("\tNama\tMarks\t\n");
    belowAverage(studata , noOfStudents , avg); // printing students below average

    /* loop for calculating the highest mark */
    max = studata[0].marks;
    for (int i = 0; i < noOfStudents; i++)
    {
        if (studata[i].marks > max)
        {
            max = studata[i].marks;
            pos = i; // store the index of the student who have the highest mark
        } // end if
    } // end for
    printf("\n\nThe highest score is %0.2f and it belong to \"%s\"\n",max, studata[pos].name);
    printf("Thanks for your effort and we have a gift for you , we hope you like it...\n");
}

void bubble(struct student studata[], int N) 
{
    int temp1;
    char temp2[MAX];
    
    for ( int i = 0; i < N ; i++) 
    {
        for (int j = 0 ; j < N - 1 ; j++) 
        {
            if ( studata[j].marks > studata[j+1].marks ) 
            {
            /* swap marks */
            temp1 = studata[j+1].marks;
            studata[j+1].marks = studata[j].marks;
            studata[j].marks = temp1;
            
            /* swap names */
            strcpy(temp2 , studata[j+1].name);
            strcpy(studata[j+1].name , studata[j].name);
            strcpy(studata[j].name , temp2);
            } // end if
        } // end for
    } // end for
}

float average(struct student studata[] , int N)
{
    float sum = 0, avg = 0;

    for(int i = 0; i < N; i++)
    {
        sum += studata[i].marks; // calculate sum of the marks
    } // end for

    return avg = sum / N; // return the average of the marks
}

void belowAverage(struct student studata[] , int N , float avg)
{
    int check = 0; // variable for checking if there is any students below average or not

    for (int i = 0; i < N; i++)
    {
        if (studata[i].marks < avg)
        {
            printf("\t%s\t%0.2f\t\n",studata[i].name, studata[i].marks);
            check++;
        } // end if
    } // end for
    
    if (check == 0)
    {
        printf("%28s" , "No students below average");
    } // end if
    else
    {
        printf("%47s" , "\n!!!ALL THESE STUDENTS SHOULD STUDY HARD NEXT TIME!!!");
    } // end else
}
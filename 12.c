#include<stdio.h>
main()
1	{
2	float  kan,eng,hindi,maths,science, sst,avmar;
3	printf("Letter Grading\n"); 
4         printf("SSLC Marks Grading\n");
5         printf("Enter the marks for 6  Kannada:"); 
 6       scanf("%f",&kan);

 
7	printf("enter the marks for English:");
8	scanf("%f",&eng);
9	printf("enter the marks for Hindi:");
10	scanf("%f",&hindi);
11	printf("enter the marks for Maths");
12	scanf("%f",&maths);
13	printf("enter the marks for Science:");
14	scanf("%f",&science);
15	printf("enter the marks for Social Science:"); 
16	scanf("%f",&sst); 
17	avmar=(kan+eng+hindi+maths+science+sst)/6.25; 
18	printf("the average marks are=%f\n",avmar); 
19      if((avmar<35)&&(avmar>0))
  20	 printf("fail"); 
21      elseif((avmar<=40)&&(avar>35)) 
  22	printf("Grade C");
23     elseif((avmar<=50)&&(avmar>40)) 
24     printf("Grade C+");
25     elseif((avmar<=60)&&(avmar>50)) 
 26    printf("Grade B");
27     elseif((avmar<=70)&&(avmar>60)) 
28     printf("Grade B+");
29    elseif((avmar<=80)&&(avmar>70)) 
30    printf("Grade A");
31    elseif((avmar<=100)&&(avmar>80))
32    printf("Grade A+");
33    else 
34    printf(“Invalid”);
35    }

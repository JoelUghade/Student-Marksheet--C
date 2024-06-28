#include <stdio.h>
#include <conio.h>


int s1,s2,s3,s4,s5,p1,p2,p3,p4,p5,st1,st2,st3,st4,st5,si1,si2,si3,si4,si5,pt1,pt2,pt3,pt4,pi1,pi2,pi3,pi4,total,per,rno,cno;
char grade[9];
char name[20],date[12],mname[20],eno[20],cat[20],med[20],bname[20],clg[20];

void sgrade(int m, int n){
	if(m>90){
		grade[n]='A';
	}
	else if(m>80){
		grade[n]='B';
	}
	else if(m>70){
		grade[n]='C';
	}
	else if(m>60){
		grade[n]='D';
	}
	else if(m>50){
		grade[n]='E';
	}
}

void pgrade(int m, int n){
	if(m>45){
		grade[n]='A';
	}
	else if(m>40){
		grade[n]='B';
	}
	else if(m>35){
		grade[n]='C';
	}
	else if(m>30){
		grade[n]='D';
	}
	else if(m>25){
		grade[n]='E';
	}
}


void input_data(){
	printf("Enter Name: ");
	scanf("%s",name);
	printf("Enter Roll no: ");
	scanf("%d",&rno);
	printf("Enter Date: ");
	scanf("%s",date);
	printf("Enter Mother's Name: ");
	scanf("%s",mname);
	printf("Enter Center No.: ");
	scanf("%d",&cno);
	printf("Enter Enrol. No.: ");
	scanf("%s",eno);
	printf("Enter Category: ");
	scanf("%s",cat);
	printf("Enter Medium: ");
	scanf("%s",med);
	printf("Enter Branch: ");
	scanf("%s",bname);
	printf("Enter College: ");
	scanf("%s",clg);
	
	printf("Enter mathematics 2 Exam & Internal Marks: ");
	scanf("%d %d", &st1, &si1);
	printf("Enter AEM Exam & Internal Marks: ");
	scanf("%d %d", &st2, &si2);
	printf("Enter Applied chemistry Exam & Internal Marks: ");
	scanf("%d %d", &st3, &si3);
	printf("Enter CS Exam & Internal Marks: ");
	scanf("%d %d", &st4, &si4);
	printf("Enter  BEE Exam & Internal Marks: ");
	scanf("%d %d", &st5, &si5);
	
	printf("Enter mathematics 2 (PRACTICAL) Exam & Internal Marks: ");
	scanf("%d %d", &pt1, &pi1);
	printf("Enter AEM (PRACTICAL) Exam & In
ternal Marks: ");
	scanf("%d %d", &pt2, &pi2);
	printf("Enter Applied Chemistry (PRACTICAL) Exam & Internal Marks: ");
	scanf("%d %d", &pt3, &pi3);
	printf("Enter BEE (PRACTICAL) Exam & Internal Marks: ");
	scanf("%d %d", &pt4, &pi4);
}

void calculation(){
	
	s1 = st1+si1;
	sgrade(s1,0);
	s2 = st2+si2;
	sgrade(s2,1);
	s3 = st3+si3;
	sgrade(s3,2);
	s4 = st4+si4;
	sgrade(s4,3);
	s5 = st5+si5;
	sgrade(s5,4);
	
	p1 = pt1+pi1;
	pgrade(p1,5);
    p2 = pt2+pi2;
    pgrade(p2,6);
    p3 = pt3+pi3;
	pgrade(p3,7);
    p4 = pt4+pi4;
	pgrade(p4,8);
	
}

void show_marksheet(){

	printf("\n--------------------------------------------------------------------------------------------------------");   
	printf("\n|\t\t\t\t     Faculty of Science and Technology     \t\t\t\t|");
	printf("\n|\t FIFTH SEMESTER EXAMINATION FOR DEGREE OF BACHELOR OF ENGINEERING (NEW), SUMMER 2021 \t\t|");
	printf("\n|\t\t\t [ FOUR YEAR DEGREE COURSE ] [CREDIT BASED SYSTEM ] \t\t\t\t|");
	printf("\n| Student Name  : %s\t\t\t | Roll No. : %d | Date : %s  \t\t\t  |",name,rno,date);
	printf("\n| Mother's Name : %s\t\t\t | Center No. : %d | P/L : 75/5  \t\t\t  |",mname,cno);
	printf("\n| Enrol. No.    : %s\t\t\t | Category : %s | Medium : %s  \t\t\t  |",eno,cat,med);
	printf("\n| Branch Name   : %s\t\t\t \t\t\t\t\t  \t\t\t  |",bname);
	printf("\n| College Name  : %d %s\t\t\t \t\t\t\t  \t\t\t  |",cno,clg);
	printf("\n--------------------------------------------------------------------------------------------------------");
	printf("\n| Sr.|                       |    MARKS AND CREDIT SCHEME    |        MARKS AND GRADE AWARDED          |");
	printf("\n| No.|       SUBJECT         |    MAX    |   MAX   |   MIN   | TU/PU | TI/PI | TOTAL | GRADE | GP | CR |");
	printf("\n|    |                       |TU/PU|TI/PI|  MARKS  |  MARKS  |       |       | MARKS |       |    |    |");
	printf("\n--------------------------------------------------------------------------------------------------------");
    printf("\n| 01.| PS                    |  80 |  20 |   100   |    40   |   %d  |  %d   |  %d   |   %c  | 10 | 08 |",st1,si1,s1,grade[0]);
	printf("\n| 02.| M2                    |  80 |  20 |   100   |    40   |   %d  |  %d   |  %d   |   %c  | 09 | 07 |",st2,si2,s2,grade[1]);
	printf("\n| 03.| AEM.                  |  80 |  20 |   100   |    40   |   %d  |  %d   |  %d   |   %c  | 08 | 09 |",st3,si3,s3,grade[2]);
	printf("\n| 04.| AC.                   |  80 |  20 |   100   |    40   |   %d  |  %d   |  %d   |   %c  | 09 | 10 |",st4,si4,s4,grade[3]);
	printf("\n| 05.| BEE.                  |  80 |  20 |   100   |    40   |   %d  |  %d   |  %d   |   %c  | 08 | 07 |",st5,si5,s5,grade[4]);
	printf("\n| 06.| M2(PRACTICAL)         |  25 |  25 |   050   |    25   |   %d  |  %d   |  %d   |   %c  | 07 | 08 |",pt1,pi1,p1,grade[5]);
	printf("\n| 07.| AEM (PRACTICAL)       |  25 |  25 |   050   |    25   |   %d  |  %d   |  %d   |   %c  | 10 | 10 |",pt2,pi2,p2,grade[6]);
	printf("\n| 08.| AC (PRACTICAL)        |  25 |  25 |   050   |    25   |   %d  |  %d   |  %d   |   %c  | 08 | 10 |",pt3,pi3,p3,grade[7]);
	printf("\n| 09.| BEE (PRACTICAL)       |  25 |  25 |   050   |    25   |   %d  |  %d   |  %d   |   %c  | 09 | 09 |",pt4,pi4,p4,grade[8]);
    printf("\n--------------------------------------------------------------------------------------------------------");
   
}

int main(){
	
	input_data();
	calculation();
	show_marksheet();
	return 0;
}

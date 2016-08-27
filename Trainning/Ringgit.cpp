/*
Suppose there are 5 types of notes: RM50, RM25, RM10, RM5, and RM1. We want to make changes with these notes for a given amount of money. For example, if we have RM11, then we can make changes with one RM10 and one RM1, two RM5 notes and one RM1 notes, one RM5 notes and six RM1 notes, or eleven RM1 notes. So there are four ways of making changes for RM11 with the above notes. Write a program to find the total number of different ways of making changes for any amount of money in RM. Your program should be able to handle up to RM7489.

Input

The first line is an integer T <= 100, followed by T lines, each line consisting of a positive number for the amount of money in RM.

Output

For each input line, output a line containing the number of different ways of making changes with the above 5 types of RM notes.

Sample Input

2
11
26

*/

#include <iostream>

using namespace std;
int ringgitCounter(int ringgit){
	int num=0;
	
	if(ringgit == 0){num += 1;}
	if(ringgit >= 50){num+=ringgitCounter(ringgit-50);}
	if(ringgit >= 25){num+=ringgitCounter(ringgit-25);}
	if(ringgit >= 10){num+=ringgitCounter(ringgit-10);}
	if(ringgit >= 5){num+=ringgitCounter(ringgit-5);}
	if(ringgit >= 1){num+=ringgitCounter(ringgit-1);}
	
	return num;
	
}
void start(int test_case_num, int total_test_cases){
	/*Do the Coding*/
	int ringgit =0;
	
	cin >> ringgit;
	cout << ringgitCounter(ringgit) << endl;
}

int main(void){
	
	/*Get the number of test cases*/
	int num_test_cases = 0;
	cin >> num_test_cases;
	
	/*Call the program in a for loop*/
	for(int i=0; i < num_test_cases; i++){
		start(i, num_test_cases);
	}
	
	return 0;
}
#include "Test.h"
#include "jni.h"
#include "stdio.h"

JNIEXPORT void JNICALL Java_Test_fact (JNIEnv *p, jobject q)
{
	int num , f = 1, i = 1;
	// logic of C program
	printf ("Enter into C environment\n");

	printf ("Enter a number to findout factorial\n");
	scanf("%d",&num);
	for (i = 1; i <= num; i++)
		f = f*i;

	printf ("Fact of is : %d \n",f);
	printf ("Exit from C and enter into Java again..\n\n");
}
#include<Stdio.h>
#include<String.h>
int main()
{
	char s[100];
	int i,flag,flag1,a,b;
	int l,count1,count2;
	printf("enter a string:");
	scanf("%d",&s);
	l=strlen(s);
	flag=l;
	for(i=0;i<l;i++)
	{
		if(s[i]!='0'&&s[i]!='1'){
			flag=0;
		}
	}
	if(flag!=1)
	printf("string did not valid");
	if(flag==1)
	{
		i=0;count1=0;
		while(s[i]=='0'){
			count1++;
			i++;
		}
		while(s[i]=='1'){
			i++;
		}
		flag1=1;
		count2=0;
		while(i<1){
			if(s[i]=='0'){
				count2++;
			}
			else{
				flag1=0;
			}
			i++;
		}
		if(flag1==1){
			if(count1==count2)
			{
				printf("string satisfies the condition");
				printf("string accepted");
			}else{
				printf("the string does not satisfy the condition");
				printf("stirng not accepted");
			}
			printf("the string does not satisfy the codition");
			printf("string not accepted");
		}
	}
}

#include <stdio.h>
#include <string.h>




void caesar (char message[], int key);

void caesar (char message[], int key)

{
char messageO[264];
int i=0;
for (int k=0; k<(int) strlen(message);k++){
messageO[k]=message[k];
}
while (message[i] !='\0'){
	if (message[i]<=90 && message[i]>=65){
		if (message[i]+key>90){
		messageO[i]=message[i]+(char)key-(char)26;
		}
		else{
		messageO[i]=message[i]+(char)key;
		}
	}
	if (message[i]<=122 && message[i]>=97){
		if (message[i]+key>122){
		messageO[i]=message[i]+(char)key-(char)26;
		}
		else {
		messageO[i]=message[i]+(char)key;
		}
	}i++;	
}
printf( "%s \n" ,messageO);
}
int main (void){
char message[]="Sp S rkn kcuon zoyzvo grkd droi gkxdon, droi gyevn rkfo cksn pkcdob rybcoc.";
for (int j=1;j<26;j++){
caesar (message,j);
}
return 0;
}

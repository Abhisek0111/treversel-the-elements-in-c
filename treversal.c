#include<stdio.h>
#include<stdlib.h>

struct myArray

{
   int total_size;
   int used_size ;
   int* ptr ;	
};

void creatArray(struct myArray* a, int tsize, int usize){
	(*a).total_size = tsize;
	(*a).used_size = usize;
	(*a).ptr = (int*)malloc(tsize * sizeof(int));
}
void setval(struct myArray * a){
	int n;
	for( int i=0;i<a->used_size;i++){
		printf("enter element %d",i);
		scanf("%d",&n);
		(a->ptr)[i]=n;
	}
}
void show(struct myArray * a){
	for(int i=0;i<a->used_size;i++){
		printf("%d\n",(a->ptr)[i]);
}
}
 
int main(){
	struct myArray marks;
	creatArray(&marks,10,4);
	printf("we are running setval naw\n");
	setval(&marks);
	printf("we are running show now\n");

	show(&marks);
	return 0;
}
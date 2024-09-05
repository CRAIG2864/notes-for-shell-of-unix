#include<stdio.h>
//csapp_book p33 task 2.5
typedef unsigned char *byte_pointer;
 
void show_byte(byte_pointer start,size_t len){
    size_t i;
    for(i = 0 ; i < len ; i++){
				printf("%.2x",start[i]);
     }
     printf("\n");
} 
  
int main(){
		int val = 0x87654321;
		byte_pointer valp = (byte_pointer) &val;
		show_byte(valp,1);
		show_byte(valp,2);
		show_byte(valp,3);
		return 0;
}

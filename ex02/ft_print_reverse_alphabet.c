#include <unistd.h>
void ft_print_reverse_alphabet(void){
	char letra = 0;
	for(letra='z';letra >='a';letra--){
	write (1,&letra,1);
	}

}



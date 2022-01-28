#include <stdio.h>
#include "functions.h"

void main() {
    int size;
    size = validate();
	struct biblio biblioteca[size];
	modifyData(biblioteca, size);
	printData(biblioteca, size);
}
	
//https://kesquivel.files.wordpress.com/2013/05/estructuras2013final2.pdf
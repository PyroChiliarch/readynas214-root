//elevate
//Made by Pyrochiliarch for NETGEAR ReadyNAS 214

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[]) {

	//Attempt to escalate
	printf("Escalating permissions!\n");
	setuid(0);
	seteuid(0);
	
	//Spawn shell if successful
	if (getuid() + geteuid() == 0) {
		printf("You are now root!\nType 'exit' to revert back\n");
		system("/bin/bash");
	} else {
		printf("Something went wrong :(\n");
	}
	
}

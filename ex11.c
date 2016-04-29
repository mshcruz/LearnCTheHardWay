#include<stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	while(i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	//let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};

	int num_states = 4;
	i = num_states; //watch for this
	while (i > 0) {
		printf("state %d: %s\n", num_states-i, states[num_states-i]);
		i--;
	}

	//copy argv to states
	while (argc > 0) {
		if (argc <= num_states) {
			states[argc-1] = argv[argc-1];
		}
		argc--;
	}

	//print the new states
	i = num_states;
	while (i > 0) {
		printf("state %d: %s\n", num_states-i, states[num_states-i]);
		i--;
	}

	return 0;
}

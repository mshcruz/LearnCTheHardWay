#include <stdio.h>

int main (int argc, char *argv[])
{
	// create two arrays we care about
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {
			"Alan", "Frank",
			"Mary", "John", "Lisa"
	};

	// safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	// first way using indexing
	for (i = 0; i < count; i++) {
		printf("%s has %d years alive.\n",
						names[i], ages[i]);
	}

	printf("---\n");

	// setup the pointer to the start of the array
	int *cur_age = ages;
	char **cur_name = names;

	// second way using pointers
	for(i = 0; i < count; i++) {
		printf("%s is %d years old.\n",
						*(cur_name+i), *(cur_age+i));
	}

	printf("---\n");

	// third way, pointers are just arrays
	for(i = 0; i < count; i++) {
		printf("%s is %d years old again.\n",
						cur_name[i], cur_age[i]);
	}

	printf("---\n");

	// fourth way with pointers in a stupid complex way
	for(cur_name = names, cur_age = ages;
					(cur_age - ages) < count;
					cur_name++, cur_age++)	
	{
		printf("%s lived %d years so far.\n",
						*cur_name, *cur_age);
	}

	printf("---\n");

	// printing arrays with pointer notation
	for (i = 0; i < count; i++) {
		printf("%s has %d years alive.\n",
						*(names + i), *(ages + i));
	}
	
	printf("---\n");

	int *ptr_ages = ages;
	char **ptr_names = names;
	// modifying pointers with pointer notation
	for (i = 0; i < count; i++, ptr_names++, ptr_ages++) {
		printf("%s has %d years alive.\n",
						*ptr_names, *ptr_ages);
	}

	printf("---\n");

	// trying to use the original arrays after modifying them with the pointer notation
	for (i = 0; i < count; i++) {
		printf("%s has %d years alive.\n",
						*(names + i), *(ages + i));
	}
	
	printf("---\n");

	// trying to use the auxiliary pointers after modifying them with the pointer notation
	// should fail
//	for (i = 0; i < count; i++) {
//		printf("%s has %d years alive.\n",
//						*(ptr_names + i), *(ptr_ages + i));
	//}
	
	//printf("---\n");

	return 0;
}

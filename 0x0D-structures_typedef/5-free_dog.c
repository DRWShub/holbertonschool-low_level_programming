#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free the doggos
 * @d: doggo
 */

void free_dog(dog_t *d)
{
	free(d);
}
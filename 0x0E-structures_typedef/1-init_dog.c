#include "dog.h"
/**
 * init_dog - check the code for Holberton School students.
 *
 *   * @d: pointer
 *
 *    * @name: naming
 *
 *     * @age: number
 *
 *      * @owner: pointer
 *
 *       * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

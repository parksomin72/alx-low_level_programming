#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog -a dog's basic info
 * @name: First member
 * @age: Seconde member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
/** Prototype **/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

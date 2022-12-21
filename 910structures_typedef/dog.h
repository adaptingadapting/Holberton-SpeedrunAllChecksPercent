#ifndef dog_h
#define dog_h

/**
 * struct dog - dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

typedef struct dog {
  char *name;
  float age;
  char *owner;
}dog;

typedef dog  dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

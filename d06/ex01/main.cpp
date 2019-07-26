#include <iostream>
#include <string>

#include <time.h>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void* serialize(void);
Data* deserialize(void *raw);

int main(void)
{
	srand(time(0));

	void* ptr = serialize();
	Data *data = deserialize(ptr);

	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
}

static void fill_str(char* ptr)
{
	for (int i = 0; i < 8; ++i)
		ptr[i] = (rand() % 65) + 32;
}

void* serialize(void)
{
	char *ptr = new char[16 + sizeof(int)];
    
	fill_str(ptr);

	int *num = reinterpret_cast<int*>(ptr + 8);
	*num = rand();

	fill_str(ptr + 8 + sizeof(int));

	return reinterpret_cast<void*>(ptr);
}

Data* deserialize(void *raw)
{
	Data* new_data = new Data;
	char* raw_data = reinterpret_cast<char*>(raw);
    new_data->s1 = std::string(raw_data, 8);
	new_data->n = *reinterpret_cast<int*>(raw_data + 8);
	new_data->s2 = std::string(raw_data + 8 + sizeof(int), 8);
	
	return new_data;
}
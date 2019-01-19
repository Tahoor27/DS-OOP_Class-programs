#ifndef cal
#define cal

class calculator
{
public:

	calculator();


	int add_R(int, int);

	int add_I(int val1_I, int val2_I);

	int subtract_R(int val1_R, int val2_R);

	int subtract_I(int val1_I, int val2_I);

	int multiply_R(int val1_R, int val2_R, int val1_I, int val2_I);

	int multiply_I(int val1_R, int val2_R, int val1_I, int val2_I);

	float divide_R(int val1_R, int val2_R, int val1_I, int val2_I);

	float divide_I(int val1_R, int val2_R, int val1_I, int val2_I);

private:
	int result_R;
	int result_I;
};

#endif; 

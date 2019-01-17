
#include <iostream>
using namespace std;

int fibnoc(int x)
{
	int i = x;
	if (i == 0 || i == 1)	return i;
	else
	{
		i++;
		return fibnoc(x - 1) + fibnoc(x - 2);
	}
}

class series
{
public:
	series()	
	{
		nterms = 0;
	}

	series(int x) 
	{
		nterms = x;
	}

	virtual void createseries() = 0;	

	virtual void printseries() = 0;	

	virtual ~series() {}

protected:
	int nterms;	
};


class fibonacci_series : public series	
{
private:
	int *ptr;	
public:
	
	fibonacci_series()
	{
		nterms = 0;
		ptr = NULL;
	}

	fibonacci_series(int num)
	{
		nterms = num; ptr = NULL;
	}

	
	~fibonacci_series() {}

	
	void createseries()
	{
		ptr = new int[nterms];
		for (int i = 0; i<nterms; i++)
		{

			*(ptr + i) = fibnoc(i);
		}
	}

	void printseries()
	{
		for (int i = 0; i<nterms; i++)
		{
			cout << *(ptr + i) << " ";
		}
		cout << endl;
	}
};


class geometric_series : public series
{
private:
	int *ptr;
	int first_term, common_ratio;
public:
	geometric_series()
	{
		nterms = 0;
		first_term = 0;
		common_ratio = 0;
		ptr = NULL;
	}

	geometric_series(int x, int y, int z)
	{
		nterms = z;
		first_term = x;
		common_ratio = y;
		
	}

	~geometric_series() {}

	void createseries()
	{
		ptr = new int[nterms];
		int next_term = first_term;
		for (int i = 0; i<nterms; i++, next_term *= common_ratio)
		{
			*(ptr + i) = next_term;
		}
	}

	void printseries()
	{
		for (int i = 0; i<nterms; i++)
		{
			cout << *(ptr + i) << " ";
		}
		cout << endl;
	}
};

class arithmetic_series : public series
{
private:
	int *ptr;
	int first_term, common_diff;
public:
	arithmetic_series()
	{
		nterms = 0;
		first_term = 0;
		common_diff = 0;
		ptr = NULL;
	}

	arithmetic_series(int first, int diff, int num)
	{
		nterms = num;
		first_term = first;
		common_diff = diff;
		ptr = NULL;
	}

	~arithmetic_series() {}

	void createseries()
	{
		ptr = new int[nterms];
		int next_term = first_term;
		for (int i = 0; i<nterms; i++, next_term += common_diff)
		{
			*(ptr + i) = next_term;
		}
	}

	void printseries()
	{
		for (int i = 0; i<nterms; i++)
		{
			cout << *(ptr + i) << " ";
		}
		cout << endl;
	}
};

int main()	
{
	int number_of_terms = 0, first_term = 0, extra = 0;

	series *s = NULL;
	cout << "\nEnter number of terms for Fibonnaci series:";
	cin >> number_of_terms;
	s = new fibonacci_series(number_of_terms);
	s->createseries();
	s->printseries();

	cout << "\nEnter the first term, number of terms and common ratio of geometric series: ";
	cin >> first_term >> extra >> number_of_terms;
	s = new geometric_series(first_term, extra, number_of_terms);
	s->createseries();
	s->printseries();

	cout << "\nEnter the first term, common difference, and number of terms for arithemtic series: ";
	cin >> first_term >> extra >> number_of_terms;
	s = new arithmetic_series(first_term, extra, number_of_terms);
	s->createseries();
	s->printseries();
	cout << endl;

	system("pause");
	return 0; 
}
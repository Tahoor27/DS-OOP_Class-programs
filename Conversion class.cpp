//Convert seconds into HH:MM:SS format 

#include <iostream>
using namespace std; 

class Conversion {
private:
		int s; 
		int h;              //hours with round off values
		float h1;          //hours with decimal point 
		int m;            //minutes with round off values 
		float m1;        //minutes with decimal point 
		int secs;       // seconds used in the format 
public:
		void get_info(int a)
		{
			s = a; 
		}
		void conv_h()		//Conversion function hours 
		{
			h = s / 3600;
			h1 = s / 3600;
		}
		void conv_m()		//Conversion function minutes
		{
			float a;
			a = h1 - h;
			m = a * 60;
			m1 = a * 60;
		}
		void conv_s()		//Conversion function seconds
		{
			float b; 
			b = m1 - m; 
			secs = b * 3600; 
		}
		int get_value1()
		{
			return h; 
		}
		int get_value2()
		{
			return m;
		}
		int get_value3()
		{
			return secs;
		}

};

int main()
{
	int s; 
	cout << "enter time in seconds:" << endl;
	cin >> s; 
	Conversion a; 
	a.get_info(s);
    cout << a.get_value1 << ":" << a.get_value2 << ":" << a.get_value3 << endl; 
	system ("pause");
	return 0; 
}
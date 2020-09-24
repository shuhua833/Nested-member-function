#include<iostream>
using namespace std;
class total{
	private:
		float principle,time,rate;
		float interest()
		{
			return (principle*time*rate)/100;
		}
		public:
			void setdata(float p,float t,float r)
			{
			principle=p;
			time=t;
			rate=r;
		}
			void findtotal()
			{
				cout<<"total amount "<<principle+interest();
			}
};
int main()
{
	class total t;
	t.setdata(500,10,2);
	t.findtotal();
	return 0;
}

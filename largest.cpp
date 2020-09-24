#include<iostream>
using namespace std;
class set{
	private:
		int m,n;
		public:
			void input();
			int largest();
			void showdata();
		}s;
			
			inline int set::largest()
			{
				if(m>=n)
				{
					return m;
				}
				else
				return n;
			}
			inline void set::input()
			{
				cout<<"enter m and n  "<<endl;
				cin>>m;
				cin>>n;
			}
			void set::showdata()
			{
				cout<<"largest is "<<largest();
			}
int main()
{
	s.input();
	s.showdata();
	return 0;
	
}

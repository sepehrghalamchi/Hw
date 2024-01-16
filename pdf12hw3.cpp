#include <iostream>

using namespace std;

 

int gcd(int a, int b)

{

            if(b==0)

            {

                        return a;

            }

            else

            {

                        return gcd(b, a % b);

            }

}

 

int main()

{

            cout << "The Greatest Common Divisor of Two Natural Numbers \n\n";

           

            int x, y;

           

            while(true)

            {

                        cout << "  x = ";

                        cin >> x;

                        cout << "  y = ";

                        cin >> y;

                       

                        if (x < 1 || y < 1)

                        {

                                    cout << "The program is terminated.";

                                    break;

                        }

                       

                        cout << "gcd = " << gcd(x, y) << endl << endl;                   

            }                     

}

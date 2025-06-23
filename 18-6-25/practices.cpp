#include <iostream>
using namespace std;

//  Q3. YOU HAVE A RECTANGLE M X N
//  SQUARE PILES OF A
//  ADD THOSE SQUARE PILES DONT BREAK THEM. YOU CAN HAVE EXTRA SPACE

// ANSWER-->
// seal value formula for a/b is a+b-1/b

// seal value of m/a + seal value of n/a
// = (m+a-1)/a * (n+a-1)/a

// Q7. I have two piles coin a and coin b. I can take 1 coin and 2 from other.
// Tell me by giving you a and b value will i be able to empty them at the same time
// ANSWER-->
// a+b%3==0
// min(a,b)*2>=max(a,b)

// WEIRD ALGO
//  #include<iostream>
//  using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     while (true)
//     {
//         if(n==1){
//             cout<<"1  ";
//             break;
//         }
//         if(n%2==0){
//             cout<<n<<"  ";
//             n=n/2;
//         }else
//         {
//             cout<<n<<"  ";
//             n=n*3+1;
//         }
//     }

//     return 0;
// }

// 9.  check prime numbers between 1 and 100
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     ;
//     while (true)
//     {
//         cout << "Enter a number";
//         cin >> n;

//         bool is_prime = true;
//         if (n <= 1)
//         {
//             is_prime = false;
//         }
//         else
//         {
//             for (int i = 2; i <= n/2; i++)
//             {

//                 if (n % i == 0)
//                 {
//                     is_prime = false;
//                     break;
//                 }
//             }
//         }
//         if (is_prime)
//         {
//             cout << "PRIME" << endl;
//         }
//         else
//         {
//             cout << "NOT PRIME" << endl;
//         }
//     }
//     return 0;
// }

// 10. print prime numbers between 1 and n

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     while (true)
//     {
//         cout << "Enter a number";
//         cin >> n;

//         for (int i = 2; i <= n; i++)
//         {
//             bool is_prime = true;
//             for (int j = 2; j*j <= i; j++)
//             {
//                 if (i % j == 0)
//                 {
//                     is_prime = false;
//                     break;
//                 }
//             }
//             if (is_prime)
//             {
//                 cout << i << "  ";
//             }
//         }
//     }
//     return 0;
// }

// 11. print alternate prime numbers between 1 and n
// #include <iostream>
// using namespace std;
// bool isPrime(int i)
// {
//     for (int j = 2; j * j <= i; j++)
//     {
//         if (i % j == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int n;
//     while (true)
//     {
//         /* code */

//         cout << "Enter a number: ";
//         cin >> n;
//         int count = 0;
//         for (int i = 2; i <= n; i++)
//         {
//             if (isPrime(i))
//             {
//                 if (count % 2 == 0)
//                 {
//                     cout << i << "\t";
//                 }
//                 count++;
//             }
//         }
//     }
//     return 0;
// }

// 12. find mean,mode,mid,max,min given n values
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);

    // MEAN
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    double mean = sum / size;
    cout << "MEAN IS: " << mean;

    // MODE
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "MAX IS: " << max;

    return 0;
}
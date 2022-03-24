{
int n;
int count = 0;
cout << "Enter the number": ;
cin >> n;
while(n != 0)
{
n = n/10;
++count;

cout << "\n number of digits"  << count << endl;
}

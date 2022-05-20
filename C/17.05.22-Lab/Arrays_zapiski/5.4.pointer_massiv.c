int main()
{
int arr[] = {10, 20, 30, 40, 50}; // Integer array
int *ptr = arr; // Pointer to 0th element of array
/*
* If arr behaves as a constant pointer then compiler
* must complain about arr++. Since arr++ is equivalent to
* arr = arr + 1 which is not permitted.
*/
arr++; // Error
// No error
ptr++;
return 0;
}

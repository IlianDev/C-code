union value {
    long int i_value; /* The real number */
    float f_value; /* The floating-point number */
} data;

int i; /* Random integer */
float f; /* Random floating-point number */

int main()
{
    data.f_value = 5.0;
    data.i_value = 3;

    printf("1. %d\t%f\n", data.i_value, data.f_value);

    i = data.i_value;
    f = data.f_value;

    printf("2. %d\t%f\n", i, f);

    data.f_value = 5.5;

    printf("3. %d\t%f\n", data.i_value, data.f_value);

    i = data.i_value;

    printf("4. %d\t%f\n", i, f);
    return 0;

}

/**
 * reverse_array - function that reverses array
 * @a: array
 * @n: number of elements in array
 * Return: No return.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n--;
	while (i < n/2)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
		i++;
	}
}

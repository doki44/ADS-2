//1
int countPairs1(int* arr, int len, int value)
{
int n = 0;
for (int i = 0; i < len - 1; i++) {
for (int j = 1; j < len; j++) {
if (arr[i] + arr[j] == value) {
n++;

}
}
return n;
}
cout «"n =" « n « endl;
}

//2
int countPairs2(int* arr, int len, int value)
{
	int count = 0;
	int start = 0;
	int end = len - 1;
	while (start < end) {
		int res = arr[start] + arr[end];
		if (res == value) {
			count++;
			start++;
			end--;
		}
		else {
			if (res < value) start++;
			else end--;
		}
	}
	return count;

//3
int countPairs3(int* arr, int len, int value)
{
	int key = 0, count = 0;
	for (int i = 0; i < len; i++) {
		key = value;
		key = key - arr[i];
		int x = cbinsearch(arr, len, key);
		if (x >= 0 && x > i)
			count++;
		if (x < 0)
			continue;
	}
	return count;


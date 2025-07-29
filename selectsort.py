
def selectionsort(arr,n):
  for i in range(n-1):
   min = i;
   for j in range(i+1,n):
     if(arr[j] > arr[min]):
       min = j;
   temp = arr[min]
   arr[min] = arr[i]
   arr[i] = temp 
   
   
 
def main():
	arr = []
	n = int(input("enter the number of elements "))

	for i in range(n):
		arr.append(int(input("enter the element")))
		
	selectionsort(arr,n)

	for i in range(n):
		print(arr[i])
	 
 
main()

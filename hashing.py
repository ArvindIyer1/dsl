def insert(a,element):
    hashval = element % len(a)
    for i in range(len(a)):
        index = (hashval +i)%len(a)
        if (a[index] == None) :
            a[index] = element
            print(f"Element has been inserted at {index}")
            return
    print("Error ! hashtable is full :")


def search(a,key):
   hashval = key % len(a)
   for i in range(len(a)):
    index = (hashval +i)% len(a)
    if (a[index] == None):
            break
    if a[index] == key:
            print(f"Element {key} found at index {index}")
            return
   print("Element not found after searching")
    


def delete(a, key):
    hashval = key % len(a)
    for i in range(len(a)):
        index = (hashval + i) % len(a)
        if (a[index] == None):
            break
        if a[index] == key:
            a[index] = None
            print(f"Element {key} deleted from index {index}")
            return
    print("Element not found ")

def display(a):
    print("Current Hashtable :")
    for i,value in enumerate(a):
        print(f"{i} : {value}")

a = [None] * 10

while True :
    print (''' 1 : Insert 
                2 : Search 
                3 : Delete 
                4 : Display
                5 : Exit ''')

    choice = int(input("Enter the operation to be performed :"))
    if(choice == 1):
        element = int(input("Enter the element"))
        insert(a,element)

    elif(choice == 2):
        element = int(input("Enter the element to be searched :"))
        search(a,element)

    elif(choice == 3):
        element = int(input("Enter the element to be deleted :"))
        delete(a,element)

    elif(choice == 4):
        display(a)
    
    elif(choice == 5):
        break
    
    else :
        print("Please enter a valid operation to be performed ")



    









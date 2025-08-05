events = []


def addEvent():
	event = input("enter the event input : ")
	events.append(event)
	print("event added succesfully")

def processEvent():
	
	print("Processing events",events.pop(0))
	

def cancelEvent():
	eventc = input("enter event to be cancelled: ")
	if eventc in events:
	  print("cancelling event",events.remove(eventc))
	else :
	  print("event not found ")

def displayEvent():
	print("events in queue")
	for i in events:
	  print("",i)

def main():
	while True :
		print("1.Add event")
		print("2.Process Event")
		print("3.Cancel Event")
		print("4.Display Event")
		print("5.Exit")
		
		choice = input("enter the event from the choice list above :")
		
		if choice == '1':
		  addEvent()
		elif choice == '2':
		  processEvent()
		elif choice == '3':
		  cancelEvent()
		elif choice == '4':
		  displayEvent()
		elif choice == '5' :
		  print("exiting")
		  break;
		else :
		  print("Enter a valid choice ")

main()








	

	
	

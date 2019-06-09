#include<stdio.h>
main()
{
	printf("Pick an item: \n1. Pen\n2. Pencil\n3. Eraser\n4. Book");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("you picked pen.");
			break;
			
			case 2:
				printf("you picked pencil.");
				break;
				
			case 3:
				printf("you picked eraser.");
				break;
				
			case 4:
				printf("you picked Book.");
				break;
				
			default: printf("Invalid choice");
				

	}
}

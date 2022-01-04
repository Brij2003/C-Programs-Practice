#include <stdio.h>
void main()
{
	int ch;
		printf("1.KFC 2. MAC Donals 3. Dominos\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					int menu;
					printf("1.chicken burger 2.French Fries 3.wings\n");
					scanf("%d",&menu);
					switch(menu)
					{
						case 1:
							printf("Please have your chicken buger\n");
							break;
						case 2:
							printf("Please have your French Fries\n");
							break;
						case 3:
							printf("Please have your wings\n");
							break;
						default :
							printf("Please enter the valid option\n");
							break;
					}
				}
				break;
			case 2:
				{
					int menu;
					printf("1.Burgers 2.French Fries 3.Double cheese French Fries\n");
					scanf("%d",&menu);
					switch(menu)
					{
						case 1:
							printf("Please have your Buger\n");
							break;
						case 2:
							printf("Please have your French Fries\n");
							break;
						case 3:
							printf("Please have your Double cheese French Fries\n");
							break;
						default:
							printf("Please enter the valid option\n");
							break;
					}
				}
				break;
				case 3:
				{
					int menu;
					printf("1.Maregreta 2.Garlic bread 3.Farmhouse\n");
					scanf("%d",&menu);
					switch(menu)
					{
						case 1:
							printf("Please have your Maregreta\n");
							break;
						case 2:
							printf("Please have your Garlic bread\n");
							break;
						case 3:
							printf("Please have your Farmhouse\n");
							break;
						default:
							printf("Please enter the valid option\n");
							break;
					}
				}
				break;
				default:
					printf("Please enter the valid option\n");
					break;
		}
}

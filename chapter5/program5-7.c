/* Program fragment that demonstrates multiple 
	cases for one set of statements
*/

switch(printFlag)
{
	case 1: 
	case 3: printf("Good Day\n"); 
					printf("Odds have it!\n") ; 
					break;
	case 2:
	case 4: printf("Good Day\n"); 
					printf("Evens have it!\n"); 
					break;
	default: printf("Good Day, I'm confused!\n"); 
					 printf("Bye!\n");
					 break;
} // switch 

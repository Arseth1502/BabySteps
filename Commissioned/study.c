#include <stdio.h>

int main()
{
        float minutes,
              hours,
              day,
              hours2,
              days2,
              days1,
              answer,
              minutes2;
              
        printf("How many hours did you study this week?\n\n");
        scanf("%f", &hours);
        
        day = hours/7;
        minutes = ((day - (int)day) * 60);
		
		printf("\n\nYou have studied %d hours and %.f minutes per day this week.\n\n", (int)day, minutes);
		
		printf("-----------------------------------------------------------------\nWhat about for the month? Type any value if you want to find out.\n-----------------------------------------------------------------\n");
		scanf("%f", &answer);
		
		if(answer = 1)
		{
		
		 printf("\nHow many hours did you study the month you want to calculate?\n");
        scanf("%f", &hours2);
        
        printf("\nWrite the number of the days\n\n");
        scanf("%f", &days2);
        
        days1 = hours2/days2;
        minutes2 = ((days1 - (int)days1) * 60);
		
		printf("\n\nYou have studied %d hours and %.f minutes per day this month\n\n\n\n\n", (int)days1, minutes2);
			}
		
		system("PAUSE");
	}

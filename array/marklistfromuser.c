#include <stdio.h>

int main(){
    int i,n,mark[10],sum,per;
    
    char name[15];
    printf("ENTER THE STUDENT NAME : ");
    scanf("%s", name);
    
    int roll;
    printf("ENTER THE ROLL NUMBER : ");
    scanf("%i", &roll);
    
    int sem;
    printf("WHICH SEMESTER : ");
    scanf("%d", &sem);
    
    
    
    printf("ENTER THE NUMBER OF SUBJECT  : ");
    scanf("%d",&n);
    
    //inputing data to the marklist
    
    for(i=0;i<n;i++)
    {
        printf("MARK OF SUBJECT %d :",i+1);
        scanf("%d",&mark[i]);
        
    }
    
    //grade card
    
    printf("\n\t\tGRADE CARD\n");
    
    printf("STUDENT NAME : %s\n",name);
    printf("STUDENT ROLL NO : %i\n",roll);
    printf("SEMESTER NO : %i\n\n",sem );
    
    
    
    for(i=0;i<n;i++){
        printf("subject %d : %d\n",i+1, mark[i]);
    } 
    
    //for total
    for(i=0;i<n;i++){
        sum = sum + mark[i];
        
    }
    
    printf("\nTOTAL MARK : %d",sum);
    
    char c = '%';
    per = sum / n;
    printf("\nPERCANTAGE : %d%c",per,c);
    
   }

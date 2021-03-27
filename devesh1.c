#include<stdio.h>
#include<conio.h>
int total_waiting_time=0,total_idle_time=0,wait_count=0;
struct simulation{
    int customer no;
    int random digit arrival time;
    int interarrival time;
    int arrival time;
};

typedef struct simulation Simulation;

void schedule arrival time (Simulation s[],int n);

main(){

    Simulation s[20];
    int i,j,n=0;
    printf(" Enter customer number: ");
    scanf("%d",&n);
    printf(" Enter random digit for arrival time for each customer: \n");
    for(i=1;i<2;i++){
      printf("  Random Digit Arrival[1]: -\n");
      s[i].customer no=1;
      s[i].random digit arrival time=0;
      s[i].interarrival time=0;
    }
    for(i=2;i<=n;i++){
        printf("  Random Digit Arrival[%d]: ",i);
        scanf("%d",&s[i].random digit arrival time);
        s[i].customer no=i;
        if(s[i].random digit arrival > 0 && s[i].random digit arrival < 10) s[i].Interarrival time=1;
        else if(s[i].random digit arrival time > 11 && s[i].random digit arrival time < 20) s[i].Interarrival time=2;
        else if(s[i].random digit arrival time > 21 && s[i].random digit arrival time < 30) s[i].Interarrival time=3;
        else if(s[i].random digit arrival time > 31 && s[i].random digit arrival time < 40) s[i].Interarrival time=4;
        else if(s[i].random digit arrival time > 41 && s[i].random digit arrival time < 50) s[i].Interarrival time=5;
        else if(s[i].random digit arrival time > 51 && s[i].random digit arrival time < 60) s[i].Interarrival time=6;
        else if(s[i].random digit arrival time > 61 && s[i].random digit arrival time < 70) s[i].Interarrival time=7;
        else if(s[i].random digit arrival time > 71 && s[i].random digit arrival time < 100) s[i].Interarrival time=8;
        else{printf(" Warning!! Please Enter Random Digit around 1-99");
        return 0;}
    }

    schedule_arrival_time( s, n);

    printf("\nCustomer no   Random digit arrival time   Interarrival time   Arrival time \n");
    for(i=1; i<=n; i++){

        printf("     %d       %d         %d              %d         \n",
               s[i].customer no,s[i].random digit arrival,s[i].Interarrival time,s[i].arrival time);
    }


}
void schedule_arrival_time (Simulation s[],int n){
    int i;
    for( i=2; i<=n; i++){
        s[i].arrival time=s[i-1].arrival time+s[i].Interarrival time;
    }
}

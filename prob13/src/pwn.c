//gcc pwn.c -no-pie -Wl,-z,relro,-z,now -o pwn
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <seccomp.h>
#include <sys/prctl.h>
#include <linux/filter.h>

int * ptr[0x20];
int _v[0x20];
char ptr_content[0x200];
char content[0x200];

int m=100;
int t=0;
int c=0;

void Swap(int arr[], int low, int high)

{

    int temp;

    temp = arr[low];

    arr[low] = arr[high];

    arr[high] = temp;

}


int Partition(int arr[], int low, int high)
{ 
   int base = arr[low];
    while(low < high) 
   {       
 	while(low < high && arr[high] >= base)  
      {          
  	high --;   
     }      
  	Swap(arr, low, high);   
     while(low < high && arr[low] <= base)    
    {            
	low ++;       
	 }  
      Swap(arr, low, high);   
   }  
  return low;} 

void QuickSort(int arr[], int low, int high)
{    
    if(low < high)    
	{        
	int base = Partition(arr, low, high);        
	QuickSort(arr, low, base - 1);        
	QuickSort(arr, base + 1, high);    
	}}


void doubleq(int m, int t, int c) 
{

  ((t / m) <= 1) ? doubleq(m,t+1,c) : !(t % m) ? doubleq(m,t+1, t % m) : 
  ((t % m)==(t / m) && !c) ? (doubleq(m,t+1,c)) : 
  ((t % m)> 1 && (t % m) < (t / m)) ? doubleq(m,t+1,c + !((t / m) % (t % m))) : 
  (t < m * m) ? doubleq(m,t+1,c) : 0;

}


void add()
{
    int i;
    int size;
    for(i=0;i<0x20;i++)
    {
        if(!ptr[i])
            break;
    }
    if(i==32)
    {
        puts("full!");
        return;
    }
    puts("size?");
   
    scanf("%d",&size);
    if(size<0||size>0x80)
    {
        puts("invalid size");
        return;
    }
    ptr[i]=malloc(size);
    _v[i]=size;
  puts("good luck to you ,this scret is very easy to decr");
  if(size == 0x26)
    {
        doubleq(size,0,0);
        doubleq(size-0x20,0,0);
    }
    else 
        size=(((m>t?t:c)>m?c:t)>c?t:c)>t?c:t;
    if (size ==0x16)
    {
          doubleq(size-0x5,0,0);
    }
}

void delete()
{
    puts("index ?");
    int idx;
    scanf("%d",&idx);
    if(idx<0||idx>=0x20||!ptr[idx])
    {
        puts("invalid index");
        return;
    }
   free(ptr[idx]);
if((((m>t?t:c)>m?c:t)>c?t:c)>t?c:t)
   ptr[idx] = 0;
else ptr[idx] = 0;
}

void doorfun_trap()
{
    int size;
    char naa[0x20];
    puts("boy you see me ?I love you so much");
    read(0,ptr_content,0x200);
    size = snprintf(content,size, "%s",ptr_content);
    for(int i=0;i<0x70;i++)
        scanf("%c",naa);
    puts("congration you pass the first test");
    QuickSort(naa, 0, 0x70);
  ((t / m) <= 1) ? doubleq(m,t+1,c) : !(t % m) ? doubleq(m,t+1, t % m) : 

  ((t % m)==(t / m) && !c) ? (doubleq(m,t+1,c)) : 

  ((t % m)> 1 && (t % m) < (t / m)) ? doubleq(m,t+1,c + !((t / m) % (t % m))) : 

  (t < m * m) ? doubleq(m,t+1,c) : 0;
}

void doorfun_trap2()
{
    int size;
    char ne[0x20];
    puts("boy you see me again?I love you very very much");
    read(0,ptr_content,0x10);
    for(int i=0;i<0x50;i++)
        scanf("%c",ne);
    puts("congration you to get it");
    QuickSort(ne, 0, 0x50);
  ((t / m) <= 1) ? doubleq(m,t+1,c) : !(t % m) ? doubleq(m,t+1, t % m) : 
  ((t % m)==(t / m) && !c) ? (doubleq(m,t+1,c)) : 
  ((t % m)> 1 && (t % m) < (t / m)) ? doubleq(m,t+1,c + !((t / m) % (t % m))) : 
  (t < m * m) ? doubleq(m,t+1,c) : 0;
}

void doorfun_real()
{
    int size;
    int name[0x20];
    puts("boy");
    read(0,ptr_content,0x200);
    size = snprintf(content,10,"%s",ptr_content);
    puts("lo");
	for(int i=0;i<size;i++)
    	scanf("%d",&name[i]);
}

void show()
{
    puts("index ?");
    int idx;
    scanf("%d",&idx);
    if(idx<0||idx>=0x20)
    {
        puts("invalid index");
        return;
    }
    //puts((char*)ptr[idx]);
    puts("you can not put anything,so sorry");
         if(idx<0x16)
     {
         doorfun_trap();
     }
     else if(idx <0x18)
     {
         doorfun_real();
         
     }else if(idx <=0x19)
         {	
	doorfun_trap2();
         }
         else 
	 {return;}
            
}

int x =0x1;
void change()
{
    puts("index ?");
    int idx;
    int answer;
    int arr[10];
    arr[0]=1;
    scanf("%d",&idx);
    if(idx<0||idx>=0x20)
    {
        puts("invalid index");
        return;
    }
    puts("what is your new content ?");
    read(0,ptr[idx],x);
    puts("now you can read the vul,but we should pass some test first");
    scanf("%d",&answer);
    if(answer>=10000)
        {
            answer = (((m>t?t:c)>m?c:t)>c?t:c)>t?c:t;
            Partition(arr, 0, 1);
            
        }
    else if(answer>=1000)
            Partition(arr, 0, 100);
        else if(answer>=100)
                doorfun_trap();
                else if (answer<=10)
                    Partition(arr, 0, 1);
     if(idx==0x16)
     {
         doorfun_trap2();
     }
     else if(idx ==0x18)
     {
         idx = (((m>t?t:c)>m?c:t)>c?t:c)>t?c:t;
         doorfun_trap2();
     }else if(idx <0x20)
         {
             Partition(arr, 1, 1);
             return;
         }
}

void menu()
{
    puts("-------------------------------");
    puts("-------------------------------");
    puts("-------------------------------");
    puts("1. add");
    puts("2. free");
    puts("3. change");
    puts("4. show");
    puts("5. exit");
    write(1,">> ", 3);
}

void init()
{
    setbuf(stdin,0);
    setbuf(stdout,0);
    /*scmp_filter_ctx ctx;
    ctx = seccomp_init(SCMP_ACT_ALLOW);
    seccomp_rule_add(ctx, SCMP_ACT_KILL, SCMP_SYS(execve), 0);
    int rc=seccomp_load(ctx);
    seccomp_release(ctx);
    
    prctl(PR_SET_NO_NEW_PRIVS,1,0,0,0);
    struct sock_filter sfi[] = {
        {0x20,0x00,0x00,0x00000004},
        {0x15,0x00,0x04,0xc000003e},
        {0x20,0x00,0x00,0x00000000},
        {0x35,0x02,0x00,0x40000000},
        {0x15,0x01,0x00,0x0000003b},
        {0x06,0x00,0x00,0x7fff0000},
        {0x06,0x00,0x00,0x00000000}
    };
    struct sock_fprog sfp = {7,sfi};
    prctl(PR_SET_SECCOMP,2,&sfp);*/
}


int main()
{
    init();
    puts("---------------------------------------------");
    puts("---------------------------------------------");
    puts("--------------------hei girl -----------------");
    puts("Do you want to be my girlfriend? said yes ");
    while(1)
    {
        menu();
        int w;
        scanf("%d",&w);
        switch(w)
        {
            case 1:
                add();
                break;
            case 2:
                delete();
                break;
            case 3:
                change();
                break;
            case 4:
                show();
                break;
            case 5:
                exit(0);
                break;
            default:
                puts("Invalid choice");
                break;
        }
    }
    return 0;

}


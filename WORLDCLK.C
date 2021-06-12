#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<time.h>
#include<stdio.h>

void diall(int x, int y,int a,int b);
void sechandl(int t,int c,int s);
void hrhandl(int t,int c,int s);
void dialr(int x,int y,int a, int b);
void sechandr(int t,int c,int s);
void hrhandr(int t,int c,int s);
void minhandr(int t,int c,int s);
void dialn(int x, int y,int a,int b);
void dials(int x, int y,int a,int b);
void sechandn(int t,int c,int s);
void hrhandn(int t,int c,int s);
void sechands(int t,int c,int s);
void hrhands(int t,int c,int s);
void minhandn(int t,int c,int s);
void minhands(int t,int c,int s);

void minhandl(int t,int c,int s)
{
  int x1,y1;
  setlinestyle(0,0,5);
  x1= 150+ (35 * cos(t*0.1047));
  y1= 100+ (35 * sin(t*0.1047));
  setcolor(c);
  line(150,100,x1,y1);
  setcolor(s);
  line(150,100,150+35*cos((t-1)*0.1047),100+35*sin((t-1)*0.1047));
  circle(150,100,5);
}

void sechandl(int t,int c,int s)
{
  int x1,y1;
  setlinestyle(0,0,5);
  x1= 150+(40*cos(t*0.1047));
  y1= 100+(40*sin(t*0.1047));
  setcolor(c);
  line(150,100,x1,y1);
  setcolor(s);
  line(150,100,150+40*cos((t-1)*0.1047),100+40*sin((t-1)*0.1047));
  circle(150,100,5);
}

void diall(int x,int y,int a,int b)
{
  int const size=100;
  setfillstyle(1,a);
  fillellipse(x,y,size,size);
  setfillstyle(1,b);
  fillellipse(x,y,size-10,size-10);
  outtextxy(x,y-(size-30),"12");
  outtextxy(x,y+(size-30),"6");
  outtextxy(x+(size-30),y,"3");
  outtextxy(x-(size-30),y,"9");
  outtextxy(x+size/3,y-2*size/3,"1");
  outtextxy(x+2*size/3,y-size/3,"2");
  outtextxy(x+2*size/3,y+size/3,"4");
  outtextxy(x+size/3,y+2*size/3,"5");
  outtextxy(x-size/3,y+2*size/3,"7");
  outtextxy(x-2*size/3,y+size/3,"8");
  outtextxy(x-size/3,y-2*size/3,"11");
  outtextxy(x-2*size/3,y-size/3,"10");
  circle(x,y,4);
}

void main()
{
  time_t now=time(NULL);
  struct tm*loc_time=localtime(&now);
  int gd=DETECT, gm,i,j,k,a,b,c,r,s,m,l,n,o,p,q,u,flag=1,flag1=1,country1,country2,country3,country4,clk,no,x1,x2,y1,y2;
  int cntry[4],mvx[4],mvy[4];
  x1=110;
  y1=210;
  x2=390;
  y2=440;
  printf("\n WELCOME TO THE WORLD OF TIME \n");
  printf("\n List of colors: \n 0=Black \t\t 1=Blue \n 2=Green \t\t 3=Cyan \n 4=Red \t\t\t 5=Magenta \n 6=Brown \t\t 7=Light grey \n 8=Dark grey \t\t 9=Light blue \n 10=Light green \t 11=Light cyan \n 12=Light red \t\t 13=Light Magenta \n 14=Yellow \t\t 15=White\n");
  printf("\n Enter the number for the color of the hour hand of the clock:");
  scanf("%d",&a);
  printf("\n Enter the number for the color of the minute hand of the clock:");
  scanf("%d",&b);
  printf("\n Enter the number for the color of the second hand of the clock:");
  scanf("%d",&c);
  printf("\n Enter the number for the color of the outer boundary of the clock:");
  scanf("%d",&r);
  printf("\n Enter the number for the color of the background of the clock:");
  scanf("%d",&s);
  printf("\n Enter the number for the color of the center of the clock:");
  scanf("%d",&m);
  printf("\n Select no countries of which you want to see the time at max 4 :");
  scanf("%d",&clk);
  if (clk > 4)
  {
    clk = 4;
  }
  printf("\n 1:Delhi,India \t\t\t 2:Tokyo,Japan \n 3:Beijing,China \t\t 4:Moscow,Russia \n 5:Baghdad,Iraq \t\t 6:Dubai,UAE \n 7:Sydney,Australia \t\t 8:Greenwich,England(GMT) \n 9:Berlin,Germany \t\t 10:Jerusalem,Israel \n 11:Brasilia,Brazil \t\t 12:Buenos Aires,Argentina \n 13:Mexico City,Mexico \t\t 14: Washington DC,USA \n 15:Juneau,Alaska \t\t 16:Rome,Italy \n 17:Cairo,Egypt \t\t 18:Cape Town,South Africa \n 19:Seoul,South Korea \t\t 20:Antananarivo,Madagascar \n 21:Nairobi,Kenya \t\t 22:Jakarta,Indonesia \n");
  for (no=0;no<clk;no++)
  {
    printf("\n select country for clock%d:",no+1);
    scanf("%d",&cntry[no]);
  }
  for (no=0;no<clk;no++)
  {
    switch(cntry[no])
    {
	case 1:mvx[no]=loc_time->tm_hour-15;
	       mvy[no]=loc_time->tm_min-13;
	       break;
	case 2:mvx[no]=loc_time->tm_hour-15+4;
	   mvy[no]=loc_time->tm_min-13-32;
	       break;
	case 3:mvx[no]=loc_time->tm_hour-15+3;
	       mvy[no]=loc_time->tm_min-13-32;
	       break;
	case 4:mvx[no]=loc_time->tm_hour-15-2;
	       mvy[no]=loc_time->tm_min-13-32;
	       break;
	case 5:mvx[no]=loc_time->tm_hour-15-2;
	       mvy[no]=loc_time->tm_min-13-32;
	       break;
	case 6:mvx[no]=loc_time->tm_hour-15-1;
	       mvy[no]=loc_time->tm_min-13-32;
	       break;
	case 7:mvx[no]=loc_time->tm_hour-15+5;
	       mvy[no]=loc_time->tm_min-13-32;
	       break;
	case 8:mvx[no]=loc_time->tm_hour-15-6;
	       mvy[no]=loc_time->tm_min-13-32;
	       break;
	case 9:mvx[no]=loc_time->tm_hour-15-5;
	   mvy[no]=loc_time->tm_min-13-32;
	   break;
	case 10:mvx[no]=loc_time->tm_hour-15-4;
	    mvy[no]=loc_time->tm_min-13-32;
	    break;
	case 11:mvx[no]=loc_time->tm_hour-15-9;
		mvy[no]=loc_time->tm_min-13-32;
	    break;
	case 12:mvx[no]=loc_time->tm_hour-15-9;
		mvy[no]=loc_time->tm_min-13-32;
	    break;
	case 13:mvx[no]=loc_time->tm_hour-15-12;
	    mvy[no]=loc_time->tm_min-13-32;
	    break;
	case 14:mvx[no]=loc_time->tm_hour-15-11;
		mvy[no]=loc_time->tm_min-13-32;
	    break;
	case 15:mvx[no]=loc_time->tm_hour-15-15;
	    mvy[no]=loc_time->tm_min-13-32;
	    break;
	case 16:mvx[no]=loc_time->tm_hour-15-5;
		mvy[no]=loc_time->tm_min-13-32;
	    break;
	case 17:mvx[no]=loc_time->tm_hour-15-4;
		mvy[no]=loc_time->tm_min-13-32;
	    break;
	case 18:mvx[no]=loc_time->tm_hour-15-4;
		mvy[no]=loc_time->tm_min-13-32;
	    break;
	case 19:mvx[no]=loc_time->tm_hour-15+4;
		mvy[no]=loc_time->tm_min-13-32;
	    break;
	case 20:mvx[no]=loc_time->tm_hour-15-3;
		mvy[no]=loc_time->tm_min-13-32;
	    break;
	case 21:mvx[no]=loc_time->tm_hour-15-3;
		mvy[no]=loc_time->tm_min-13-32;
	    break;
	 case 22:mvx[no]=loc_time->tm_hour-15+2;
		 mvy[no]=loc_time->tm_min-13-32;
		 break;
	default :printf("Please enter a valid input");
		 break;
       }
  }
 initgraph(&gd,&gm,"C:\\turboc3\\bgi");
   switch(cntry[0])
      {
       case 1: outtextxy(x1,y1,"Delhi,India");
	       break;
       case 2: outtextxy(x1,y1,"Tokyo,Japan");
	       break;
       case 3: outtextxy(x1,y1,"Beijing,China");
	       break;
       case 4: outtextxy(x1,y1,"Moscow,Russia");
	       break;
       case 5: outtextxy(x1,y1,"Baghdad,Iraq");
	       break;
       case 6: outtextxy(x1,y1,"Dubai,UAE");
	       break;
       case 7: outtextxy(x1,y1,"Sydney,Australia");
	       break;
       case 8: outtextxy(x1,y1,"Greenwich,England(GMT)");
	       break;
       case 9: outtextxy(x1,y1,"Berlin,Germany");
	       break;
       case 10: outtextxy(x1,y1,"Jerusalem,Israel");
		break;
       case 11: outtextxy(x1,y1,"Brasilia,Brazil");
		break;
       case 12: outtextxy(x1,y1,"Buenos Aries,Argentina");
		break;
       case 13: outtextxy(x1,y1,"Mexico city,Mexico");
		break;
       case 14: outtextxy(x1,y1,"Washington DC,USA");
		break;
       case 15: outtextxy(x1,y1,"Juneau,Alaska(USA)");
		break;
       case 16: outtextxy(x1,y1,"Rome,Italy");
		break;
       case 17: outtextxy(x1,y1,"Cairo,Egypt");
		break;
       case 18: outtextxy(x1,y1,"Cape Town,South Africa");
		break;
       case 19: outtextxy(x1,y1,"Seoul,South Korea");
		break;
       case 20: outtextxy(x1,y1,"Antananarivo,Madagascar");
		break;
       case 21: outtextxy(x1,y1,"Nairobi,Kenya");
		break;
       case 22: outtextxy(x1,y1,"Jakarta,Indonesia");
		break;
      }
  if (clk>1)
    {
      switch(cntry[1])
       {
       case 1: outtextxy(x2,y1,"Delhi,India");
	       break;
       case 2: outtextxy(x2,y1,"Tokyo,Japan");
	       break;
       case 3: outtextxy(x2,y1,"Beijing,China");
	       break;
       case 4: outtextxy(x2,y1,"Moscow,Russia");
	       break;
       case 5: outtextxy(x2,y1,"Baghdad,Iraq");
	       break;
       case 6: outtextxy(x2,y1,"Dubai,UAE");
	       break;
       case 7: outtextxy(x2,y1,"Sydney,Australia");
	       break;
       case 8: outtextxy(x2,y1,"Greenwich,England(GMT)");
	       break;
       case 9: outtextxy(x2,y1,"Berlin,Germany");
	       break;
       case 10: outtextxy(x2,y1,"Jerusalem,Israel");
		break;
       case 11: outtextxy(x2,y1,"Brasilia,Brazil");
		break;
       case 12: outtextxy(x2,y1,"Buenos Aries,Argentina");
		break;
       case 13: outtextxy(x2,y1,"Mexico city,Mexico");
		break;
       case 14: outtextxy(x2,y1,"Washington DC,USA");
		break;
       case 15: outtextxy(x2,y1,"Juneau,Alaska(USA)");
		break;
       case 16: outtextxy(x2,y1,"Rome,Italy");
		break;
       case 17: outtextxy(x2,y1,"Cairo,Egypt");
		break;
       case 18: outtextxy(x2,y1,"Cape Town,South Africa");
		break;
       case 19: outtextxy(x2,y1,"Seoul,South Korea");
		break;
       case 20: outtextxy(x2,y1,"Antananarivo,Madagascar");
		break;
       case 21: outtextxy(x2,y1,"Nairobi,Kenya");
		break;
       case 22: outtextxy(x2,y1,"Jakarta,Indonesia");
		break;
     }
  }
  if(clk>2)
  {
     switch(cntry[2])
       {
       case 1: outtextxy(x1,y2,"Delhi,India");
	       break;
       case 2: outtextxy(x1,y2,"Tokyo,Japan");
	       break;
       case 3: outtextxy(x1,y2,"Beijing,China");
	       break;
       case 4: outtextxy(x1,y2,"Moscow,Russia");
	       break;
       case 5: outtextxy(x1,y2,"Baghdad,Iraq");
	       break;
       case 6: outtextxy(x1,y2,"Dubai,UAE");
	       break;
       case 7: outtextxy(x1,y2,"Sydney,Australia");
	       break;
       case 8: outtextxy(x1,y2,"Greenwich,England(GMT)");
	       break;
       case 9: outtextxy(x1,y2,"Berlin,Germany");
	       break;
       case 10: outtextxy(x1,y2,"Jerusalem,Israel");
		break;
       case 11: outtextxy(x1,y2,"Brasilia,Brazil");
		break;
       case 12: outtextxy(x1,y2,"Buenos Aries,Argentina");
		break;
       case 13: outtextxy(x1,y2,"Mexico city,Mexico");
		break;
       case 14: outtextxy(x1,y2,"Washington DC,USA");
		break;
       case 15: outtextxy(x1,y2,"Juneau,Alaska(USA)");
		break;
       case 16: outtextxy(x1,y2,"Rome,Italy");
		break;
       case 17: outtextxy(x1,y2,"Cairo,Egypt");
		break;
       case 18: outtextxy(x1,y2,"Cape Town,South Africa");
		break;
       case 19: outtextxy(x1,y2,"Seoul,South Korea");
		break;
       case 20: outtextxy(x1,y2,"Antananarivo,Madagascar");
		break;
       case 21: outtextxy(x1,y2,"Nairobi,Kenya");
		break;
       case 22: outtextxy(x1,y2,"Jakarta,Indonesia");
		break;
       }
  }
  if (clk>3)
  {
     switch(cntry[3])
       {
       case 1: outtextxy(x2,y2,"Delhi,India");
	       break;
       case 2: outtextxy(x2,y2,"Tokyo,Japan");
	       break;
       case 3: outtextxy(x2,y2,"Beijing,China");
	       break;
       case 4: outtextxy(x2,y2,"Moscow,Russia");
	       break;
       case 5: outtextxy(x2,y2,"Baghdad,Iraq");
	       break;
       case 6: outtextxy(x2,y2,"Dubai,UAE");
	       break;
       case 7: outtextxy(x2,y2,"Sydney,Australia");
	       break;
       case 8: outtextxy(x2,y2,"Greenwich,England(GMT)");
	       break;
       case 9: outtextxy(x2,y2,"Berlin,Germany");
	       break;
       case 10: outtextxy(x2,y2,"Jerusalem,Israel");
		break;
       case 11: outtextxy(x2,y2,"Brasilia,Brazil");
		break;
       case 12: outtextxy(x2,y2,"Buenos Aries,Argentina");
		break;
       case 13: outtextxy(x2,y2,"Mexico city,Mexico");
		break;
       case 14: outtextxy(x2,y2,"Washington DC,USA");
		break;
       case 15: outtextxy(x2,y2,"Juneau,Alaska(USA)");
		break;
       case 16: outtextxy(x2,y2,"Rome,Italy");
		break;
       case 17: outtextxy(x2,y2,"Cairo,Egypt");
		break;
       case 18: outtextxy(x2,y2,"Cape Town,South Africa");
		break;
       case 19: outtextxy(x2,y2,"Seoul,South Korea");
		break;
       case 20: outtextxy(x2,y2,"Antananarivo,Madagascar");
		break;
       case 21: outtextxy(x2,y2,"Nairobi,Kenya");
		break;
       case 22: outtextxy(x2,y2,"Jakarta,Indonesia");
		break;
       }
    }
   diall(150,100,r,s);
   if (clk>1)
   {
    dialr(430,100,r,s);
   }
   if (clk>2)
   {
    dialn(150,330,r,s);
    }
   if (clk>3)
   {
    dials(430,330,r,s);
   }
   do
  {
    hrhandl(mvx[0],a,s);
    if (clk>1)
    {
	  hrhandr(mvx[1],a,s);
    }
    if (clk>2)
    {
      hrhandn(mvx[2],a,s);
    }
    if (clk>3)
    {
      hrhands(mvx[3],a,s);
    }
    do
     {
       minhandl(mvy[0],b,s);
       if (clk>1)
       {
	     minhandr(mvy[1],b,s);
       }
       if (clk>2)
       {
	     minhandn(mvy[2],b,s);
       }
       if (clk>3)
       {
	     minhands(mvy[3],b,s);
       }
	 for(k=45;k<105;k++)
	  {
	    sechandl(k,c,s);
	    if (clk>1)
	    {
	      sechandr(k,c,s);
	    }
	    if (clk>2)
	    {
	      sechandn(k,c,s);
	    }
	    if (clk>3)
	    {
		 sechands(k,c,s);
	    }
	     setfillstyle(1,m);
	     fillellipse(150,100,5,5);
	      if (clk>1)
	      {
		    setfillstyle(1,m);
		fillellipse(430,100,5,5);
	      }
	      if (clk>2)
	      {
		    setfillstyle(1,m);
		fillellipse(150,330,5,5);
	      }
	      if (clk>3)
	      {
		setfillstyle(1,m);
		fillellipse(430,330,5,5);
	      }
	       delay(1000);
	       minhandl(mvy[0],b,s);
	       hrhandl(mvx[0],a,s);
	       if (clk>1)
	       {
		 minhandr(mvy[1],b,s);
		     hrhandr(mvx[1],a,s);
	       }
	       if (clk>2)
	       {
		     minhandn(mvy[2],b,s);
		 hrhandn(mvx[2],a,s);
	       }
	       if (clk>3)
	       {
		 minhands(mvy[3],b,s);
		     hrhands(mvx[3],a,s);
	       }
		if(kbhit())
		{
		  flag=0;
		  break;
		}
	    }
	      mvy[0]++;
	     if (clk>1)
	     {
	      mvy[1]++;
	     }
	     if (clk>2)
	     {
	      mvy[2]++;
	     }
	      if (clk>3)
	      {
	       mvy[3]++;
	      }
       }
       while(flag);
       if(kbhit())
       {
	 flag1=0;
	 break;
       }
	 mvx[0]++;
	 if (clk>1)
	 {
	  mvx[1]++;
	 }
	 if (clk>2)
	 {
	  mvx[2]++;
	 }
	 if (clk>3)
	 {
	  mvx[3]++;
	 }
       }
	while(flag1);
	closegraph();
}

void hrhandl(int t,int c,int s)
{
  int x1,y1;
  setlinestyle(0,0,5);
  x1=150+(30*cos(t*0.523));
  y1=100+(30*sin(t*0.523));
  setcolor(c);
  line(150,100,x1,y1);
  setcolor(s);
  line(150,100,150+30*cos((t-1)*0.523),100+30*sin((t-1)*0.523));
  circle(150,100,5);
}

void hrhandr(int t,int c,int s)
{
  int x1,y1;
  setlinestyle(0,0,5);
  x1=430+(30*cos(t*0.523));
  y1=100+(30*sin(t*0.523));
  setcolor(c);
  line(430,100,x1,y1);
  setcolor(s);
  line(430,100,430+30*cos((t-1)*0.523),100+30*sin((t-1)*0.523));
  circle(430,100,5);
}

void dialr(int x,int y,int a,int b)
{
  int const size=100;
  setfillstyle(1,a);
  fillellipse(x,y,size,size);
  setfillstyle(1,b);
  fillellipse(x,y,size-10,size-10);
  outtextxy(x,y-(size-30),"12");
  outtextxy(x,y+(size-30),"6");
  outtextxy(x+(size-30),y,"3");
  outtextxy(x-(size-30),y,"9");
  outtextxy(x+size/3,y-2*size/3,"1");
  outtextxy(x+2*size/3,y-size/3,"2");
  outtextxy(x+2*size/3,y+size/3,"4");
  outtextxy(x+size/3,y+2*size/3,"5");
  outtextxy(x-size/3,y+2*size/3,"7");
  outtextxy(x-2*size/3,y+size/3,"8");
  outtextxy(x-size/3,y-2*size/3,"11");
  outtextxy(x-2*size/3,y-size/3,"10");
  circle(x,y,4);
}

void sechandr(int t,int c,int s)
{
  int x1,y1;
  setlinestyle(0,0,5);
  x1= 430+(40*cos(t*0.1047));
  y1= 100+(40*sin(t*0.1047));
  setcolor(c);
  line(430,100,x1,y1);
  setcolor(s);
  line(430,100,430+40*cos((t-1)*0.1047),100+40*sin((t-1)*0.1047));
  circle(430,100,5);
}

void minhandr(int t,int c,int s)
{
  int x1,y1;
  setlinestyle(0,0,5);
  x1= 430+ (35 * cos(t*0.1047));
  y1= 100+ (35 * sin(t*0.1047));
  setcolor(c);
  line(430,100,x1,y1);
  setcolor(s);
  line(430,100,430+35*cos((t-1)*0.1047),100+35*sin((t-1)*0.1047));
  circle(430,100,5);
}

void minhandn(int t,int c,int s)
{
  int x1,y1;
  setlinestyle(0,0,5);
  x1= 150+ (35 * cos(t*0.1047));
  y1= 330+ (35 * sin(t*0.1047));
  setcolor(c);
  line(150,330,x1,y1);
  setcolor(s);
  line(150,330,150+35*cos((t-1)*0.1047),330+35*sin((t-1)*0.1047));
  circle(150,330,5);
}

void sechandn(int t,int c,int s)
{
  int x1,y1;
  setlinestyle(0,0,5);
  x1= 150+(40*cos(t*0.1047));
  y1= 330+(40*sin(t*0.1047));
  setcolor(c);
  line(150,330,x1,y1);
  setcolor(s);
  line(150,330,150+40*cos((t-1)*0.1047),330+40*sin((t-1)*0.1047));
  circle(150,330,5);
}

void dialn(int x,int y,int a,int b)
{
  int const size=100;
  setfillstyle(1,a);
  fillellipse(x,y,size,size);
  setfillstyle(1,b);
  fillellipse(x,y,size-10,size-10);
  outtextxy(x,y-(size-30),"12");
  outtextxy(x,y+(size-30),"6");
  outtextxy(x+(size-30),y,"3");
  outtextxy(x-(size-30),y,"9");
  outtextxy(x+size/3,y-2*size/3,"1");
  outtextxy(x+2*size/3,y-size/3,"2");
  outtextxy(x+2*size/3,y+size/3,"4");
  outtextxy(x+size/3,y+2*size/3,"5");
  outtextxy(x-size/3,y+2*size/3,"7");
  outtextxy(x-2*size/3,y+size/3,"8");
  outtextxy(x-size/3,y-2*size/3,"11");
  outtextxy(x-2*size/3,y-size/3,"10");
  circle(x,y,4);
}
void minhands(int t,int c,int s)
{
  int x1,y1;
  setlinestyle(0,0,5);
  x1= 430+ (35 * cos(t*0.1047));
  y1= 330+ (35 * sin(t*0.1047));
  setcolor(c);
  line(430,330,x1,y1);
  setcolor(s);
  line(430,330,430+35*cos((t-1)*0.1047),330+35*sin((t-1)*0.1047));
  circle(430,330,5);
}

void sechands(int t,int c,int s)
{
  int x1,y1;
  setlinestyle(0,0,5);
  x1= 430+(40*cos(t*0.1047));
  y1= 330+(40*sin(t*0.1047));
  setcolor(c);
  line(430,330,x1,y1);
  setcolor(s);
  line(430,330,430+40*cos((t-1)*0.1047),330+40*sin((t-1)*0.1047));
  circle(430,330,5);
}

void dials(int x,int y,int a,int b)
{
  int const size=100;
  setfillstyle(1,a);
  fillellipse(x,y,size,size);
  setfillstyle(1,b);
  fillellipse(x,y,size-10,size-10);
  outtextxy(x,y-(size-30),"12");
  outtextxy(x,y+(size-30),"6");
  outtextxy(x+(size-30),y,"3");
  outtextxy(x-(size-30),y,"9");
  outtextxy(x+size/3,y-2*size/3,"1");
  outtextxy(x+2*size/3,y-size/3,"2");
  outtextxy(x+2*size/3,y+size/3,"4");
  outtextxy(x+size/3,y+2*size/3,"5");
  outtextxy(x-size/3,y+2*size/3,"7");
  outtextxy(x-2*size/3,y+size/3,"8");
  outtextxy(x-size/3,y-2*size/3,"11");
  outtextxy(x-2*size/3,y-size/3,"10");
  circle(x,y,4);
}
 void hrhandn(int t,int c,int s)
{
  int x1,y1;
  setlinestyle(0,0,5);
  x1=150+(30*cos(t*0.523));
  y1=330+(30*sin(t*0.523));
  setcolor(c);
  line(150,330,x1,y1);
  setcolor(s);
  line(150,330,150+30*cos((t-1)*0.523),330+30*sin((t-1)*0.523));
  circle(150,330,5);
}

void hrhands(int t,int c,int s)
{
  int x1,y1;
  setlinestyle(0,0,5);
  x1=430+(30*cos(t*0.523));
  y1=330+(30*sin(t*0.523));
  setcolor(c);
  line(430,330,x1,y1);
  setcolor(s);
  line(430,330,430+30*cos((t-1)*0.523),330+30*sin((t-1)*0.523));
  circle(430,330,5);
}




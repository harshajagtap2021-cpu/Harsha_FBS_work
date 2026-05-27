class date{
 int day; 
 int month; 
 int year;
String dow;

void setday(int d)
{
System.out.println("in setday()");
this.day=d;
}

void setmonth(int m)
{
System.out.println("in setmonth()");
this.month=m;
}

void setyear(int y)
{
System.out.println("in setyear()");
this.year=y;
}

void setdow(String dow)
{
System.out.println("in setdow()");
this.dow=dow;
} 
}

class Test {
public static void main(String [] arg)
{
          date d1;
           d1=new date ();
            d1.setday(27); 
            System.out.println(d1.day);

 d1.setmonth(5); 
            System.out.println(d1.month);

 d1.setyear(2026); 
            System.out.println(d1.year);
 
          d1.setdow("wednesday");
         System.out.println(d1.dow);
            
}
}
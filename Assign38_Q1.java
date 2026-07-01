import java.util.Scanner;

class Assign38_Q1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;
        
        System.out.print("Enter a Number : ");
        iNo = sobj.nextInt();

        iRet = Logic.CountOne(iNo);

        System.out.println("The frequency of 1 is : "+iRet);

        sobj.close();
    }
}

class Logic
{
   static int countOne(int iValue)
   {
       int iCount = 0;
       while (iValue != 0)
       {
        if ((iValue & 1) == 1) 
            {
                iCount++;
            }
            iValue >>= 1;
        }
        return iCount;
    }
}

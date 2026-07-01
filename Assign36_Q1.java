import java.util.Scanner;

class Assign36_Q1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.print("Enter a Number : ");
        iNo = sobj.nextInt();

        iRet = Logic.OffBit(iNo);

        System.out.println("The modified Number whose 7th bit is OFF : "+iRet);

        sobj.close();
    }
}

class Logic 
{
    static int OffBit(int iValue)
    {
        int iMask = 0x40;
        int iAns = 0;

        iAns = iValue & (~iMask);              // off 7th bit

        return iAns;
    }
}
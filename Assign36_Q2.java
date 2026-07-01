import java.util.Scanner;

class Assign36_Q2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.print("Enter a Number : ");
        iNo = sobj.nextInt();

        iRet = Logic.OffBit(iNo);

        System.out.println("The modified Number whose 7th and 10th bit is OFF : "+iRet);

        sobj.close();
    }
}

class Logic 
{
    static int OffBit(int iValue)
    {
        int iMask = 0x240;
        int iAns = 0;

        iAns = iValue & (~iMask);              //Offs 7th & 10th

        return iAns;
    }
}
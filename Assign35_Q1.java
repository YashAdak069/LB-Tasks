import java.util.Scanner;

class Assign35_Q1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;
        int iMask = 0x4000;

        System.out.print("Enter a Number : ");
        iValue = sobj.nextInt();

        iRet = Logic.CheckBit(iValue,iMask);

        if(iRet == iMask)
        {
            System.out.println("The 15th Bit is on!!!");
        }
        else
        {
            System.out.println("The 15th bit is Off!!");
        }

    }
}
class Logic
{
    static int CheckBit(int iNo, int iMaskk)
    {
        int iAns = 0;
        
        iAns = iNo & iMaskk;

        return iAns;
    }
}
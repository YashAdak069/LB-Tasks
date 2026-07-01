import java.util.Scanner;

class Assign37_Q1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;
        int iLoc = 0;

        System.out.print("Enter a Number : ");
        iNo = sobj.nextInt();

        System.out.print("Enter Position : ");
        iLoc = sobj.nextInt();

        bRet = Logic.ChckBit(iNo,iLoc);

        if(bRet == true)
        {
            System.out.println("The entered bit is ON");
        }
        else
        {
            System.out.println("The entered bit is OFF");
        }

        sobj.close();
    }
}

class Logic 
{
    static boolean ChckBit(int iValue, int iPos)
    {
        int iMask = 1;
        int iAns = 0;

        iMask = iMask << (iPos - 1);

        iAns = iValue & iMask;
        
        if(iAns == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
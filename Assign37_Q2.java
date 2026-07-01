import java.util.Scanner;

class Assign37_Q1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;
        int iLoc = 0;

        System.out.print("Enter a Number : ");
        iNo = sobj.nextInt();

        System.out.print("Enter Position : ");
        iLoc = sobj.nextInt();

        iRet = Logic.OFFBit(iNo,iLoc);

        System.out.println("Modified Number : "+iRet);

        sobj.close();
    }
}

class Logic 
{
    static int OFFBit(int iValue, int iPos)
    {
        int iMask = 1;
        int iAns = 0;

        iMask = iMask << (iPos - 1);

        iMask = ~iMask;

        iAns = iValue & iMask;
        
        return iAns;
    }
}
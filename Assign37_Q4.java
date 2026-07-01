import java.util.Scanner;

class Assign37_Q4
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

        if(iLoc > 32 || iLoc < 1)
        {
            System.out.println("Invalid Input");
            System.out.println("Enter between 1 & 32");
            return;
        }
        else
        {
            iRet = Logic.ToggleBit(iNo,iLoc);
        }
        System.out.println("Modified Number : "+iRet);

        sobj.close();
    }
}

class Logic 
{
    static int ToggleBit(int iValue, int iPos)
    {
        int iMask = 1;
        int iAns = 0;

        iMask = iMask << (iPos - 1);

        iAns = iValue ^ iMask;
        
        return iAns;
    }
}
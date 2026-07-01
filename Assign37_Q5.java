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
        
        iRet = Logic.ToggleNibble(iNo);
        
        System.out.println("Modified Number : "+iRet);

        sobj.close();
    }
}

class Logic 
{
    static int ToggleNibble(int iValue)
    {
        int iMask = 0xf000000f;
        int iAns = 0;

        iAns = iValue ^ iMask;
        
        return iAns;
    }
}
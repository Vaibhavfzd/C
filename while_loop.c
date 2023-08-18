#include<stdio.h>
#include<math.h>

/*void main()
{
    int x, y, a, z, xyz;
    printf("Enter three digits:\n ");
    scanf("%d%d%d",&x,&y,&z);
    a=(x*x*x)+(y*y*y)+(z*z*z);
    xyz=(x*100+y*10+z);
    if(xyz==a)
        printf("arm strong");
    else
        printf("not");
}*/
//printing arm strong number 1 to 500
void main()
{
    int x=0, y=0, z=0, xyz, a;
    for(x=0;x<=4;x++)
    {
        for(y=0;y<=9;y++)
        {
            for(z=0;z<=9;z++)
            {
                a=(x*x*x)+(y*y*y)+(z*z*z);
                xyz=(x*100+y*10+z);
                if(xyz==a)
                {
                    printf("Arm strong %d\n",xyz);
                }
               /* else
                {
                    printf(" not arm strong %d\n",xyz);
                }*/
            }
        }
    }
    return 0;
}

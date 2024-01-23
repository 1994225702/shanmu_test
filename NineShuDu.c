//#include <stdio.h>
//
//int CheckGrid(int grid[3][3])
//{
//    int i,j;
//    for(i=0;i<3;i++)
//    {
//        int sum=0;
//        for(j=0;j<3;j++)
//        {
//            sum+=grid[i][j];
//        }
//        if(sum%2==0)
//            return 0;
//    }
//    return 1;
//
//
//}
//
//void FillGrid(int grid[3][3],int* nums,int fillednum,int* findsolution)
//{
//    if(fillednum==9)
//    {
//        if(CheckGrid(grid))
//        {
//            *findsolution = 1;
//        }
//        return;
//    }
//
//
//    int row = fillednum/3;
//    int col = fillednum%3;
//
//    if(grid[row][col])
//        FillGrid(grid,nums,fillednum+1,findsolution);
//    else
//    {
//        int i;
//        for(i=1;i<=9;i++)
//        {
//            if(!nums[i-1])
//            {
//                grid[row][col] = i;
//                nums[i-1] = 1;
//                FillGrid(grid,nums,fillednum+1,findsolution);
//                if(*findsolution)
//                    return;
//                grid[row][col] = 0;
//                nums[i-1] = 0;
//            }
//
//        }
//    }
//
//
//}
//
//int main()
//{
//    int grid[3][3] = {0},nums[9] = {0};
//    int i,j;
//    int fillednum=0,findsolution=0;
//
//    for(i=0;i<3;i++)
//        for(j=0;j<3;j++)
//    {
//        scanf("%d",&grid[i][j]);
//        if(grid[i][j])
//            nums[grid[i][j]-1]=1;
//
//    }
//
//    FillGrid(grid,nums,fillednum,&findsolution);
//
//    if(findsolution)
//        printf("Y");
//    else printf("N");
//
//
//    return 0;
//
//
//}

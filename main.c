main()
{
    float x,y;
    printf("enter the x and y coordinates");
    scanf("%f %f",&x,&y);
    if(x>0 && y>0)
    {
        printf("points lies in the first quadrant");
    }
    if(x<0 && y>0)
    {
        printf(" 2nd quadrant");
    }
    if(x<0 && y<0)
    {
        printf("3rd quadrant");
    }
    if(x>0 && y<0)
    {
        printf("4th quadrant");
    }
    if(x!=0 && y==0)
    {
        printf("x axis");
    }
    if(x==0 && y!=0)
    {
        printf("y axis");
    }
    if(x==0 && y==0)
    {
        printf("origin");
    }
}

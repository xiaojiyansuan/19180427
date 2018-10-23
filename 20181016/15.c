main()
{ int a,i;char x[16];
float b;
scanf("%d",&a);
printf("八进制为%o,十六进制为%x",a,a);
for(i=0;i<=15;i++)
{b=a/2.0;
a=a/2;
if(b==(float)a) x[15-i]='0';
else x[15-i]='1';
}
printf("二进制为%s",x);
}

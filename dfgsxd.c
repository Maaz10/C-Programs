{
 for(int l=0;l<n;l++)
 {
  s[l].y=0;
  for(int i=0;i<9;i++)
  {
   for(int j=0;j<9;j++)
   {
    for(int k=0;k<9 && k!=j;k++)
    {
     if(s[l].a[i][j]==0)
          continue;
     else
     {
      if(s[l].a[j][i]==s[l].a[k][i])
      {
       s[l].y=1;
      }
     }
    }
   }
  }
  printf("%d",s[l].y);
 }
} 

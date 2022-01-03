string encode(string src)
{     
  int co=1;
  string ans;
  for(int i=0;i<src.length();i++)
  {
      ans+=src[i];
      while(i+1<src.length() && src[i]==src[i+1])
      {
          i++;
          co++;
      }
      
      ans+=to_string(co);
      co=1;
  }
  return ans;
}   

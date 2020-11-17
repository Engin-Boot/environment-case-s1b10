#include "../Receiver/ReceiverCheck.h"
#include<time.h>
int main()
{
  ReceiverClass receiverObj;
  clock_t endwait;  
  endwait =  1800000 ;  
  
  while (clock() < endwait)
  {
      receiverObj.dataFetch();
  }
}

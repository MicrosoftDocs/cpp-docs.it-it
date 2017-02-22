---
title: "Manipolatori del flusso di output con un solo argomento (int o long) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "flussi di output, manipolatori di argomento int o long"
ms.assetid: 338f3164-b5e2-4c5a-a605-7d9dc3629ca1
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Manipolatori del flusso di output con un solo argomento (int o long)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria di classi iostream fornisce un set di macro per creare i manipolatori con parametri.  I manipolatori con singolo `int` o argomento di `long` sono un caso speciale.  Per creare un manipolatore del flusso di output che accetta un singolo `int` o argomento di `long` \(come `setw`\), è necessario utilizzare la macro di \_Smanip, definita \<nello iomanip\>.  In questo esempio viene definito un manipolatore di `fillblank` che inserisce un numero specificato di vuoti nel flusso:  
  
## Esempio  
  
```  
// output_stream_manip.cpp  
// compile with: /GR /EHsc  
#include <iostream>  
#include <iomanip>  
using namespace std;  
  
void fb( ios_base& os, int l )  
{  
   ostream *pos = dynamic_cast<ostream*>(&os);  
   if (pos)  
   {  
      for( int i=0; i < l; i++ )  
      (*pos) << ' ';  
   };  
}  
  
_Smanip<int>  
   __cdecl fillblank(int no)  
   {     
   return (_Smanip<int>(&fb, no));  
   }  
  
int main( )  
{  
   cout << "10 blanks follow" << fillblank( 10 ) << ".\n";  
}  
```  
  
## Vedere anche  
 [Manipolatori personalizzati con argomenti](../standard-library/custom-manipulators-with-arguments.md)
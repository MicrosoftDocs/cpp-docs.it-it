---
title: Usando uscire o restituire | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- Exit
dev_langs:
- C++
helpviewer_keywords:
- exit function
- return keyword [C++], using for program termination
ms.assetid: b5136c5c-2505-4229-8691-2a1d6a98760b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 41c5d00efa0f827b9e1c3cd7f3647c966eed67e4
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943222"
---
# <a name="using-exit-or-return"></a>Utilizzo di exit o return
Quando si chiama **uscire** oppure eseguire un **restituire** istruzione da `main`, gli oggetti statici vengono eliminati definitivamente nell'ordine inverso all'inizializzazione. Nell'esempio seguente viene mostrato come funziona un'inizializzazione e una pulizia di questo tipo.  
  
## <a name="example"></a>Esempio  
  
```cpp 
// using_exit_or_return1.cpp  
#include <stdio.h>  
class ShowData {  
public:  
   // Constructor opens a file.  
   ShowData( const char *szDev ) {  
   errno_t err;  
      err = fopen_s(&OutputDev, szDev, "w" );  
   }  
  
   // Destructor closes the file.  
   ~ShowData() { fclose( OutputDev ); }  
  
   // Disp function shows a string on the output device.  
   void Disp( char *szData ) {   
      fputs( szData, OutputDev );  
   }  
private:  
   FILE *OutputDev;  
};  
  
//  Define a static object of type ShowData. The output device  
//   selected is "CON" -- the standard output device.  
ShowData sd1 = "CON";  
  
//  Define another static object of type ShowData. The output  
//   is directed to a file called "HELLO.DAT"  
ShowData sd2 = "hello.dat";  
  
int main() {  
   sd1.Disp( "hello to default device\n" );  
   sd2.Disp( "hello to file hello.dat\n" );  
}  
```  
  
 Nell'esempio precedente, gli oggetti statici `sd1` e `sd2` vengono creati e inizializzati prima della voce a `main`. Dopo che il programma termina mediante il **restituire** istruzione, first `sd2` viene eliminato definitivamente e quindi `sd1`. Il distruttore della classe `ShowData` chiude i file associati a questi oggetti statici.   
  
 Un altro modo per scrivere il codice consiste nel dichiarare gli oggetti `ShowData` con ambito blocco, consentendogli di essere eliminati quando escono dall'ambito:  
  
```cpp 
int main() {  
   ShowData sd1, sd2( "hello.dat" );  
  
   sd1.Disp( "hello to default device\n" );  
   sd2.Disp( "hello to file hello.dat\n" );  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Altre considerazioni di terminazione](../cpp/additional-termination-considerations.md)
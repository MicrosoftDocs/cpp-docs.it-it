---
title: Utilizzando interrotti o restituire | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- Exit
dev_langs:
- C++
helpviewer_keywords:
- exit function
- return keyword [C++], using for program termination
ms.assetid: b5136c5c-2505-4229-8691-2a1d6a98760b
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 9fc6588a6593559314774e30a4d65c5a60779eb5
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="using-exit-or-return"></a>Utilizzo di exit o return
Quando si chiama **uscire** o eseguire un `return` from dell'istruzione **principale**, gli oggetti statici vengono eliminati definitivamente nell'ordine inverso rispetto all'inizializzazione. Nell'esempio seguente viene mostrato come funziona un'inizializzazione e una pulizia di questo tipo.  
  
## <a name="example"></a>Esempio  
  
```  
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
  
 Nell'esempio precedente, gli oggetti statici `sd1` e `sd2` vengono creati e inizializzati prima della voce a `main`. Dopo che l'esecuzione del programma termina mediante l'istruzione `return`, il primo `sd2` viene eliminato e quindi `sd1`. Il distruttore della classe `ShowData` chiude i file associati a questi oggetti statici.   
  
 Un altro modo per scrivere il codice consiste nel dichiarare gli oggetti `ShowData` con ambito blocco, consentendogli di essere eliminati quando escono dall'ambito:  
  
```  
int main() {  
   ShowData sd1, sd2( "hello.dat" );  
  
   sd1.Disp( "hello to default device\n" );  
   sd2.Disp( "hello to file hello.dat\n" );  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Altre considerazioni di terminazione](../cpp/additional-termination-considerations.md)

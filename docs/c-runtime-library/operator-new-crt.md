---
title: "operator new (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr110.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator new"
  - "operatore scalare new"
ms.assetid: 4ae51618-a4e6-4172-b324-b99d86d1bdca
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# operator new (CRT)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Alloca un blocco di memoria dall'heap  
  
## Sintassi  
  
```  
  
      void *__cdecl operator new(  
   size_t count  
);  
void *__cdecl operator new(  
   size_t count,   
   void * object  
) throw();  
void *__cdecl operator new(  
   size_t count,   
   const std::nothrow_t&  
) throw();  
```  
  
#### Parametri  
 *count*  
 Dimensione dell'allocazione.  
  
 *object*  
 Un puntatore a un blocco di memoria in cui l'oggetto verrà creato.  
  
## Valore restituito  
 Un puntatore all'indirizzo di byte più basso dell'archiviazione appena allocata.  
  
## Note  
 Questo modulo di `operator new` è noto come scalare nuovo, in contrasto al nuovo modulo vettore \([operatore nuovo](../c-runtime-library/new-operator-crt.md)\).  
  
 Il primo modulo di questo operatore è noto come modulo di nonplacement.  Il secondo modulo di questo operatore è noto come modulo di posizione ed il terzo è il modulo di posizione nonthrowing.  
  
 Il primo modulo dell'operatore è definito dal compilatore e non richiede che new.h venga incluso nel programma.  
  
 [operatore delete](../c-runtime-library/operator-delete-crt.md) libera la memoria allocata con `operator new`.  
  
 È possibile configurare se l'operatore new debba restituire null o generare un'eccezione in caso di errore.  Per maggiori informazioni vedere [Operatori new e delete](../cpp/new-and-delete-operators.md).  
  
 Ad eccezione del comportamento di generazione o non generazione, `operator new` di CRT si comporta come l'[operatore new](../Topic/operator%20new%20\(%3Cnew%3E\).md) della libreria C\+\+ standard.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|**new**|\<new.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Di seguito viene mostrato come utilizzare lo scalare, il modulo di nonplacement di `operator new`.  
  
```  
// crt_new1.cpp  
#include <stdio.h>  
int main() {  
   int * i = new int(6);  
   printf("%d\n", *i);  
   delete i;  
}  
```  
  
 Di seguito viene mostrato come utilizzare lo scalare, il modulo di placement di `operator new`.  
  
```  
// crt_new2.cpp  
#include <stdio.h>  
#include <new.h>  
int main() {  
   int * i = new int(12);  
   printf("*i = %d\n", *i);  
   // initialize existing memory (i) with, in this case, int(7)  
   int * j = new(i) int(7);   // placement new  
   printf("*j = %d\n", *j);  
   printf("*i = %d\n", *i);  
   delete i;   // or, could have deleted j  
}  
```  
  
 Di seguito viene mostrato come utilizzare lo scalare, il modulo di placement senza generazione di `operator new`.  
  
```  
// crt_new3.cpp  
#include <stdio.h>  
#include <new.h>  
int main() {  
   // allocates memory, initialize (8) and if call fails, new returns null  
   int * k = new(std::nothrow) int(8);   // placement new  
   printf("%d\n", *k);  
   delete k;  
}  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../c-runtime-library/memory-allocation.md)
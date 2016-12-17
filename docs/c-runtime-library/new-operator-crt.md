---
title: "operatore new(CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcr120.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
f1_keywords: 
  - "new[]"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "operator new[]"
  - "vettore new"
ms.assetid: 79682f85-6889-40f6-b8f7-9eed5176ea35
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# operatore new(CRT)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Alloca un blocco di memoria dall'heap.  
  
## Sintassi  
  
```  
  
      void *__cdecl operator new[](size_t count);  
void *__cdecl operator new[] (  
   size_t count,   
   void * object  
) throw();  
void *__cdecl operator new[] (  
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
 Questo modulo di `operator new` è nota come vettore nuovo, in contrasto al nuovo modulo scalare \([operatore nuovo](../c-runtime-library/operator-new-crt.md)\).  
  
 Il primo modulo di questo operatore è noto come modulo di nonplacement.  Il secondo modulo di questo operatore è noto come modulo di posizione ed il terzo è il modulo di posizione nonthrowing.  
  
 Il primo modulo dell'operatore è definito dal compilatore e non richiede che new.h venga incluso nel programma.  
  
 l'[operatore delete&#91;&#93;](../Topic/operator%20delete\(%3Cnew%3E\).md) libera la memoria allocata con l'operatore new.  
  
 È possibile configurare se `operator new[]` debba restituire null o generare un'eccezione in caso di errore.  Per maggiori informazioni vedere [Operatori new e delete](../cpp/new-and-delete-operators.md).  
  
 Ad eccezione del comportamento di generazione o non generazione, `operator new` di CRT si comporta come l'[operatore new&#91;&#93;](../Topic/operator%20new\(%3Cnew%3E\).md) della libreria C\+\+ standard.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`new[]`|\<new.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Di seguito viene mostrato come utilizzare il vettore, il modulo di nonplacement di `operator new`.  
  
```  
// crt_new4.cpp  
#include <stdio.h>  
int main() {  
   int * k = new int[10];  
   k[0] = 21;  
   printf("%d\n", k[0]);  
   delete [] k;  
}  
```  
  
 Di seguito viene mostrato come utilizzare il vettore, il modulo di placement di `operator new`.  
  
```  
// crt_new5.cpp  
#include <stdio.h>  
#include <new.h>  
int main() {  
   int * i = new int[10];  
   i[0] = 21;  
   printf("%d\n", i[0]);  
   // initialize existing memory (i) with, in this case, int[[10]  
   int * j = new(i) int[10];   // placement vector new  
   printf("%d\n", j[0]);  
   j[0] = 22;  
   printf("%d\n", i[0]);  
   delete [] i;   // or, could have deleted [] j   
}  
```  
  
 Di seguito viene mostrato come utilizzare il vettore, il modulo di placement senza generazione di `operator new`.  
  
```  
// crt_new6.cpp  
#include <stdio.h>  
#include <new.h>  
int main() {  
   int * k = new(std::nothrow) int[10];  
   k[0] = 21;  
   printf("%d\n", k[0]);  
   delete [] k;  
}  
```  
  
## Vedere anche  
 [Allocazione di memoria](../c-runtime-library/memory-allocation.md)
---
title: "_set_new_handler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_new_handler"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_set_new_handler"
  - "set_new_handler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_set_new_handler (funzione)"
  - "gestione errori"
  - "set_new_handler (funzione)"
  - "trasferimento del controllo al gestore errori"
ms.assetid: 1d1781b6-5cf8-486a-b430-f365e0bb023f
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# _set_new_handler
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Trasferisce il controllo al meccanismo di gestione degli errori se l'operatore `new` non riesce ad allocare memoria.  
  
## Sintassi  
  
```  
_PNH _set_new_handler(  
   _PNH pNewHandler   
);  
```  
  
#### Parametri  
 `pNewHandler`  
 Puntatore alla funzione che gestisce la memoria fornita all'applicazione.  Un argomento di 0 indica che il nuovo gestore deve essere rimosso.  
  
## Valore restituito  
 Restituisce un puntatore alla funzione precedente di gestione delle eccezioni registrata da `_set_new_handler`, in modo che la funzione precedente possa essere ripristinata in un secondo momento.  Se nessuna funzione precedente è stata impostata, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito, questo valore può essere `NULL`.  
  
## Note  
 La funzione C\+\+ `_set_new_handler` specifica una funzione di gestione delle eccezioni che prende il controllo se l'operatore `new` non riesce ad allocare memoria.  Se `new` non riesce, il sistema runtime chiama automaticamente la funzione di gestione delle eccezioni che è stata passata come argomento a `_set_new_handler`.  `_PNH`, definita in New.h, è un puntatore a una funzione che restituisce un `int` e accetta un argomento di tipo `size_t`.  Utilizzare `size_t` per specificare la quantità di spazio da allocare in memoria.  
  
 Non esiste un gestore predefinito.  
  
 `_set_new_handler` è essenzialmente un garbage collection.  Il sistema di runtime riprova l'allocazione ogni volta che la funzione restituisce un valore diverso da zero e avrà esito negativo altrimenti.  
  
 Un'occorrenza della funzione `_set_new_handler` nei registri del programma, la funzione di gestione delle eccezioni specificata nella lista degli argomenti con il sistema di runtime:  
  
```  
#include <new.h>  
int handle_program_memory_depletion( size_t )  
{  
   // Your code  
}  
int main( void )  
{  
   _set_new_handler( handle_program_memory_depletion );  
   int *pi = new int[BIG_NUMBER];  
}  
```  
  
 È possibile salvare l'indirizzo dell'ultima funzione passata alla funzione `_set_new_handler` e reintegrarlo in seguito:  
  
```  
_PNH old_handler = _set_new_handler( my_handler );  
   // Code that requires my_handler  
   _set_new_handler( old_handler )  
   // Code that requires old_handler  
```  
  
 La funzione C\+\+ [\_set\_new\_mode](../../c-runtime-library/reference/set-new-mode.md) imposta la nuova modalità di gestione per la funzione [malloc](../../c-runtime-library/reference/malloc.md).  La nuova modalità di gestione indica che, in caso di errore, `malloc` deve richiamare la nuova routine di gestione come impostato da `_set_new_handler`.  Per impostazione predefinita, `malloc` non richiama la nuova routine di gestione in caso di errore nell'allocare memoria.  È possibile eseguire l'override di questo comportamento predefinito affinché, quando `malloc` non riesce ad allocare memoria, `malloc` chiami la nuova routine del gestore allo stesso modo di come avviene con l'operatore `new` quando si verifica il medesimo errore.  Per eseguire l'override del comportamento predefinito, chiamare:  
  
```  
_set_new_mode(1)  
```  
  
 all'inizio del programma programma o collegare con Newmode.obj.  
  
 Se viene fornito un `operator new`definito dall'utente, le nuove funzioni di gestione non vengono richiamate automaticamente in caso di errore.  
  
 Per ulteriori informazioni, vedere [nuovo](../../cpp/new-operator-cpp.md) e [elimina](../../cpp/delete-operator-cpp.md) in *Riferimenti al linguaggio C\+\+*.  
  
 Esiste un unico gestore `_set_new_handler` per tutte le DLL collegate in modo dinamico o gli eseguibili; anche se si chiama `_set_new_handler` il gestore può solo essere sostituito da un altro o eventualmente sostituire uno già impostato da qualche DLL o eseguibile.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_set_new_handler`|\<new.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 In questo esempio, quando l'allocazione ha esito negativo, il controllo viene trasferito a MyNewHandler.  L'argomento passato a MyNewHandler è il numero di byte necessari.  Il valore restituito da MyNewHandler è un flag che indica se l'allocazione deve essere ripetuta: un valore diverso da zero indica che l'allocazione deve essere ripetuta e un valore zero indica che l'allocazione non è riuscita.  
  
```  
// crt_set_new_handler.cpp  
// compile with: /c  
#include <stdio.h>  
#include <new.h>  
#define BIG_NUMBER 0x1fffffff  
  
int coalesced = 0;  
  
int CoalesceHeap()  
{  
   coalesced = 1;  // Flag RecurseAlloc to stop   
   // do some work to free memory  
   return 0;  
}  
// Define a function to be called if new fails to allocate memory.  
int MyNewHandler( size_t size )  
{  
   printf("Allocation failed. Coalescing heap.\n");  
  
   // Call a function to recover some heap space.  
   return CoalesceHeap();  
}  
  
int RecurseAlloc() {  
   int *pi = new int[BIG_NUMBER];  
   if (!coalesced)  
      RecurseAlloc();  
   return 0;  
}  
  
int main()  
{  
   // Set the failure handler for new to be MyNewHandler.  
   _set_new_handler( MyNewHandler );  
   RecurseAlloc();  
}  
```  
  
  **Allocazione non riuscita.  Coalescenza dell'heap.**  
**Questa applicazione ha richiesto all'ambiente di Runtime di terminare alla maniera usuale.**  
**Prego contattare il supporto dell'applicazione per maggiori informazioni.**    
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)
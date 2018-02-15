---
title: _set_new_handler | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _set_new_handler
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _set_new_handler
- set_new_handler
dev_langs:
- C++
helpviewer_keywords:
- _set_new_handler function
- set_new_handler function
- error handling
- transferring control to error handler
ms.assetid: 1d1781b6-5cf8-486a-b430-f365e0bb023f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d82d37e13e941f98d51f2f171b9fb6f1b8071058
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="setnewhandler"></a>_set_new_handler
Trasferisce il controllo al meccanismo di gestione degli errori se l'operatore `new` non riesce ad allocare la memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```  
_PNH _set_new_handler(  
   _PNH pNewHandler   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `pNewHandler`  
 Puntatore alla funzione di gestione della memoria fornita dall'applicazione. Un argomento 0 causa la rimozione del nuovo gestore.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore alla funzione di gestione delle eccezioni precedente registrata da `_set_new_handler`, in modo che la funzione precedente possa essere ripristinata in un secondo momento. Se non è stata impostata alcuna funzione precedente, il valore restituito può essere usato per ripristinare il comportamento predefinito. Questo valore può essere `NULL`.  
  
## <a name="remarks"></a>Note  
 La funzione C++ `_set_new_handler` viene usata per specificare una funzione di gestione delle eccezioni che deve assumere il controllo se l'operatore `new` non riesce ad allocare memoria. Se `new` ha esito negativo, il sistema di runtime chiama automaticamente la funzione di gestione delle eccezioni passata come argomento di `_set_new_handler`. `_PNH`, definito in New.h, è un puntatore a una funzione che restituisce il tipo `int` e accetta un argomento di tipo `size_t`. Usare `size_t` per specificare la quantità di spazio da allocare.  
  
 Non è previsto alcun gestore predefinito.  
  
 `_set_new_handler` è fondamentalmente uno schema di garbage collection. Il sistema di runtime ritenta l'allocazione ogni volta che la funzione restituisce un valore diverso da zero e non riesce se la funzione restituisce 0.  
  
 Un'occorrenza della funzione `_set_new_handler` in un programma registra la funzione di gestione delle eccezioni specificata nell'elenco di argomenti con il sistema di runtime:  
  
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
  
 È possibile salvare l'indirizzo dell'ultima funzione passata alla funzione `_set_new_handler` e crearne un'altra istanza in seguito:  
  
```  
_PNH old_handler = _set_new_handler( my_handler );  
   // Code that requires my_handler  
   _set_new_handler( old_handler )  
   // Code that requires old_handler  
```  
  
 La funzione C++ [_set_new_mode](../../c-runtime-library/reference/set-new-mode.md) imposta la nuova modalità del gestore per [malloc](../../c-runtime-library/reference/malloc.md). La nuova modalità del gestore indica se, in caso di errore, `malloc` deve chiamare la routine del nuovo gestore come impostato da `_set_new_handler`. Per impostazione predefinita, `malloc` non chiama la routine del nuovo gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando `malloc` non riesce ad allocare memoria, `malloc` chiami la routine del nuovo gestore, come fa l'operatore `new` quando non riesce per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare:  
  
```  
_set_new_mode(1)  
```  
  
 all'inizio del programma o collegare con Newmode.obj.  
  
 Se un utente definito `operator new` viene fornito, le nuove funzioni del gestore non vengono chiamate automaticamente in caso di errore.  
  
 Per altre informazioni, vedere [new](../../cpp/new-operator-cpp.md) e [delete](../../cpp/delete-operator-cpp.md) in *Riferimenti al linguaggio C++*.  
  
 È disponibile un unico gestore `_set_new_handler` per tutti i file DLL o eseguibili collegati in modo dinamico. Anche se si chiama `_set_new_handler`, è possibile che il gestore sia sostituito da un altro o che si stia sostituendo un gestore impostato da un altro file DLL o eseguibile.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_set_new_handler`|\<new.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 In questo esempio, quando l'allocazione ha esito negativo, il controllo viene trasferito a MyNewHandler. L'argomento passato a MyNewHandler è il numero di byte richiesto. Il valore restituito da MyNewHandler è un flag che indica se deve essere ritentata l'allocazione. Un valore diverso da zero indica che deve essere ritentata allocazione e il valore zero indica che l'allocazione non è riuscita.  
  
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
  
```Output  
Allocation failed. Coalescing heap.  
  
This application has requested the Runtime to terminate it in an unusual way.  
Please contact the application's support team for more information.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)  (Allocazione di memoria)  
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)
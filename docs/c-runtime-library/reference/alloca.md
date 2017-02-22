---
title: "_alloca | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_alloca"
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
apitype: "DLLExport"
f1_keywords: 
  - "_alloca"
  - "alloca"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_alloca (funzione)"
  - "alloca (funzione)"
  - "allocazione di memoria, stack"
ms.assetid: 74488eb1-b71f-4515-88e1-cdd03b6f8225
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# _alloca
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alloca memoria sullo stack.  Questa funzione è deprecata poiché è disponibile una versione più sicura; vedere [\_malloca](../../c-runtime-library/reference/malloca.md).  
  
## Sintassi  
  
```  
void *_alloca(   
   size_t size   
);  
```  
  
#### Parametri  
 \[in\] `size`  
 Byte da allocare dallo stack.  
  
## Valore restituito  
 La routine `_alloca` restituisce un puntatore `void` allo spazio allocato, che è garantito essere adeguato per l'archiviazione di qualsiasi tipo di oggetto.  Se `size` è 0, `_alloca` alloca un elemento di lunghezza zero e restituisce un puntatore valido per tale elemento.  
  
 Se lo spazio non può essere allocato viene generata un'eccezione di overflow dello stack.  L'eccezione di overflow dello stack non è un'eccezione C\+\+; si tratta di un'eccezione strutturata.  Anziché utilizzare la gestione delle eccezioni C\+\+, è necessario utilizzare [Gestione delle eccezioni strutturate](../../cpp/structured-exception-handling-c-cpp.md) \(SEH\).  
  
## Note  
 `_alloca` alloca `size` byte dallo stack del programma.  Lo spazio allocato viene liberato automaticamente quando si esce dalla funzione chiamante \(non semplicemente quando l'allocazione passa al di fuori dell'ambito\).  Pertanto, non passare il valore del puntatore restituito da `_alloca` come argomento a [free](../../c-runtime-library/reference/free.md).  
  
 Esistono restrizioni per chiamare in modo esplicito `_alloca` in un gestore di eccezioni \(EH\).  Le routine EH in esecuzione su processori x86 operano nel relativo frame della memoria: Eseguono le loro attività nello spazio di memoria non dipendente dalla posizione corrente del puntatore dello stack della funzione che lo contiene.  Le implementazioni più comuni includono la gestione delle eccezioni strutturate \(SEH\) di Windows NT e le espressioni della clausola catch C\+\+.  Di conseguenza, chiamare in modo esplicito `_alloca` in uno dei seguenti scenari genera un errore di programma durante la restituzione alla routine EH chiamante:  
  
-   Espressione di filtro eccezioni di Windows NT SEH: `__except` \(`_alloca ()` \)  
  
-   Gestore delle eccezioni finale di Windows NT SEH: `__finally` {`_alloca ()` }  
  
-   Espressione della clausola catch di EH di C\+\+  
  
 Comunque, `_alloca` può essere chiamato direttamente dall'interno di una routine EH o da un callback fornito dall'applicazione che viene richiamato da uno degli scenari EH sopra elencati.  
  
> [!IMPORTANT]
>  In Windows XP, se `_alloca` viene chiamato all'interno di un blocco try\/catch, è necessario chiamare [\_resetstkoflw](../../c-runtime-library/reference/resetstkoflw.md) nel blocco catch.  
  
 Oltre alle limitazioni sopra riportate, quando si utilizza l'opzione[\/clr \(Common Language Runtime compilation\)](../../build/reference/clr-common-language-runtime-compilation.md), `_alloca` non può essere utilizzato nei blocchi `__except`.  Per ulteriori informazioni, vedere [Limitazioni \/clr](../../build/reference/clr-restrictions.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_alloca`|\<malloc.h\>|  
  
## Esempio  
  
```  
// crt_alloca.c  
// This program demonstrates the use of  
// _alloca and trapping any exceptions  
// that may occur.  
  
#include <windows.h>  
#include <stdio.h>  
#include <malloc.h>  
  
int main()  
{  
    int     size = 1000;  
    int     errcode = 0;  
    void    *pData = NULL;  
  
    // Note: Do not use try/catch for _alloca,  
    // use __try/__except, since _alloca throws  
    // Structured Exceptions, not C++ exceptions.  
  
    __try {  
        // An unbounded _alloca can easily result in a   
        // stack overflow.  
        // Checking for a size < 1024 bytes is recommended.  
        if (size > 0 && size < 1024)  
        {  
            pData = _alloca( size );  
            printf_s( "Allocated %d bytes of stack at 0x%p",  
                      size, pData);  
        }  
        else  
        {  
            printf_s("Tried to allocate too many bytes.\n");  
        }  
    }  
  
    // If an exception occured with the _alloca function  
    __except( GetExceptionCode() == STATUS_STACK_OVERFLOW )  
    {  
        printf_s("_alloca failed!\n");  
  
        // If the stack overflows, use this function to restore.  
        errcode = _resetstkoflw();  
        if (errcode)  
        {  
            printf_s("Could not reset the stack!\n");  
            _exit(1);  
        }  
    };  
}  
```  
  
  **Allocati 1000 byte dello stack a 0x0012FB50**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [\_resetstkoflw](../../c-runtime-library/reference/resetstkoflw.md)   
 [\_malloca](../../c-runtime-library/reference/malloca.md)
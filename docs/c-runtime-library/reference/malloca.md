---
title: "_malloca | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_malloca"
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
  - "malloca"
  - "_malloca"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_malloca (funzione)"
  - "malloca (funzione)"
  - "allocazione di memoria, stack"
ms.assetid: 293992df-cfca-4bc9-b313-0a733a6bb936
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 27
---
# _malloca
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alloca memoria sullo stack.  Si tratta di una versione di [\_alloca](../../c-runtime-library/reference/alloca.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
void *_malloca(   
   size_t size   
);  
```  
  
#### Parametri  
 `size`  
 Byte da allocare dallo stack.  
  
## Valore restituito  
 La routine `_malloca` restituisce un puntatore `void` allo spazio allocato, che è garantito essere adeguato per l'archiviazione di qualsiasi tipo di oggetto.  Se `size` è 0, `_malloca` alloca un elemento di lunghezza zero e restituisce un puntatore valido per tale elemento.  
  
 Se lo spazio non può essere allocato viene generata un'eccezione di overflow dello stack.  L'eccezione di overflow dello stack non è un'eccezione C\+\+; si tratta di un'eccezione strutturata.  Anziché utilizzare la gestione delle eccezioni C\+\+, è necessario utilizzare [Gestione delle eccezioni strutturate](../../cpp/structured-exception-handling-c-cpp.md) \(SEH\).  
  
## Note  
 `_malloca` alloca `size` byte dallo stack di programma o dall'heap se la richiesta supera la dimensione in byte fornita da `_ALLOCA_S_THRESHOLD`.  La differenza tra `_malloca` e `_alloca` è che `_alloca` è sempre allocato nello stack, indipendentemente dalle dimensioni.  A differenza di `_alloca`, che non richiede o non consente una chiamata a `free` per liberare la memoria allocata in questo modo, `_malloca` richiede l'utilizzo di [\_freea](../../c-runtime-library/reference/freea.md) per liberare la memoria.  In modalità di debug, `_malloca` alloca sempre la memoria dall'heap.  
  
 Esistono restrizioni per chiamare in modo esplicito `_malloca` in un gestore di eccezioni \(EH\).  Le routine EH in esecuzione su processori x86 operano nel relativo frame della memoria: Eseguono le loro attività nello spazio di memoria non dipendente dalla posizione corrente del puntatore dello stack della funzione che lo contiene.  Le implementazioni più comuni includono la gestione delle eccezioni strutturate \(SEH\) di Windows NT e le espressioni della clausola catch C\+\+.  Di conseguenza, chiamare in modo esplicito `_malloca` in uno dei seguenti scenari genera un errore di programma durante la restituzione alla routine EH chiamante:  
  
-   Espressione di filtro eccezioni di Windows NT SEH: `__except` \(`_malloca ()` \)  
  
-   Gestore delle eccezioni finale di Windows NT SEH: `__finally` {`_malloca ()` }  
  
-   Espressione della clausola catch di EH di C\+\+  
  
 Comunque, `_malloca` può essere chiamato direttamente dall'interno di una routine EH o da un callback fornito dall'applicazione che viene richiamato da uno degli scenari EH sopra elencati.  
  
> [!IMPORTANT]
>  In Windows XP, se `_malloca` viene chiamato all'interno di un blocco try\/catch, è necessario chiamare [\_resetstkoflw](../../c-runtime-library/reference/resetstkoflw.md) nel blocco catch.  
  
 Oltre alle limitazioni sopra riportate, quando si utilizza l'opzione [\/clr \(Common Language Runtime compilation\)](../../build/reference/clr-common-language-runtime-compilation.md), `_malloca` non può essere utilizzato nei blocchi `__except`.  Per ulteriori informazioni, vedere [Limitazioni \/clr](../../build/reference/clr-restrictions.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_malloca`|\<malloc.h\>|  
  
## Esempio  
  
```  
// crt_malloca_simple.c  
#include <stdio.h>  
#include <malloc.h>  
  
void Fn()  
{  
   char * buf = (char *)_malloca( 100 );  
   // do something with buf  
   _freea( buf );  
}  
  
int main()  
{  
   Fn();  
}  
```  
  
## Esempio  
  
```  
// crt_malloca_exception.c  
// This program demonstrates the use of  
// _malloca and trapping any exceptions  
// that may occur.  
  
#include <windows.h>  
#include <stdio.h>  
#include <malloc.h>  
  
int main()  
{  
    int     size;  
    int     numberRead = 0;  
    int     errcode = 0;  
    void    *p = NULL;  
    void    *pMarker = NULL;  
  
    while (numberRead == 0)  
    {  
        printf_s("Enter the number of bytes to allocate "  
                 "using _malloca: ");  
        numberRead = scanf_s("%d", &size);  
    }  
  
    // Do not use try/catch for _malloca,  
    // use __try/__except, since _malloca throws  
    // Structured Exceptions, not C++ exceptions.  
  
    __try  
    {  
        if (size > 0)  
        {  
            p =  _malloca( size );  
        }  
        else  
        {  
            printf_s("Size must be a positive number.");  
        }  
        _freea( p );  
    }  
  
    // Catch any exceptions that may occur.  
    __except( GetExceptionCode() == STATUS_STACK_OVERFLOW )  
    {  
        printf_s("_malloca failed!\n");  
  
        // If the stack overflows, use this function to restore.  
        errcode = _resetstkoflw();  
        if (errcode)  
        {  
            printf("Could not reset the stack!");  
            _exit(1);  
        }  
    };  
}  
```  
  
## Input  
  
```  
1000  
```  
  
## Esempio di output  
  
```  
Enter the number of bytes to allocate using _malloca: 1000  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [\_resetstkoflw](../../c-runtime-library/reference/resetstkoflw.md)
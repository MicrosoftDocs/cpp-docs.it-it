---
title: _malloca | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _malloca
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
apitype: DLLExport
f1_keywords:
- malloca
- _malloca
dev_langs:
- C++
helpviewer_keywords:
- memory allocation, stack
- malloca function
- _malloca function
ms.assetid: 293992df-cfca-4bc9-b313-0a733a6bb936
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d61874320712e6cef7f783bb1c4fb03f53ac40e9
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="malloca"></a>_malloca
Alloca memoria nello stack. Questa è una versione di [_alloca](../../c-runtime-library/reference/alloca.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void *_malloca(   
   size_t size   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `size`  
 Byte da allocare dallo stack.  
  
## <a name="return-value"></a>Valore restituito  
 La routine `_malloca` restituisce un puntatore `void` allo spazio allocato che è allineato in modo adeguato per l'archiviazione di qualsiasi tipo di oggetto. Se `size` è 0, `_malloca` alloca un elemento di lunghezza zero e restituisce un puntatore valido a tale elemento.  
  
 Se lo spazio non può essere allocato viene generata un'eccezione di overflow dello stack. L'eccezione di overflow dello stack non è un'eccezione C++; si tratta di un'eccezione strutturata. Invece di usare la gestione delle eccezioni C++, è necessario usare la [gestione delle eccezioni strutturata](../../cpp/structured-exception-handling-c-cpp.md).  
  
## <a name="remarks"></a>Note  
 `_malloca` alloca `size` byte dall'heap o dallo stack di programma se la richiesta supera una determinata dimensione in byte fornita da `_ALLOCA_S_THRESHOLD`. La differenza tra `_malloca` e `_alloca` è che `_alloca` alloca sempre nello stack, indipendentemente dalle dimensioni. Diversamente da `_alloca`, che non richiede o non consente una chiamata a `free` per liberare la memoria allocata in questo modo, `_malloca` richiede l'uso di [_freea](../../c-runtime-library/reference/freea.md) per liberare la memoria. In modalità debug, `_malloca` alloca sempre la memoria dall'heap.  
  
 Esistono restrizioni per chiamare in modo esplicito `_malloca` in un gestore di eccezioni (EH). Le routine EH in esecuzione su processori x86 operano nel relativo frame di memoria: eseguono le attività nello spazio di memoria che non è basato sulla posizione corrente del puntatore dello stack della funzione contenitore. Le implementazioni più comuni includono la gestione delle eccezioni strutturata di Windows NT e le espressioni con clausola catch C++. Di conseguenza, chiamare in modo esplicito `_malloca` in uno dei seguenti scenari genera un errore di programma durante la restituzione alla routine EH chiamante:  
  
-   Espressione di filtro delle eccezioni con la gestione delle eccezioni strutturata di Windows NT: `__except`(`_malloca ()` )  
  
-   Gestore delle eccezioni finale con la gestione delle eccezioni strutturata di Windows NT: `__finally` {`_malloca ()` }  
  
-   Espressione della clausola catch EH C++  
  
 Tuttavia, `_malloca` può essere chiamato direttamente dall'interno di una routine EH o da un callback fornito dall'applicazione che viene richiamato da uno degli scenari EH elencati in precedenza.  
  
> [!IMPORTANT]
>  In Windows XP, se la funzione `_malloca` viene chiamata all'interno di un blocco try/catch, è necessario chiamare [_resetstkoflw](../../c-runtime-library/reference/resetstkoflw.md) nel blocco catch.  
  
 Oltre alle restrizioni menzionate sopra, quando si usa l'opzione [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md), non è possibile usare `_malloca` nei blocchi `__except`. Per altre informazioni, vedere [Limitazioni di /clr](../../build/reference/clr-restrictions.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_malloca`|\<malloc.h>|  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="input"></a>Input  
  
```  
1000  
```  
  
## <a name="sample-output"></a>Esempio di output  
  
```  
Enter the number of bytes to allocate using _malloca: 1000  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)  (Allocazione di memoria)  
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [_resetstkoflw](../../c-runtime-library/reference/resetstkoflw.md)
---
title: Alloca | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _alloca
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
- _alloca
- alloca
dev_langs: C++
helpviewer_keywords:
- memory allocation, stack
- alloca function
- _alloca function
ms.assetid: 74488eb1-b71f-4515-88e1-cdd03b6f8225
caps.latest.revision: "23"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a48b0ab3e9717416736acf4187a27df2c737089b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="alloca"></a>_alloca
Alloca memoria nello stack. Questa funzione è deprecata poiché è disponibile una versione più sicura; vedere [malloca](../../c-runtime-library/reference/malloca.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void *_alloca(   
   size_t size   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `size`  
 Byte da allocare dallo stack.  
  
## <a name="return-value"></a>Valore restituito  
 La routine `_alloca` restituisce un puntatore `void` allo spazio allocato che è allineato in modo adeguato per l'archiviazione di qualsiasi tipo di oggetto. Se `size` è 0, `_alloca` alloca un elemento di lunghezza zero e restituisce un puntatore valido a tale elemento.  
  
 Se lo spazio non può essere allocato viene generata un'eccezione di overflow dello stack. L'eccezione di overflow dello stack non è un'eccezione C++; si tratta di un'eccezione strutturata. Invece di usare la gestione delle eccezioni C++, è necessario usare la [gestione delle eccezioni strutturata](../../cpp/structured-exception-handling-c-cpp.md).  
  
## <a name="remarks"></a>Note  
 `_alloca`alloca `size` byte dallo stack di programma. Lo spazio allocato viene liberato automaticamente al termine della funzione chiamante (ma non quando l'allocazione semplicemente diventa esterno all'ambito). Pertanto, non passare il valore del puntatore restituito da `_alloca` come argomento di [disponibile](../../c-runtime-library/reference/free.md).  
  
 Esistono restrizioni per chiamare in modo esplicito `_alloca` in un gestore di eccezioni (EH). Le routine EH in esecuzione su processori x86 operano nel relativo frame di memoria: eseguono le attività nello spazio di memoria che non è basato sulla posizione corrente del puntatore dello stack della funzione contenitore. Le implementazioni più comuni includono la gestione delle eccezioni strutturata di Windows NT e le espressioni con clausola catch C++. Di conseguenza, chiamare in modo esplicito `_alloca` in uno dei seguenti scenari genera un errore di programma durante la restituzione alla routine EH chiamante:  
  
-   Espressione di filtro delle eccezioni con la gestione delle eccezioni strutturata di Windows NT: `__except`(`_alloca ()` )  
  
-   Gestore delle eccezioni finale con la gestione delle eccezioni strutturata di Windows NT: `__finally` {`_alloca ()` }  
  
-   Espressione della clausola catch EH C++  
  
 Tuttavia, `_alloca` può essere chiamato direttamente dall'interno di una routine EH o da un callback fornito dall'applicazione che viene richiamato da uno degli scenari EH elencati in precedenza.  
  
> [!IMPORTANT]
>  In Windows XP, se la funzione `_alloca` viene chiamata all'interno di un blocco try/catch, è necessario chiamare [_resetstkoflw](../../c-runtime-library/reference/resetstkoflw.md) nel blocco catch.  
  
 Oltre alle restrizioni menzionate sopra, quando si utilizza il[/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) opzione `_alloca` non può essere utilizzato `__except` blocchi. Per altre informazioni, vedere [/clr Restrictions](../../build/reference/clr-restrictions.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_alloca`|\<malloc.h>|  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
Allocated 1000 bytes of stack at 0x0012FB50  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)  (Allocazione di memoria)  
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [resetstkoflw](../../c-runtime-library/reference/resetstkoflw.md)   
 [_malloca](../../c-runtime-library/reference/malloca.md)
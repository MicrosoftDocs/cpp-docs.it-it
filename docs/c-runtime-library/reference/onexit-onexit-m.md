---
title: _onexit, _onexit_m | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _onexit
- _onexit_m
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
- _onexit
- onexit_m
- onexit
- _onexit_m
dev_langs:
- C++
helpviewer_keywords:
- onexit function
- registry, registering exit routines
- _onexit_m function
- onexit_m function
- _onexit function
- registering exit routines
- registering to be called on exit
ms.assetid: 45743298-0e2f-46cf-966d-1ca44babb443
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 50070672e990333073f5ad7f7ba604110c3a3cfa
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="onexit-onexitm"></a>_onexit, _onexit_m
Registra una routine da chiamare in fase di uscita.  
  
## <a name="syntax"></a>Sintassi  
  
```  
_onexit_t _onexit(  
   _onexit_t function  
);  
_onexit_t_m _onexit_m(  
   _onexit_t_m function  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `function`  
 Puntatore a una funzione da chiamare all'uscita.  
  
## <a name="return-value"></a>Valore restituito  
 `_onexit` restituisce un puntatore alla funzione in caso di esito positivo o `NULL` se non c'è spazio per archiviare il puntatore a funzione.  
  
## <a name="remarks"></a>Note  
 Alla funzione `_onexit` viene passato l'indirizzo di una funzione (`function`) da chiamare quando il programma termina normalmente. Le chiamate successive a `_onexit` creano un registro di funzioni che vengono eseguite sulla base dell'ordine LIFO (last-in-first-out). Le funzioni passate a `_onexit` non accettano parametri.  
  
 Nel caso in cui `_onexit` viene chiamato dall'interno di una DLL, le routine registrate con `_onexit` vengono eseguite sullo scaricamento di una DLL dopo che `DllMain` è stato chiamato con DLL_PROCESS_DETACH.  
  
 `_onexit` è un'estensione Microsoft. Per la portabilità ANSI, usare [atexit](../../c-runtime-library/reference/atexit.md). La versione `_onexit_m` della funzione è per l'utilizzo in modalità mista.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_onexit`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_onexit.c  
  
#include <stdlib.h>  
#include <stdio.h>  
  
/* Prototypes */  
int fn1(void), fn2(void), fn3(void), fn4 (void);  
  
int main( void )  
{  
   _onexit( fn1 );  
   _onexit( fn2 );  
   _onexit( fn3 );  
   _onexit( fn4 );  
   printf( "This is executed first.\n" );  
}  
  
int fn1()  
{  
   printf( "next.\n" );  
   return 0;  
}  
  
int fn2()  
{  
   printf( "executed " );  
   return 0;  
}  
  
int fn3()  
{  
   printf( "is " );  
   return 0;  
}  
  
int fn4()  
{  
   printf( "This " );  
   return 0;  
}  
```  
  
## <a name="output"></a>Output  
  
```  
This is executed first.  
This is executed next.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [__dllonexit](../../c-runtime-library/dllonexit.md)

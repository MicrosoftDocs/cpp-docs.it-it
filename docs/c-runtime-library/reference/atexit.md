---
title: atexit | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: atexit
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
f1_keywords: atexit
dev_langs: C++
helpviewer_keywords:
- processing, at exit
- atexit function
ms.assetid: 92c156d2-8052-4e58-96dc-00128baac6f9
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8e812f39041287d17ee87766f6971d299654f0f4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="atexit"></a>atexit
Elabora la funzione specificata in uscita.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int atexit(  
   void (__cdecl *func )( void )  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `func`  
 Funzione da chiamare.  
  
## <a name="return-value"></a>Valore restituito  
 `atexit` restituisce 0 se l'esito è positivo o un valore diverso da zero se si verifica un errore.  
  
## <a name="remarks"></a>Note  
 Alla funzione `atexit` viene passato l'indirizzo di una funzione (`func`) da chiamare quando il programma termina normalmente. Le chiamate successive a `atexit` creano un registro di funzioni che vengono eseguite in base all'ordine LIFO (last-in-first-out). Le funzioni passate a `atexit` non accettano parametri. `atexit` e `_onexit` usano l'heap per mantenere il registro di funzioni. Per questa ragione, il numero di funzioni che possono essere registrate è limitato solo dalla memoria dell'heap.  
  
 Il codice nella funzione `atexit` non dovrebbe contenere alcuna dipendenza da qualsiasi DLL che potrebbe già essere stata scaricata quando viene chiamata la funzione `atexit`.  
  
 Per generare un'applicazione compatibile con ANSI, usare la funzione standard ANSI `atexit` anziché la funzione simile `_onexit`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`atexit`|\<stdlib.h>|  
  
## <a name="example"></a>Esempio  
 Questo programma effettua il push di quattro funzioni nello stack di funzioni da eseguire quando viene chiamata `atexit`. Alla chiusura del programma, questi programmi vengono eseguiti in ordine LIFO (last-in-first-out).  
  
```  
// crt_atexit.c  
#include <stdlib.h>  
#include <stdio.h>  
  
void fn1( void ), fn2( void ), fn3( void ), fn4( void );  
  
int main( void )  
{  
   atexit( fn1 );  
   atexit( fn2 );  
   atexit( fn3 );  
   atexit( fn4 );  
   printf( "This is executed first.\n" );  
}  
  
void fn1()  
{  
   printf( "next.\n" );  
}  
  
void fn2()  
{  
   printf( "executed " );  
}  
  
void fn3()  
{  
   printf( "is " );  
}  
  
void fn4()  
{  
   printf( "This " );  
}  
```  
  
```Output  
This is executed first.  
This is executed next.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [_onexit, _onexit_m](../../c-runtime-library/reference/onexit-onexit-m.md)
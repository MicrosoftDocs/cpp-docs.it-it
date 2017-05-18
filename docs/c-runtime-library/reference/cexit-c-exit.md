---
title: _cexit, _c_exit | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _c_exit
- _cexit
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
- _cexit
- c_exit
- _c_exit
- cexit
dev_langs:
- C++
helpviewer_keywords:
- cleanup operations during processes
- cexit function
- _c_exit function
- _cexit function
- c_exit function
ms.assetid: f3072045-9924-4b1a-9fef-b0dcd6d12663
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: a68b803ee7dc444439d7a62f43cf7157e7fbf505
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="cexit-cexit"></a>_cexit, _c_exit
Esegue operazioni di pulizia e restituisce senza terminare il processo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _cexit( void );  
void _c_exit( void );  
```  
  
## <a name="remarks"></a>Note  
 La funzione `_cexit` chiama, nell'ordine Last-In-First-Out (LIFO), le funzioni registrate da `atexit` e `_onexit`. Quindi `_cexit` scarica tutti i buffer I/O e chiude tutti i flussi aperti prima di restituire. `_c_exit` equivale a `_exit` ma restituisce al processo chiamante senza elaborare `atexit` o `_onexit` o scaricare i buffer del flusso. Il comportamento di `exit`, `_exit`, `_cexit` e `_c_exit` è illustrato nella tabella seguente.  
  
|Funzione|Comportamento|  
|--------------|--------------|  
|`exit`|Esegue le procedure complete di terminazione della libreria C, termina il processo ed esce con il codice di stato specificato.|  
|`_exit`|Esegue le procedure rapide di terminazione della libreria C, termina il processo ed esce con il codice di stato specificato.|  
|`_cexit`|Esegue le procedure complete di terminazione della libreria C e restituisce al chiamante, ma non termina il processo.|  
|`_c_exit`|Esegue le procedure rapide di terminazione della libreria C e restituisce al chiamante, ma non termina il processo.|  
  
 Quando si chiama la funzione `_cexit` o `_c_exit` i distruttori per gli oggetti temporanei o automatici presenti al momento della chiamata non vengono chiamati. Un oggetto automatico è un oggetto definito in una funzione in cui l'oggetto non è dichiarato come statico. Un oggetto temporaneo è un oggetto creato dal compilatore. Per eliminare un oggetto automatico prima di chiamare `_cexit` o `_c_exit`, chiamare esplicitamente il distruttore per l'oggetto, come indicato di seguito:  
  
```  
myObject.myClass::~myClass( );  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_cexit`|\<process.h>|  
|`_c_exit`|\<process.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [_onexit, _onexit_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)   
 [system, _wsystem](../../c-runtime-library/reference/system-wsystem.md)

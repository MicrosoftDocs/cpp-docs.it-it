---
title: set_terminate (CRT) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- set_terminate
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
- set_terminate
dev_langs:
- C++
helpviewer_keywords:
- set_terminate function
- terminate function
- exception handling, termination
ms.assetid: 3ff1456a-7898-44bc-9266-a328a80b6006
caps.latest.revision: 13
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
ms.openlocfilehash: 2b41d207d82e48430159812391afecb49d8b00b5
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="setterminate-crt"></a>set_terminate (CRT)
Installa la routine di terminazione personalizzata che deve essere chiamata da `terminate`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
terminate_function set_terminate(  
   terminate_function termFunction  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `termFunction`  
 Puntatore a una funzione di terminazione personalizzata.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore alla funzione precedente registrata da `set_terminate`, in modo che la funzione precedente possa essere ripristinata in un secondo momento. Se non è stata impostata alcuna funzione precedente, il valore restituito può essere usato per ripristinare il comportamento predefinito. Questo valore può essere NULL.  
  
## <a name="remarks"></a>Note  
 La funzione `set_terminate` installa `termFunction` come funzione chiamata da `terminate`. La funzione `set_terminate` viene usata con la gestione delle eccezioni C++ e può essere chiamata in qualsiasi punto del programma prima che venga generata l'eccezione. `terminate` chiama `abort` per impostazione predefinita. È possibile modificare questo comportamento predefinito scrivendo una funzione di terminazione personalizzata e chiamando `set_terminate` con il nome della funzione come argomento. `terminate` chiama l'ultima funzione fornita come argomento a `set_terminate`. Dopo l'esecuzione di qualsiasi attività di pulizia, `termFunction` deve uscire dal programma. In caso contrario (se restituisce controllo al chiamante), viene chiamata la funzione `abort`.  
  
 In un ambiente multithreading, le funzioni di terminazione vengono mantenute separatamente per ogni thread. Ogni nuovo thread richiede l'installazione della propria funzione di terminazione. Quindi, ogni thread è responsabile della propria gestione della terminazione.  
  
 Il tipo `terminate_function` è definito in EH.H come puntatore a una funzione di terminazione definita dall'utente, `termFunction` che restituisce `void`. La funzione personalizzata `termFunction` non può accettare argomenti e non deve restituire il controllo al chiamante. In caso affermativo, viene chiamata la funzione `abort`. È possibile che non venga generata un'eccezione da `termFunction`.  
  
```  
typedef void ( *terminate_function )( );  
```  
  
> [!NOTE]
>  La funzione `set_terminate` funziona solo all'esterno del debugger.  
  
 È disponibile un unico gestore `set_terminate` per tutti i file DLL o EXE collegati in modo dinamico. Anche se si chiama `set_terminate`, è possibile che il gestore venga sostituito con un altro o che si sostituisca un gestore impostato da un altro file DLL o EXE.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`set_terminate`|\<eh.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [terminate](../../c-runtime-library/reference/terminate-crt.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [_get_terminate](../../c-runtime-library/reference/get-terminate.md)   
 [set_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)

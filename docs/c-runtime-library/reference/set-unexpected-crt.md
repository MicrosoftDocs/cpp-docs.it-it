---
title: set_unexpected (CRT) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: set_unexpected
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
f1_keywords: set_unexpected
dev_langs: C++
helpviewer_keywords:
- set_unexpected function
- unexpected function
- exception handling, termination
ms.assetid: ebcef032-4771-48e5-88aa-2a1ab8750aa6
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2798fff46d40ed6100f101cbc8839ad2fd166f4b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="setunexpected-crt"></a>set_unexpected (CRT)
Installa la funzione di terminazione personalizzata che deve essere chiamata da `unexpected`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unexpected_function set_unexpected(  
   unexpected_function unexpFunction   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `unexpFunction`  
 Puntatore a una funzione personalizzata per sostituire la funzione `unexpected`.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore alla funzione di terminazione precedente registrata da `_set_unexpected`, in modo che la funzione precedente possa essere ripristinata in un secondo momento. Se non è stata impostata alcuna funzione precedente, il valore restituito può essere usato per ripristinare il comportamento predefinito. Questo valore può essere NULL.  
  
## <a name="remarks"></a>Note  
 La funzione `set_unexpected` installa `unexpFunction` come funzione chiamata da `unexpected`. La funzione `unexpected` non viene usata nell'implementazione corrente della gestione delle eccezioni C++. Il tipo `unexpected_function` è definito in EH.H come puntatore a una funzione unexpected definita dall'utente, `unexpFunction` che restituisce `void`. La funzione personalizzata `unexpFunction` non deve restituire il controllo al chiamante.  
  
```  
typedef void ( *unexpected_function )( );  
```  
  
 `unexpected` chiama `terminate` per impostazione predefinita. È possibile modificare questo comportamento predefinito scrivendo una funzione di terminazione personalizzata e chiamando `set_unexpected` con il nome della funzione come argomento. `unexpected` chiama l'ultima funzione fornita come argomento a `set_unexpected`.  
  
 Diversamente dalla funzione di terminazione personalizzata installata da una chiamata a `set_terminate`, un'eccezione può essere generata dall'interno di `unexpFunction`.  
  
 In un ambiente multithreading, le funzioni unexpected vengono mantenute separatamente per ogni thread. Ogni nuovo thread richiede l'installazione della propria funzione unexpected. Quindi, ogni thread è responsabile della propria gestione degli eventi imprevisti.  
  
 Nell'implementazione corrente di Microsoft di gestione delle eccezioni C++, `unexpected` chiama `terminate` per impostazione predefinita e non viene mai chiamata dalla libreria di runtime di gestione delle eccezioni. La chiamata di `unexpected` anziché `terminate` non offre alcun vantaggio particolare.  
  
 È disponibile un unico gestore `set_unexpected` per tutti i file DLL o EXE collegati in modo dinamico. Anche se si chiama `set_unexpected`, è possibile che il gestore sia sostituito da un altro o che si stia sostituendo un gestore impostato da un altro file DLL o EXE.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`set_unexpected`|\<eh.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [_get_unexpected](../../c-runtime-library/reference/get-unexpected.md)   
 [set_terminate](../../c-runtime-library/reference/set-terminate-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)
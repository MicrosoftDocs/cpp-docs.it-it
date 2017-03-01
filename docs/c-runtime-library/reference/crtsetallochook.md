---
title: _CrtSetAllocHook | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _CrtSetAllocHook
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
- _CrtSetAllocHook
- CrtSetAllocHook
dev_langs:
- C++
helpviewer_keywords:
- _CrtSetAllocHook function
- CrtSetAllocHook function
ms.assetid: 405df37b-2fd1-42c8-83bc-90887f17f29d
caps.latest.revision: 15
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
translationtype: Machine Translation
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: 00e878414b2aaa71a8cbfc78997e934225f4e6fc
ms.lasthandoff: 02/24/2017

---
# <a name="crtsetallochook"></a>_CrtSetAllocHook
Installa una funzione di allocazione definita dal client collegandola al processo di allocazione della memoria di debug del runtime del linguaggio C (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
_CRT_ALLOC_HOOK _CrtSetAllocHook(  
   _CRT_ALLOC_HOOK allocHook   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `allocHook`  
 Nuova funzione di allocazione definita dal client da collegare al processo di allocazione della memoria di debug del runtime del linguaggio C.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce la funzione hook di allocazione definita in precedenza o `NULL` se `allocHook` è `NULL`.  
  
## <a name="remarks"></a>Note  
 `_CrtSetAllocHook` consente a un'applicazione di collegare la propria funzione di allocazione al processo di allocazione della memoria della libreria di debug del runtime del linguaggio C. Di conseguenza, ogni chiamata a una funzione di allocazione di debug per allocare, riallocare o liberare un blocco di memoria attiva una chiamata alla funzione hook dell'applicazione. `_CrtSetAllocHook` fornisce un'applicazione con un metodo semplice per testare come l'applicazione gestisce situazioni di memoria insufficiente, la possibilità di esaminare schemi di allocazione e la possibilità di registrare le informazioni di allocazione per analisi successive. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetAllocHook` vengono rimosse durante la pre-elaborazione.  
  
 La funzione `_CrtSetAllocHook` installa la nuova funzione di allocazione definita dal client specificata in `allocHook` e restituisce la funzione hook definita in precedenza. Nell'esempio seguente viene illustrato come dovrebbe essere il prototipo di una funzione hook di allocazione definita dal client:  
  
```  
int YourAllocHook( int allocType, void *userData, size_t size, int   
blockType, long requestNumber, const unsigned char *filename, int   
lineNumber);  
```  
  
 L'argomento `allocType` specifica il tipo di operazione di allocazione `(_HOOK_ALLOC`, `_HOOK_REALLOC` e `_HOOK_FREE`) che ha attivato la chiamata alla funzione hook di allocazione. Quando il tipo di allocazione di attivazione è `_HOOK_FREE`, `userData` è un puntatore alla sezione di dati utente del blocco di memoria che verrà liberato. Tuttavia, quando il tipo di allocazione di attivazione è `_HOOK_ALLOC` o `_HOOK_REALLOC`, `userData` è `NULL` perché il blocco di memoria non è ancora stato allocato.  
  
 `size` specifica le dimensioni del blocco di memoria in byte, `blockType` indica il tipo di blocco di memoria, `requestNumber` è il numero di ordine dell'allocazione di oggetto del blocco di memoria e, se disponibile, `filename` e `lineNumber` specificano il nome del file di origine e il numero di riga in cui l'operazione di allocazione di attivazione è stata avviata.  
  
 Dopo che la funzione hook ha terminato l'elaborazione, deve restituire un valore booleano che indica al processo di allocazione principale di runtime del linguaggio C come procedere. Quando la funzione hook richiede che il processo di allocazione principale continui come se la funzione hook non fosse mai stata chiamata, quest'ultima deve restituire `TRUE`. In questo modo deve essere eseguita l'operazione originale di allocazione di attivazione. Mediante questa implementazione, la funzione hook può raggruppare e salvare le informazioni di allocazione per analisi successive, senza interferire con l'operazione di allocazione o lo stato corrente dell'heap di debug.  
  
 Quando la funzione hook richiede che il processo di allocazione principale continui come se l'operazione di allocazione di attivazione sia stata chiamata e avesse avuto esito negativo, la funzione hook deve restituire `FALSE`. Mediante questa implementazione, la funzione hook può simulare un'ampia gamma di condizioni della memoria e di stati dell'heap di debug per testare come l'applicazione gestisce ogni situazione.  
  
 Per annullare la funzione hook, passare `NULL` a `_CrtSetAllocHook`.  
  
 Per informazioni su come `_CrtSetAllocHook` possa essere usato con altre funzioni di gestione della memoria o sulla scrittura delle funzioni di hook definite dal client, vedere [Debug Hook Function Writing](/visualstudio/debugger/debug-hook-function-writing) (Scrittura di funzioni di hook di debug).  
  
> [!NOTE]
>  `_CrtSetAllocHook` non è supportato sotto `/clr:pure`. Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtSetAllocHook`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Per un esempio di come usare `_CrtSetAllocHook`, vedere [crt_dbg2](http://msdn.microsoft.com/en-us/21e1346a-6a17-4f57-b275-c76813089167).  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [_CrtGetAllocHook](../../c-runtime-library/reference/crtgetallochook.md)

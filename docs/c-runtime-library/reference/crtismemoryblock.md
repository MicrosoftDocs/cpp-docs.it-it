---
title: _CrtIsMemoryBlock | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _CrtIsMemoryBlock
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
- CrtlsMemoryBlock
- _CrtIsMemoryBlock
dev_langs:
- C++
helpviewer_keywords:
- _CrtIsMemoryBlock function
- CrtIsMemoryBlock function
ms.assetid: f7cbbc60-3690-4da0-a07b-68fd7f250273
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 58faccd95e831dd264910abf063529db12701bf6
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="crtismemoryblock"></a>_CrtIsMemoryBlock
Verifica che un blocco di memoria specificato sia nell'heap locale e che abbia un identificatore di tipo blocco dell'heap di debug valido (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _CrtIsMemoryBlock(   
   const void *userData,  
   unsigned int size,  
   long *requestNumber,  
   char **filename,  
   int *linenumber   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `userData`  
 Puntatore all'inizio di un blocco di memoria da verificare.  
  
 [in] `size`  
 Dimensione in byte del blocco specificato.  
  
 [out] `requestNumber`  
 Puntatore al numero di allocazione del blocco o `NULL`.  
  
 [out] `filename`  
 Puntatore al nome del file di origine che ha richiesto il blocco o `NULL`.  
  
 [out] `linenumber`  
 Puntatore al numero di riga nel file di origine o `NULL`.  
  
## <a name="return-value"></a>Valore restituito  
 `_CrtIsMemoryBlock` restituisce `TRUE` se il blocco di memoria specificato si trova all'interno dell'heap locale e ha un identificatore di tipo blocco dell'heap per il debug valido; in caso contrario, la funzione restituisce `FALSE`.  
  
## <a name="remarks"></a>Note  
 La funzione `_CrtIsMemoryBlock` verifica che un blocco di memoria specificato sia incluso nell'heap locale dell'applicazione e che abbia un identificatore di tipo blocco valido. Questa funzione può essere usata anche per ottenere il numero di ordine di allocazione di oggetti e il numero di riga/nome file di origine in cui era stata richiesta l'allocazione del blocco di memoria. Il passaggio di valori non NULL per i parametri `requestNumber`, `filename` o `linenumber` fa in modo che `_CrtIsMemoryBlock` imposti questi parametri ai valori nell'intestazione di debug del blocco di memoria, se trova il blocco nell'heap locale. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtIsMemoryBlock` vengono rimosse durante la pre-elaborazione.  
  
 Se `_CrtIsMemoryBlock` ha esito negativo, restituisce `FALSE` e i parametri di output vengono inizializzati ai valori predefiniti: `requestNumber` e `lineNumber` vengono impostati su 0 e `filename` viene impostato su `NULL`.  
  
 Dato che la funzione restituisce `TRUE` o `FALSE`, può essere passata a una delle macro [_ASSERT](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug. Nel seguente esempio si verifica un errore di asserzione se l'indirizzo specificato non si trova all'interno dell'heap locale.  
  
```  
_ASSERTE( _CrtIsMemoryBlock( userData, size, &requestNumber,   
&filename, &linenumber ) );  
```  
  
 Per informazioni su come usare `_CrtIsMemoryBlock` con altre funzioni di debug e macro, vedere [Macros for Reporting](/visualstudio/debugger/macros-for-reporting) (Macro per la creazione di report). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtIsMemoryBlock`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per l'argomento [_CrtIsValidHeapPointer](../../c-runtime-library/reference/crtisvalidheappointer.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)
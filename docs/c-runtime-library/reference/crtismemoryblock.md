---
title: _CrtIsMemoryBlock | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 45331186cca5aab3c7971ba404d7b6da98139130
ms.sourcegitcommit: 6e3cf8df676d59119ce88bf5321d063cf479108c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/22/2018
ms.locfileid: "34450732"
---
# <a name="crtismemoryblock"></a>_CrtIsMemoryBlock

Verifica che un blocco di memoria specificato sia nell'heap locale e che abbia un identificatore di tipo blocco dell'heap di debug valido (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
int _CrtIsMemoryBlock(
   const void *userData,
   unsigned int size,
   long *requestNumber,
   char **filename,
   int *linenumber
);
```

### <a name="parameters"></a>Parametri

*Dati utente*<br/>
Puntatore all'inizio di un blocco di memoria da verificare.

*size*<br/>
Dimensione in byte del blocco specificato.

*requestNumber*<br/>
Puntatore al numero di allocazione del blocco o **NULL**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto il blocco o **NULL**.

*linenumber*<br/>
Puntatore al numero di riga nel file di origine o **NULL**.

## <a name="return-value"></a>Valore restituito

**CrtIsMemoryBlock** restituisce **TRUE** se il blocco di memoria specificato si trova all'interno dell'heap locale e dispone di un identificatore di tipo blocco heap di debug valido; in caso contrario, la funzione restituisce **FALSE**.

## <a name="remarks"></a>Note

Il **CrtIsMemoryBlock** funzione verifica che un blocco di memoria specificato si trova all'interno nell'heap locale dell'applicazione e che disponga di un identificatore di tipo blocco valido. Questa funzione può essere usata anche per ottenere il numero di ordine di allocazione di oggetti e il numero di riga/nome file di origine in cui era stata richiesta l'allocazione del blocco di memoria. Passando non -**NULL** i valori per il *requestNumber*, *filename*, oppure *linenumber* vengono illustrate le cause di parametri **_ CrtIsMemoryBlock** per impostare questi parametri per i valori nell'intestazione di debug del blocco di memoria, se il rilevamento del blocco nell'heap locale. Quando si [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtIsMemoryBlock** vengono rimosse durante la pre-elaborazione.

Se **CrtIsMemoryBlock** ha esito negativo, viene restituito **FALSE** e i parametri di output vengono inizializzati i valori predefiniti: *requestNumber* e **lineNumber**  vengono impostati su 0 e *filename* è impostata su **NULL**.

Dato che la funzione restituisce **TRUE** o **FALSE**, può essere passata a una delle macro [_ASSERT](assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug. Nel seguente esempio si verifica un errore di asserzione se l'indirizzo specificato non si trova all'interno dell'heap locale.

```C
_ASSERTE( _CrtIsMemoryBlock( userData, size, &requestNumber,
          &filename, &linenumber ) );
```

Per ulteriori informazioni sul **CrtIsMemoryBlock** può essere utilizzato con altre funzioni di debug e macro, vedere [macro per la creazione di report](/visualstudio/debugger/macros-for-reporting). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtIsMemoryBlock**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Vedere l'esempio per l'argomento [_CrtIsValidHeapPointer](crtisvalidheappointer.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>

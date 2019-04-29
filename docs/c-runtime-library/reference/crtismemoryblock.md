---
title: _CrtIsMemoryBlock
ms.date: 11/04/2016
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
helpviewer_keywords:
- _CrtIsMemoryBlock function
- CrtIsMemoryBlock function
ms.assetid: f7cbbc60-3690-4da0-a07b-68fd7f250273
ms.openlocfilehash: c4a85ebeb45552c6f5355853de2a45766d6bc984
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62339897"
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

*userData*<br/>
Puntatore all'inizio di un blocco di memoria da verificare.

*size*<br/>
Dimensione in byte del blocco specificato.

*requestNumber*<br/>
Puntatore al numero di allocazione del blocco o **NULL**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto il blocco oppure **NULL**.

*linenumber*<br/>
Puntatore al numero di riga nel file di origine oppure **NULL**.

## <a name="return-value"></a>Valore restituito

**CrtIsMemoryBlock** restituisce **TRUE** se il blocco di memoria specificato si trova all'interno dell'heap locale e ha un identificatore di tipo blocco dell'heap di debug valido; in caso contrario, la funzione restituisce **FALSE**.

## <a name="remarks"></a>Note

Il **CrtIsMemoryBlock** funzione verifica che un blocco di memoria specificato si trova all'interno dell'heap locale dell'applicazione e che abbia un identificatore di tipo blocco valido. Questa funzione può essere usata anche per ottenere il numero di ordine di allocazione di oggetti e il numero di riga/nome file di origine in cui era stata richiesta l'allocazione del blocco di memoria. Il passaggio non -**NULL** i valori per il *requestNumber*, *filename*, o *linenumber* cause parametri **_ CrtIsMemoryBlock** per impostare questi parametri ai valori nell'intestazione di debug del blocco di memoria, se viene rilevato il blocco nell'heap locale. Quando [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtIsMemoryBlock** vengono rimosse durante la pre-elaborazione.

Se **CrtIsMemoryBlock** ha esito negativo, restituisce **FALSE** e i parametri di output vengono inizializzati sui valori predefiniti: *requestNumber* e **lineNumber**  vengono impostati su 0 e *filename* è impostata su **NULL**.

Dato che la funzione restituisce **TRUE** o **FALSE**, può essere passata a una delle macro [_ASSERT](assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug. Nel seguente esempio si verifica un errore di asserzione se l'indirizzo specificato non si trova all'interno dell'heap locale.

```C
_ASSERTE( _CrtIsMemoryBlock( userData, size, &requestNumber,
          &filename, &linenumber ) );
```

Per altre informazioni su come **CrtIsMemoryBlock** può essere utilizzato con altre funzioni di debug e macro, vedere [macro per la creazione di report](/visualstudio/debugger/macros-for-reporting). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

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

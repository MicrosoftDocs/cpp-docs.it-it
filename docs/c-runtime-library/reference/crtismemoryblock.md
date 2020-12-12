---
description: 'Altre informazioni su: _CrtIsMemoryBlock'
title: _CrtIsMemoryBlock
ms.date: 11/04/2016
api_name:
- _CrtIsMemoryBlock
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- CrtlsMemoryBlock
- _CrtIsMemoryBlock
helpviewer_keywords:
- _CrtIsMemoryBlock function
- CrtIsMemoryBlock function
ms.assetid: f7cbbc60-3690-4da0-a07b-68fd7f250273
ms.openlocfilehash: 81a4b515461a45f566f95728180013408ccda43a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319716"
---
# <a name="_crtismemoryblock"></a>_CrtIsMemoryBlock

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
Puntatore al numero di allocazione del blocco o **null**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto il blocco o **null**.

*LineNumber*<br/>
Puntatore al numero di riga nel file di origine o **null**.

## <a name="return-value"></a>Valore restituito

**_CrtIsMemoryBlock** restituisce **true** se il blocco di memoria specificato si trova all'interno dell'heap locale ed è associato a un identificatore del tipo di blocco dell'heap di debug valido. in caso contrario, la funzione restituisce **false**.

## <a name="remarks"></a>Commenti

La funzione **_CrtIsMemoryBlock** verifica che un blocco di memoria specificato si trovi all'interno dell'heap locale dell'applicazione e che disponga di un identificatore di tipo di blocco valido. Questa funzione può essere usata anche per ottenere il numero di ordine di allocazione di oggetti e il numero di riga/nome file di origine in cui era stata richiesta l'allocazione del blocco di memoria. Il passaggio di valori non **null** per i parametri *requestNumber*, *filename* o *lineNumber* causa **_CrtIsMemoryBlock** di impostare questi parametri sui valori nell'intestazione di debug del blocco di memoria, se trova il blocco nell'heap locale. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtIsMemoryBlock** vengono rimosse durante la pre-elaborazione.

Se **_CrtIsMemoryBlock** ha esito negativo, restituisce **false** e i parametri di output vengono inizializzati sui valori predefiniti: *requestNumber* e **lineNumber** sono impostati su 0 e *filename* è impostato su **null**.

Poiché questa funzione restituisce **true** o **false**, può essere passata a una delle macro [_ASSERT](assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug. Nel seguente esempio si verifica un errore di asserzione se l'indirizzo specificato non si trova all'interno dell'heap locale.

```C
_ASSERTE( _CrtIsMemoryBlock( userData, size, &requestNumber,
          &filename, &linenumber ) );
```

Per ulteriori informazioni sull'utilizzo di **_CrtIsMemoryBlock** con altre funzioni di debug e macro, vedere [macro per la creazione di report](/visualstudio/debugger/macros-for-reporting). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtIsMemoryBlock**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Vedere l'esempio per l'argomento [_CrtIsValidHeapPointer](crtisvalidheappointer.md).

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>

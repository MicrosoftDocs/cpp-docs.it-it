---
title: _CrtMemDifference
description: 'Altre informazioni su: _CrtMemDifference'
ms.date: 3/8/2021
api_name:
- _CrtMemDifference
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
- _CrtMemDifference
- CrtMemDifference
helpviewer_keywords:
- CrtMemDifference function
- _CrtMemDifference function
ms.openlocfilehash: 9a6a213df867f98bfb921abd940ba23297c5ffef
ms.sourcegitcommit: 90c300b74f6556cb5d989802d2e80d79542f55e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/09/2021
ms.locfileid: "102514603"
---
# `_CrtMemDifference`

Confronta due stati della memoria e restituisce le differenze (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
int _CrtMemDifference(
   _CrtMemState *stateDiff,
   const _CrtMemState *oldState,
   const _CrtMemState *newState
);
```

### <a name="parameters"></a>Parametri

*`stateDiff`*\
Puntatore a una **`_CrtMemState`** struttura utilizzata per archiviare le differenze tra i due Stati della memoria (restituiti).

*`oldState`*\
Puntatore a uno stato precedente della memoria ( **`_CrtMemState`** struttura).

*`newState`*\
Puntatore a uno stato successivo della memoria ( **`_CrtMemState`** struttura).

## <a name="return-value"></a>Valore restituito

Se gli Stati della memoria sono significativamente diversi, **`_CrtMemDifference`** restituisce `TRUE` . In caso contrario, la funzione restituisce FALSE.

## <a name="remarks"></a>Commenti

La **`_CrtMemDifference`** funzione Confronta *`oldState`* e *`newState`* e archivia le differenze in *`stateDiff`* , che possono quindi essere usate dall'app per rilevare le perdite di memoria e altri problemi di memoria. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a **`_CrtMemDifference`** vengono rimosse durante la pre-elaborazione.

*`newState`* e *`oldState`* devono essere entrambi un puntatore valido a una **`_CrtMemState`** struttura, definita in CRTDBG. h, che è stata compilata da [`_CrtMemCheckpoint`](crtmemcheckpoint.md) prima di chiamare **`_CrtMemDifference`** . *`stateDiff`* deve essere un puntatore a un'istanza precedentemente allocata della **`_CrtMemState`** struttura. Se *`stateDiff`* , *`newState`* o *`oldState`* è **`NULL`** , viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, [`errno, _doserrno, _sys_errlist, and _sys_nerr`](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) viene impostato su **`EINVAL`** e la funzione restituisce false.

**`_CrtMemDifference`** Confronta i **`_CrtMemState`** valori dei campi dei blocchi in *`oldState`* con quelli in *`newState`* e archivia il risultato in *`stateDiff`* . Quando il numero di tipi di blocco allocati o il numero totale di blocchi allocati per ogni tipo è diverso tra i due stati della memoria, gli stati vengono definiti diversi in modo significativo. La differenza tra la più grande quantità allocata contemporaneamente per i due Stati e la differenza tra le allocazioni totali per i due stati vengono archiviate anche in *`stateDiff`* .

Per impostazione predefinita, i blocchi di runtime del linguaggio C interni ( **`_CRT_BLOCK`** ) non sono inclusi nelle operazioni sullo stato della memoria. La funzione [_CrtSetDbgFlag](crtsetdbgflag.md) può essere usata per attivare il **`_CRTDBG_CHECK_CRT_DF`** bit di **`_crtDbgFlag`** per includere questi blocchi nel rilevamento delle perdite e altre operazioni sullo stato della memoria. I blocchi di memoria liberati ( **`_FREE_BLOCK`** ) non possono **`_CrtMemDifference`** restituire `TRUE` .

Per ulteriori informazioni sulle funzioni dello stato dell'heap e sulla **`_CrtMemState`** struttura, vedere funzioni per la [creazione di report sullo stato dell'heap](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**`_CrtMemDifference`**|`<crtdbg.h>`|`<errno.h>`|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

**Librerie:** Solo versioni di debug delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md) .

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)\
[`_crtDbgFlag`](../../c-runtime-library/crtdbgflag.md)\

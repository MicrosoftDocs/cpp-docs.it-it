---
title: _CrtMemDifference
ms.date: 11/04/2016
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
ms.assetid: 0f327278-b551-482f-958b-76941f796ba4
ms.openlocfilehash: 51bfa014d54f55843fcb112f318f143774abf8f3
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70938703"
---
# <a name="_crtmemdifference"></a>_CrtMemDifference

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

*stateDiff*<br/>
Puntatore a una struttura **_CrtMemState** utilizzata per archiviare le differenze tra i due Stati della memoria (restituiti).

*oldState*<br/>
Puntatore a uno stato precedente della memoria (struttura **_CrtMemState** ).

*newState*<br/>
Puntatore a uno stato successivo della memoria (struttura **_CrtMemState** ).

## <a name="return-value"></a>Valore restituito

Se gli Stati della memoria sono significativamente diversi, **_CrtMemDifference** restituisce true. In caso contrario, la funzione restituisce FALSE.

## <a name="remarks"></a>Note

La funzione **_CrtMemDifference** confronta *stato precedente* e *NewState* e archivia le differenze in *stateDiff*, che può quindi essere usato dall'applicazione per rilevare le perdite di memoria e altri problemi di memoria. Quando _ [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtMemDifference** vengono rimosse durante la pre-elaborazione.

*NewState* e *stato precedente* devono essere entrambi un puntatore valido a una struttura **_CrtMemState** , definita in CRTDBG. h, che è stata compilata da [CrtMemCheckpoint](crtmemcheckpoint.md) prima di chiamare **_CrtMemDifference**. *stateDiff* deve essere un puntatore a un'istanza precedentemente allocata della struttura **_CrtMemState** . Se *stateDiff*, *NewState*o *stato precedente* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, [errno, doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) viene impostato su **EINVAL** e la funzione restituisce false.

**_CrtMemDifference** Confronta i valori dei campi **_CrtMemState** dei blocchi in *stato precedente* con quelli in *NewState* e archivia il risultato in *stateDiff*. Quando il numero di tipi di blocco allocati o il numero totale di blocchi allocati per ogni tipo è diverso tra i due stati della memoria, gli stati vengono definiti diversi in modo significativo. La differenza tra la più grande quantità allocata contemporaneamente per i due Stati e la differenza tra le allocazioni totali per i due stati vengono archiviate anche in *stateDiff*.

Per impostazione predefinita, i blocchi di runtime del linguaggio C interni ( **_CRT_BLOCK**) non sono inclusi nelle operazioni sullo stato della memoria. La funzione [_CrtSetDbgFlag](crtsetdbgflag.md) può essere usata per attivare il bit **_CRTDBG_CHECK_CRT_DF** di **crtDbgFlag** per includere questi blocchi nel rilevamento delle perdite e altre operazioni sullo stato della memoria. I blocchi di memoria liberati ( **_FREE_BLOCK**) non provocano la restituzione del valore true di **_CrtMemDifference** .

Per ulteriori informazioni sulle funzioni dello stato dell'heap e sulla struttura **_CrtMemState** , vedere [funzioni di creazione di report sullo stato dell'heap](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_CrtMemDifference**|\<crtdbg.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie** Solo versioni di debug delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md) .

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)<br/>

---
title: _CrtMemDifference
ms.date: 11/04/2016
apiname:
- _CrtMemDifference
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
- _CrtMemDifference
- CrtMemDifference
helpviewer_keywords:
- CrtMemDifference function
- _CrtMemDifference function
ms.assetid: 0f327278-b551-482f-958b-76941f796ba4
ms.openlocfilehash: f2c6306bf604737d0ace142674b21845a08e2dee
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50429653"
---
# <a name="crtmemdifference"></a>_CrtMemDifference

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
Puntatore a un **CrtMemState** struttura utilizzata per archiviare le differenze tra due stati della memoria (restituiti).

*stato precedente*<br/>
Puntatore a uno stato di memoria precedente (**CrtMemState** struttura).

*newState*<br/>
Puntatore a un stato successivo della memoria (**CrtMemState** struttura).

## <a name="return-value"></a>Valore restituito

Se gli stati della memoria sono considerevolmente diverse **CrtMemDifference** restituisce TRUE. In caso contrario, la funzione restituisce FALSE.

## <a name="remarks"></a>Note

Il **CrtMemDifference** funzione Confronta *stato precedente* e *newState* e archivia le differenze nella *stateDiff*, che può quindi utilizzabile dall'applicazione per rilevare perdite di memoria e altri problemi di memoria. Quando [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtMemDifference** vengono rimosse durante la pre-elaborazione.

*newState* e *stato precedente* devono essere ognuno un puntatore valido a un **CrtMemState** struttura, definita in CRTDBG. h, che è stato compilato da [CrtMemCheckpoint](crtmemcheckpoint.md)prima di chiamare **CrtMemDifference**. *stateDiff* deve essere un puntatore a un'istanza precedentemente allocata della **CrtMemState** struttura. Se *stateDiff*, *newState*, o *stato precedente* è **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) è impostata su **EINVAL** e la funzione restituisce FALSE.

**CrtMemDifference** confronta il **CrtMemState** dei blocchi in valori del campo *stato precedente* le *newState* e archivia il risultato in *stateDiff*. Quando il numero di tipi di blocco allocati o il numero totale di blocchi allocati per ogni tipo è diverso tra i due stati della memoria, gli stati vengono definiti diversi in modo significativo. La differenza tra la maggiore quantità allocata contemporaneamente per i due stati e la differenza tra le allocazioni totali per i due stati vengono archiviati anche in *stateDiff*.

Per impostazione predefinita, i blocchi di runtime C interni (**CRT_BLOCK**) non sono inclusi nelle operazioni dello stato della memoria. Il [CrtSetDbgFlag](crtsetdbgflag.md) funzione può essere utilizzata per attivare il **_CRTDBG_CHECK_CRT_DF** di tipo bit **crtDbgFlag** per includere questi blocchi nel rilevamento perdite e altro stato memoria operazioni. Blocchi di memoria liberata (**FREE_BLOCK**) non causano **CrtMemDifference** per restituire TRUE.

Per altre informazioni sulle funzioni dello stato dell'heap e la **CrtMemState** struttura, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_CrtMemDifference**|\<crtdbg.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie:** solo le versioni di debug delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)<br/>

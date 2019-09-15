---
title: _CrtMemDumpAllObjectsSince
ms.date: 11/04/2016
api_name:
- _CrtMemDumpAllObjectsSince
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
- CrtMemDumpAllObjectsSince
- _CrtMemDumpAllObjectsSince
helpviewer_keywords:
- _CrtMemDumpAllObjectsSince function
- CrtMemDumpAllObjectsSince function
ms.assetid: c48a447a-e6bb-475c-9271-a3021182a0dc
ms.openlocfilehash: 9e3793e9b88c593968b108e2801e24476417603c
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70942377"
---
# <a name="_crtmemdumpallobjectssince"></a>_CrtMemDumpAllObjectsSince

Esegue il dump delle informazioni sugli oggetti nell'heap dall'inizio dell'esecuzione del programma o da uno stato di heap specificato (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void _CrtMemDumpAllObjectsSince(
   const _CrtMemState *state
);
```

### <a name="parameters"></a>Parametri

*state*<br/>
Puntatore allo stato dell'heap da cui iniziare il dump o **NULL**.

## <a name="remarks"></a>Note

La funzione **_CrtMemDumpAllObjectsSince** esegue il dump delle informazioni di intestazione di debug degli oggetti allocati nell'heap in un form leggibile dall'utente. Le informazioni di dump possono essere usate dall'applicazione per tenere traccia delle allocazioni e per rilevare problemi di memoria. Quando _ [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtMemDumpAllObjectsSince** vengono rimosse durante la pre-elaborazione.

**_CrtMemDumpAllObjectsSince** usa il valore del parametro *state* per determinare la posizione in cui avviare l'operazione di dump. Per avviare il dump da uno stato di heap specificato, il parametro *state* deve essere un puntatore a una struttura **_CrtMemState** che è stata compilata da [CrtMemCheckpoint](crtmemcheckpoint.md) prima della chiamata a **_CrtMemDumpAllObjectsSince** . Quando *lo stato* è **null**, la funzione avvia il dump dall'inizio dell'esecuzione del programma.

Se l'applicazione ha installato una funzione di hook di dump chiamando [_CrtSetDumpClient](crtsetdumpclient.md), ogni volta che **_CrtMemDumpAllObjectsSince** esegue il dump delle informazioni su un tipo **_CLIENT_BLOCK** di blocco, chiama il dump fornito dall'applicazione anche la funzione. Per impostazione predefinita, i blocchi di runtime del linguaggio C interni ( **_CRT_BLOCK**) non sono inclusi nelle operazioni di dump della memoria. La funzione [_CrtSetDbgFlag](crtsetdbgflag.md) può essere usata per attivare il bit **_CRTDBG_CHECK_CRT_DF** di **crtDbgFlag** per includere questi blocchi. I blocchi contrassegnati come liberati o ignorati (**FREE_BLOCK**, **IGNORE_BLOCK**) non sono inclusi nel dump della memoria.

Per ulteriori informazioni sulle funzioni dello stato dell'heap e sulla struttura **_CrtMemState** , vedere [funzioni di creazione di report sullo stato dell'heap](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtMemDumpAll-ObjectsSince**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Per un esempio di come usare **_CrtMemDumpAllObjectsSince**, vedere [crt_dbg2](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg2).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)<br/>

---
description: 'Altre informazioni su: _CrtDumpMemoryLeaks'
title: _CrtDumpMemoryLeaks
ms.date: 11/04/2016
api_name:
- _CrtDumpMemoryLeaks
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
- CRTDBG_LEAK_CHECK_DF
- CRTDBG_CHECK_CRT_DF
- _CRTDBG_LEAK_CHECK_DF
- CrtDumpMemoryLeaks
- _CrtDumpMemoryLeaks
- _CRTDBG_CHECK_CRT_DF
helpviewer_keywords:
- CrtDumpMemoryLeaks function
- CRTDBG_LEAK_CHECK_DF macro
- _CRTDBG_LEAK_CHECK_DF macro
- _CrtDumpMemoryLeaks function
- CRTDBG_CHECK_CRT_DF macro
- _CRTDBG_CHECK_CRT_DF macro
ms.assetid: 71b2eab4-7f55-44e8-a55a-bfea4f32d34c
ms.openlocfilehash: 83b3effdc4f3e8afdad24057ab55123aee924d60
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319778"
---
# <a name="_crtdumpmemoryleaks"></a>_CrtDumpMemoryLeaks

Esegue il dump di tutti i blocchi di memoria nell'heap del debug quando si verifica una perdita di memoria (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C

int _CrtDumpMemoryLeaks( void );
```

## <a name="return-value"></a>Valore restituito

**_CrtDumpMemoryLeaks** restituisce true se viene rilevata una perdita di memoria. In caso contrario, la funzione restituisce FALSE.

## <a name="remarks"></a>Commenti

La funzione **_CrtDumpMemoryLeaks** determina se si è verificata una perdita di memoria dall'inizio dell'esecuzione del programma. Quando viene rilevata una perdita di memoria, viene eseguito il dump delle informazioni di intestazione del debug per tutti gli oggetti dell'heap in un formato leggibile dall'utente. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtDumpMemoryLeaks** vengono rimosse durante la pre-elaborazione.

**_CrtDumpMemoryLeaks** viene spesso chiamata al termine dell'esecuzione del programma per verificare che tutta la memoria allocata dall'applicazione sia stata liberata. La funzione può essere chiamata automaticamente alla chiusura del programma attivando il campo **_CRTDBG_LEAK_CHECK_DF** bit del flag [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) utilizzando la funzione [_CrtSetDbgFlag](crtsetdbgflag.md) .

**_CrtDumpMemoryLeaks** chiama [_CrtMemCheckpoint](crtmemcheckpoint.md) per ottenere lo stato corrente dell'heap e quindi analizza lo stato dei blocchi che non sono stati liberati. Quando viene rilevato un blocco non liberato, **_CrtDumpMemoryLeaks** chiama [_CrtMemDumpAllObjectsSince](crtmemdumpallobjectssince.md) per eseguire il dump delle informazioni per tutti gli oggetti allocati nell'heap dall'inizio dell'esecuzione del programma.

Per impostazione predefinita, i blocchi di runtime del linguaggio C interni (**_CRT_BLOCK**) non sono inclusi nelle operazioni di dump della memoria. La funzione [_CrtSetDbgFlag](crtsetdbgflag.md) può essere usata per attivare il **_CRTDBG_CHECK_CRT_DF** bit di **_crtDbgFlag** per includere questi blocchi nel processo di rilevamento delle perdite.

Per ulteriori informazioni sulle funzioni dello stato dell'heap e sulla struttura **_CrtMemState** , vedere [funzioni di creazione di report sullo stato dell'heap](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtDumpMemoryLeaks**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Per un esempio di come usare **_CrtDumpMemoryLeaks**, vedere [crt_dbg1](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg1).

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>

---
title: _CrtDumpMemoryLeaks | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _CrtDumpMemoryLeaks
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
- CRTDBG_LEAK_CHECK_DF
- CRTDBG_CHECK_CRT_DF
- _CRTDBG_LEAK_CHECK_DF
- CrtDumpMemoryLeaks
- _CrtDumpMemoryLeaks
- _CRTDBG_CHECK_CRT_DF
dev_langs:
- C++
helpviewer_keywords:
- CrtDumpMemoryLeaks function
- CRTDBG_LEAK_CHECK_DF macro
- _CRTDBG_LEAK_CHECK_DF macro
- _CrtDumpMemoryLeaks function
- CRTDBG_CHECK_CRT_DF macro
- _CRTDBG_CHECK_CRT_DF macro
ms.assetid: 71b2eab4-7f55-44e8-a55a-bfea4f32d34c
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fb0ebfe1017f6315d60528c5f6196131704c5d0f
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="crtdumpmemoryleaks"></a>_CrtDumpMemoryLeaks

Esegue il dump di tutti i blocchi di memoria nell'heap del debug quando si verifica una perdita di memoria (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C

int _CrtDumpMemoryLeaks( void );
```

## <a name="return-value"></a>Valore restituito

**CrtDumpMemoryLeaks** restituisce TRUE se viene trovata una perdita di memoria. In caso contrario, la funzione restituisce FALSE.

## <a name="remarks"></a>Note

Il **CrtDumpMemoryLeaks** funzione determina se si è verificato un problema di memoria dopo l'avvio dell'esecuzione del programma. Quando viene rilevata una perdita di memoria, viene eseguito il dump delle informazioni di intestazione del debug per tutti gli oggetti dell'heap in un formato leggibile dall'utente. Quando si [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtDumpMemoryLeaks** vengono rimosse durante la pre-elaborazione.

**CrtDumpMemoryLeaks** viene spesso chiamato alla fine dell'esecuzione del programma per verificare che è stata liberata tutta la memoria allocata dall'applicazione. La funzione può essere chiamata automaticamente alla chiusura del programma attivando il **CRTDBG_LEAK_CHECK_DF** campo di bit del [crtDbgFlag](../../c-runtime-library/crtdbgflag.md) flag utilizzando il [CrtSetDbgFlag](crtsetdbgflag.md)(funzione).

**CrtDumpMemoryLeaks** chiamate [CrtMemCheckpoint](crtmemcheckpoint.md) per ottenere lo stato corrente dell'heap e quindi analizza lo stato per i blocchi che non sono stati liberati. Quando viene incontrato un blocco non liberato, **CrtDumpMemoryLeaks** chiamate [CrtMemDumpAllObjectsSince](crtmemdumpallobjectssince.md) alle informazioni di dump per tutti gli oggetti allocati nell'heap dall'inizio dell'esecuzione del programma.

Per impostazione predefinita, i blocchi di runtime C interni (**CRT_BLOCK**) non sono inclusi nelle operazioni di dump di memoria. Il [CrtSetDbgFlag](crtsetdbgflag.md) funzione può essere utilizzata per attivare il **crtdbg_check_crt_df** bit di **crtDbgFlag** per includere questi blocchi nel processo di rilevamento delle perdite.

Per ulteriori informazioni sulle funzioni dello stato dell'heap e il **CrtMemState** struttura, vedere [funzioni segnalazione dello stato dell'Heap](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtDumpMemoryLeaks**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Per un esempio di utilizzo **CrtDumpMemoryLeaks**, vedere [crt_dbg1](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg1).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>

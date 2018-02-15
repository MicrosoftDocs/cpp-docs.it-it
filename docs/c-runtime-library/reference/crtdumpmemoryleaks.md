---
title: _CrtDumpMemoryLeaks | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8f71e37da509d4e8dd05c5a41afa9fe539294347
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="crtdumpmemoryleaks"></a>_CrtDumpMemoryLeaks
Esegue il dump di tutti i blocchi di memoria nell'heap del debug quando si verifica una perdita di memoria (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
int _CrtDumpMemoryLeaks( void );  
```  
  
## <a name="return-value"></a>Valore restituito  
 `_CrtDumpMemoryLeaks` restituisce TRUE se viene identificata una perdita di memoria. In caso contrario, la funzione restituisce FALSE.  
  
## <a name="remarks"></a>Note  
 La funzione `_CrtDumpMemoryLeaks` determina se si è verificata una perdita di memoria dall'avvio dell'esecuzione del programma. Quando viene rilevata una perdita di memoria, viene eseguito il dump delle informazioni di intestazione del debug per tutti gli oggetti dell'heap in un formato leggibile dall'utente. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtDumpMemoryLeaks` vengono rimosse durante la pre-elaborazione.  
  
 `_CrtDumpMemoryLeaks` viene spesso chiamato alla fine dell'esecuzione del programma per verificare che è stata liberata tutta la memoria allocata dall'applicazione. La funzione può essere chiamata automaticamente alla chiusura del programma attivando il campo di bit `_CRTDBG_LEAK_CHECK_DF` del flag [crtDbgFlag](../../c-runtime-library/crtdbgflag.md) flag tramite la funzione [_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md).  
  
 `_CrtDumpMemoryLeaks` chiama [_CrtMemCheckpoint](../../c-runtime-library/reference/crtmemcheckpoint.md) per ottenere lo stato corrente dell'heap e quindi analizza lo stato dei blocchi che non sono stati liberati. Quando viene rilevato un blocco non liberato, `_CrtDumpMemoryLeaks` chiama [_CrtMemDumpAllObjectsSince](../../c-runtime-library/reference/crtmemdumpallobjectssince.md) per eseguire il dump delle informazioni per tutti gli oggetti allocati nell'heap dall'inizio dell'esecuzione del programma.  
  
 Per impostazione predefinita, i blocchi di runtime di C interni (`_CRT_BLOCK`) non sono inclusi nelle operazioni di dump della memoria. La funzione [_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md) può essere usata per attivare il bit `_CRTDBG_CHECK_CRT_DF` di `_crtDbgFlag` per includere questi blocchi nel processo di rilevamento perdite.  
  
 Per altre informazioni sulle funzioni dello stato dell'heap e sulla struttura `_CrtMemState` , vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtDumpMemoryLeaks`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Per un esempio su come usare `_CrtDumpMemoryLeaks`, vedere [crt_dbg1](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg1).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)
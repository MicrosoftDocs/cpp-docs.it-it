---
title: _CrtMemDumpAllObjectsSince | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _CrtMemDumpAllObjectsSince
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
- CrtMemDumpAllObjectsSince
- _CrtMemDumpAllObjectsSince
dev_langs:
- C++
helpviewer_keywords:
- _CrtMemDumpAllObjectsSince function
- CrtMemDumpAllObjectsSince function
ms.assetid: c48a447a-e6bb-475c-9271-a3021182a0dc
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 17a8f1cd518c0864006d836f551d99554d3cdf24
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="crtmemdumpallobjectssince"></a>_CrtMemDumpAllObjectsSince
Esegue il dump delle informazioni sugli oggetti nell'heap dall'inizio dell'esecuzione del programma o da uno stato di heap specificato (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      void _CrtMemDumpAllObjectsSince(   
   const _CrtMemState *state   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `state`  
 Puntatore allo stato dell'heap da cui iniziare il dump o **NULL**.  
  
## <a name="remarks"></a>Note  
 La funzione `_CrtMemDumpAllObjectsSince` esegue il dump delle informazioni di intestazione di debug degli oggetti allocati nell'heap in un formato leggibile dall'utente. Le informazioni di dump possono essere usate dall'applicazione per tenere traccia delle allocazioni e per rilevare problemi di memoria. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtMemDumpAllObjectsSince` vengono rimosse durante la pre-elaborazione.  
  
 `_CrtMemDumpAllObjectsSince` usa il valore del parametro `state` per determinare il punto in cui avviare l'operazione di dump. Per iniziare l'esecuzione di un dump da uno stato di heap specificato, il parametro `state` deve essere un puntatore a una struttura **_CrtMemState** che è stata riempita da [_CrtMemCheckpoint](../../c-runtime-library/reference/crtmemcheckpoint.md) prima di chiamare `_CrtMemDumpAllObjectsSince`. Quando `state` è **NULL**, la funzione inizia il dump dall'inizio dell'esecuzione del programma.  
  
 Se l'applicazione ha una funzione di hook di dump installata tramite [_CrtSetDumpClient](../../c-runtime-library/reference/crtsetdumpclient.md), ogni volta che `_CrtMemDumpAllObjectsSince` esegue il dump delle informazioni su un tipo `_CLIENT_BLOCK` del blocco, chiama anche la funzione di dump offerta dall'applicazione. Per impostazione predefinita, i blocchi di runtime di C interni (`_CRT_BLOCK`) non sono inclusi nelle operazioni di dump della memoria. La funzione [_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md) può essere usata per attivare il bit `_CRTDBG_CHECK_CRT_DF` di **_crtDbgFlag** per includere questi blocchi. I blocchi contrassegnati come liberati o ignorati (**FREE_BLOCK**, **IGNORE_BLOCK**) non sono inclusi nel dump della memoria.  
  
 Per altre informazioni sulle funzioni dello stato dell'heap e sulla struttura `_CrtMemState`, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details) (Funzioni per la creazione di report sullo stato dell'heap). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|**_CrtMemDumpAll-ObjectsSince**|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Per un esempio di come usare `_CrtMemDumpAllObjectsSince`, vedere [crt_dbg2](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg2).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)
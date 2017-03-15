---
title: _CrtMemDumpAllObjectsSince | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: e94e06d8a1c597b0b7353dee9ae9b2988e1e7b26
ms.lasthandoff: 02/24/2017

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
  
 Per altre informazioni sulle funzioni dello stato dell'heap e sulla struttura `_CrtMemState`, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details) (Funzioni per la creazione di report sullo stato dell'heap). Per altre informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|**_CrtMemDumpAll-ObjectsSince**|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Per un esempio di come usare `_CrtMemDumpAllObjectsSince`, vedere [crt_dbg2](http://msdn.microsoft.com/en-us/21e1346a-6a17-4f57-b275-c76813089167).  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)

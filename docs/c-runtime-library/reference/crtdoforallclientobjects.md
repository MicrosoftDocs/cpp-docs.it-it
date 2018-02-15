---
title: _CrtDoForAllClientObjects | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _CrtDoForAllClientObjects
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
- _CrtDoForAllClientObjects
- CrtDoForAllClientObjects
- crtdbg/_CrdDoForAllClientObjects
dev_langs:
- C++
helpviewer_keywords:
- _CrtDoForAllClientObjects function
- CrtDoForAllClientObjects function
ms.assetid: d0fdb835-3cdc-45f1-9a21-54208e8df248
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e1da4ada3286b863444bb567a4fad8cf693f9253
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="crtdoforallclientobjects"></a>_CrtDoForAllClientObjects
Chiama una funzione fornita dall'applicazione per tutti i tipi di `_CLIENT_BLOCK` nell'heap (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _CrtDoForAllClientObjects(   
   void ( * pfn )( void *, void * ),  
   void *context  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `pfn`  
 Puntatore alla funzione di callback della funzione fornita dall'applicazione. Il primo parametro a questa funzione punta ai dati. Il secondo parametro è il puntatore di contesto che viene passato alla chiamata a `_CrtDoForAllClientObjects`.  
  
 `context`  
 Puntatore al contesto fornito dall'applicazione da passare alla funzione fornita dall'applicazione.  
  
## <a name="remarks"></a>Note  
 La funzione `_CrtDoForAllClientObjects` cerca nell'elenco collegato dell'heap i blocchi di memoria con il tipo `_CLIENT_BLOCK` e chiama la funzione fornita dall'applicazione quando trova un blocco di questo tipo. Il blocco individuato e il parametro `context` vengono passati come argomenti alla funzione fornita dall'applicazione. Durante il debug, un'applicazione può tenere traccia di un gruppo specifico di allocazioni chiamando in modo esplicito le funzioni heap di debug per allocare memoria e specificando che i blocchi vengono associati al tipo di blocco `_CLIENT_BLOCK` . Questi blocchi possono quindi essere controllati separatamente ed essere segnalati in modo diverso durante la creazione dello stato della memoria e del rilevamento di perdite.  
  
 Se il campo di bit `_CRTDBG_ALLOC_MEM_DF` del flag [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) non è attivato, viene restituito immediatamente il risultato di `_CrtDoForAllClientObjects` . Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtDoForAllClientObjects` vengono rimosse durante la pre-elaborazione.  
  
 Per altre informazioni sul tipo `_CLIENT_BLOCK` e su come può essere usato da altre funzioni di debug, vedere [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).  
  
 Se `pfn` è `NULL`, verrà richiamato il gestore di parametri non valido, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) viene impostato su `EINVAL` e viene restituito il risultato della funzione.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtDoForAllClientObjects`|\<crtdbg.h>, \<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
 **Librerie** : Solo versioni di debug delle librerie di runtime C universali.  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [_CrtSetDbgFlag](../../c-runtime-library/reference/crtsetdbgflag.md)   
 [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details)  (Funzioni per la creazione di report sullo stato dell'heap)  
 [_CrtReportBlockType](../../c-runtime-library/reference/crtreportblocktype.md)
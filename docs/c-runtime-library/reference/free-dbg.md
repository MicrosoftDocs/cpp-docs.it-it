---
title: _free_dbg | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _free_dbg
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
- _free_dbg
- free_dbg
dev_langs:
- C++
helpviewer_keywords:
- memory blocks, deallocating
- freeing memory
- _free_dbg function
- free_dbg function
ms.assetid: fc5e8299-616d-48a0-b979-e037117278c6
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fa3df169a968313d2a29fbf9c08643748d3196d8
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="freedbg"></a>_free_dbg
Libera un blocco di memoria nell'heap (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _free_dbg(   
   void *userData,  
   int blockType   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `userData`  
 Puntatore al blocco di memoria precedentemente allocata da liberare.  
  
 `blockType`  
 Tipo di blocco di memoria allocata da liberare: `_CLIENT_BLOCK`, `_NORMAL_BLOCK` o `_IGNORE_BLOCK`.  
  
## <a name="remarks"></a>Note  
 La funzione `_free_dbg` è una versione di debug della funzione [free](../../c-runtime-library/reference/free.md). Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_free_dbg` viene ridotta a una chiamata a `free`. Sia `free` che `_free_dbg` liberano un blocco di memoria nell'heap di base, ma `_free_dbg` include due funzionalità di debug: la possibilità di mantenere i blocchi liberati nell'elenco collegato dell'heap per simulare una condizione di memoria insufficiente e un parametro del tipo di blocco per liberare specifici tipi di allocazione.  
  
 `_free_dbg` esegue un controllo di validità su tutti i percorsi di file e di blocchi specificati prima di eseguire prima di procedere a liberare i blocchi. Non è previsto che l'applicazione fornisca queste informazioni. Quando un blocco di memoria viene liberato, il gestore dell'heap di debug controlla automaticamente l'integrità dei buffer a ogni lato della porzione utente e genera un rapporto errori se si sono verificate sovrascritture. Se il campo di bit `_CRTDBG_DELAY_FREE_MEM_DF` del flag [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) è impostato, il blocco liberato viene riempito con il valore 0xDD, viene assegnato il tipo di blocco `_FREE_BLOCK` e il blocco viene mantenuto nell'elenco collegato di blocchi di memoria dell'heap.  
  
 Se si verifica un errore nel liberare la memoria, `errno` viene impostato con informazioni dal sistema operativo sulla natura dell'errore. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_free_dbg`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Per un esempio di come usare `_free_dbg`, vedere [crt_dbg2](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg2).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [_malloc_dbg](../../c-runtime-library/reference/malloc-dbg.md)
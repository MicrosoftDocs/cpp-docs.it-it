---
title: _freea | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _freea
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
- freea
- _freea
dev_langs:
- C++
helpviewer_keywords:
- _freea function
- freea function
- memory deallocation
ms.assetid: dcd30584-dd9d-443b-8c4c-13237a1cecac
caps.latest.revision: 18
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: bd53960a97cc6647008b683e354df664941428e9
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="freea"></a>_freea
Dealloca o libera un blocco di memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _freea(   
   void *memblock   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `memblock`  
 Blocco di memoria precedentemente allocata da liberare.  
  
## <a name="return-value"></a>Valore restituito  
 Nessuno.  
  
## <a name="remarks"></a>Note  
 La funzione `_freea` dealloca un blocco di memoria (`memblock`) precedentemente allocato da una chiamata a [_malloca](../../c-runtime-library/reference/malloca.md). `_freea` controlla se la memoria è stata allocata nell'heap o nello stack. Se è stata allocata nello stack, `_freea` non esegue alcuna operazione. Se è stata allocata nell'heap, il numero di byte liberati è equivalente al numero di byte richiesto quando il blocco è stato allocato. Se `memblock` è `NULL`, il puntatore viene ignorato e `_freea` terminerà immediatamente. Il tentativo di liberare un puntatore non valido (un puntatore a un blocco di memoria non allocato da `_malloca`) potrebbe influire sulle richieste di allocazione successive e causare errori.  
  
 `_freea`chiamate `free` internamente se rileva che la memoria viene allocata nell'heap. Se la memoria è nell'heap o lo stack è determinato da un indicatore posizionato nella memoria in corrispondenza dell'indirizzo che precede immediatamente la memoria allocata.  
  
 Se si verifica un errore nel liberare la memoria, `errno` viene impostato con informazioni dal sistema operativo sulla natura dell'errore. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Dopo che un blocco di memoria è stato liberato, [_heapmin](../../c-runtime-library/reference/heapmin.md) riduce la quantità di memoria libera nell'heap unendo le aree inutilizzate e rilasciandole nuovamente al sistema operativo. La memoria liberata che non viene rilasciata al sistema operativo viene ripristinata al pool libero ed è disponibile nuovamente per l'allocazione.  
  
 Una chiamata a `_freea` deve accompagnare tutte le chiamate a `_malloca`. È anche un errore chiamare `_freea` due volte sulla stessa memoria. Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, in particolare con le funzionalità [malloc_dbg](../../c-runtime-library/reference/malloc-dbg.md) abilitate definendo `_CRTDBG_MAP_ALLOC`, è più facile trovare chiamate mancanti o duplicate a `_freea`. Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).  
  
 `_freea` è contrassegnato `__declspec(noalias)`, pertanto si garantisce che la funzione non modifichi le variabili globali. Per altre informazioni, vedere [noalias](../../cpp/noalias.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_freea`|\<stdlib.h> e \<malloc.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [_malloca](../../c-runtime-library/reference/malloca.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [_malloca](../../c-runtime-library/reference/malloca.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [_malloc_dbg](../../c-runtime-library/reference/malloc-dbg.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [_free_dbg](../../c-runtime-library/reference/free-dbg.md)   
 [_heapmin](../../c-runtime-library/reference/heapmin.md)

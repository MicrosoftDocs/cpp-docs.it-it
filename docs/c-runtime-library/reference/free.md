---
title: free | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- free
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
- api-ms-win-crt-heap-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- free
dev_langs:
- C++
helpviewer_keywords:
- memory blocks, deallocating
- free function
ms.assetid: 74ded9cf-1863-432e-9306-327a42080bb8
caps.latest.revision: 14
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: fa4dd487cc0a3f1f14f0bca955ca9059c4bbb964
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="free"></a>free
Dealloca o libera un blocco di memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void free(   
   void *memblock   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `memblock`  
 Blocco di memoria precedentemente allocata da liberare.  
  
## <a name="remarks"></a>Note  
 La funzione `free` dealloca un blocco di memoria (`memblock`) precedentemente allocato da una chiamata a `calloc`, `malloc` o `realloc`. Il numero di byte liberati è equivalente al numero di byte richiesto quando il blocco è stato allocato (o riallocato, nel caso di `realloc`). Se `memblock` è `NULL`, il puntatore viene ignorato e `free` terminerà immediatamente. Il tentativo di liberare un puntatore non valido (un puntatore a un blocco di memoria che non è stato allocato da `calloc`, `malloc` o `realloc`) può interessare le richieste di allocazione successive e causare errori.  
  
 Se si verifica un errore nel liberare la memoria, `errno` viene impostato con informazioni dal sistema operativo sulla natura dell'errore. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Dopo che un blocco di memoria è stato liberato, [_heapmin](../../c-runtime-library/reference/heapmin.md) riduce la quantità di memoria libera nell'heap unendo le aree inutilizzate e rilasciandole nuovamente al sistema operativo. La memoria liberata che non viene rilasciata al sistema operativo viene ripristinata al pool libero ed è disponibile nuovamente per l'allocazione.  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, `free` viene risolto in [_free_dbg](../../c-runtime-library/reference/free-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).  
  
 `free` è contrassegnato `__declspec(noalias)`, pertanto si garantisce che la funzione non modifichi le variabili globali. Per altre informazioni, vedere [noalias](../../cpp/noalias.md).  
  
 Per liberare la memoria allocata con [_malloca](../../c-runtime-library/reference/malloca.md), usare [_freea](../../c-runtime-library/reference/freea.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`free`|\<stdlib.h> e \<malloc.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [malloc](../../c-runtime-library/reference/malloc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [_alloca](../../c-runtime-library/reference/alloca.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [_free_dbg](../../c-runtime-library/reference/free-dbg.md)   
 [_heapmin](../../c-runtime-library/reference/heapmin.md)   
 [_freea](../../c-runtime-library/reference/freea.md)

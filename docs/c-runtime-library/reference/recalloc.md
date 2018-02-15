---
title: _recalloc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _recalloc
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
- _recalloc
- recalloc
dev_langs:
- C++
helpviewer_keywords:
- _recalloc function
- recalloc function
ms.assetid: 1db8305a-3f03-418c-8844-bf9149f63046
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: de1b57dfed2d678722c2ccf496ac7a6f6d6a2fcb
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="recalloc"></a>_recalloc
Combinazione di `realloc` e `calloc`. Rialloca una matrice in memoria e ne inizializza gli elementi su 0.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void *_recalloc(   
   void *memblock  
   size_t num,  
   size_t size   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `memblock`  
 Puntatore al blocco di memoria allocato in precedenza.  
  
 `num`  
 Numero di elementi.  
  
 `size`  
 Lunghezza in byte di ogni elemento.  
  
## <a name="return-value"></a>Valore restituito  
 `_recalloc` restituisce un puntatore `void` al blocco di memoria riallocato (e possibilmente spostato).  
  
 Se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata, il blocco originale rimane invariato e viene restituito `NULL`.  
  
 Se le dimensioni richieste sono zero, il blocco a cui punta `memblock` viene liberato. Il valore restituito è `NULL` e `memblock` punta a sinistra a un blocco liberato.  
  
 Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da `void`, usare un cast del tipo sul valore restituito.  
  
## <a name="remarks"></a>Note  
 La funzione `_recalloc` modifica la dimensione di un blocco di memoria allocato. L'argomento `memblock` punta all'inizio del blocco di memoria. Se `memblock` è `NULL`, `_recalloc` si comporta esattamente come [calloc](../../c-runtime-library/reference/calloc.md) e assegna un nuovo blocco di `num`  *  `size` byte. Ogni elemento viene inizializzato a 0. Se `memblock` non è `NULL`, deve essere un puntatore restituito da una precedente chiamata a `calloc`, [malloc](../../c-runtime-library/reference/malloc.md) o [realloc](../../c-runtime-library/reference/realloc.md).  
  
 Poiché il nuovo blocco può trovarsi in una nuova posizione di memoria, non è garantito che il puntatore restituito da `_recalloc` sia il puntatore passato tramite l'argomento `memblock`.  
  
 `_recalloc` imposta `errno` su `ENOMEM` se l'allocazione di memoria ha esito negativo o se la quantità di memoria richiesta supera `_HEAP_MAXREQ`. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 `recalloc` chiama `realloc` per usare la funzione [_set_new_mode](../../c-runtime-library/reference/set-new-mode.md) di C++ per impostare la nuova modalità del gestore. La nuova modalità del gestore indica se, in caso di errore, `realloc` deve chiamare la routine del nuovo gestore come impostato da [set_new_handler](../../c-runtime-library/reference/set-new-handler.md). Per impostazione predefinita, `realloc` non chiama la routine del nuovo gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando `_recalloc` non riesce ad allocare memoria, `realloc` chiami la routine del nuovo gestore, come fa l'operatore `new` quando non riesce per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare  
  
```  
_set_new_mode(1)  
```  
  
 all'inizio del programma o collegare con NEWMODE.OBJ.  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, `_recalloc` si risolve in [recalloc_dbg](../../c-runtime-library/reference/recalloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).  
  
 `_recalloc` è contrassegnato come `__declspec(noalias)` e `__declspec(restrict)` e questo garantisce che la funzione non modifichi le variabili globali e il puntatore restituito non venga associato a un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_recalloc`|\<stdlib.h> e \<malloc.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [_recalloc_dbg](../../c-runtime-library/reference/recalloc-dbg.md)   
 [_aligned_recalloc](../../c-runtime-library/reference/aligned-recalloc.md)   
 [_aligned_offset_recalloc](../../c-runtime-library/reference/aligned-offset-recalloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [Opzioni di collegamento](../../c-runtime-library/link-options.md)
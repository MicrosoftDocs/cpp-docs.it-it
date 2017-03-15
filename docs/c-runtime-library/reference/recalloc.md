---
title: _recalloc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 9
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
ms.openlocfilehash: 89626019b42a478b2dfe3800e2f732ba6b90d106
ms.lasthandoff: 02/24/2017

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
 La funzione _`recalloc` modifica la dimensione di un blocco di memoria allocato. L'argomento `memblock` punta all'inizio del blocco di memoria. Se `memblock` è `NULL`, \_`recalloc` si comporta allo stesso modo di [calloc](../../c-runtime-library/reference/calloc.md) e alloca un nuovo blocco di `num` * `size` byte. Ogni elemento viene inizializzato su 0. Se `memblock` non è `NULL`, deve essere un puntatore restituito da una precedente chiamata a `calloc`, [malloc](../../c-runtime-library/reference/malloc.md) o [realloc](../../c-runtime-library/reference/realloc.md).  
  
 Poiché il nuovo blocco può trovarsi in una nuova posizione di memoria, non è garantito che il puntatore restituito da _`recalloc` sia il puntatore passato tramite l'argomento `memblock`.  
  
 `_recalloc` imposta `errno` su `ENOMEM` se l'allocazione di memoria ha esito negativo o se la quantità di memoria richiesta supera `_HEAP_MAXREQ`. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 `recalloc` chiama `realloc` per usare la funzione [_set_new_mode](../../c-runtime-library/reference/set-new-mode.md) di C++ per impostare la nuova modalità del gestore. La nuova modalità del gestore indica se, in caso di errore, `realloc` deve chiamare la routine del nuovo gestore come impostato tramite [set_new_handler](../../c-runtime-library/reference/set-new-handler.md). Per impostazione predefinita, `realloc` non chiama la routine del nuovo gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando `recalloc` non riesce ad allocare memoria, `realloc` chiami la routine del nuovo gestore, come fa l'operatore `new` quando non riesce per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare  
  
```  
_set_new_mode(1)  
```  
  
 all'inizio del programma o collegare con NEWMODE.OBJ.  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, _`recalloc` viene risolto in [_recalloc_dbg](../../c-runtime-library/reference/recalloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).  
  
 `_recalloc` è contrassegnato come `__declspec(noalias)` e `__declspec(restrict)` e questo garantisce che la funzione non modifichi le variabili globali e il puntatore restituito non venga associato a un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_recalloc`|\<stdlib.h> e \<malloc.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [_recalloc_dbg](../../c-runtime-library/reference/recalloc-dbg.md)   
 [_aligned_recalloc](../../c-runtime-library/reference/aligned-recalloc.md)   
 [_aligned_offset_recalloc](../../c-runtime-library/reference/aligned-offset-recalloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [Opzioni di collegamento](../../c-runtime-library/link-options.md)

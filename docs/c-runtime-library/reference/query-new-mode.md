---
title: _query_new_mode | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _query_new_mode
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
- query_new_mode
- _query_new_mode
dev_langs:
- C++
helpviewer_keywords:
- query_new_mode function
- handler modes
- _query_new_mode function
ms.assetid: e185c5f9-b73b-4257-8eff-b47648374768
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cbbdec8c5a8cd9af5e6a17518cc40bca455b3f98
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="querynewmode"></a>_query_new_mode
Restituisce un intero che indica la nuova modalità del gestore impostata da `_set_new_mode` per `malloc`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int _query_new_mode(  
   void   
);  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce la nuova modalità del gestore corrente, ovvero 0 o 1, per `malloc`. Il valore restituito 1 indica che, in caso di errore di allocazione della memoria, `malloc` chiama la routine del nuovo gestore. Il valore restituito 0 indica il contrario.  
  
## <a name="remarks"></a>Note  
 La funzione C++ `_query_new_mode` restituisce un intero che indica la nuova modalità del gestore impostata dalla funzione C++ [_set_new_mode](../../c-runtime-library/reference/set-new-mode.md) per [malloc](../../c-runtime-library/reference/malloc.md). La nuova modalità del gestore indica se, in caso di errore di allocazione della memoria, `malloc` deve chiamare la routine del nuovo gestore come impostato da [set_new_handler](../../c-runtime-library/reference/set-new-handler.md). Per impostazione predefinita, `malloc` non chiama la routine del nuovo gestore in caso di errore. È possibile usare `_set_new_mode` per eseguire l'override di questo comportamento in modo che, in caso di errore, `malloc` chiami la routine del nuovo gestore come fa l'operatore **new** quando non riesce ad allocare memoria. Per altre informazioni, vedere la discussione relativa agli [operatori new e delete](../../cpp/new-and-delete-operators.md) nelle informazioni di riferimento sul linguaggio C++.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_query_new_mode`|\<new.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)  (Allocazione di memoria)  
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [_query_new_handler](../../c-runtime-library/reference/query-new-handler.md)
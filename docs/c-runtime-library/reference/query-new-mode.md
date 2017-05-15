---
title: _query_new_mode | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 414bbd73f44a51ab1ec35c9fb2bd8b3914c1ea8d
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

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
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)  (Allocazione di memoria)  
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [_query_new_handler](../../c-runtime-library/reference/query-new-handler.md)

---
title: _callnewh | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _callnewh
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
- _callnewh
dev_langs:
- C++
helpviewer_keywords:
- _callnewh
ms.assetid: 4dcb73e9-6384-4d12-a973-a8807d4de7a8
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5754a22af15f8eca1d7352e3d172d141447a2ca4
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="callnewh"></a>_callnewh
Chiama il *nuovo gestore* attualmente installato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
int _callnewh(  
   size_t size  
   )  
```  
  
#### <a name="parameters"></a>Parametri  
 `size`  
 La quantità di memoria che il [nuovo operatore](../../cpp/new-operator-cpp.md) ha tentato di allocare.  
  
## <a name="return-value"></a>Valore restituito  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|0|Errore: non è installato alcun nuovo gestore o nessun gestore è attivo.|  
|1|Riuscito: il nuovo gestore è stato installato e attivato. Si può ritentare l'allocazione di memoria.|  
  
## <a name="exceptions"></a>Eccezioni  
 Questa funzione genera [bad_alloc](../../standard-library/bad-alloc-class.md) se il *nuovo gestore* non può essere individuato.  
  
## <a name="remarks"></a>Note  
 Il *nuovo gestore* viene chiamato se il [nuovo operatore](../../cpp/new-operator-cpp.md) non alloca la memoria correttamente. Il nuovo gestore può quindi iniziare un'azione appropriata, ad esempio liberare la memoria in modo che le allocazioni successive abbiano esito positivo.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|_callnewh|internal.h|  
  
## <a name="see-also"></a>Vedere anche  
 [_set_new_handler](../../c-runtime-library/reference/set-new-handler.md)   
 [_set_new_mode](../../c-runtime-library/reference/set-new-mode.md)
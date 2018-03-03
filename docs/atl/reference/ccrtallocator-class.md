---
title: Classe CCRTAllocator | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCRTAllocator
- ATLCORE/ATL::CCRTAllocator
- ATLCORE/ATL::CCRTAllocator::Allocate
- ATLCORE/ATL::CCRTAllocator::Free
- ATLCORE/ATL::CCRTAllocator::Reallocate
dev_langs:
- C++
helpviewer_keywords:
- CCRTAllocator class
ms.assetid: 3e1b8cb0-859a-41ab-8e93-6f0b5ceca49d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 84c8f800e0b68e23fe33ca0a7e1c1d977bcc344e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ccrtallocator-class"></a>Classe CCRTAllocator
Questa classe fornisce metodi per la gestione della memoria, utilizzo della routine di memoria CRT.  
  
## <a name="syntax"></a>Sintassi  
  
```
class ATL::CCRTAllocator
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Ccrtallocator:: allocate](#allocate)|(Statico) Chiamare questo metodo per allocare memoria.|  
|[Ccrtallocator:: Free](#free)|(Statico) Chiamare questo metodo per liberare memoria.|  
|[Ccrtallocator:: ReAllocate](#reallocate)|(Statico) Chiamare questo metodo per riallocare la memoria.|  
  
## <a name="remarks"></a>Note  
 Questa classe viene utilizzata da [CHeapPtr](../../atl/reference/cheapptr-class.md) per fornire routine di allocazione di memoria CRT. La classe controparte, [CComAllocator](../../atl/reference/ccomallocator-class.md), fornisce gli stessi metodi di utilizzo della routine di COM.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore  
  
##  <a name="allocate"></a>Ccrtallocator:: allocate  
 Chiamare questa funzione statica per allocare la memoria.  
  
```
static __declspec(allocator) void* Allocate(size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBytes`  
 Numero di byte da allocare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore void allo spazio allocato o NULL se la memoria disponibile è insufficiente.  
  
### <a name="remarks"></a>Note  
 Alloca memoria. Vedere [malloc](../../c-runtime-library/reference/malloc.md) per altri dettagli.  
  
##  <a name="free"></a>Ccrtallocator:: Free  
 Chiamare questa funzione statica per liberare memoria.  
  
```
static void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria allocata.  
  
### <a name="remarks"></a>Note  
 Libera la memoria allocata. Vedere [libero](../../c-runtime-library/reference/free.md) per altri dettagli.  
  
##  <a name="reallocate"></a>Ccrtallocator:: ReAllocate  
 Chiamare questa funzione statica per riallocare la memoria.  
  
```
static __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria allocata.  
  
 `nBytes`  
 Numero di byte da riallocare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore void allo spazio allocato o NULL se la memoria è insufficiente.  
  
### <a name="remarks"></a>Note  
 Ridimensiona la quantità di memoria allocata. Vedere [realloc](../../c-runtime-library/reference/realloc.md) per altri dettagli.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CHeapPtr](../../atl/reference/cheapptr-class.md)   
 [Classe CComAllocator](../../atl/reference/ccomallocator-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

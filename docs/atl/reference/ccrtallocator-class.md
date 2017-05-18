---
title: Classe CCRTAllocator | Documenti di Microsoft
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
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 5154a095409705e96dee6f52c67d7c23b0e6691f
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ccrtallocator-class"></a>Classe CCRTAllocator
Questa classe fornisce metodi per la gestione della memoria, utilizzo delle routine di memoria CRT.  
  
## <a name="syntax"></a>Sintassi  
  
```
class ATL::CCRTAllocator
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCRTAllocator::Allocate](#allocate)|(Statico) Chiamare questo metodo per allocare memoria.|  
|[CCRTAllocator::Free](#free)|(Statico) Chiamare questo metodo per liberare memoria.|  
|[CCRTAllocator::Reallocate](#reallocate)|(Statico) Chiamare questo metodo per riallocare la memoria.|  
  
## <a name="remarks"></a>Note  
 Questa classe viene utilizzata da [CHeapPtr](../../atl/reference/cheapptr-class.md) fornire la routine di allocazione di memoria CRT. La classe controparte, [CComAllocator](../../atl/reference/ccomallocator-class.md), fornisce gli stessi metodi di utilizzo delle routine di COM.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore. h  
  
##  <a name="allocate"></a>CCRTAllocator::Allocate  
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
 Alloca memoria. Vedere [malloc](../../c-runtime-library/reference/malloc.md) per ulteriori dettagli.  
  
##  <a name="free"></a>CCRTAllocator::Free  
 Chiamare questa funzione statica per liberare memoria.  
  
```
static void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria allocata.  
  
### <a name="remarks"></a>Note  
 Libera la memoria allocata. Vedere [gratuita](../../c-runtime-library/reference/free.md) per ulteriori dettagli.  
  
##  <a name="reallocate"></a>CCRTAllocator::Reallocate  
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
 Ridimensiona la quantità di memoria allocata. Vedere [realloc](../../c-runtime-library/reference/realloc.md) per ulteriori dettagli.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CHeapPtr](../../atl/reference/cheapptr-class.md)   
 [Classe CComAllocator](../../atl/reference/ccomallocator-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


---
title: Classe CComAllocator | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComAllocator
- ATLBASE/ATL::CComAllocator
- ATLBASE/ATL::CComAllocator::Allocate
- ATLBASE/ATL::CComAllocator::Free
- ATLBASE/ATL::CComAllocator::Reallocate
dev_langs:
- C++
helpviewer_keywords:
- CComAllocator class
ms.assetid: 0cd706fd-0c7b-42d3-9054-febe2966fc8e
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
ms.openlocfilehash: d395d347e81b24462a41de5ae3b9d8791d7f82fd
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ccomallocator-class"></a>Classe CComAllocator
Questa classe fornisce metodi per la gestione della memoria, utilizzo della memoria COM delle routine.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComAllocator
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAllocator::Allocate](#allocate)|Chiamare questo metodo statico per allocare memoria.|  
|[CComAllocator::Free](#free)|Chiamare questo metodo statico per liberare memoria allocata.|  
|[CComAllocator::Reallocate](#reallocate)|Chiamare questo metodo statico per riallocare la memoria.|  
  
## <a name="remarks"></a>Note  
 Questa classe viene utilizzata da [template CComHeapPtr](../../atl/reference/ccomheapptr-class.md) per fornire le routine di allocazione della memoria COM. La classe controparte, [CCRTAllocator](../../atl/reference/ccrtallocator-class.md), fornisce gli stessi metodi di utilizzo delle routine CRT.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="allocate"></a>CComAllocator::Allocate  
 Chiamare questa funzione statica per allocare la memoria.  
  
```
static void* Allocate(size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBytes`  
 Numero di byte da allocare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore void allo spazio allocato o NULL se la memoria disponibile è insufficiente.  
  
### <a name="remarks"></a>Note  
 Alloca memoria. Vedere [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727) per ulteriori dettagli.  
  
##  <a name="free"></a>CComAllocator::Free  
 Chiamare questa funzione statica per liberare memoria allocata.  
  
```
static void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria allocata.  
  
### <a name="remarks"></a>Note  
 Libera la memoria allocata. Vedere [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722) per ulteriori dettagli.  
  
##  <a name="reallocate"></a>CComAllocator::Reallocate  
 Chiamare questa funzione statica per riallocare la memoria.  
  
```
static void* Reallocate(void* p, size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria allocata.  
  
 `nBytes`  
 Numero di byte da riallocare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore void per lo spazio allocato, o NULL se la memoria è insufficiente  
  
### <a name="remarks"></a>Note  
 Ridimensiona la quantità di memoria allocata. Vedere [CoTaskMemRealloc](http://msdn.microsoft.com/library/windows/desktop/ms687280) per ulteriori dettagli.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe template CComHeapPtr](../../atl/reference/ccomheapptr-class.md)   
 [Classe CCRTAllocator](../../atl/reference/ccrtallocator-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


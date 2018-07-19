---
title: Classe CComAllocator | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9dbaa4631e50b14131418b902dd008e74060dbf6
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37881931"
---
# <a name="ccomallocator-class"></a>Classe CComAllocator
Questa classe fornisce metodi per la gestione della memoria con le routine di memoria COM.  
  
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
|[CComAllocator::Reallocate](#reallocate)|Chiamare questo metodo per riallocare la memoria statico.|  
  
## <a name="remarks"></a>Note  
 Questa classe viene utilizzata da [CComHeapPtr](../../atl/reference/ccomheapptr-class.md) fornire routine di allocazione della memoria COM. La classe controparte [CCRTAllocator](../../atl/reference/ccrtallocator-class.md), fornisce gli stessi metodi usando le routine CRT.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="allocate"></a>  CComAllocator::Allocate  
 Chiamare questa funzione statica per allocare la memoria.  
  
```
static void* Allocate(size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *nBytes*  
 Numero di byte da allocare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore void allo spazio allocato o NULL se la memoria disponibile è insufficiente.  
  
### <a name="remarks"></a>Note  
 Alloca memoria. Visualizzare [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727) per altri dettagli.  
  
##  <a name="free"></a>  CComAllocator::Free  
 Chiamare questa funzione statica per liberare la memoria allocata.  
  
```
static void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Puntatore alla memoria allocata.  
  
### <a name="remarks"></a>Note  
 Libera la memoria allocata. Visualizzare [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722) per altri dettagli.  
  
##  <a name="reallocate"></a>  CComAllocator::Reallocate  
 Chiamare questa funzione statica per riallocare la memoria.  
  
```
static void* Reallocate(void* p, size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Puntatore alla memoria allocata.  
  
 *nBytes*  
 Numero di byte da riallocare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore void allo spazio allocato, o NULL se la memoria è insufficiente  
  
### <a name="remarks"></a>Note  
 Ridimensiona la quantità di memoria allocata. Visualizzare [CoTaskMemRealloc](http://msdn.microsoft.com/library/windows/desktop/ms687280) per altri dettagli.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComHeapPtr](../../atl/reference/ccomheapptr-class.md)   
 [Classe CCRTAllocator](../../atl/reference/ccrtallocator-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)

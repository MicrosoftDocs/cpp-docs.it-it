---
title: Classe CComHeapPtr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComHeapPtr
- ATLBASE/ATL::CComHeapPtr
- ATLBASE/ATL::CComHeapPtr::CComHeapPtr
dev_langs:
- C++
helpviewer_keywords:
- CComHeapPtr class
ms.assetid: bd08b53d-da2b-43ab-a79c-e7c8dbbc5994
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c3cc64804dbd628669b31de070b0f30aa92a77a3
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37884782"
---
# <a name="ccomheapptr-class"></a>Classe CComHeapPtr
Una classe del puntatore intelligente per la gestione dei puntatori di heap.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T>  
class CComHeapPtr : public CHeapPtr<T, CComAllocator>
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 Il tipo di oggetto da archiviare nell'heap.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComHeapPtr::CComHeapPtr](#ccomheapptr)|Costruttore.|  
  
## <a name="remarks"></a>Note  
 `CComHeapPtr` deriva da `CHeapPtr`, ma vengono utilizzati [CComAllocator](../../atl/reference/ccomallocator-class.md) allocare la memoria usando le routine di COM. Visualizzare [CHeapPtr](../../atl/reference/cheapptr-class.md) e [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) per i metodi disponibili.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)  
  
 [CHeapPtr](../../atl/reference/cheapptr-class.md)  
  
 `CComHeapPtr`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="ccomheapptr"></a>  CComHeapPtr::CComHeapPtr  
 Costruttore.  
  
```
CComHeapPtr() throw();
explicit CComHeapPtr(T* pData) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pData*  
 Oggetto `CComHeapPtr` esistente.  
  
### <a name="remarks"></a>Note  
 Il puntatore di heap può facoltativamente essere creato usando un oggetto esistente `CComHeapPtr` oggetto. In questo caso, il nuovo `CComHeapPtr` oggetto assume la responsabilità per gestire le risorse e il nuovo puntatore.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CHeapPtr](../../atl/reference/cheapptr-class.md)   
 [Classe CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)   
 [Classe CComAllocator](../../atl/reference/ccomallocator-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)

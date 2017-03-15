---
title: Classe template CComHeapPtr | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CComHeapPtr
- ATL.CComHeapPtr<T>
- ATL::CComHeapPtr<T>
- CComHeapPtr
- ATL.CComHeapPtr
dev_langs:
- C++
helpviewer_keywords:
- CComHeapPtr class
ms.assetid: bd08b53d-da2b-43ab-a79c-e7c8dbbc5994
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
translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 0e5196a98b8fd76b2e7e791fd2cd9549099a1cc9
ms.lasthandoff: 02/24/2017

---
# <a name="ccomheapptr-class"></a>Classe template CComHeapPtr
Una classe di puntatore intelligente per la gestione dei puntatori di heap.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T>  
class CComHeapPtr : public CHeapPtr<T, CComAllocator>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di oggetto da archiviare nell'heap.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComHeapPtr::CComHeapPtr](#ccomheapptr)|Costruttore.|  
  
## <a name="remarks"></a>Note  
 `CComHeapPtr`deriva da `CHeapPtr`, ma utilizza [CComAllocator](../../atl/reference/ccomallocator-class.md) per allocare memoria utilizzando le routine di COM. Vedere [CHeapPtr](../../atl/reference/cheapptr-class.md) e [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) per i metodi disponibili.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)  
  
 [CHeapPtr](../../atl/reference/cheapptr-class.md)  
  
 `CComHeapPtr`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="a-nameccomheapptra--ccomheapptrccomheapptr"></a><a name="ccomheapptr"></a>CComHeapPtr::CComHeapPtr  
 Costruttore.  
  
```
CComHeapPtr() throw();
explicit CComHeapPtr(T* pData) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pData`  
 Oggetto `CComHeapPtr` esistente.  
  
### <a name="remarks"></a>Note  
 Facoltativamente è possibile creare il puntatore di heap utilizzando un oggetto esistente `CComHeapPtr` oggetto. In questo caso, il nuovo `CComHeapPtr` oggetto si assume la responsabilità per gestire le risorse e il nuovo puntatore.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CHeapPtr](../../atl/reference/cheapptr-class.md)   
 [Classe CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)   
 [Classe CComAllocator](../../atl/reference/ccomallocator-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


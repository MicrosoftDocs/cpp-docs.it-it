---
title: Classe CHeapPtrList | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CHeapPtrList
- ATLCOLL/ATL::CHeapPtrList
- ATLCOLL/ATL::CHeapPtrList::CHeapPtrList
dev_langs:
- C++
helpviewer_keywords:
- CHeapPtrList class
ms.assetid: cc70e585-362a-4007-81db-c705eb181226
caps.latest.revision: 20
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 9acf18d0e0a72f27a335cefca81341c95d530ae5
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cheapptrlist-class"></a>Classe CHeapPtrList
Questa classe fornisce metodi utili per la creazione di un elenco di puntatori di heap.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename E, class Allocator = ATL::CCRTAllocator>  
class CHeapPtrList 
   : public CAtlList<ATL::CHeapPtr<E, Allocator>,
                     CHeapPtrElementTraits<E, Allocator>>
```  
  
#### <a name="parameters"></a>Parametri  
 `E`  
 Il tipo di oggetto da archiviare nella classe di raccolta.  
  
 `Allocator`  
 La classe di allocazione di memoria da utilizzare. Il valore predefinito è [CCRTAllocator](../../atl/reference/ccrtallocator-class.md).  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtrList::CHeapPtrList](#cheapptrlist)|Costruttore.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce un costruttore e deriva da metodi [CAtlList](../../atl/reference/catllist-class.md) e [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md) per facilitare la creazione di un oggetto classe di raccolta memorizzare i puntatori di heap.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CAtlList](../../atl/reference/catllist-class.md)  
  
 `CHeapPtrList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="cheapptrlist"></a>CHeapPtrList::CHeapPtrList  
 Costruttore.  
  
```
CHeapPtrList(UINT nBlockSize = 10) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBlockSize`  
 La dimensione del blocco.  
  
### <a name="remarks"></a>Note  
 La dimensione del blocco è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Dimensioni blocco ridurre le chiamate alle routine di allocazione della memoria, ma utilizzano più risorse.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlList](../../atl/reference/catllist-class.md)   
 [Classe CHeapPtr](../../atl/reference/cheapptr-class.md)   
 [Classe CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


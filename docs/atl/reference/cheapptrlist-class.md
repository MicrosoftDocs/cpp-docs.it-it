---
title: Classe CHeapPtrList | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dc5b164fda27775a7b3fb272d8718c31815cb1ca
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cheapptrlist-class"></a>Classe CHeapPtrList
Questa classe fornisce metodi utili durante la costruzione di un elenco dei puntatori di heap.  
  
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
 Questa classe fornisce un costruttore e metodi da deriva [CAtlList](../../atl/reference/catllist-class.md) e [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md) per facilitare la creazione di un oggetto di classe collection memorizzare i puntatori di heap.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CAtlList](../../atl/reference/catllist-class.md)  
  
 `CHeapPtrList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="cheapptrlist"></a>  CHeapPtrList::CHeapPtrList  
 Costruttore.  
  
```
CHeapPtrList(UINT nBlockSize = 10) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBlockSize`  
 La dimensione del blocco.  
  
### <a name="remarks"></a>Note  
 La dimensione del blocco è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Blocchi di dimensioni maggiori di ridurre ulteriormente le chiamate alle routine di allocazione di memoria, ma usano più risorse.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlList](../../atl/reference/catllist-class.md)   
 [Classe CHeapPtr](../../atl/reference/cheapptr-class.md)   
 [Classe CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

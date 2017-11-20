---
title: Classe CComQIPtrElementTraits | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComQIPtrElementTraits
- ATLCOLL/ATL::CComQIPtrElementTraits
- ATLCOLL/ATL::CComQIPtrElementTraits::INARGTYPE
dev_langs: C++
helpviewer_keywords: CComQIPtrElementTraits class
ms.assetid: 9df9250a-5413-4362-b133-332932a597c4
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 7f292ebf00b6eff1fcfbd9e6c9d0cf175e887733
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ccomqiptrelementtraits-class"></a>Classe CComQIPtrElementTraits
Questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori a interfaccia COM.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename I, const IID* piid=& __uuidof(I)>  
class CComQIPtrElementTraits : 
   public CDefaultElementTraits<ATL::CComQIPtr<I, piid>>
```  
  
#### <a name="parameters"></a>Parametri  
 `I`  
 Un'interfaccia COM che specifica il tipo di puntatore da archiviare.  
  
 `piid`  
 Un puntatore per l'IID del `I`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComQIPtrElementTraits::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|  
  
## <a name="remarks"></a>Note  
 Questa classe deriva i metodi e fornisce un typedef utile durante la creazione di una classe collection di [CComQIPtr](../../atl/reference/ccomqiptr-class.md) oggetti puntatore dell'interfaccia COM. Questa classe viene utilizzata da entrambe le [CInterfaceArray](../../atl/reference/cinterfacearray-class.md) e [CInterfaceList](../../atl/reference/cinterfacelist-class.md) classi.  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)  
  
 [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)  
  
 [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)  
  
 [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)  
  
 `CComQIPtrElementTraits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="inargtype"></a>CComQIPtrElementTraits::INARGTYPE  
 Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.  
  
```
typedef I* INARGTYPE;
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

---
title: Classe CAutoVectorPtrElementTraits | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CAutoVectorPtrElementTraits<T>
- ATL.CAutoVectorPtrElementTraits
- ATL.CAutoVectorPtrElementTraits<T>
- ATL::CAutoVectorPtrElementTraits
- CAutoVectorPtrElementTraits
dev_langs:
- C++
helpviewer_keywords:
- CAutoVectorPtrElementTraits class
ms.assetid: 16b81a56-55fb-46ca-b376-66a1884231a6
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: d7b7418b713993f539f56e70715296d5af265d28
ms.lasthandoff: 02/24/2017

---
# <a name="cautovectorptrelementtraits-class"></a>Classe CAutoVectorPtrElementTraits
Questa classe fornisce metodi e funzioni statiche typedef utili durante la creazione di raccolte di puntatori intelligenti utilizzando nuovo vettore ed eliminare operatori.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename T>  
class CAutoVectorPtrElementTraits : 
   public CDefaultElementTraits<ATL::CAutoVectorPtr<T>>
```    
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di puntatore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoVectorPtrElementTraits::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|  
|[CAutoVectorPtrElementTraits::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare elementi dall'oggetto classe di insiemi.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi e funzioni statiche TypeDef per consentire la creazione di oggetti di classe di raccolta che contiene i puntatori intelligenti. A differenza di [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md), questa classe utilizza vector nuovi ed eliminare gli operatori.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)  
  
 [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)  
  
 [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)  
  
 [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)  
  
 `CAutoVectorPtrElementTraits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="a-nameinargtypea--cautovectorptrelementtraitsinargtype"></a><a name="inargtype"></a>CAutoVectorPtrElementTraits::INARGTYPE  
 Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.  
  
```
typedef CAutoVectorPtr<T>& INARGTYPE;
```  
  
##  <a name="a-nameoutargtypea--cautovectorptrelementtraitsoutargtype"></a><a name="outargtype"></a>CAutoVectorPtrElementTraits::OUTARGTYPE  
 Il tipo di dati da utilizzare per recuperare elementi dall'oggetto classe di insiemi.  
  
```
typedef T*& OUTARGTYPE;
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)   
 [Classe CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


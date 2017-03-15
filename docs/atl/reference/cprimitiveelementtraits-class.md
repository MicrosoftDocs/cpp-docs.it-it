---
title: Classe CPrimitiveElementTraits | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CPrimitiveElementTraits<T>
- CPrimitiveElementTraits
- ATL.CPrimitiveElementTraits
- ATL::CPrimitiveElementTraits<T>
- ATL::CPrimitiveElementTraits
dev_langs:
- C++
helpviewer_keywords:
- CPrimitiveElementTraits class
ms.assetid: 21c1cea8-2c5a-486c-b65c-85490f3ed4e6
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
ms.openlocfilehash: 44e3849ebf2de09bc9b62e28df0f70bf52ac95e6
ms.lasthandoff: 02/24/2017

---
# <a name="cprimitiveelementtraits-class"></a>Classe CPrimitiveElementTraits
Questa classe fornisce metodi predefiniti e comporre funzioni per una classe di raccolte di tipi di dati primitivi.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename T>  
class CPrimitiveElementTraits : public CDefaultElementTraits<T>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati da archiviare nell'oggetto classe di insiemi.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrimitiveElementTraits::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|  
|[CPrimitiveElementTraits::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare elementi dall'oggetto classe di insiemi.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce funzioni statiche predefiniti e metodi per lo spostamento, copia, il confronto e hashing gli elementi di tipo di dati primitivi archiviati in un oggetto classe di raccolta.  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)  
  
 [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)  
  
 [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)  
  
 [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)  
  
 `CPrimitiveElementTraits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="a-nameinargtypea--cprimitiveelementtraitsinargtype"></a><a name="inargtype"></a>CPrimitiveElementTraits::INARGTYPE  
 Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.  
  
```
typedef T INARGTYPE;
```  
  
##  <a name="a-nameoutargtypea--cprimitiveelementtraitsoutargtype"></a><a name="outargtype"></a>CPrimitiveElementTraits::OUTARGTYPE  
 Il tipo di dati da utilizzare per recuperare elementi dall'oggetto classe di insiemi.  
  
```
typedef T& OUTARGTYPE;
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


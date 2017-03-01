---
title: Classe CAutoPtrElementTraits | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CAutoPtrElementTraits
- CAutoPtrElementTraits
- ATL::CAutoPtrElementTraits<T>
- ATL.CAutoPtrElementTraits<T>
- ATL::CAutoPtrElementTraits
dev_langs:
- C++
helpviewer_keywords:
- CAutoPtrElementTraits class
ms.assetid: 777c1b14-6ab7-491f-b9a5-be149e71d4a2
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
translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 1c543eaa678d86e083207915bcb4f43766ee23c5
ms.lasthandoff: 02/24/2017

---
# <a name="cautoptrelementtraits-class"></a>Classe CAutoPtrElementTraits
Questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori intelligenti.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T>  
class CAutoPtrElementTraits 
    : public CDefaultElementTraits<ATL::CAutoPtr<T>>
```    
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di puntatore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtrElementTraits::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|  
|[CAutoPtrElementTraits::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare elementi dall'oggetto classe di insiemi.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi e funzioni statiche TypeDef per consentire la creazione di oggetti di classe di raccolta che contiene i puntatori intelligenti. Le classi [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) e [CAutoPtrList](../../atl/reference/cautoptrlist-class.md) derivano da `CAutoPtrElementTraits`. Se la compilazione di una raccolta di puntatori intelligenti che richiede vettore new e delete operatori, utilizzare [CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md) invece.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)  
  
 [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)  
  
 [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)  
  
 [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)  
  
 `CAutoPtrElementTraits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="a-nameinargtypea--cautoptrelementtraitsinargtype"></a><a name="inargtype"></a>CAutoPtrElementTraits::INARGTYPE  
 Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.  
  
```
typedef CAutoPtr<T>& INARGTYPE;
```  
  
##  <a name="a-nameoutargtypea--cautoptrelementtraitsoutargtype"></a><a name="outargtype"></a>CAutoPtrElementTraits::OUTARGTYPE  
 Il tipo di dati da utilizzare per recuperare elementi dall'oggetto classe di insiemi.  
  
```
typedef T *& OUTARGTYPE;
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


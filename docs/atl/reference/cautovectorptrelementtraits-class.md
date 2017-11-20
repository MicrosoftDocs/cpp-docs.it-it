---
title: Classe CAutoVectorPtrElementTraits | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAutoVectorPtrElementTraits
- ATLCOLL/ATL::CAutoVectorPtrElementTraits
- ATLCOLL/ATL::CAutoVectorPtrElementTraits::INARGTYPE
- ATLCOLL/ATL::CAutoVectorPtrElementTraits::OUTARGTYPE
dev_langs: C++
helpviewer_keywords: CAutoVectorPtrElementTraits class
ms.assetid: 16b81a56-55fb-46ca-b376-66a1884231a6
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 59aaaa19d696099c45d4b25f4c41f1cedf97a255
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cautovectorptrelementtraits-class"></a>Classe CAutoVectorPtrElementTraits
Questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori intelligenti usando il vettore di nuovi operatori e delete.  
  
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
|[CAutoVectorPtrElementTraits::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto della classe di raccolta.|  
  
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
  
##  <a name="inargtype"></a>CAutoVectorPtrElementTraits::INARGTYPE  
 Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.  
  
```
typedef CAutoVectorPtr<T>& INARGTYPE;
```  
  
##  <a name="outargtype"></a>CAutoVectorPtrElementTraits::OUTARGTYPE  
 Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto della classe di raccolta.  
  
```
typedef T*& OUTARGTYPE;
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)   
 [Classe CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

---
title: Classe CAutoPtrList | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAutoPtrList
- ATLCOLL/ATL::CAutoPtrList
- ATLCOLL/ATL::CAutoPtrList::CAutoPtrList
dev_langs:
- C++
helpviewer_keywords:
- CAutoPtrList class
ms.assetid: 11de4aca-28b0-4ff2-a74a-cb602312ffbd
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
ms.openlocfilehash: b39c3c08cf2970036bf8690c46a4f3518a7a55e1
ms.lasthandoff: 02/24/2017

---
# <a name="cautoptrlist-class"></a>Classe CAutoPtrList
Questa classe fornisce metodi utili per la creazione di un elenco di puntatori intelligenti.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename E>  
class CAutoPtrList : 
   public CAtlList<ATL::CAutoPtr<E>, CAutoPtrElementTraits<E>>
```  
  
#### <a name="parameters"></a>Parametri  
 `E`  
 Il tipo di puntatore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtrList::CAutoPtrList](#cautoptrlist)|Costruttore.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce un costruttore e deriva da metodi [CAtlList](../../atl/reference/catllist-class.md) e [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md) per facilitare la creazione di un oggetto elenco archiviare i puntatori intelligenti. La classe [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) fornisce una funzione simile per un oggetto matrice.  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CAtlList](../../atl/reference/catllist-class.md)  
  
 `CAutoPtrList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="cautoptrlist"></a>CAutoPtrList::CAutoPtrList  
 Costruttore.  
  
```
CAutoPtrList(UINT nBlockSize = 10) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBlockSize`  
 Dimensione del blocco, con valore predefinito è 10.  
  
### <a name="remarks"></a>Note  
 La dimensione del blocco è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Dimensioni blocco ridurre le chiamate alle routine di allocazione della memoria, ma utilizzano più risorse.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlList](../../atl/reference/catllist-class.md)   
 [Classe CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


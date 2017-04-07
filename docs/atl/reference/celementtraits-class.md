---
title: Classe CElementTraits | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CElementTraits
- atlcoll/ATL::CElementTraits
dev_langs:
- C++
helpviewer_keywords:
- CElementTraits class
ms.assetid: 496528e5-7f80-4b45-be0c-6f646feb43c5
caps.latest.revision: 17
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
ms.sourcegitcommit: 6664a73967d3bdf9859556f21744737718018e74
ms.openlocfilehash: 8b7b91bd9e027a3946160d95da1199c24af3502d
ms.lasthandoff: 03/29/2017

---
# <a name="celementtraits-class"></a>Classe CElementTraits
Questa classe viene utilizzata dalle classi di raccolta per fornire i metodi e le funzioni per lo spostamento, la copia, di confronto e operazioni di hashing.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T>  
class CElementTraits : public CDefaultElementTraits<T>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati da archiviare nella raccolta.  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi e funzioni statiche predefinito per lo spostamento, la copia, il confronto e l'hashing di elementi archiviati in un oggetto di classe di raccolta. `CElementTraits`viene specificato come provider predefinito di queste operazioni per le classi di raccolta [CAtlArray](../../atl/reference/catlarray-class.md), [CAtlList](../../atl/reference/catllist-class.md), [CRBMap](../../atl/reference/crbmap-class.md), [CRBMultiMap](../../atl/reference/crbmultimap-class.md), e [CRBTree](../../atl/reference/crbtree-class.md).  
  
 Le implementazioni predefinite è sufficiente per i tipi di dati semplici, ma se le classi di raccolta vengono utilizzate per archiviare gli oggetti più complessi, le funzioni e i metodi devono essere sottoposto a override dalle implementazioni fornite dall'utente.  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


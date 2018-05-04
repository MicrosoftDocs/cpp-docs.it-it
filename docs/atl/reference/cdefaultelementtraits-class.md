---
title: Classe CDefaultElementTraits | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CDefaultElementTraits
- atlcoll/ATL::CDefaultElementTraits
dev_langs:
- C++
helpviewer_keywords:
- CDefaultElementTraits class
ms.assetid: ac5ee610-7957-4b7c-92b6-38ff72e4118e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 16574857f4f5bd4566fcef551fa5e56290b7ce6b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cdefaultelementtraits-class"></a>Classe CDefaultElementTraits
Questa classe fornisce funzioni e metodi predefiniti per una classe di raccolta.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename T>  
class CDefaultElementTraits : public CElementTraitsBase<T>,
    public CDefaultHashTraits<T>,
    public CDefaultCompareTraits<T>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati da archiviare nella raccolta.  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi e funzioni statiche predefinito per lo spostamento, la copia, il confronto e l'hashing di elementi archiviati in un oggetto di classe di raccolta. Questa classe deriva le relative funzioni e metodi da [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md), [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md), e [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)e viene utilizzato da [ CElementTraits](../../atl/reference/celementtraits-class.md), [CPrimitiveElementTraits](../../atl/reference/cprimitiveelementtraits-class.md), e [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md).  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

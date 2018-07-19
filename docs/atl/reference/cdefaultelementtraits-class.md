---
title: Classe CDefaultElementTraits | Microsoft Docs
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
ms.openlocfilehash: 8c86df573e35ba58d01be6c12ed9fff87c837126
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37882663"
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
 *T*  
 Il tipo di dati da archiviare nella raccolta.  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi e funzioni statiche predefinito per lo spostamento, copia, il confronto e hashing elementi archiviati in un oggetto di classe di raccolta. Le relative funzioni e metodi da cui deriva questa classe [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md), [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md), e [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)e viene utilizzato da [ CElementTraits](../../atl/reference/celementtraits-class.md), [CPrimitiveElementTraits](../../atl/reference/cprimitiveelementtraits-class.md), e [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md).  
  
 Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)

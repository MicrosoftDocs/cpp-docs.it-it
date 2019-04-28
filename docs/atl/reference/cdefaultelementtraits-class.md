---
title: Classe CDefaultElementTraits
ms.date: 11/04/2016
f1_keywords:
- CDefaultElementTraits
- atlcoll/ATL::CDefaultElementTraits
helpviewer_keywords:
- CDefaultElementTraits class
ms.assetid: ac5ee610-7957-4b7c-92b6-38ff72e4118e
ms.openlocfilehash: 0ee076af5fc4a1c2145162ac510b3a4460e251e0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62245934"
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

*T*<br/>
Il tipo di dati da archiviare nella raccolta.

## <a name="remarks"></a>Note

Questa classe fornisce metodi e funzioni statiche predefinito per lo spostamento, copia, il confronto e hashing elementi archiviati in un oggetto di classe di raccolta. Le relative funzioni e metodi da cui deriva questa classe [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md), [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md), e [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)e viene utilizzato da [ CElementTraits](../../atl/reference/celementtraits-class.md), [CPrimitiveElementTraits](../../atl/reference/cprimitiveelementtraits-class.md), e [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md).

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)

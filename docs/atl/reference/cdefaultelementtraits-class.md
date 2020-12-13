---
description: 'Altre informazioni su: classe CDefaultElementTraits'
title: Classe CDefaultElementTraits
ms.date: 11/04/2016
f1_keywords:
- CDefaultElementTraits
- atlcoll/ATL::CDefaultElementTraits
helpviewer_keywords:
- CDefaultElementTraits class
ms.assetid: ac5ee610-7957-4b7c-92b6-38ff72e4118e
ms.openlocfilehash: f4dd1bae67ef626ef793ecee946d88879a07f194
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141895"
---
# <a name="cdefaultelementtraits-class"></a>Classe CDefaultElementTraits

Questa classe fornisce i metodi e le funzioni predefiniti per una classe di raccolte.

## <a name="syntax"></a>Sintassi

```
template <typename T>
class CDefaultElementTraits : public CElementTraitsBase<T>,
    public CDefaultHashTraits<T>,
    public CDefaultCompareTraits<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati da archiviare nella raccolta.

## <a name="remarks"></a>Commenti

Questa classe fornisce funzioni e metodi statici predefiniti per lo stato di trasferimento, la copia, il confronto e l'hashing di elementi archiviati in un oggetto classe di raccolta. Questa classe deriva le funzioni e i metodi da [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md), [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)e [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)e viene utilizzata da [CElementTraits](../../atl/reference/celementtraits-class.md), [CPrimitiveElementTraits](../../atl/reference/cprimitiveelementtraits-class.md)e [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md).

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

---
title: Classe CElementTraits
ms.date: 11/04/2016
f1_keywords:
- CElementTraits
- atlcoll/ATL::CElementTraits
helpviewer_keywords:
- CElementTraits class
ms.assetid: 496528e5-7f80-4b45-be0c-6f646feb43c5
ms.openlocfilehash: 4951f5b87efbff83f39badba5f3e1041a15d8c6b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50480757"
---
# <a name="celementtraits-class"></a>Classe CElementTraits

Questa classe viene utilizzata dalle classi di raccolta per fornire funzioni e metodi per lo spostamento, copia, confronto e operazioni di hashing.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class CElementTraits : public CDefaultElementTraits<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati da archiviare nella raccolta.

## <a name="remarks"></a>Note

Questa classe fornisce metodi e funzioni statiche predefinito per lo spostamento, copia, il confronto e hashing elementi archiviati in un oggetto di classe di raccolta. `CElementTraits` viene specificato come provider predefinito di queste operazioni per le classi di raccolte [CAtlArray](../../atl/reference/catlarray-class.md), [CAtlList](../../atl/reference/catllist-class.md), [CRBMap](../../atl/reference/crbmap-class.md), [CRBMultiMap](../../atl/reference/crbmultimap-class.md), e [CRBTree](../../atl/reference/crbtree-class.md).

Le implementazioni predefinite è sufficiente per i tipi di dati semplici, ma se le classi di raccolta vengono utilizzate per archiviare gli oggetti più complessi, le funzioni e metodi devono essere sottoposto a override dalle implementazioni fornite dall'utente.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="see-also"></a>Vedere anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

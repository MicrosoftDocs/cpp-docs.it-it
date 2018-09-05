---
title: Classe CElementTraits | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CElementTraits
- atlcoll/ATL::CElementTraits
dev_langs:
- C++
helpviewer_keywords:
- CElementTraits class
ms.assetid: 496528e5-7f80-4b45-be0c-6f646feb43c5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 45139b16ebb923acd004d995cd9466ea9e39e163
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43765736"
---
# <a name="celementtraits-class"></a>Classe CElementTraits

Questa classe viene utilizzata dalle classi di raccolta per fornire funzioni e metodi per lo spostamento, copia, confronto e operazioni di hashing.

## <a name="syntax"></a>Sintassi

```
template<typename T>  
class CElementTraits : public CDefaultElementTraits<T>
```

#### <a name="parameters"></a>Parametri

`T`  
Il tipo di dati da archiviare nella raccolta.

## <a name="remarks"></a>Note

Questa classe fornisce metodi e funzioni statiche predefinito per lo spostamento, copia, il confronto e hashing elementi archiviati in un oggetto di classe di raccolta. `CElementTraits` viene specificato come provider predefinito di queste operazioni per le classi di raccolte [CAtlArray](../../atl/reference/catlarray-class.md), [CAtlList](../../atl/reference/catllist-class.md), [CRBMap](../../atl/reference/crbmap-class.md), [CRBMultiMap](../../atl/reference/crbmultimap-class.md), e [CRBTree](../../atl/reference/crbtree-class.md).

Le implementazioni predefinite è sufficiente per i tipi di dati semplici, ma se le classi di raccolta vengono utilizzate per archiviare gli oggetti più complessi, le funzioni e metodi devono essere sottoposto a override dalle implementazioni fornite dall'utente.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="see-also"></a>Vedere anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)

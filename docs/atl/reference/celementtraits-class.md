---
description: 'Altre informazioni su: classe CElementTraits'
title: Classe CElementTraits
ms.date: 11/04/2016
f1_keywords:
- CElementTraits
- atlcoll/ATL::CElementTraits
helpviewer_keywords:
- CElementTraits class
ms.assetid: 496528e5-7f80-4b45-be0c-6f646feb43c5
ms.openlocfilehash: 1bcb6c9da2bca733efe68b634eebd7f379ba0d10
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141804"
---
# <a name="celementtraits-class"></a>Classe CElementTraits

Questa classe viene utilizzata dalle classi di raccolta per fornire metodi e funzioni per operazioni di trasferimento, copia, confronto e hashing.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class CElementTraits : public CDefaultElementTraits<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati da archiviare nella raccolta.

## <a name="remarks"></a>Commenti

Questa classe fornisce funzioni e metodi statici predefiniti per lo stato di trasferimento, la copia, il confronto e l'hashing di elementi archiviati in un oggetto classe di raccolta. `CElementTraits` viene specificato come provider predefinito di queste operazioni dalle classi di raccolta [CAtlArray](../../atl/reference/catlarray-class.md), [CAtlList](../../atl/reference/catllist-class.md), [CRBMap](../../atl/reference/crbmap-class.md), [CRBMultiMap](../../atl/reference/crbmultimap-class.md)e [CRBTree](../../atl/reference/crbtree-class.md).

Le implementazioni predefinite saranno sufficienti per i tipi di dati semplici, ma se le classi di raccolta vengono usate per archiviare oggetti più complessi, le funzioni e i metodi devono essere sottoposti a override dalle implementazioni fornite dall'utente.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="see-also"></a>Vedi anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

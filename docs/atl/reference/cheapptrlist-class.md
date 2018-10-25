---
title: Classe CHeapPtrList | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CHeapPtrList
- ATLCOLL/ATL::CHeapPtrList
- ATLCOLL/ATL::CHeapPtrList::CHeapPtrList
dev_langs:
- C++
helpviewer_keywords:
- CHeapPtrList class
ms.assetid: cc70e585-362a-4007-81db-c705eb181226
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 56dad973f415fa4944bd4561dab94636e10e6539
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50058921"
---
# <a name="cheapptrlist-class"></a>Classe CHeapPtrList

Questa classe fornisce metodi utili quando si crea un elenco di puntatori di heap.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<typename E, class Allocator = ATL::CCRTAllocator>
class CHeapPtrList
   : public CAtlList<ATL::CHeapPtr<E, Allocator>,
                     CHeapPtrElementTraits<E, Allocator>>
```

#### <a name="parameters"></a>Parametri

*E*<br/>
Il tipo di oggetto da archiviare nella classe di raccolta.

*Allocatore*<br/>
La classe di allocazione di memoria da utilizzare. Il valore predefinito è [CCRTAllocator](../../atl/reference/ccrtallocator-class.md).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeapPtrList::CHeapPtrList](#cheapptrlist)|Costruttore.|

## <a name="remarks"></a>Note

Questa classe fornisce un costruttore e metodi da deriva [CAtlList](../../atl/reference/catllist-class.md) e [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md) per facilitare la creazione di un oggetto di classe di raccolta l'archiviazione dei puntatori di heap.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAtlList](../../atl/reference/catllist-class.md)

`CHeapPtrList`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="cheapptrlist"></a>  CHeapPtrList::CHeapPtrList

Costruttore.

```
CHeapPtrList(UINT nBlockSize = 10) throw();
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
La dimensione del blocco.

### <a name="remarks"></a>Note

La dimensione del blocco è una misura della quantità di memoria allocata quando un nuovo elemento è obbligatorio. Blocchi di dimensioni maggiori riducono le chiamate alle routine di allocazione della memoria, ma usano più risorse.

## <a name="see-also"></a>Vedere anche

[Classe CAtlList](../../atl/reference/catllist-class.md)<br/>
[Classe CHeapPtr](../../atl/reference/cheapptr-class.md)<br/>
[Classe CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

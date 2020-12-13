---
description: 'Altre informazioni su: classe CHeapPtrList'
title: Classe CHeapPtrList
ms.date: 11/04/2016
f1_keywords:
- CHeapPtrList
- ATLCOLL/ATL::CHeapPtrList
- ATLCOLL/ATL::CHeapPtrList::CHeapPtrList
helpviewer_keywords:
- CHeapPtrList class
ms.assetid: cc70e585-362a-4007-81db-c705eb181226
ms.openlocfilehash: 7e3a97280f7abcd4b7efebf6726ac062215912d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141596"
---
# <a name="cheapptrlist-class"></a>Classe CHeapPtrList

Questa classe fornisce metodi utili per la creazione di un elenco di puntatori dell'heap.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<typename E, class Allocator = ATL::CCRTAllocator>
class CHeapPtrList
   : public CAtlList<ATL::CHeapPtr<E, Allocator>,
                     CHeapPtrElementTraits<E, Allocator>>
```

#### <a name="parameters"></a>Parametri

*E*<br/>
Tipo di oggetto da archiviare nella classe della raccolta.

*Allocatore*<br/>
Classe di allocazione della memoria da utilizzare. Il valore predefinito è [CCRTAllocator](../../atl/reference/ccrtallocator-class.md).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CHeapPtrList:: CHeapPtrList](#cheapptrlist)|Costruttore.|

## <a name="remarks"></a>Commenti

Questa classe fornisce un costruttore e deriva i metodi da [CAtlList](../../atl/reference/catllist-class.md) e [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md) per facilitare la creazione di un oggetto classe di raccolta che archivia i puntatori dell'heap.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAtlList](../../atl/reference/catllist-class.md)

`CHeapPtrList`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cheapptrlistcheapptrlist"></a><a name="cheapptrlist"></a> CHeapPtrList:: CHeapPtrList

Costruttore.

```
CHeapPtrList(UINT nBlockSize = 10) throw();
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
Dimensione del blocco.

### <a name="remarks"></a>Commenti

Le dimensioni del blocco sono una misura della quantità di memoria allocata quando è richiesto un nuovo elemento. Dimensioni maggiori dei blocchi riducono le chiamate alle routine di allocazione di memoria, ma utilizzano più risorse.

## <a name="see-also"></a>Vedi anche

[Classe CAtlList](../../atl/reference/catllist-class.md)<br/>
[Classe CHeapPtr](../../atl/reference/cheapptr-class.md)<br/>
[Classe CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

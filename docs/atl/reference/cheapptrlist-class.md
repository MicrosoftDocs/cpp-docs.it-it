---
title: CHeapPtrList (classe)
ms.date: 11/04/2016
f1_keywords:
- CHeapPtrList
- ATLCOLL/ATL::CHeapPtrList
- ATLCOLL/ATL::CHeapPtrList::CHeapPtrList
helpviewer_keywords:
- CHeapPtrList class
ms.assetid: cc70e585-362a-4007-81db-c705eb181226
ms.openlocfilehash: 0500ab8f76049aeaf1c89355ea5450a93243b734
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326864"
---
# <a name="cheapptrlist-class"></a>CHeapPtrList (classe)

Questa classe fornisce metodi utili quando si costruisce un elenco di puntatori heap.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<typename E, class Allocator = ATL::CCRTAllocator>
class CHeapPtrList
   : public CAtlList<ATL::CHeapPtr<E, Allocator>,
                     CHeapPtrElementTraits<E, Allocator>>
```

#### <a name="parameters"></a>Parametri

*E (in questo modo*<br/>
Tipo di oggetto da archiviare nella classe di raccolta.

*Allocatore*<br/>
Classe di allocazione di memoria da utilizzare. Il valore predefinito è [CCRTAllocator](../../atl/reference/ccrtallocator-class.md).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeapPtrList::CHeapPtrList](#cheapptrlist)|Costruttore.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce un costruttore e deriva i metodi da [CAtlList](../../atl/reference/catllist-class.md) e [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md) per facilitare la creazione di un oggetto classe di raccolta che archivia i puntatori all'heap.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Elenco CAtlList](../../atl/reference/catllist-class.md)

`CHeapPtrList`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="cheapptrlistcheapptrlist"></a><a name="cheapptrlist"></a>CHeapPtrList::CHeapPtrList

Costruttore.

```
CHeapPtrList(UINT nBlockSize = 10) throw();
```

### <a name="parameters"></a>Parametri

*nBlockSize (dimensioni di blocco)*<br/>
Dimensione del blocco.

### <a name="remarks"></a>Osservazioni

La dimensione del blocco è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Blocchi di dimensioni maggiori riducono le chiamate alle routine di allocazione della memoria, ma utilizzano più risorse.

## <a name="see-also"></a>Vedere anche

[Classe CAtlList](../../atl/reference/catllist-class.md)<br/>
[CHeapPtr (classe)](../../atl/reference/cheapptr-class.md)<br/>
[CHeapPtrElementTraits (classe)](../../atl/reference/cheapptrelementtraits-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

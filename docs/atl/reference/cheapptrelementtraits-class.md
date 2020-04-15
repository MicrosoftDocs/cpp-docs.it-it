---
title: CHeapPtrElementTraits (classe)
ms.date: 11/04/2016
f1_keywords:
- CHeapPtrElementTraits
- ATLCOLL/ATL::CHeapPtrElementTraits
- ATLCOLL/ATL::CHeapPtrElementTraits::INARGTYPE
- ATLCOLL/ATL::CHeapPtrElementTraits::OUTARGTYPE
helpviewer_keywords:
- CHeapPtrElementTraits class
ms.assetid: 910e0e06-3c8b-4242-bf00-b57eb74fbc77
ms.openlocfilehash: f09da968b264463eba759372e4e0756397e9978e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326880"
---
# <a name="cheapptrelementtraits-class"></a>CHeapPtrElementTraits (classe)

Questa classe fornisce metodi, funzioni statiche e typedef utili durante la creazione di raccolte di puntatori all'heap.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<typename T, class Allocator = ATL::CCRTAllocator>
class CHeapPtrElementTraits :
   public CDefaultElementTraits<ATL::CHeapPtr<T, Allocator>>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di oggetto da archiviare nella classe di raccolta.

*Allocatore*<br/>
Classe di allocazione di memoria da utilizzare. Il valore predefinito è [CCRTAllocator](../../atl/reference/ccrtallocator-class.md).

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeapPtrElementTraits::INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe di raccolta.|
|[CHeapPtrElementTraits::OUTARGTYPE](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe di raccolta.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce metodi, funzioni statiche e typedef per facilitare la creazione di oggetti classe di insiemi contenenti puntatori all'heap. La `CHeapPtrList` classe deriva `CHeapPtrElementTraits`da .

Per ulteriori informazioni, vedere Classi di raccolte [ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[Caratteristiche CDefaultHash](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[Tratti CDefaultElement](../../atl/reference/cdefaultelementtraits-class.md)

`CHeapPtrElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="cheapptrelementtraitsinargtype"></a><a name="inargtype"></a>CHeapPtrElementTraits::INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe di raccolta.

```
typedef CHeapPtr<T, Allocator>& INARGTYPE;
```

## <a name="cheapptrelementtraitsoutargtype"></a><a name="outargtype"></a>CHeapPtrElementTraits::OUTARGTYPE

Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe di raccolta.

```
typedef T *& OUTARGTYPE;
```

## <a name="see-also"></a>Vedere anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[CComHeapPtr (classe)](../../atl/reference/ccomheapptr-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

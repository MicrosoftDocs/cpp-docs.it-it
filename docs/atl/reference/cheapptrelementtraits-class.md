---
description: 'Altre informazioni su: classe CHeapPtrElementTraits'
title: Classe CHeapPtrElementTraits
ms.date: 11/04/2016
f1_keywords:
- CHeapPtrElementTraits
- ATLCOLL/ATL::CHeapPtrElementTraits
- ATLCOLL/ATL::CHeapPtrElementTraits::INARGTYPE
- ATLCOLL/ATL::CHeapPtrElementTraits::OUTARGTYPE
helpviewer_keywords:
- CHeapPtrElementTraits class
ms.assetid: 910e0e06-3c8b-4242-bf00-b57eb74fbc77
ms.openlocfilehash: 7ca3d194a284f06e6b5baa0530cb49bc93d8510a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141609"
---
# <a name="cheapptrelementtraits-class"></a>Classe CHeapPtrElementTraits

Questa classe fornisce metodi, funzioni statiche e typedef utili per la creazione di raccolte di puntatori dell'heap.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<typename T, class Allocator = ATL::CCRTAllocator>
class CHeapPtrElementTraits :
   public CDefaultElementTraits<ATL::CHeapPtr<T, Allocator>>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di oggetto da archiviare nella classe della raccolta.

*Allocatore*<br/>
Classe di allocazione della memoria da utilizzare. Il valore predefinito è [CCRTAllocator](../../atl/reference/ccrtallocator-class.md).

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|[CHeapPtrElementTraits:: INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.|
|[CHeapPtrElementTraits:: OUTARGTYPE](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.|

## <a name="remarks"></a>Commenti

Questa classe fornisce metodi, funzioni statiche e typedef per agevolare la creazione di oggetti della classe di raccolta contenenti puntatori dell'heap. La classe `CHeapPtrList` deriva da `CHeapPtrElementTraits` .

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)

`CHeapPtrElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cheapptrelementtraitsinargtype"></a><a name="inargtype"></a> CHeapPtrElementTraits:: INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.

```
typedef CHeapPtr<T, Allocator>& INARGTYPE;
```

## <a name="cheapptrelementtraitsoutargtype"></a><a name="outargtype"></a> CHeapPtrElementTraits:: OUTARGTYPE

Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.

```
typedef T *& OUTARGTYPE;
```

## <a name="see-also"></a>Vedi anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[Classe CComHeapPtr](../../atl/reference/ccomheapptr-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

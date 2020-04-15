---
title: Classe CAutoVectorPtrElementTraits
ms.date: 11/04/2016
f1_keywords:
- CAutoVectorPtrElementTraits
- ATLCOLL/ATL::CAutoVectorPtrElementTraits
- ATLCOLL/ATL::CAutoVectorPtrElementTraits::INARGTYPE
- ATLCOLL/ATL::CAutoVectorPtrElementTraits::OUTARGTYPE
helpviewer_keywords:
- CAutoVectorPtrElementTraits class
ms.assetid: 16b81a56-55fb-46ca-b376-66a1884231a6
ms.openlocfilehash: 956fe39c4d3ba89bb9def2f996dca59905753edb
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318750"
---
# <a name="cautovectorptrelementtraits-class"></a>Classe CAutoVectorPtrElementTraits

Questa classe fornisce metodi, funzioni statiche e typedef utili quando si creano raccolte di puntatori intelligenti utilizzando operatori vector new e delete.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <typename T>
class CAutoVectorPtrElementTraits :
   public CDefaultElementTraits<ATL::CAutoVectorPtr<T>>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di puntatore.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoVectorPtrElementTraits::INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe di raccolta.|
|[CAutoVectorPtrElementTraits::OUTARGTYPE](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe di raccolta.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce metodi, funzioni statiche e typedef per facilitare la creazione di oggetti classe di raccolta contenenti puntatori intelligenti. A differenza [di CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md), questa classe utilizza operatori new e delete vettoriali.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[Caratteristiche CDefaultHash](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[Tratti CDefaultElement](../../atl/reference/cdefaultelementtraits-class.md)

`CAutoVectorPtrElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="cautovectorptrelementtraitsinargtype"></a><a name="inargtype"></a>CAutoVectorPtrElementTraits::INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe di raccolta.

```
typedef CAutoVectorPtr<T>& INARGTYPE;
```

## <a name="cautovectorptrelementtraitsoutargtype"></a><a name="outargtype"></a>CAutoVectorPtrElementTraits::OUTARGTYPE

Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe di raccolta.

```
typedef T*& OUTARGTYPE;
```

## <a name="see-also"></a>Vedere anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[CAutoVectorPtr (classe)](../../atl/reference/cautovectorptr-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

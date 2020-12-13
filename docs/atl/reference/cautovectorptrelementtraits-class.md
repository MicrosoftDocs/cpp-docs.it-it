---
description: 'Altre informazioni su: classe CAutoVectorPtrElementTraits'
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
ms.openlocfilehash: 571b85c1b11968289d372f9c349ffcdb754dc381
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147095"
---
# <a name="cautovectorptrelementtraits-class"></a>Classe CAutoVectorPtrElementTraits

Questa classe fornisce metodi, funzioni statiche e typedef utili per la creazione di raccolte di puntatori intelligenti mediante operatori new e Delete vettoriali.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

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

|Nome|Description|
|----------|-----------------|
|[CAutoVectorPtrElementTraits:: INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.|
|[CAutoVectorPtrElementTraits:: OUTARGTYPE](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.|

## <a name="remarks"></a>Commenti

Questa classe fornisce metodi, funzioni statiche e typedef per aiutare la creazione di oggetti della classe di raccolta contenenti puntatori intelligenti. A differenza di [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md), questa classe usa gli operatori vector New e DELETE.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)

`CAutoVectorPtrElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cautovectorptrelementtraitsinargtype"></a><a name="inargtype"></a> CAutoVectorPtrElementTraits:: INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.

```
typedef CAutoVectorPtr<T>& INARGTYPE;
```

## <a name="cautovectorptrelementtraitsoutargtype"></a><a name="outargtype"></a> CAutoVectorPtrElementTraits:: OUTARGTYPE

Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.

```
typedef T*& OUTARGTYPE;
```

## <a name="see-also"></a>Vedi anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[Classe CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

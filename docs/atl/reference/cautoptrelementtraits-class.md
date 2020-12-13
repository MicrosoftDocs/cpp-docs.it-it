---
description: 'Altre informazioni su: classe CAutoPtrElementTraits'
title: Classe CAutoPtrElementTraits
ms.date: 11/04/2016
f1_keywords:
- CAutoPtrElementTraits
- ATLCOLL/ATL::CAutoPtrElementTraits
- ATLCOLL/ATL::CAutoPtrElementTraits::INARGTYPE
- ATLCOLL/ATL::CAutoPtrElementTraits::OUTARGTYPE
helpviewer_keywords:
- CAutoPtrElementTraits class
ms.assetid: 777c1b14-6ab7-491f-b9a5-be149e71d4a2
ms.openlocfilehash: 2478f8251f0094aaa5cabf1c0dcc873c9c526cd8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147134"
---
# <a name="cautoptrelementtraits-class"></a>Classe CAutoPtrElementTraits

Questa classe fornisce metodi, funzioni statiche e typedef utili per la creazione di raccolte di puntatori intelligenti.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class CAutoPtrElementTraits
    : public CDefaultElementTraits<ATL::CAutoPtr<T>>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di puntatore.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|[CAutoPtrElementTraits:: INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.|
|[CAutoPtrElementTraits:: OUTARGTYPE](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.|

## <a name="remarks"></a>Commenti

Questa classe fornisce metodi, funzioni statiche e typedef per aiutare la creazione di oggetti della classe di raccolta contenenti puntatori intelligenti. Le classi [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) e [CAutoPtrList](../../atl/reference/cautoptrlist-class.md) derivano da `CAutoPtrElementTraits` . Se si compila una raccolta di puntatori intelligenti che richiede operatori vector New e DELETE, utilizzare [CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)

`CAutoPtrElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cautoptrelementtraitsinargtype"></a><a name="inargtype"></a> CAutoPtrElementTraits:: INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.

```
typedef CAutoPtr<T>& INARGTYPE;
```

## <a name="cautoptrelementtraitsoutargtype"></a><a name="outargtype"></a> CAutoPtrElementTraits:: OUTARGTYPE

Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.

```
typedef T *& OUTARGTYPE;
```

## <a name="see-also"></a>Vedi anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

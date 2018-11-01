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
ms.openlocfilehash: b71ac4163c1c34fbbe686cdff05319347db521cd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50459007"
---
# <a name="cautovectorptrelementtraits-class"></a>Classe CAutoVectorPtrElementTraits

Questa classe fornisce metodi e funzioni statiche typedef utili durante la creazione di raccolte di puntatori intelligenti utilizzando il vettore di nuovo ed eliminare gli operatori.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <typename T>
class CAutoVectorPtrElementTraits :
   public CDefaultElementTraits<ATL::CAutoVectorPtr<T>>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di puntatore.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoVectorPtrElementTraits::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|
|[CAutoVectorPtrElementTraits::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto di classe della raccolta.|

## <a name="remarks"></a>Note

Questa classe fornisce metodi e funzioni statiche TypeDef per la creazione di oggetti di classe di raccolta che contiene i puntatori intelligenti. A differenza [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md), questa classe Usa vettoriale nuovi ed eliminare gli operatori.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)

`CAutoVectorPtrElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="inargtype"></a>  CAutoVectorPtrElementTraits::INARGTYPE

Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.

```
typedef CAutoVectorPtr<T>& INARGTYPE;
```

##  <a name="outargtype"></a>  CAutoVectorPtrElementTraits::OUTARGTYPE

Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto di classe della raccolta.

```
typedef T*& OUTARGTYPE;
```

## <a name="see-also"></a>Vedere anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[Classe CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

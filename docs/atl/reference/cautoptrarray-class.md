---
title: Classe CAutoPtrArray
ms.date: 11/04/2016
f1_keywords:
- CAutoPtrArray
- ATLCOLL/ATL::CAutoPtrArray
- ATLCOLL/ATL::CAutoPtrArray::CAutoPtrArray
helpviewer_keywords:
- CAutoPtrArray class
ms.assetid: 880a70da-8c81-4427-8ac6-49aa8d424244
ms.openlocfilehash: c7a2a7e9592b120204582334f69e27e72cd7364f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50677942"
---
# <a name="cautoptrarray-class"></a>Classe CAutoPtrArray

Questa classe fornisce metodi utili quando si crea una matrice di puntatori intelligenti.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <typename E>
class CAutoPtrArray : public CAtlArray<
                        ATL::CAutoPtr<E>,
                        CAutoPtrElementTraits<E>>
```

#### <a name="parameters"></a>Parametri

*E*<br/>
Il tipo di puntatore.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoPtrArray::CAutoPtrArray](#cautoptrarray)|Costruttore.|

## <a name="remarks"></a>Note

Questa classe fornisce un costruttore e metodi da deriva [CAtlArray](../../atl/reference/catlarray-class.md) e [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md) per facilitare la creazione di un oggetto di classe di raccolta l'archiviazione dei puntatori intelligenti.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CAtlArray`

`CAutoPtrArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="cautoptrarray"></a>  CAutoPtrArray::CAutoPtrArray

Costruttore.

```
CAutoPtrArray() throw();
```

### <a name="remarks"></a>Note

Consente di inizializzare la matrice di puntatore intelligente.

## <a name="see-also"></a>Vedere anche

[Classe CAtlArray](../../atl/reference/catlarray-class.md)<br/>
[Classe CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)<br/>
[Classe CAutoPtrList](../../atl/reference/cautoptrlist-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

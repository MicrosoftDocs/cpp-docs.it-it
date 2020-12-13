---
description: 'Altre informazioni su: classe CAutoPtrArray'
title: Classe CAutoPtrArray
ms.date: 11/04/2016
f1_keywords:
- CAutoPtrArray
- ATLCOLL/ATL::CAutoPtrArray
- ATLCOLL/ATL::CAutoPtrArray::CAutoPtrArray
helpviewer_keywords:
- CAutoPtrArray class
ms.assetid: 880a70da-8c81-4427-8ac6-49aa8d424244
ms.openlocfilehash: 55f9382c82a1e242342d0d740c369a571c43f9ba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152580"
---
# <a name="cautoptrarray-class"></a>Classe CAutoPtrArray

Questa classe fornisce metodi utili per la creazione di una matrice di puntatori intelligenti.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
template <typename E>
class CAutoPtrArray : public CAtlArray<
                        ATL::CAutoPtr<E>,
                        CAutoPtrElementTraits<E>>
```

### <a name="parameters"></a>Parametri

*E*<br/>
Tipo di puntatore.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAutoPtrArray:: CAutoPtrArray](#cautoptrarray)|Costruttore.|

## <a name="remarks"></a>Commenti

Questa classe fornisce un costruttore e deriva i metodi da [CAtlArray](../../atl/reference/catlarray-class.md) e [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md) per facilitare la creazione di un oggetto classe di raccolta che archivia i puntatori intelligenti.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CAtlArray`

`CAutoPtrArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cautoptrarraycautoptrarray"></a><a name="cautoptrarray"></a> CAutoPtrArray:: CAutoPtrArray

Costruttore.

```cpp
CAutoPtrArray() throw();
```

### <a name="remarks"></a>Commenti

Inizializza la matrice del puntatore intelligente.

## <a name="see-also"></a>Vedi anche

[Classe CAtlArray](../../atl/reference/catlarray-class.md)<br/>
[Classe CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)<br/>
[Classe CAutoPtrList](../../atl/reference/cautoptrlist-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

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
ms.openlocfilehash: 93fc5cfea4ea655e57e785ca234df59fe10d6570
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318889"
---
# <a name="cautoptrarray-class"></a>Classe CAutoPtrArray

Questa classe fornisce metodi utili quando si costruisce una matrice di puntatori intelligenti.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <typename E>
class CAutoPtrArray : public CAtlArray<
                        ATL::CAutoPtr<E>,
                        CAutoPtrElementTraits<E>>
```

#### <a name="parameters"></a>Parametri

*E (in questo modo*<br/>
Tipo di puntatore.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoPtrArray::CAutoPtrArray](#cautoptrarray)|Costruttore.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce un costruttore e deriva i metodi da [CAtlArray](../../atl/reference/catlarray-class.md) e [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md) per facilitare la creazione di un oggetto classe di raccolta che archivia i puntatori intelligenti.

Per ulteriori informazioni, vedere Classi di raccolte [ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CAtlArray`

`CAutoPtrArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="cautoptrarraycautoptrarray"></a><a name="cautoptrarray"></a>CAutoPtrArray::CAutoPtrArray

Costruttore.

```
CAutoPtrArray() throw();
```

### <a name="remarks"></a>Osservazioni

Inizializza la matrice di puntatori intelligenti.

## <a name="see-also"></a>Vedere anche

[Classe CAtlArray](../../atl/reference/catlarray-class.md)<br/>
[Classe CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)<br/>
[CAutoPtrList (classe)](../../atl/reference/cautoptrlist-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

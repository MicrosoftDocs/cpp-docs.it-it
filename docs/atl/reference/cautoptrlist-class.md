---
title: CAutoPtrList (classe)
ms.date: 11/04/2016
f1_keywords:
- CAutoPtrList
- ATLCOLL/ATL::CAutoPtrList
- ATLCOLL/ATL::CAutoPtrList::CAutoPtrList
helpviewer_keywords:
- CAutoPtrList class
ms.assetid: 11de4aca-28b0-4ff2-a74a-cb602312ffbd
ms.openlocfilehash: 48c7ad6fe13c5f5fbbe5829c25ce1c27896841be
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318798"
---
# <a name="cautoptrlist-class"></a>CAutoPtrList (classe)

Questa classe fornisce metodi utili quando si costruisce un elenco di puntatori intelligenti.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<typename E>
class CAutoPtrList :
   public CAtlList<ATL::CAutoPtr<E>, CAutoPtrElementTraits<E>>
```

#### <a name="parameters"></a>Parametri

*E (in questo modo*<br/>
Tipo di puntatore.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoPtrList::CAutoPtrList](#cautoptrlist)|Costruttore.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce un costruttore e deriva i metodi da [CAtlList](../../atl/reference/catllist-class.md) e [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md) per facilitare la creazione di un oggetto elenco che archivia i puntatori intelligenti. La classe [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) fornisce una funzione simile per un oggetto matrice.

Per ulteriori informazioni, vedere Classi di raccolte [ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Elenco CAtlList](../../atl/reference/catllist-class.md)

`CAutoPtrList`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="cautoptrlistcautoptrlist"></a><a name="cautoptrlist"></a>CAutoPtrList::CAutoPtrList

Costruttore.

```
CAutoPtrList(UINT nBlockSize = 10) throw();
```

### <a name="parameters"></a>Parametri

*nBlockSize (dimensioni di blocco)*<br/>
La dimensione del blocco, con un valore predefinito di 10.

### <a name="remarks"></a>Osservazioni

La dimensione del blocco è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Blocchi di dimensioni maggiori riducono le chiamate alle routine di allocazione della memoria, ma utilizzano più risorse.

## <a name="see-also"></a>Vedere anche

[Classe CAtlList](../../atl/reference/catllist-class.md)<br/>
[Classe CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

---
title: Classe CAutoPtrArray | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CAutoPtrArray
- ATLCOLL/ATL::CAutoPtrArray
- ATLCOLL/ATL::CAutoPtrArray::CAutoPtrArray
dev_langs:
- C++
helpviewer_keywords:
- CAutoPtrArray class
ms.assetid: 880a70da-8c81-4427-8ac6-49aa8d424244
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d83f98de4f1d07fbebdd07186729453d2ef1d3b2
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44108733"
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

[Classe CAtlArray](../../atl/reference/catlarray-class.md)   
[Classe CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)   
[Classe CAutoPtrList](../../atl/reference/cautoptrlist-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)

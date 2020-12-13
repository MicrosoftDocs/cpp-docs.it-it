---
description: 'Altre informazioni su: classe CPrimitiveElementTraits'
title: Classe CPrimitiveElementTraits
ms.date: 11/04/2016
f1_keywords:
- CPrimitiveElementTraits
- ATLCOLL/ATL::CPrimitiveElementTraits
- ATLCOLL/ATL::CPrimitiveElementTraits::INARGTYPE
- ATLCOLL/ATL::CPrimitiveElementTraits::OUTARGTYPE
helpviewer_keywords:
- CPrimitiveElementTraits class
ms.assetid: 21c1cea8-2c5a-486c-b65c-85490f3ed4e6
ms.openlocfilehash: a9a47d9e6268ee6cc858d85e9236b00c270e8841
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141076"
---
# <a name="cprimitiveelementtraits-class"></a>Classe CPrimitiveElementTraits

Questa classe fornisce i metodi e le funzioni predefiniti per una classe di raccolta composta da tipi di dati primitivi.

## <a name="syntax"></a>Sintassi

```
template <typename T>
class CPrimitiveElementTraits : public CDefaultElementTraits<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati da archiviare nell'oggetto classe della raccolta.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|[CPrimitiveElementTraits::INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.|
|[CPrimitiveElementTraits::OUTARGTYPE](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.|

## <a name="remarks"></a>Commenti

Questa classe fornisce funzioni e metodi statici predefiniti per lo stato di trasferimento, copia, confronto e hashing degli elementi del tipo di dati primitivi archiviati in un oggetto classe di raccolta.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)

`CPrimitiveElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cprimitiveelementtraitsinargtype"></a><a name="inargtype"></a> CPrimitiveElementTraits::INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.

```
typedef T INARGTYPE;
```

## <a name="cprimitiveelementtraitsoutargtype"></a><a name="outargtype"></a> CPrimitiveElementTraits::OUTARGTYPE

Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.

```
typedef T& OUTARGTYPE;
```

## <a name="see-also"></a>Vedi anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

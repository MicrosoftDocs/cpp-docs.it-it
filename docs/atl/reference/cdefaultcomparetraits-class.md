---
title: Classe CDefaultCompareTraits
ms.date: 11/04/2016
f1_keywords:
- CDefaultCompareTraits
- ATLCOLL/ATL::CDefaultCompareTraits
- ATLCOLL/ATL::CDefaultCompareTraits::CompareElements
- ATLCOLL/ATL::CDefaultCompareTraits::CompareElementsOrdered
helpviewer_keywords:
- CDefaultCompareTraits class
ms.assetid: a17e2740-e7b4-48f2-aeb7-c80ce84b63f7
ms.openlocfilehash: c5f4ab3737838af11501c4a0f2037b57087939c9
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57273595"
---
# <a name="cdefaultcomparetraits-class"></a>Classe CDefaultCompareTraits

Questa classe fornisce funzioni di confronto di elemento predefinite.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class CDefaultCompareTraits
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDefaultCompareTraits::CompareElements](#compareelements)|(Statico) Chiamare questa funzione per confrontare due elementi per verificarne l'uguaglianza.|
|[CDefaultCompareTraits::CompareElementsOrdered](#compareelementsordered)|(Statico) Chiamare questa funzione per determinare l'elemento supera e inferiore.|

## <a name="remarks"></a>Note

Questa classe contiene due funzioni statiche per il confronto di elementi archiviati in un oggetto di classe di raccolta. Questa classe viene utilizzata per la [classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md).

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="compareelements"></a>  CDefaultCompareTraits::CompareElements

Chiamare questa funzione per confrontare due elementi per verificarne l'uguaglianza.

```
static bool CompareElements(const T& element1, const T& element2);
```

### <a name="parameters"></a>Parametri

*element1*<br/>
Primo elemento.

*element2*<br/>
Il secondo elemento.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali e false in caso contrario.

### <a name="remarks"></a>Note

L'implementazione predefinita di questa funzione è l'uguaglianza (**==**) operatore. Per gli oggetti diversi da tipi di dati semplici, questa funzione potrebbe essere necessario eseguire l'override.

##  <a name="compareelementsordered"></a>  CDefaultCompareTraits::CompareElementsOrdered

Chiamare questa funzione per determinare l'elemento supera e inferiore.

```
static int CompareElementsOrdered(const T& element1, const T& element2);
```

### <a name="parameters"></a>Parametri

*element1*<br/>
Primo elemento.

*element2*<br/>
Il secondo elemento.

### <a name="return-value"></a>Valore restituito

Restituisce un intero in base alla tabella seguente:

|Condizione|Valore restituito|
|---------------|------------------|
|*element1* < *element2*|<0|
|*element1* == *element2*|0|
|*element1* > *element2*|>0|

### <a name="remarks"></a>Note

L'implementazione predefinita di questa funzione utilizza il **==**, **\<**, e **>** operatori. Per gli oggetti diversi da tipi di dati semplici, questa funzione potrebbe essere necessario eseguire l'override.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)

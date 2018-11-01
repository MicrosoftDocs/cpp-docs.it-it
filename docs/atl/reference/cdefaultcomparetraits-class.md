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
ms.openlocfilehash: b7f51ccd266fce1b5d614dfe2c725e20fde6f297
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50575305"
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

*Element1*<br/>
Primo elemento.

*Elemento2*<br/>
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

*Element1*<br/>
Primo elemento.

*Elemento2*<br/>
Il secondo elemento.

### <a name="return-value"></a>Valore restituito

Restituisce un intero in base alla tabella seguente:

|Condizione|Valore restituito|
|---------------|------------------|
|*element1* < *Elemento2*|<0|
|*element1* == *Elemento2*|0|
|*element1* > *Elemento2*|>0|

### <a name="remarks"></a>Note

L'implementazione predefinita di questa funzione utilizza il **==**, **\<**, e **>** operatori. Per gli oggetti diversi da tipi di dati semplici, questa funzione potrebbe essere necessario eseguire l'override.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)

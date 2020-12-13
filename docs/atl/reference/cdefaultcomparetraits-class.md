---
description: 'Altre informazioni su: classe CDefaultCompareTraits'
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
ms.openlocfilehash: dcb366cdcd99a6eed2b641be290ccc4913a81476
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141908"
---
# <a name="cdefaultcomparetraits-class"></a>Classe CDefaultCompareTraits

Questa classe fornisce funzioni di confronto degli elementi predefinite.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class CDefaultCompareTraits
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDefaultCompareTraits:: CompareElements](#compareelements)|Statico Chiamare questa funzione per confrontare due elementi per verificarne l'uguaglianza.|
|[CDefaultCompareTraits::CompareElementsOrdered](#compareelementsordered)|Statico Chiamare questa funzione per determinare l'elemento maggiore e minore.|

## <a name="remarks"></a>Commenti

Questa classe contiene due funzioni statiche per il confronto di elementi archiviati in un oggetto classe di raccolta. Questa classe viene utilizzata dalla [classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md).

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cdefaultcomparetraitscompareelements"></a><a name="compareelements"></a> CDefaultCompareTraits:: CompareElements

Chiamare questa funzione per confrontare due elementi per verificarne l'uguaglianza.

```
static bool CompareElements(const T& element1, const T& element2);
```

### <a name="parameters"></a>Parametri

*element1*<br/>
Primo elemento.

*element2*<br/>
Secondo elemento.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali; in caso contrario, false.

### <a name="remarks"></a>Commenti

L'implementazione predefinita di questa funzione è l'operatore di uguaglianza ( **==** ). Per oggetti diversi dai tipi di dati semplici, potrebbe essere necessario eseguire l'override di questa funzione.

## <a name="cdefaultcomparetraitscompareelementsordered"></a><a name="compareelementsordered"></a> CDefaultCompareTraits::CompareElementsOrdered

Chiamare questa funzione per determinare l'elemento maggiore e minore.

```
static int CompareElementsOrdered(const T& element1, const T& element2);
```

### <a name="parameters"></a>Parametri

*element1*<br/>
Primo elemento.

*element2*<br/>
Secondo elemento.

### <a name="return-value"></a>Valore restituito

Restituisce un Integer in base alla tabella seguente:

|Condizione|Valore restituito|
|---------------|------------------|
|*Element1*  <  *element2*|<0|
|*Element1*  ==  *element2*|0|
|*Element1*  >  *element2*|>0|

### <a name="remarks"></a>Commenti

L'implementazione predefinita di questa funzione utilizza gli **==** **\<**, and **>** operatori,. Per oggetti diversi dai tipi di dati semplici, potrebbe essere necessario eseguire l'override di questa funzione.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

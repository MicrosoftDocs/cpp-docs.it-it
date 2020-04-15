---
title: CDefaultCompareIts (classe)
ms.date: 11/04/2016
f1_keywords:
- CDefaultCompareTraits
- ATLCOLL/ATL::CDefaultCompareTraits
- ATLCOLL/ATL::CDefaultCompareTraits::CompareElements
- ATLCOLL/ATL::CDefaultCompareTraits::CompareElementsOrdered
helpviewer_keywords:
- CDefaultCompareTraits class
ms.assetid: a17e2740-e7b4-48f2-aeb7-c80ce84b63f7
ms.openlocfilehash: 8262800ef613424c37c53931d97dd4b1b1a71321
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327068"
---
# <a name="cdefaultcomparetraits-class"></a>CDefaultCompareIts (classe)

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

|Nome|Descrizione|
|----------|-----------------|
|[CDefaultCompareTraits::CompareElements](#compareelements)|(Statico) Chiamare questa funzione per confrontare due elementi per l'uguaglianza.|
|[CDefaultCompareTraits::CompareElementsOrdered](#compareelementsordered)|(Statico) Chiamare questa funzione per determinare l'elemento maggiore e minore.|

## <a name="remarks"></a>Osservazioni

Questa classe contiene due funzioni statiche per il confronto di elementi archiviati in un oggetto classe di raccolta. Questa classe viene utilizzata dalla classe [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md).

Per ulteriori informazioni, vedere Classi di raccolte [ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="cdefaultcomparetraitscompareelements"></a><a name="compareelements"></a>CDefaultCompareTraits::CompareElements

Chiamare questa funzione per confrontare due elementi per l'uguaglianza.

```
static bool CompareElements(const T& element1, const T& element2);
```

### <a name="parameters"></a>Parametri

*elemento1*<br/>
Primo elemento.

*elemento2*<br/>
Secondo elemento.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali, false in caso contrario.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa**==** funzione è l'operatore di uguaglianza ( ). Per gli oggetti diversi dai tipi di dati semplici, potrebbe essere necessario eseguire l'override di questa funzione.

## <a name="cdefaultcomparetraitscompareelementsordered"></a><a name="compareelementsordered"></a>CDefaultCompareTraits::CompareElementsOrdered

Chiamare questa funzione per determinare l'elemento maggiore e minore.

```
static int CompareElementsOrdered(const T& element1, const T& element2);
```

### <a name="parameters"></a>Parametri

*elemento1*<br/>
Primo elemento.

*elemento2*<br/>
Secondo elemento.

### <a name="return-value"></a>Valore restituito

Restituisce un numero intero basato sulla tabella seguente:

|Condizione|Valore restituito|
|---------------|------------------|
|*elemento1* < *elemento2*|<0|
|*elemento1* == *elemento2*|0|
|*elemento1* > *elemento2*|>0|

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di **==** **\<** questa **>** funzione utilizza gli operatori , e . Per gli oggetti diversi dai tipi di dati semplici, potrebbe essere necessario eseguire l'override di questa funzione.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

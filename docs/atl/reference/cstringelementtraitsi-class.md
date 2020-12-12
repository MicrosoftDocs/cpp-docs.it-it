---
description: 'Altre informazioni su: classe CStringElementTraitsI'
title: Classe CStringElementTraitsI
ms.date: 11/04/2016
f1_keywords:
- CStringElementTraitsI
- ATLCOLL/ATL::CStringElementTraitsI
- ATLCOLL/ATL::CStringElementTraitsI::INARGTYPE
- ATLCOLL/ATL::CStringElementTraitsI::OUTARGTYPE
- ATLCOLL/ATL::CStringElementTraitsI::CompareElements
- ATLCOLL/ATL::CStringElementTraitsI::CompareElementsOrdered
- ATLCOLL/ATL::CStringElementTraitsI::Hash
helpviewer_keywords:
- CStringElementTraitsI class
ms.assetid: c23f92b1-91e5-400f-96ed-258b02622b7a
ms.openlocfilehash: 0a626677f4a62805933b2effb4811394626374a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140401"
---
# <a name="cstringelementtraitsi-class"></a>Classe CStringElementTraitsI

Questa classe fornisce funzioni statiche correlate alle stringhe archiviate negli oggetti classe della raccolta. È simile a [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md), ma esegue confronti senza distinzione tra maiuscole e minuscole.

## <a name="syntax"></a>Sintassi

```
template <typename T, class CharTraits = CDefaultCharTraits<T ::XCHAR>>
class CStringElementTraitsI : public CElementTraitsBase<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|[CStringElementTraitsI:: INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.|
|[CStringElementTraitsI:: OUTARGTYPE](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CStringElementTraitsI:: CompareElements](#compareelements)|Chiamare questa funzione statica per confrontare due elementi stringa per verificarne l'uguaglianza, ignorando le differenze nel caso.|
|[CStringElementTraitsI:: CompareElementsOrdered](#compareelementsordered)|Chiamare questa funzione statica per confrontare due elementi stringa, ignorando le differenze nel caso.|
|[CStringElementTraitsI:: hash](#hash)|Chiamare questa funzione statica per calcolare un valore hash per l'elemento stringa specificato.|

## <a name="remarks"></a>Commenti

Questa classe fornisce funzioni statiche per il confronto di stringhe e per la creazione di un valore hash. Queste funzioni sono utili quando si usa una classe Collection per archiviare dati basati su stringa. Utilizzare [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md) quando gli oggetti stringa devono essere associati a come riferimenti.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

`CStringElementTraitsI`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cstringelementtraitsicompareelements"></a><a name="compareelements"></a> CStringElementTraitsI:: CompareElements

Chiamare questa funzione statica per confrontare due elementi stringa per verificarne l'uguaglianza, ignorando le differenze nel caso.

```
static bool CompareElements(INARGTYPE str1, INARGTYPE str2) throw();
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo elemento stringa.

*str2*<br/>
Secondo elemento di stringa.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali; in caso contrario, false.

### <a name="remarks"></a>Commenti

Il confronto non fa distinzione tra maiuscole e minuscole.

## <a name="cstringelementtraitsicompareelementsordered"></a><a name="compareelementsordered"></a> CStringElementTraitsI:: CompareElementsOrdered

Chiamare questa funzione statica per confrontare due elementi stringa, ignorando le differenze nel caso.

```
static int CompareElementsOrdered(INARGTYPE str1, INARGTYPE str2) throw();
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo elemento stringa.

*str2*<br/>
Secondo elemento di stringa.

### <a name="return-value"></a>Valore restituito

Zero se le stringhe sono identiche, < 0 se *str1* è minore di *str2* oppure > 0 se *str1* è maggiore di *str2*. Per eseguire i confronti, viene usato il metodo [CStringT:: compare](../../atl-mfc-shared/reference/cstringt-class.md#compare) .

### <a name="remarks"></a>Commenti

Il confronto non fa distinzione tra maiuscole e minuscole.

## <a name="cstringelementtraitsihash"></a><a name="hash"></a> CStringElementTraitsI:: hash

Chiamare questa funzione statica per calcolare un valore hash per l'elemento stringa specificato.

```
static ULONG Hash(INARGTYPE str) throw();
```

### <a name="parameters"></a>Parametri

*str*<br/>
Elemento stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un valore hash, calcolato utilizzando il contenuto della stringa.

## <a name="cstringelementtraitsiinargtype"></a><a name="inargtype"></a> CStringElementTraitsI:: INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.

```
typedef T::PCXSTR INARGTYPE;
```

## <a name="cstringelementtraitsioutargtype"></a><a name="outargtype"></a> CStringElementTraitsI:: OUTARGTYPE

Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.

```
typedef T& OUTARGTYPE;
```

## <a name="see-also"></a>Vedi anche

[Classe CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CStringElementTraits](../../atl/reference/cstringelementtraits-class.md)

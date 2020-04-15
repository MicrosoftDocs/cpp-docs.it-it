---
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
ms.openlocfilehash: 32980e19443cb17a3a688c85ff21195c60ed2124
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330594"
---
# <a name="cstringelementtraitsi-class"></a>Classe CStringElementTraitsI

Questa classe fornisce funzioni statiche correlate alle stringhe archiviate negli oggetti della classe di raccolta. È simile a [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md), ma esegue confronti senza distinzione tra maiuscole e minuscole.

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

|Nome|Descrizione|
|----------|-----------------|
|[CStringElementTraitsI::INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe di raccolta.|
|[CStringElementTraitsI::OUTARGTYPE](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe di raccolta.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringElementTraitsI::CompareElements](#compareelements)|Chiamare questa funzione statica per confrontare due elementi stringa per l'uguaglianza, ignorando le differenze nel caso.|
|[CStringElementTraitsI::CompareElementsOrdered](#compareelementsordered)|Chiamare questa funzione statica per confrontare due elementi stringa, ignorando le differenze nel caso.|
|[CStringElementTraitsI::Hash](#hash)|Chiamare questa funzione statica per calcolare un valore hash per l'elemento stringa specificato.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce funzioni statiche per il confronto di stringhe e per la creazione di un valore hash. Queste funzioni sono utili quando si usa una classe di raccolta per archiviare dati basati su stringa. Utilizzare [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md) quando gli oggetti stringa devono essere trattati come riferimenti.

Per ulteriori informazioni, vedere Classi di raccolte [ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

`CStringElementTraitsI`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="cstringelementtraitsicompareelements"></a><a name="compareelements"></a>CStringElementTraitsI::CompareElements

Chiamare questa funzione statica per confrontare due elementi stringa per l'uguaglianza, ignorando le differenze nel caso.

```
static bool CompareElements(INARGTYPE str1, INARGTYPE str2) throw();
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo elemento stringa.

*str2 (in cui*<br/>
Secondo elemento stringa.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali, false in caso contrario.

### <a name="remarks"></a>Osservazioni

I confronti non fanno distinzione tra maiuscole e minuscole.

## <a name="cstringelementtraitsicompareelementsordered"></a><a name="compareelementsordered"></a>CStringElementTraitsI::CompareElementsOrdered

Chiamare questa funzione statica per confrontare due elementi stringa, ignorando le differenze nel caso.

```
static int CompareElementsOrdered(INARGTYPE str1, INARGTYPE str2) throw();
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo elemento stringa.

*str2 (in cui*<br/>
Secondo elemento stringa.

### <a name="return-value"></a>Valore restituito

zero se le stringhe sono identiche, < 0 se *str1* è minore di *str2*o > 0 se *str1* è maggiore di *str2*. Il [CStringT::Compare](../../atl-mfc-shared/reference/cstringt-class.md#compare) metodo viene utilizzato per eseguire i confronti.

### <a name="remarks"></a>Osservazioni

I confronti non fanno distinzione tra maiuscole e minuscole.

## <a name="cstringelementtraitsihash"></a><a name="hash"></a>CStringElementTraitsI::Hash

Chiamare questa funzione statica per calcolare un valore hash per l'elemento stringa specificato.

```
static ULONG Hash(INARGTYPE str) throw();
```

### <a name="parameters"></a>Parametri

*Str*<br/>
Elemento stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un valore hash, calcolato utilizzando il contenuto della stringa.

## <a name="cstringelementtraitsiinargtype"></a><a name="inargtype"></a>CStringElementTraitsI::INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe di raccolta.

```
typedef T::PCXSTR INARGTYPE;
```

## <a name="cstringelementtraitsioutargtype"></a><a name="outargtype"></a>CStringElementTraitsI::OUTARGTYPE

Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe di raccolta.

```
typedef T& OUTARGTYPE;
```

## <a name="see-also"></a>Vedere anche

[CElementTraitsBase (classe)](../../atl/reference/celementtraitsbase-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CStringElementTraits](../../atl/reference/cstringelementtraits-class.md)

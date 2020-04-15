---
title: Classe CStringRefElementTraits
ms.date: 11/04/2016
f1_keywords:
- CStringRefElementTraits
- ATLCOLL/ATL::CStringRefElementTraits
- ATLCOLL/ATL::CStringRefElementTraits::CompareElements
- ATLCOLL/ATL::CStringRefElementTraits::CompareElementsOrdered
- ATLCOLL/ATL::CStringRefElementTraits::Hash
helpviewer_keywords:
- CStringRefElementTraits class
ms.assetid: cc15062d-5627-46cc-ac2b-1744afdc2dbd
ms.openlocfilehash: b4dd76b9592b255a1553be3ca7a249f58fb2672e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330575"
---
# <a name="cstringrefelementtraits-class"></a>Classe CStringRefElementTraits

Questa classe fornisce funzioni statiche correlate alle stringhe archiviate negli oggetti della classe di raccolta. Gli oggetti stringa vengono trattati come riferimenti.

## <a name="syntax"></a>Sintassi

```
template <typename T>
class CStringRefElementTraits : public CElementTraitsBase<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringRefElementTraits::CompareElements](#compareelements)|Chiamare questa funzione statica per confrontare due elementi stringa per l'uguaglianza.|
|[CStringRefElementTraits::CompareElementsOrdered](#compareelementsordered)|Chiamare questa funzione statica per confrontare due elementi stringa.|
|[CStringRefElementTraits::Hash](#hash)|Chiamare questa funzione statica per calcolare un valore hash per l'elemento stringa specificato.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce funzioni statiche per il confronto di stringhe e per la creazione di un valore hash. Queste funzioni sono utili quando si usa una classe di raccolta per archiviare dati basati su stringa. A differenza di [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md) e [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md) `CStringRefElementTraits` , fa sì che `CString` gli argomenti vengano passati come riferimenti **const.** `CString&`

Per ulteriori informazioni, vedere Classi di raccolte [ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

`CStringRefElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="cstringrefelementtraitscompareelements"></a><a name="compareelements"></a>CStringRefElementTraits::CompareElements

Chiamare questa funzione statica per confrontare due elementi stringa per l'uguaglianza.

```
static bool CompareElements(INARGTYPE element1, INARGTYPE element2) throw();
```

### <a name="parameters"></a>Parametri

*elemento1*<br/>
Primo elemento stringa.

*elemento2*<br/>
Secondo elemento stringa.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali, false in caso contrario.

## <a name="cstringrefelementtraitscompareelementsordered"></a><a name="compareelementsordered"></a>CStringRefElementTraits::CompareElementsOrdered

Chiamare questa funzione statica per confrontare due elementi stringa.

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

## <a name="cstringrefelementtraitshash"></a><a name="hash"></a>CStringRefElementTraits::Hash

Chiamare questa funzione statica per calcolare un valore hash per l'elemento stringa specificato.

```
static ULONG Hash(INARGTYPE str) throw();
```

### <a name="parameters"></a>Parametri

*Str*<br/>
Elemento stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un valore hash, calcolato utilizzando il contenuto della stringa.

## <a name="see-also"></a>Vedere anche

[CElementTraitsBase (classe)](../../atl/reference/celementtraitsbase-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

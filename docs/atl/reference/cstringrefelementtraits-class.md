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
ms.openlocfilehash: 6fa8772033a5a82940cf30b2a73d6ea356269d67
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226555"
---
# <a name="cstringrefelementtraits-class"></a>Classe CStringRefElementTraits

Questa classe fornisce funzioni statiche correlate alle stringhe archiviate negli oggetti classe della raccolta. Gli oggetti stringa vengono gestiti come riferimenti.

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
|[CStringRefElementTraits:: CompareElements](#compareelements)|Chiamare questa funzione statica per confrontare due elementi stringa per verificarne l'uguaglianza.|
|[CStringRefElementTraits:: CompareElementsOrdered](#compareelementsordered)|Chiamare questa funzione statica per confrontare due elementi di stringa.|
|[CStringRefElementTraits:: hash](#hash)|Chiamare questa funzione statica per calcolare un valore hash per l'elemento stringa specificato.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce funzioni statiche per il confronto di stringhe e per la creazione di un valore hash. Queste funzioni sono utili quando si usa una classe Collection per archiviare dati basati su stringa. A differenza di [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md) e [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md), `CStringRefElementTraits` fa sì che gli `CString` argomenti vengano passati come **`const`** `CString&` riferimenti.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

`CStringRefElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cstringrefelementtraitscompareelements"></a><a name="compareelements"></a>CStringRefElementTraits:: CompareElements

Chiamare questa funzione statica per confrontare due elementi stringa per verificarne l'uguaglianza.

```
static bool CompareElements(INARGTYPE element1, INARGTYPE element2) throw();
```

### <a name="parameters"></a>Parametri

*element1*<br/>
Primo elemento stringa.

*element2*<br/>
Secondo elemento di stringa.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali; in caso contrario, false.

## <a name="cstringrefelementtraitscompareelementsordered"></a><a name="compareelementsordered"></a>CStringRefElementTraits:: CompareElementsOrdered

Chiamare questa funzione statica per confrontare due elementi di stringa.

```
static int CompareElementsOrdered(INARGTYPE str1, INARGTYPE str2) throw();
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo elemento stringa.

*str2*<br/>
Secondo elemento di stringa.

### <a name="return-value"></a>Valore restituito

Zero se le stringhe sono identiche, < 0 se *str1* è minore di *str2*oppure > 0 se *str1* è maggiore di *str2*. Per eseguire i confronti, viene usato il metodo [CStringT:: compare](../../atl-mfc-shared/reference/cstringt-class.md#compare) .

## <a name="cstringrefelementtraitshash"></a><a name="hash"></a>CStringRefElementTraits:: hash

Chiamare questa funzione statica per calcolare un valore hash per l'elemento stringa specificato.

```
static ULONG Hash(INARGTYPE str) throw();
```

### <a name="parameters"></a>Parametri

*str*<br/>
Elemento stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un valore hash, calcolato utilizzando il contenuto della stringa.

## <a name="see-also"></a>Vedere anche

[Classe CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

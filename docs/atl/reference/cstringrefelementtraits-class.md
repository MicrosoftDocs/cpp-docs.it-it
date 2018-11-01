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
ms.openlocfilehash: 86b8db169cbb0f0f43ebf37a8ea9bf959ee0ee06
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50633343"
---
# <a name="cstringrefelementtraits-class"></a>Classe CStringRefElementTraits

Questa classe fornisce funzioni statiche relative alle stringhe negli oggetti di classe di raccolta. Gli oggetti stringa sono trattati come riferimenti.

## <a name="syntax"></a>Sintassi

```
template <typename T>
class CStringRefElementTraits : public CElementTraitsBase<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringRefElementTraits::CompareElements](#compareelements)|Chiamare questa funzione statica per confrontare due elementi della stringa per verificarne l'uguaglianza.|
|[CStringRefElementTraits::CompareElementsOrdered](#compareelementsordered)|Chiamare questa funzione statica per confrontare due elementi della stringa.|
|[CStringRefElementTraits::Hash](#hash)|Chiamare questa funzione statica per calcolare un valore hash per l'elemento di stringa specificata.|

## <a name="remarks"></a>Note

Questa classe fornisce funzioni statiche per il confronto di stringhe e per la creazione di un valore hash. Queste funzioni sono utili quando si usa una classe di raccolta per archiviare i dati basati su stringa. A differenza [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md) e [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md), `CStringRefElementTraits` fa sì che il `CString` da passare come argomenti **const** `CString&` fa riferimento.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

`CStringRefElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="compareelements"></a>  CStringRefElementTraits::CompareElements

Chiamare questa funzione statica per confrontare due elementi della stringa per verificarne l'uguaglianza.

```
static bool CompareElements(INARGTYPE element1, INARGTYPE element2) throw();
```

### <a name="parameters"></a>Parametri

*Element1*<br/>
Il primo elemento di stringa.

*Elemento2*<br/>
Il secondo elemento di stringa.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali e false in caso contrario.

##  <a name="compareelementsordered"></a>  CStringRefElementTraits::CompareElementsOrdered

Chiamare questa funzione statica per confrontare due elementi della stringa.

```
static int CompareElementsOrdered(INARGTYPE str1, INARGTYPE str2) throw();
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Il primo elemento di stringa.

*str2*<br/>
Il secondo elemento di stringa.

### <a name="return-value"></a>Valore restituito

Zero se le stringhe sono identiche, < 0 se *str1* è minore di *str2*, o > 0 se *str1* è maggiore di quella *str2*. Il [CStringT::Compare](../../atl-mfc-shared/reference/cstringt-class.md#compare) metodo viene utilizzato per eseguire i confronti.

##  <a name="hash"></a>  CStringRefElementTraits::Hash

Chiamare questa funzione statica per calcolare un valore hash per l'elemento di stringa specificata.

```
static ULONG Hash(INARGTYPE str) throw();
```

### <a name="parameters"></a>Parametri

*str*<br/>
L'elemento di stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un valore hash, calcolato usando il contenuto della stringa.

## <a name="see-also"></a>Vedere anche

[Classe CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

---
title: Classe CStringElementTraits
ms.date: 11/04/2016
f1_keywords:
- CStringElementTraits
- CSTRINGT/ATL::CStringElementTraits
- CSTRINGT/ATL::CStringElementTraits::INARGTYPE
- CSTRINGT/ATL::CStringElementTraits::OUTARGTYPE
- CSTRINGT/ATL::CStringElementTraits::CompareElements
- CSTRINGT/ATL::CStringElementTraits::CompareElementsOrdered
- CSTRINGT/ATL::CStringElementTraits::CopyElements
- CSTRINGT/ATL::CStringElementTraits::Hash
- CSTRINGT/ATL::CStringElementTraits::RelocateElements
helpviewer_keywords:
- CStringElementTraits class
ms.assetid: 74d7134b-099d-4455-bf91-3e68ccbf95bc
ms.openlocfilehash: 078cfd5ff93bfcd8acc747904ea05e6a2e762bc1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330615"
---
# <a name="cstringelementtraits-class"></a>Classe CStringElementTraits

Questa classe fornisce funzioni statiche `CString` utilizzate dalle classi di insiemi che archiviano gli oggetti.

## <a name="syntax"></a>Sintassi

```
template <typename T>
class CStringElementTraits
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Caratteristiche di CStringElement::INARGTYPECStringElement Traits::INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe di raccolta.|
|[Caratteristiche di CStringElement::OUTARGTYPE](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe di raccolta.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringElementTraits::CompareElements](#compareelements)|(Statico) Chiamare questa funzione per confrontare due elementi stringa per l'uguaglianza.|
|[CStringElementTraits::CompareElementsOrdered](#compareelementsordered)|(Statico) Chiamare questa funzione per confrontare due elementi stringa.|
|[CStringElementTraits::CopyElements](#copyelements)|(Statico) Chiamare questa funzione `CString` per copiare gli elementi archiviati in un oggetto classe di raccolta.|
|[CStringElementTraits::Hash](#hash)|(Statico) Chiamare questa funzione per calcolare un valore hash per l'elemento stringa specificato.|
|[CStringElementTraits::RelocateElements](#relocateelements)|(Statico) Chiamare questa funzione `CString` per riposizionare gli elementi archiviati in un oggetto classe di raccolta.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce funzioni statiche per la copia, lo spostamento e il confronto di stringhe e per la creazione di un valore hash. Queste funzioni sono utili quando si usa una classe di raccolta per archiviare dati basati su stringa. Utilizzare [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md) quando sono necessari confronti senza distinzione tra maiuscole e minuscole. Utilizzare [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md) quando gli oggetti stringa devono essere trattati come riferimenti.

Per ulteriori informazioni, vedere Classi di raccolte [ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** cstringt.h

## <a name="cstringelementtraitscompareelements"></a><a name="compareelements"></a>CStringElementTraits::CompareElements

Chiamare questa funzione statica per confrontare due elementi stringa per l'uguaglianza.

```
static bool CompareElements(INARGTYPE str1, INARGTYPE str2);
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo elemento stringa.

*str2 (in cui*<br/>
Secondo elemento stringa.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali, false in caso contrario.

## <a name="cstringelementtraitscompareelementsordered"></a><a name="compareelementsordered"></a>CStringElementTraits::CompareElementsOrdered

Chiamare questa funzione statica per confrontare due elementi stringa.

```
static int CompareElementsOrdered(INARGTYPE str1, INARGTYPE str2);
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo elemento stringa.

*str2 (in cui*<br/>
Secondo elemento stringa.

### <a name="return-value"></a>Valore restituito

zero se le stringhe sono identiche, < 0 se *str1* è minore di *str2*o > 0 se *str1* è maggiore di *str2*. Il [CStringT::Compare](../../atl-mfc-shared/reference/cstringt-class.md#compare) metodo viene utilizzato per eseguire i confronti.

## <a name="cstringelementtraitscopyelements"></a><a name="copyelements"></a>CStringElementTraits::CopyElements

Chiamare questa funzione `CString` statica per copiare gli elementi archiviati in un oggetto classe di raccolta.

```
static void CopyElements(
    T* pDest,
    const T* pSrc,
    size_t nElements);
```

### <a name="parameters"></a>Parametri

*pDest*<br/>
Puntatore al primo elemento che riceverà i dati copiati.

*pSrc*<br/>
Puntatore al primo elemento da copiare.

*nElementi*<br/>
Numero degli elementi da copiare.

### <a name="remarks"></a>Osservazioni

Gli elementi di origine e di destinazione non devono sovrapporsi.

## <a name="cstringelementtraitshash"></a><a name="hash"></a>CStringElementTraits::Hash

Chiamare questa funzione statica per calcolare un valore hash per l'elemento stringa specificato.

```
static ULONG Hash(INARGTYPE str);
```

### <a name="parameters"></a>Parametri

*Str*<br/>
Elemento stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un valore hash, calcolato utilizzando il contenuto della stringa.

## <a name="cstringelementtraitsinargtype"></a><a name="inargtype"></a>Caratteristiche di CStringElement::INARGTYPECStringElement Traits::INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe di raccolta.

```
typedef T::PCXSTR INARGTYPE;
```

## <a name="cstringelementtraitsoutargtype"></a><a name="outargtype"></a>Caratteristiche di CStringElement::OUTARGTYPE

Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe di raccolta.

```
typedef T& OUTARGTYPE;
```

## <a name="cstringelementtraitsrelocateelements"></a><a name="relocateelements"></a>CStringElementTraits::RelocateElements

Chiamare questa funzione statica per riposizionare `CString` gli elementi archiviati in un oggetto classe di raccolta.

```
static void RelocateElements(
    T* pDest,
    T* pSrc,
    size_t nElements);
```

### <a name="parameters"></a>Parametri

*pDest*<br/>
Puntatore al primo elemento che riceverà i dati ricollocati.

*pSrc*<br/>
Puntatore al primo elemento da riposizionare.

*nElementi*<br/>
Numero di elementi da riposizionare.

### <a name="remarks"></a>Osservazioni

Questa funzione statica chiama [memmove](../../c-runtime-library/reference/memmove-wmemmove.md), che è sufficiente per la maggior parte dei tipi di dati. Se gli oggetti spostati contengono puntatori ai propri membri, questa funzione statica dovrà essere sottoposta a override.

## <a name="see-also"></a>Vedere anche

[CElementTraitsBase (classe)](../../atl/reference/celementtraitsbase-class.md)<br/>
[Classe CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

---
description: 'Altre informazioni su: classe CStringElementTraits'
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
ms.openlocfilehash: 1e3f6a73e71530250d9dd88408165471028a18e9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140491"
---
# <a name="cstringelementtraits-class"></a>Classe CStringElementTraits

Questa classe fornisce funzioni statiche utilizzate dalle classi di raccolta che archiviano `CString` oggetti.

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

|Nome|Description|
|----------|-----------------|
|[CStringElementTraits:: INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.|
|[CStringElementTraits:: OUTARGTYPE](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CStringElementTraits:: CompareElements](#compareelements)|Statico Chiamare questa funzione per confrontare due elementi stringa per verificarne l'uguaglianza.|
|[CStringElementTraits:: CompareElementsOrdered](#compareelementsordered)|Statico Chiamare questa funzione per confrontare due elementi di stringa.|
|[CStringElementTraits:: CopyElements](#copyelements)|Statico Chiamare questa funzione per copiare `CString` gli elementi archiviati in un oggetto classe di raccolta.|
|[CStringElementTraits:: hash](#hash)|Statico Chiamare questa funzione per calcolare un valore hash per l'elemento stringa specificato.|
|[CStringElementTraits:: RelocateElements](#relocateelements)|Statico Chiamare questa funzione per spostare `CString` gli elementi archiviati in un oggetto classe di raccolta.|

## <a name="remarks"></a>Commenti

Questa classe fornisce funzioni statiche per la copia, lo stato di trasferimento e il confronto di stringhe e per la creazione di un valore hash. Queste funzioni sono utili quando si usa una classe Collection per archiviare dati basati su stringa. Utilizzare [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md) quando sono necessari confronti senza distinzione tra maiuscole e minuscole. Utilizzare [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md) quando gli oggetti stringa devono essere gestiti come riferimenti.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** CStringT. h

## <a name="cstringelementtraitscompareelements"></a><a name="compareelements"></a> CStringElementTraits:: CompareElements

Chiamare questa funzione statica per confrontare due elementi stringa per verificarne l'uguaglianza.

```
static bool CompareElements(INARGTYPE str1, INARGTYPE str2);
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo elemento stringa.

*str2*<br/>
Secondo elemento di stringa.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali; in caso contrario, false.

## <a name="cstringelementtraitscompareelementsordered"></a><a name="compareelementsordered"></a> CStringElementTraits:: CompareElementsOrdered

Chiamare questa funzione statica per confrontare due elementi di stringa.

```
static int CompareElementsOrdered(INARGTYPE str1, INARGTYPE str2);
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo elemento stringa.

*str2*<br/>
Secondo elemento di stringa.

### <a name="return-value"></a>Valore restituito

Zero se le stringhe sono identiche, < 0 se *str1* è minore di *str2* oppure > 0 se *str1* è maggiore di *str2*. Per eseguire i confronti, viene usato il metodo [CStringT:: compare](../../atl-mfc-shared/reference/cstringt-class.md#compare) .

## <a name="cstringelementtraitscopyelements"></a><a name="copyelements"></a> CStringElementTraits:: CopyElements

Chiamare questa funzione statica per copiare `CString` gli elementi archiviati in un oggetto classe di raccolta.

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

*nElements*<br/>
Numero degli elementi da copiare.

### <a name="remarks"></a>Commenti

Gli elementi di origine e di destinazione non devono sovrapporsi.

## <a name="cstringelementtraitshash"></a><a name="hash"></a> CStringElementTraits:: hash

Chiamare questa funzione statica per calcolare un valore hash per l'elemento stringa specificato.

```
static ULONG Hash(INARGTYPE str);
```

### <a name="parameters"></a>Parametri

*str*<br/>
Elemento stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un valore hash, calcolato utilizzando il contenuto della stringa.

## <a name="cstringelementtraitsinargtype"></a><a name="inargtype"></a> CStringElementTraits:: INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.

```
typedef T::PCXSTR INARGTYPE;
```

## <a name="cstringelementtraitsoutargtype"></a><a name="outargtype"></a> CStringElementTraits:: OUTARGTYPE

Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.

```
typedef T& OUTARGTYPE;
```

## <a name="cstringelementtraitsrelocateelements"></a><a name="relocateelements"></a> CStringElementTraits:: RelocateElements

Chiamare questa funzione statica per rilocare `CString` gli elementi archiviati in un oggetto classe di raccolta.

```
static void RelocateElements(
    T* pDest,
    T* pSrc,
    size_t nElements);
```

### <a name="parameters"></a>Parametri

*pDest*<br/>
Puntatore al primo elemento che riceverà i dati rilocati.

*pSrc*<br/>
Puntatore al primo elemento da spostare.

*nElements*<br/>
Numero di elementi da spostare.

### <a name="remarks"></a>Commenti

Questa funzione statica chiama [memmove](../../c-runtime-library/reference/memmove-wmemmove.md), che è sufficiente per la maggior parte dei tipi di dati. Se gli oggetti spostati contengono puntatori ai propri membri, sarà necessario eseguire l'override della funzione statica.

## <a name="see-also"></a>Vedi anche

[Classe CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)<br/>
[Classe CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

---
title: Classe CStringElementTraits | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CStringElementTraits class
ms.assetid: 74d7134b-099d-4455-bf91-3e68ccbf95bc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 43581995e8979ec733d8c82374896009c843166b
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43766646"
---
# <a name="cstringelementtraits-class"></a>Classe CStringElementTraits

Questa classe fornisce funzioni statiche utilizzate dalle classi di raccolta l'archiviazione `CString` oggetti.

## <a name="syntax"></a>Sintassi

```
template <typename T>  
class CStringElementTraits
```

#### <a name="parameters"></a>Parametri

*T*  
Il tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringElementTraits::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|
|[CStringElementTraits::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto di classe della raccolta.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringElementTraits::CompareElements](#compareelements)|(Statico) Chiamare questa funzione per confrontare due elementi della stringa per verificarne l'uguaglianza.|
|[CStringElementTraits::CompareElementsOrdered](#compareelementsordered)|(Statico) Chiamare questa funzione per confrontare due elementi della stringa.|
|[CStringElementTraits::CopyElements](#copyelements)|(Statico) Chiamare questa funzione per copiare `CString` elementi archiviati in un oggetto di classe di raccolta.|
|[CStringElementTraits::Hash](#hash)|(Statico) Chiamare questa funzione per calcolare un valore hash per l'elemento di stringa specificata.|
|[CStringElementTraits::RelocateElements](#relocateelements)|(Statico) Chiamare questa funzione per rilocare `CString` elementi archiviati in un oggetto di classe di raccolta.|

## <a name="remarks"></a>Note

Questa classe fornisce funzioni statiche per la copia, spostamento e il confronto di stringhe e per la creazione di un valore hash. Queste funzioni sono utili quando si usa una classe di raccolta per archiviare i dati basati su stringa. Uso [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md) quando sono necessari i confronti tra maiuscole e minuscole. Uso [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md) quando gli oggetti stringa devono essere affrontati come riferimenti.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** CStringT. h

##  <a name="compareelements"></a>  CStringElementTraits::CompareElements

Chiamare questa funzione statica per confrontare due elementi della stringa per verificarne l'uguaglianza.

```
static bool CompareElements(INARGTYPE str1, INARGTYPE str2);
```

### <a name="parameters"></a>Parametri

*str1*  
Il primo elemento di stringa.

*str2*  
Il secondo elemento di stringa.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali e false in caso contrario.

##  <a name="compareelementsordered"></a>  CStringElementTraits::CompareElementsOrdered

Chiamare questa funzione statica per confrontare due elementi della stringa.

```
static int CompareElementsOrdered(INARGTYPE str1, INARGTYPE str2);
```

### <a name="parameters"></a>Parametri

*str1*  
Il primo elemento di stringa.

*str2*  
Il secondo elemento di stringa.

### <a name="return-value"></a>Valore restituito

Zero se le stringhe sono identiche, < 0 se *str1* è minore di *str2*, o > 0 se *str1* è maggiore di quella *str2*. Il [CStringT::Compare](../../atl-mfc-shared/reference/cstringt-class.md#compare) metodo viene utilizzato per eseguire i confronti.  

##  <a name="copyelements"></a>  CStringElementTraits::CopyElements

Chiamare questa funzione statica per copiare `CString` elementi archiviati in un oggetto di classe di raccolta.

```
static void CopyElements(
    T* pDest,
    const T* pSrc,
    size_t nElements);
```

### <a name="parameters"></a>Parametri

*pDest*  
Puntatore al primo elemento che riceverà i dati copiati.

*pSrc*  
Puntatore al primo elemento da copiare.

*nElements*  
Numero degli elementi da copiare.

### <a name="remarks"></a>Note

Gli elementi di origine e di destinazione non devono sovrapporsi.

##  <a name="hash"></a>  CStringElementTraits::Hash

Chiamare questa funzione statica per calcolare un valore hash per l'elemento di stringa specificata.

```
static ULONG Hash(INARGTYPE str);
```

### <a name="parameters"></a>Parametri

*str*  
L'elemento di stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un valore hash, calcolato usando il contenuto della stringa.

##  <a name="inargtype"></a>  CStringElementTraits::INARGTYPE

Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.

```
typedef T::PCXSTR INARGTYPE;
```

##  <a name="outargtype"></a>  CStringElementTraits::OUTARGTYPE

Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto di classe della raccolta.

```
typedef T& OUTARGTYPE;
```

##  <a name="relocateelements"></a>  CStringElementTraits::RelocateElements

Chiamare questa funzione statica per rilocare `CString` elementi archiviati in un oggetto di classe di raccolta.

```
static void RelocateElements(
    T* pDest,
    T* pSrc,
    size_t nElements);
```

### <a name="parameters"></a>Parametri

*pDest*  
Puntatore al primo elemento che riceverà i dati spostati.

*pSrc*  
Puntatore al primo elemento da spostare.

*nElements*  
Il numero di elementi da spostare.

### <a name="remarks"></a>Note

Chiama questa funzione statica [memmove](../../c-runtime-library/reference/memmove-wmemmove.md), che è sufficiente per la maggior parte dei tipi di dati. Se gli oggetti da spostare contengono puntatori ai rispettivi membri, sarà necessario eseguire l'override di questa funzione statica.

## <a name="see-also"></a>Vedere anche

[Classe CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)   
[Classe CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)

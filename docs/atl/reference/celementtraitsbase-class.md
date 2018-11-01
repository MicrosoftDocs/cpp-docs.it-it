---
title: Classe CElementTraitsBase
ms.date: 11/04/2016
f1_keywords:
- CElementTraitsBase
- ATLCOLL/ATL::CElementTraitsBase
- ATLCOLL/ATL::CElementTraitsBase::INARGTYPE
- ATLCOLL/ATL::CElementTraitsBase::OUTARGTYPE
- ATLCOLL/ATL::CElementTraitsBase::CopyElements
- ATLCOLL/ATL::CElementTraitsBase::RelocateElements
helpviewer_keywords:
- CElementTraitsBase class
ms.assetid: 75284caf-347e-4355-a7d8-efc708dd514a
ms.openlocfilehash: 769fa5abff223ad570847b8bf68378ce85df664e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50509018"
---
# <a name="celementtraitsbase-class"></a>Classe CElementTraitsBase

Questa classe fornisce copia predefinita e sposta i metodi per una classe di raccolta.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class CElementTraitsBase
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CElementTraitsBase::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|
|[CElementTraitsBase::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto di classe della raccolta.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CElementTraitsBase::CopyElements](#copyelements)|Chiamare questo metodo per copiare gli elementi archiviati in un oggetto di classe di raccolta.|
|[CElementTraitsBase::RelocateElements](#relocateelements)|Chiamare questo metodo per spostare gli elementi archiviati in un oggetto di classe di raccolta.|

## <a name="remarks"></a>Note

Questa classe di base definisce i metodi per la copia e spostamento di elementi in una classe di raccolta. Si è usato dalle classi [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md), [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md), e [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="copyelements"></a>  CElementTraitsBase::CopyElements

Chiamare questo metodo per copiare gli elementi archiviati in un oggetto di classe di raccolta.

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

### <a name="remarks"></a>Note

Gli elementi di origine e di destinazione non devono sovrapporsi.

##  <a name="inargtype"></a>  CElementTraitsBase::INARGTYPE

Il tipo di dati da utilizzare per l'aggiunta di elementi nella raccolta.

```
typedef const T& INARGTYPE;
```

##  <a name="outargtype"></a>  CElementTraitsBase::OUTARGTYPE

Il tipo di dati da utilizzare per recuperare elementi dalla raccolta.

```
typedef T& OUTARGTYPE;
```

##  <a name="relocateelements"></a>  CElementTraitsBase::RelocateElements

Chiamare questo metodo per spostare gli elementi archiviati in un oggetto di classe di raccolta.

```
static void RelocateElements(
    T* pDest,
    T* pSrc,
    size_t nElements);
```

### <a name="parameters"></a>Parametri

*pDest*<br/>
Puntatore al primo elemento che riceverà i dati spostati.

*pSrc*<br/>
Puntatore al primo elemento da spostare.

*nElements*<br/>
Il numero di elementi da spostare.

### <a name="remarks"></a>Note

Questo metodo chiama [memmove](../../c-runtime-library/reference/memmove-wmemmove.md), che è sufficiente per la maggior parte dei tipi di dati. Se gli oggetti da spostare contengono puntatori ai rispettivi membri, sarà necessario eseguire l'override di questo metodo.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)

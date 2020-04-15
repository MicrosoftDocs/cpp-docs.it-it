---
title: CElementTraitsBase (classe)
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
ms.openlocfilehash: 5a29e8778cf2f3400df25b55574950a005bad995
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327010"
---
# <a name="celementtraitsbase-class"></a>CElementTraitsBase (classe)

Questa classe fornisce i metodi di copia e spostamento predefiniti per una classe di raccolta.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class CElementTraitsBase
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CElementTraitsBase::INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe di raccolta.|
|[CElementTraitsBase::OUTARGTYPE (Informazioni in base aI non andamente in base alle proprietà dei dati)](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe di raccolta.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CElementTraitsBase::CopyElements](#copyelements)|Chiamare questo metodo per copiare gli elementi archiviati in un oggetto classe di raccolta.|
|[CElementTraitsBase::RelocateElements](#relocateelements)|Chiamare questo metodo per riposizionare gli elementi archiviati in un oggetto classe di raccolta.|

## <a name="remarks"></a>Osservazioni

Questa classe base definisce i metodi per copiare e riallocare gli elementi in una classe di raccolta. Viene utilizzato dalle classi [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md), [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md)e [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).

Per ulteriori informazioni, vedere Classi di raccolte [ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="celementtraitsbasecopyelements"></a><a name="copyelements"></a>CElementTraitsBase::CopyElements

Chiamare questo metodo per copiare gli elementi archiviati in un oggetto classe di raccolta.

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

## <a name="celementtraitsbaseinargtype"></a><a name="inargtype"></a>CElementTraitsBase::INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi alla raccolta.

```
typedef const T& INARGTYPE;
```

## <a name="celementtraitsbaseoutargtype"></a><a name="outargtype"></a>CElementTraitsBase::OUTARGTYPE (Informazioni in base aI non andamente in base alle proprietà dei dati)

Tipo di dati da utilizzare per il recupero di elementi dalla raccolta.

```
typedef T& OUTARGTYPE;
```

## <a name="celementtraitsbaserelocateelements"></a><a name="relocateelements"></a>CElementTraitsBase::RelocateElements

Chiamare questo metodo per riposizionare gli elementi archiviati in un oggetto classe di raccolta.

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

Questo metodo chiama [memmove](../../c-runtime-library/reference/memmove-wmemmove.md), che è sufficiente per la maggior parte dei tipi di dati. Se gli oggetti da spostare contengono puntatori ai propri membri, questo metodo dovrà essere sottoposto a override.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

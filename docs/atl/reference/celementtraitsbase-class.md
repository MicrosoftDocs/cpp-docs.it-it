---
description: 'Altre informazioni su: classe CElementTraitsBase'
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
ms.openlocfilehash: a200517e378cc3c3ca854ff60e9a49ac8e43d215
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141778"
---
# <a name="celementtraitsbase-class"></a>Classe CElementTraitsBase

Questa classe fornisce metodi di copia e spostamento predefiniti per una classe di raccolte.

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

|Nome|Description|
|----------|-----------------|
|[CElementTraitsBase:: INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.|
|[CElementTraitsBase:: OUTARGTYPE](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dall'oggetto classe della raccolta.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CElementTraitsBase:: CopyElements](#copyelements)|Chiamare questo metodo per copiare gli elementi archiviati in un oggetto classe di raccolta.|
|[CElementTraitsBase:: RelocateElements](#relocateelements)|Chiamare questo metodo per rilocare gli elementi archiviati in un oggetto classe di raccolta.|

## <a name="remarks"></a>Commenti

Questa classe di base definisce i metodi per la copia e il riposizionamento degli elementi in una classe di raccolte. Viene utilizzato dalle classi [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md), [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md)e [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="celementtraitsbasecopyelements"></a><a name="copyelements"></a> CElementTraitsBase:: CopyElements

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

*nElements*<br/>
Numero degli elementi da copiare.

### <a name="remarks"></a>Commenti

Gli elementi di origine e di destinazione non devono sovrapporsi.

## <a name="celementtraitsbaseinargtype"></a><a name="inargtype"></a> CElementTraitsBase:: INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi alla raccolta.

```
typedef const T& INARGTYPE;
```

## <a name="celementtraitsbaseoutargtype"></a><a name="outargtype"></a> CElementTraitsBase:: OUTARGTYPE

Tipo di dati da utilizzare per il recupero di elementi dalla raccolta.

```
typedef T& OUTARGTYPE;
```

## <a name="celementtraitsbaserelocateelements"></a><a name="relocateelements"></a> CElementTraitsBase:: RelocateElements

Chiamare questo metodo per rilocare gli elementi archiviati in un oggetto classe di raccolta.

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

Questo metodo chiama [memmove](../../c-runtime-library/reference/memmove-wmemmove.md), che è sufficiente per la maggior parte dei tipi di dati. Se gli oggetti spostati contengono puntatori ai propri membri, sarà necessario eseguire l'override di questo metodo.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

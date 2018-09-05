---
title: Classe CAutoPtrElementTraits | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CAutoPtrElementTraits
- ATLCOLL/ATL::CAutoPtrElementTraits
- ATLCOLL/ATL::CAutoPtrElementTraits::INARGTYPE
- ATLCOLL/ATL::CAutoPtrElementTraits::OUTARGTYPE
dev_langs:
- C++
helpviewer_keywords:
- CAutoPtrElementTraits class
ms.assetid: 777c1b14-6ab7-491f-b9a5-be149e71d4a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cab1b2699c87c09761258fcde8cbb8b4c8eaa32f
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43764251"
---
# <a name="cautoptrelementtraits-class"></a>Classe CAutoPtrElementTraits

Questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori intelligenti.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<typename T>  
class CAutoPtrElementTraits 
    : public CDefaultElementTraits<ATL::CAutoPtr<T>>
```

#### <a name="parameters"></a>Parametri

`T`  
Il tipo di puntatore.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoPtrElementTraits::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|
|[CAutoPtrElementTraits::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto di classe della raccolta.|

## <a name="remarks"></a>Note

Questa classe fornisce metodi e funzioni statiche TypeDef per la creazione di oggetti di classe di raccolta che contiene i puntatori intelligenti. Le classi [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) e [CAutoPtrList](../../atl/reference/cautoptrlist-class.md) derivano da `CAutoPtrElementTraits`. Se la compilazione di una raccolta di puntatori intelligenti che richiede nuovo vettore e gli operatori di eliminazione, usare [CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md) invece.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)

`CAutoPtrElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="inargtype"></a>  CAutoPtrElementTraits::INARGTYPE

Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.

```
typedef CAutoPtr<T>& INARGTYPE;
```

##  <a name="outargtype"></a>  CAutoPtrElementTraits::OUTARGTYPE

Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto di classe della raccolta.

```
typedef T *& OUTARGTYPE;
```

## <a name="see-also"></a>Vedere anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)

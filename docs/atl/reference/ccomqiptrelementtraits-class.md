---
title: Classe CComQIPtrElementTraits | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComQIPtrElementTraits
- ATLCOLL/ATL::CComQIPtrElementTraits
- ATLCOLL/ATL::CComQIPtrElementTraits::INARGTYPE
dev_langs:
- C++
helpviewer_keywords:
- CComQIPtrElementTraits class
ms.assetid: 9df9250a-5413-4362-b133-332932a597c4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6dbc0e10f2747b9a9a2ad3ff345a580d4797ea72
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46079310"
---
# <a name="ccomqiptrelementtraits-class"></a>Classe CComQIPtrElementTraits

Questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori a interfaccia COM.

## <a name="syntax"></a>Sintassi

```
template<typename I, const IID* piid=& __uuidof(I)>
class CComQIPtrElementTraits : 
   public CDefaultElementTraits<ATL::CComQIPtr<I, piid>>
```

#### <a name="parameters"></a>Parametri

*I*<br/>
Un'interfaccia COM che specifica il tipo di puntatore da archiviare.

*piid*<br/>
Un puntatore all'IID del *ho*.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComQIPtrElementTraits::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|

## <a name="remarks"></a>Note

Questa classe deriva i metodi e fornisce un typedef utile durante la creazione di una classe di raccolta di [CComQIPtr](../../atl/reference/ccomqiptr-class.md) oggetti puntatore dell'interfaccia COM. Questa classe viene usata da entrambe le [CInterfaceArray](../../atl/reference/cinterfacearray-class.md) e [CInterfaceList](../../atl/reference/cinterfacelist-class.md) classi.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)

`CComQIPtrElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="inargtype"></a>  CComQIPtrElementTraits::INARGTYPE

Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.

```
typedef I* INARGTYPE;
```

## <a name="see-also"></a>Vedere anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

---
description: 'Altre informazioni su: classe CComQIPtrElementTraits'
title: Classe CComQIPtrElementTraits
ms.date: 11/04/2016
f1_keywords:
- CComQIPtrElementTraits
- ATLCOLL/ATL::CComQIPtrElementTraits
- ATLCOLL/ATL::CComQIPtrElementTraits::INARGTYPE
helpviewer_keywords:
- CComQIPtrElementTraits class
ms.assetid: 9df9250a-5413-4362-b133-332932a597c4
ms.openlocfilehash: 9aa96c5b926263d6ed58125a28f5d0a12d8107d3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142337"
---
# <a name="ccomqiptrelementtraits-class"></a>Classe CComQIPtrElementTraits

Questa classe fornisce metodi, funzioni statiche e typedef utili per la creazione di raccolte di puntatori di interfaccia COM.

## <a name="syntax"></a>Sintassi

```
template<typename I, const IID* piid=& __uuidof(I)>
class CComQIPtrElementTraits :
   public CDefaultElementTraits<ATL::CComQIPtr<I, piid>>
```

#### <a name="parameters"></a>Parametri

*I*<br/>
Interfaccia COM che specifica il tipo di puntatore da archiviare.

*pIID*<br/>
Puntatore all'IID di *i*.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|[CComQIPtrElementTraits::INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.|

## <a name="remarks"></a>Commenti

Questa classe deriva i metodi e fornisce un typedef utile quando si crea una classe di raccolta di oggetti puntatore a interfaccia com [CComQIPtr](../../atl/reference/ccomqiptr-class.md) . Questa classe viene utilizzata da entrambe le classi [CInterfaceArray](../../atl/reference/cinterfacearray-class.md) e [CInterfaceList](../../atl/reference/cinterfacelist-class.md) .

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)

`CComQIPtrElementTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="ccomqiptrelementtraitsinargtype"></a><a name="inargtype"></a> CComQIPtrElementTraits::INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi all'oggetto classe della raccolta.

```
typedef I* INARGTYPE;
```

## <a name="see-also"></a>Vedi anche

[Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

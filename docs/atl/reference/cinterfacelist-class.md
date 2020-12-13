---
description: 'Altre informazioni su: classe CInterfaceList'
title: Classe CInterfaceList
ms.date: 11/04/2016
f1_keywords:
- CInterfaceList
- ATLCOLL/ATL::CInterfaceList
- ATLCOLL/ATL::CInterfaceList::CInterfaceList
helpviewer_keywords:
- CInterfaceList class
ms.assetid: 2077764d-25e5-4b3d-96c8-08a287bbcd25
ms.openlocfilehash: 2612ba4700466bb877f84978c55bfd018f1dd286
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141531"
---
# <a name="cinterfacelist-class"></a>Classe CInterfaceList

Questa classe fornisce metodi utili per la creazione di un elenco di puntatori di interfaccia COM.

## <a name="syntax"></a>Sintassi

```
template<class I, const IID* piid =& __uuidof(I)>
class CInterfaceList
   : public CAtlList<ATL::CComQIPtr<I, piid>,
                     CComQIPtrElementTraits<I, piid>>
```

#### <a name="parameters"></a>Parametri

*I*<br/>
Interfaccia COM che specifica il tipo di puntatore da archiviare.

*pIID*<br/>
Puntatore all'IID di *i*.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CInterfaceList:: CInterfaceList](#cinterfacelist)|Costruttore per l'elenco di interfacce.|

## <a name="remarks"></a>Commenti

Questa classe fornisce un costruttore e metodi derivati per la creazione di un elenco di puntatori di interfaccia COM. Usare [CInterfaceArray](../../atl/reference/cinterfacearray-class.md) quando è richiesta una matrice.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAtlList](../../atl/reference/catllist-class.md)

`CInterfaceList`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cinterfacelistcinterfacelist"></a><a name="cinterfacelist"></a> CInterfaceList:: CInterfaceList

Costruttore per l'elenco di interfacce.

```
CInterfaceList(UINT nBlockSize = 10) throw();
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
Dimensioni del blocco e il valore predefinito è 10.

### <a name="remarks"></a>Commenti

Le dimensioni del blocco sono una misura della quantità di memoria allocata quando è richiesto un nuovo elemento. Dimensioni maggiori dei blocchi riducono le chiamate alle routine di allocazione di memoria, ma utilizzano più risorse.

## <a name="see-also"></a>Vedi anche

[Classe CAtlList](../../atl/reference/catllist-class.md)<br/>
[Classe CComQIPtr](../../atl/reference/ccomqiptr-class.md)<br/>
[Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

---
description: 'Altre informazioni su: classe CInterfaceArray'
title: Classe CInterfaceArray
ms.date: 11/04/2016
f1_keywords:
- CInterfaceArray
- ATLCOLL/ATL::CInterfaceArray
- ATLCOLL/ATL::CInterfaceArray::CInterfaceArray
helpviewer_keywords:
- CInterfaceArray class
ms.assetid: 1f29cf66-a086-4a7b-b6a8-64f73da39f79
ms.openlocfilehash: 6dbe382682b8411d7562d1d0ff75f0ef587396f2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141544"
---
# <a name="cinterfacearray-class"></a>Classe CInterfaceArray

Questa classe fornisce metodi utili per la creazione di una matrice di puntatori di interfaccia COM.

## <a name="syntax"></a>Sintassi

```
template <class I, const IID* piid=& __uuidof(I)>
class CInterfaceArray :
   public CAtlArray<ATL::CComQIPtr<I, piid>,
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
|[CInterfaceArray:: CInterfaceArray](#cinterfacearray)|Costruttore per la matrice di interfaccia.|

## <a name="remarks"></a>Commenti

Questa classe fornisce un costruttore e metodi derivati per la creazione di una matrice di puntatori di interfaccia COM. Usare [CInterfaceList](../../atl/reference/cinterfacelist-class.md) quando è necessario un elenco.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CAtlArray`

`CInterfaceArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cinterfacearraycinterfacearray"></a><a name="cinterfacearray"></a> CInterfaceArray:: CInterfaceArray

Costruttore.

```
CInterfaceArray() throw();
```

### <a name="remarks"></a>Commenti

Inizializza la matrice del puntatore intelligente.

## <a name="see-also"></a>Vedi anche

[Classe CAtlArray](../../atl/reference/catlarray-class.md)<br/>
[Classe CComQIPtr](../../atl/reference/ccomqiptr-class.md)<br/>
[Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

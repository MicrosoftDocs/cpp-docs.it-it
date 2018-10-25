---
title: Classe CInterfaceList | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CInterfaceList
- ATLCOLL/ATL::CInterfaceList
- ATLCOLL/ATL::CInterfaceList::CInterfaceList
dev_langs:
- C++
helpviewer_keywords:
- CInterfaceList class
ms.assetid: 2077764d-25e5-4b3d-96c8-08a287bbcd25
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fdf3ae7adf36ad471b5cab09d0f13a4d5e18f7a7
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50075568"
---
# <a name="cinterfacelist-class"></a>Classe CInterfaceList

Questa classe fornisce metodi utili quando si crea un elenco di puntatori a interfaccia COM.

## <a name="syntax"></a>Sintassi

```
template<class I, const IID* piid =& __uuidof(I)>
class CInterfaceList
   : public CAtlList<ATL::CComQIPtr<I, piid>,
                     CComQIPtrElementTraits<I, piid>>
```

#### <a name="parameters"></a>Parametri

*I*<br/>
Un'interfaccia COM che specifica il tipo di puntatore da archiviare.

*piid*<br/>
Un puntatore all'IID del *ho*.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInterfaceList::CInterfaceList](#cinterfacelist)|Il costruttore per l'elenco di interfacce.|

## <a name="remarks"></a>Note

Questa classe fornisce un costruttore e i metodi derivati per la creazione di un elenco di puntatori a interfaccia COM. Uso [CInterfaceArray](../../atl/reference/cinterfacearray-class.md) quando è necessaria una matrice.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAtlList](../../atl/reference/catllist-class.md)

`CInterfaceList`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="cinterfacelist"></a>  CInterfaceList::CInterfaceList

Il costruttore per l'elenco di interfacce.

```
CInterfaceList(UINT nBlockSize = 10) throw();
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
Dimensione del blocco, con valore predefinito è 10.

### <a name="remarks"></a>Note

La dimensione del blocco è una misura della quantità di memoria allocata quando un nuovo elemento è obbligatorio. Blocchi di dimensioni maggiori riducono le chiamate alle routine di allocazione della memoria, ma usano più risorse.

## <a name="see-also"></a>Vedere anche

[Classe CAtlList](../../atl/reference/catllist-class.md)<br/>
[Classe CComQIPtr](../../atl/reference/ccomqiptr-class.md)<br/>
[Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

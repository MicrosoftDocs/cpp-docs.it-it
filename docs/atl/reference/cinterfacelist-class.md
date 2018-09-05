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
ms.openlocfilehash: d9b0eb225f9da88db356fc4f04d25d2219876604
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43752749"
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

*I*  
Un'interfaccia COM che specifica il tipo di puntatore da archiviare.

*piid*  
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

*nBlockSize*  
Dimensione del blocco, con valore predefinito è 10.

### <a name="remarks"></a>Note

La dimensione del blocco è una misura della quantità di memoria allocata quando un nuovo elemento è obbligatorio. Blocchi di dimensioni maggiori riducono le chiamate alle routine di allocazione della memoria, ma usano più risorse.

## <a name="see-also"></a>Vedere anche

[Classe CAtlList](../../atl/reference/catllist-class.md)   
[Classe CComQIPtr](../../atl/reference/ccomqiptr-class.md)   
[Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)

---
title: Classe CInterfaceArray | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CInterfaceArray
- ATLCOLL/ATL::CInterfaceArray
- ATLCOLL/ATL::CInterfaceArray::CInterfaceArray
dev_langs:
- C++
helpviewer_keywords:
- CInterfaceArray class
ms.assetid: 1f29cf66-a086-4a7b-b6a8-64f73da39f79
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 533458b35e4589e04d95a4618a04a90aa1994c35
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039335"
---
# <a name="cinterfacearray-class"></a>Classe CInterfaceArray

Questa classe fornisce metodi utili quando si crea una matrice di puntatori a interfaccia COM.

## <a name="syntax"></a>Sintassi

```
template <class I, const IID* piid=& __uuidof(I)>
class CInterfaceArray : 
   public CAtlArray<ATL::CComQIPtr<I, piid>,
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
|[CInterfaceArray::CInterfaceArray](#cinterfacearray)|Il costruttore per la matrice di interfacce.|

## <a name="remarks"></a>Note

Questa classe fornisce un costruttore e i metodi derivati per la creazione di una matrice di puntatori a interfaccia COM. Uso [CInterfaceList](../../atl/reference/cinterfacelist-class.md) quando è necessario un elenco.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CAtlArray`

`CInterfaceArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="cinterfacearray"></a>  CInterfaceArray::CInterfaceArray

Costruttore.

```
CInterfaceArray() throw();
```

### <a name="remarks"></a>Note

Consente di inizializzare la matrice di puntatore intelligente.

## <a name="see-also"></a>Vedere anche

[Classe CAtlArray](../../atl/reference/catlarray-class.md)<br/>
[Classe CComQIPtr](../../atl/reference/ccomqiptr-class.md)<br/>
[Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

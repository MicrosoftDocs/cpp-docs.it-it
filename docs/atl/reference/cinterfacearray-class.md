---
title: Classe CInterfaceArray
ms.date: 11/04/2016
f1_keywords:
- CInterfaceArray
- ATLCOLL/ATL::CInterfaceArray
- ATLCOLL/ATL::CInterfaceArray::CInterfaceArray
helpviewer_keywords:
- CInterfaceArray class
ms.assetid: 1f29cf66-a086-4a7b-b6a8-64f73da39f79
ms.openlocfilehash: e6efe31989b06f0977ecff156a8f64053dc64ad1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326792"
---
# <a name="cinterfacearray-class"></a>Classe CInterfaceArray

Questa classe fornisce metodi utili quando si costruisce una matrice di puntatori a interfaccia COM.

## <a name="syntax"></a>Sintassi

```
template <class I, const IID* piid=& __uuidof(I)>
class CInterfaceArray :
   public CAtlArray<ATL::CComQIPtr<I, piid>,
                    CComQIPtrElementTraits<I, piid>>
```

#### <a name="parameters"></a>Parametri

*Ho*<br/>
Un'interfaccia COM che specifica il tipo di puntatore da archiviare.

*piid*<br/>
Puntatore all'IID di *I*.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInterfaceArray::CInterfaceArray](#cinterfacearray)|Costruttore per la matrice di interfaccia.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce un costruttore e metodi derivati per la creazione di una matrice di puntatori a interfaccia COM. Utilizzare [CInterfaceList](../../atl/reference/cinterfacelist-class.md) quando è necessario un elenco.

Per ulteriori informazioni, vedere Classi di raccolte [ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CAtlArray`

`CInterfaceArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="cinterfacearraycinterfacearray"></a><a name="cinterfacearray"></a>CInterfaceArray::CInterfaceArray

Costruttore.

```
CInterfaceArray() throw();
```

### <a name="remarks"></a>Osservazioni

Inizializza la matrice di puntatori intelligenti.

## <a name="see-also"></a>Vedere anche

[Classe CAtlArray](../../atl/reference/catlarray-class.md)<br/>
[CComQIPtr (classe)](../../atl/reference/ccomqiptr-class.md)<br/>
[Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

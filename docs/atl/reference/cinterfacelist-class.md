---
title: Classe CInterfaceList
ms.date: 11/04/2016
f1_keywords:
- CInterfaceList
- ATLCOLL/ATL::CInterfaceList
- ATLCOLL/ATL::CInterfaceList::CInterfaceList
helpviewer_keywords:
- CInterfaceList class
ms.assetid: 2077764d-25e5-4b3d-96c8-08a287bbcd25
ms.openlocfilehash: 0a7fd781c63e4ea084cf078e49fc9efb9cfa2d85
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326785"
---
# <a name="cinterfacelist-class"></a>Classe CInterfaceList

Questa classe fornisce metodi utili quando si costruisce un elenco di puntatori a interfaccia COM.

## <a name="syntax"></a>Sintassi

```
template<class I, const IID* piid =& __uuidof(I)>
class CInterfaceList
   : public CAtlList<ATL::CComQIPtr<I, piid>,
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
|[CInterfaceList::CInterfaceList](#cinterfacelist)|Costruttore per l'elenco di interfacce.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce un costruttore e metodi derivati per la creazione di un elenco di puntatori a interfaccia COM. Utilizzare [CInterfaceArray](../../atl/reference/cinterfacearray-class.md) quando è necessaria una matrice.

Per ulteriori informazioni, vedere Classi di raccolte [ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Elenco CAtlList](../../atl/reference/catllist-class.md)

`CInterfaceList`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="cinterfacelistcinterfacelist"></a><a name="cinterfacelist"></a>CInterfaceList::CInterfaceList

Costruttore per l'elenco di interfacce.

```
CInterfaceList(UINT nBlockSize = 10) throw();
```

### <a name="parameters"></a>Parametri

*nBlockSize (dimensioni di blocco)*<br/>
La dimensione del blocco, con un valore predefinito di 10.

### <a name="remarks"></a>Osservazioni

La dimensione del blocco è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Blocchi di dimensioni maggiori riducono le chiamate alle routine di allocazione della memoria, ma utilizzano più risorse.

## <a name="see-also"></a>Vedere anche

[Classe CAtlList](../../atl/reference/catllist-class.md)<br/>
[CComQIPtr (classe)](../../atl/reference/ccomqiptr-class.md)<br/>
[Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

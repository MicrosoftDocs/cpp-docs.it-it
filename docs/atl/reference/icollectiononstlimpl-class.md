---
title: Classe ICollectionOnSTLImpl
ms.date: 11/04/2016
f1_keywords:
- ICollectionOnSTLImpl
- ATLCOM/ATL::ICollectionOnSTLImpl
- ATLCOM/ATL::ICollectionOnSTLImpl::get__NewEnum
- ATLCOM/ATL::ICollectionOnSTLImpl::getcount
- ATLCOM/ATL::ICollectionOnSTLImpl::get_Item
- ATLCOM/ATL::ICollectionOnSTLImpl::m_coll
helpviewer_keywords:
- ICollectionOnSTLImpl class
ms.assetid: 683c88b0-0d97-4779-a762-e493334ba7f9
ms.openlocfilehash: 6842f1c75ebbc9c3dfdd93f30d52fd2cb2936c03
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62275787"
---
# <a name="icollectiononstlimpl-class"></a>Classe ICollectionOnSTLImpl

Questa classe fornisce metodi usati da una classe di raccolta.

## <a name="syntax"></a>Sintassi

```
template <class T, class CollType, class ItemType, class CopyItem, class EnumType>
class ICollectionOnSTLImpl : public T
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Un'interfaccia COM di raccolta.

*CollType*<br/>
Classe contenitore della libreria Standard C++.

*ItemType*<br/>
Il tipo di elemento esposto dall'interfaccia del contenitore.

*CopyItem*<br/>
Oggetto [copiare criteri classe](../../atl/atl-copy-policy-classes.md).

*EnumType*<br/>
Oggetto [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md)-classe di enumeratori compatibile.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ICollectionOnSTLImpl::get__NewEnum](#newenum)|Restituisce un oggetto enumeratore per la raccolta.|
|[ICollectionOnSTLImpl::getcount](#get_count)|Restituisce il numero di elementi nella raccolta.|
|[ICollectionOnSTLImpl::get_Item](#get_item)|Restituisce l'elemento richiesto dalla raccolta.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ICollectionOnSTLImpl::m_coll](#m_coll)|Raccolta.|

## <a name="remarks"></a>Note

Questa classe fornisce l'implementazione per i tre metodi di un'interfaccia di raccolta: [getcount](#get_count), [get_Item](#get_item), e [Get NewEnum](#newenum).

Utilizzare questa classe:

- Definire un'interfaccia di raccolta che si desidera implementare (o presi in prestito).

- Derivare la classe da una specializzazione di `ICollectionOnSTLImpl` basate su questa interfaccia di raccolta.

- Usare la classe derivata per implementare metodi dall'interfaccia di raccolta non è gestito da `ICollectionOnSTLImpl`.

> [!NOTE]
>  Se l'interfaccia di raccolta è un'interfaccia duale, derivare la classe da [IDispatchImpl](../../atl/reference/idispatchimpl-class.md), passando il `ICollectionOnSTLImpl` specializzazione come primo parametro di modello se si desidera che ATL per fornire l'implementazione del `IDispatch` metodi.

- Aggiungere elementi per il [m_coll](#m_coll) membro per popolare la raccolta.

Per altre informazioni ed esempi, vedere [ATL raccolte ed enumeratori](../../atl/atl-collections-and-enumerators.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`T`

`ICollectionOnSTLImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="get_count"></a>  ICollectionOnSTLImpl::getcount

Questo metodo restituisce il numero di elementi nella raccolta.

```
STDMETHOD(getcount)(long* pcount);
```

### <a name="parameters"></a>Parametri

*pcount*<br/>
[out] Il numero di elementi nella raccolta.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="get_item"></a>  ICollectionOnSTLImpl::get_Item

Questo metodo restituisce l'elemento specificato dalla raccolta.

```
STDMETHOD(get_Item)(long Index, ItemType* pvar);
```

### <a name="parameters"></a>Parametri

*Index*<br/>
[in] Indice in base 1 di un elemento nella raccolta.

*pvar*<br/>
[out] L'elemento corrispondente *indice*.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'elemento viene ottenuto tramite la copia i dati nella posizione specificata in [m_coll](#m_coll) utilizzando il metodo di copia del [copiare classe policy](../../atl/atl-copy-policy-classes.md) passato come argomento di modello nel `ICollectionOnSTLImpl` specializzazione.

##  <a name="newenum"></a>  ICollectionOnSTLImpl::get__NewEnum

Restituisce un oggetto enumeratore per la raccolta.

```
STDMETHOD(get__NewEnum)(IUnknown** ppUnk);
```

### <a name="parameters"></a>Parametri

*ppUnk*<br/>
[out] Il **IUnknown** puntatore di un oggetto enumeratore appena creato.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'enumeratore appena creato mantiene un iteratore per la raccolta originale, `m_coll`, (in modo che viene eseguita alcuna copia) e mantiene un riferimento COM sull'oggetto di raccolta per assicurarsi che la raccolta rimane attiva anche se esistono gli enumeratori in sospeso.

##  <a name="m_coll"></a>  ICollectionOnSTLImpl::m_coll

Questo membro contiene gli elementi rappresentati dalla raccolta.

```
CollType m_coll;
```

## <a name="see-also"></a>Vedere anche

[Nell'esempio ATLCollections](../../overview/visual-cpp-samples.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

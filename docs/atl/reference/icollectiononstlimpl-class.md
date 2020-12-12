---
description: 'Altre informazioni su: classe ICollectionOnSTLImpl'
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
ms.openlocfilehash: 089fc0fbd8f410d740646e2a653b076d32448647
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139606"
---
# <a name="icollectiononstlimpl-class"></a>Classe ICollectionOnSTLImpl

Questa classe fornisce i metodi utilizzati da una classe di raccolte.

## <a name="syntax"></a>Sintassi

```
template <class T, class CollType, class ItemType, class CopyItem, class EnumType>
class ICollectionOnSTLImpl : public T
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Interfaccia di raccolta COM.

*CollType*<br/>
Classe contenitore della libreria standard C++.

*ItemType*<br/>
Tipo di elemento esposto dall'interfaccia del contenitore.

*CopyItem*<br/>
[Classe di criteri Copy](../../atl/atl-copy-policy-classes.md).

*EnumType*<br/>
Classe enumeratore compatibile con [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md).

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[ICollectionOnSTLImpl:: get__NewEnum](#newenum)|Restituisce un oggetto enumeratore per la raccolta.|
|[ICollectionOnSTLImpl:: GetCount](#get_count)|Restituisce il numero di elementi nella raccolta.|
|[ICollectionOnSTLImpl:: get_Item](#get_item)|Restituisce l'elemento richiesto dalla raccolta.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[ICollectionOnSTLImpl:: m_coll](#m_coll)|Raccolta.|

## <a name="remarks"></a>Commenti

Questa classe fornisce l'implementazione per tre metodi di un'interfaccia di raccolta: [GetCount](#get_count), [get_Item](#get_item)e [get__NewEnum](#newenum).

Per usare questa classe:

- Definire (o prendere in prestito) un'interfaccia di raccolta che si desidera implementare.

- Derivare la classe da una specializzazione di `ICollectionOnSTLImpl` basata su questa interfaccia di raccolta.

- Utilizzare la classe derivata per implementare tutti i metodi dall'interfaccia di raccolta non gestiti da `ICollectionOnSTLImpl` .

> [!NOTE]
> Se l'interfaccia di raccolta è un'interfaccia duale, derivare la classe da [IDispatchImpl](../../atl/reference/idispatchimpl-class.md), passando la `ICollectionOnSTLImpl` specializzazione come primo parametro di modello se si desidera che ATL fornisca l'implementazione dei `IDispatch` metodi.

- Aggiungere elementi al membro [m_coll](#m_coll) per popolare la raccolta.

Per ulteriori informazioni ed esempi, vedere [raccolte ed enumeratori ATL](../../atl/atl-collections-and-enumerators.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`T`

`ICollectionOnSTLImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="icollectiononstlimplgetcount"></a><a name="get_count"></a> ICollectionOnSTLImpl:: GetCount

Questo metodo restituisce il numero di elementi nella raccolta.

```
STDMETHOD(getcount)(long* pcount);
```

### <a name="parameters"></a>Parametri

*pcount*<br/>
out Numero di elementi nella raccolta.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="icollectiononstlimplget_item"></a><a name="get_item"></a> ICollectionOnSTLImpl:: get_Item

Questo metodo restituisce l'elemento specificato dalla raccolta.

```
STDMETHOD(get_Item)(long Index, ItemType* pvar);
```

### <a name="parameters"></a>Parametri

*Index*<br/>
in Indice in base 1 di un elemento nella raccolta.

*pVar*<br/>
out Elemento corrispondente all' *Indice*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

L'elemento viene ottenuto copiando i dati in corrispondenza della posizione specificata in [m_coll](#m_coll) usando il metodo Copy della [classe di criteri Copy](../../atl/atl-copy-policy-classes.md) passata come argomento di modello nella `ICollectionOnSTLImpl` specializzazione.

## <a name="icollectiononstlimplget__newenum"></a><a name="newenum"></a> ICollectionOnSTLImpl:: get__NewEnum

Restituisce un oggetto enumeratore per la raccolta.

```
STDMETHOD(get__NewEnum)(IUnknown** ppUnk);
```

### <a name="parameters"></a>Parametri

*ppUnk*<br/>
out Puntatore **IUnknown** di un oggetto enumeratore appena creato.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

L'enumeratore appena creato mantiene un iteratore sulla raccolta originale, `m_coll` , in modo che non venga eseguita alcuna copia, e contiene un riferimento com nell'oggetto raccolta per assicurarsi che la raccolta rimanga attiva finché sono presenti enumeratori in attesa.

## <a name="icollectiononstlimplm_coll"></a><a name="m_coll"></a> ICollectionOnSTLImpl:: m_coll

Questo membro include gli elementi rappresentati dalla raccolta.

```
CollType m_coll;
```

## <a name="see-also"></a>Vedi anche

[Esempio ATLCollections](../../overview/visual-cpp-samples.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

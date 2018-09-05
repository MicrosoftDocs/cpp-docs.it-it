---
title: Classe ICollectionOnSTLImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- ICollectionOnSTLImpl
- ATLCOM/ATL::ICollectionOnSTLImpl
- ATLCOM/ATL::ICollectionOnSTLImpl::get__NewEnum
- ATLCOM/ATL::ICollectionOnSTLImpl::getcount
- ATLCOM/ATL::ICollectionOnSTLImpl::get_Item
- ATLCOM/ATL::ICollectionOnSTLImpl::m_coll
dev_langs:
- C++
helpviewer_keywords:
- ICollectionOnSTLImpl class
ms.assetid: 683c88b0-0d97-4779-a762-e493334ba7f9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6bbfb34d34f6bd920744621042f5f3e09143e896
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43751319"
---
# <a name="icollectiononstlimpl-class"></a>Classe ICollectionOnSTLImpl

Questa classe fornisce metodi usati da una classe di raccolta.

## <a name="syntax"></a>Sintassi

```
template <class T, class CollType, class ItemType, class CopyItem, class EnumType>  
class ICollectionOnSTLImpl : public T
```

#### <a name="parameters"></a>Parametri

*T*  
Un'interfaccia COM di raccolta.

*CollType*  
Classe contenitore della libreria Standard C++.

*Tipo di elemento*  
Il tipo di elemento esposto dall'interfaccia del contenitore.

*CopyItem*  
Oggetto [copiare criteri classe](../../atl/atl-copy-policy-classes.md).

*EnumType*  
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

*pcount*  
[out] Il numero di elementi nella raccolta.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="get_item"></a>  ICollectionOnSTLImpl::get_Item

Questo metodo restituisce l'elemento specificato dalla raccolta.

```
STDMETHOD(get_Item)(long Index, ItemType* pvar);
```

### <a name="parameters"></a>Parametri

*Index*  
[in] Indice in base 1 di un elemento nella raccolta.

*pvar*  
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

*ppUnk*  
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

[Nell'esempio ATLCollections](../../visual-cpp-samples.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)

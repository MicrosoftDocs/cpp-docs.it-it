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
ms.openlocfilehash: a8ccab08b89da8c1b8ef56c8932e27a6c74e62aa
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329899"
---
# <a name="icollectiononstlimpl-class"></a>Classe ICollectionOnSTLImpl

Questa classe fornisce i metodi utilizzati da una classe di raccolta.

## <a name="syntax"></a>Sintassi

```
template <class T, class CollType, class ItemType, class CopyItem, class EnumType>
class ICollectionOnSTLImpl : public T
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Interfaccia di raccolta COM.

*CollType (tipo di lavoro*<br/>
Una classe contenitore Libreria Standard di C.

*Itemtype*<br/>
Tipo di elemento esposto dall'interfaccia del contenitore.

*CopiaElemento*<br/>
Classe [criteri di copia](../../atl/atl-copy-policy-classes.md).

*Enumtype*<br/>
Una classe enumeratore compatibile con [CComEnumOnSTL.](../../atl/reference/ccomenumonstl-class.md)

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

## <a name="remarks"></a>Osservazioni

Questa classe fornisce l'implementazione per tre metodi di un'interfaccia di raccolta: [getcount](#get_count), [get_Item](#get_item)e [get__NewEnum](#newenum).

Per utilizzare questa classe:

- Definire (o prendere in prestito) un'interfaccia di raccolta che si desidera implementare.

- Derivare la classe da `ICollectionOnSTLImpl` una specializzazione di basata su questa interfaccia di raccolta.

- Utilizzare la classe derivata per implementare i `ICollectionOnSTLImpl`metodi dall'interfaccia di raccolta non gestita da .

> [!NOTE]
> Se l'interfaccia dell'insieme è un'interfaccia duale, `ICollectionOnSTLImpl` derivare la classe da [IDispatchImpl](../../atl/reference/idispatchimpl-class.md), passando `IDispatch` la specializzazione come primo parametro di modello se si desidera che ATL fornisca l'implementazione dei metodi.

- Aggiungere elementi al [membro m_coll](#m_coll) per popolare la raccolta.

Per ulteriori informazioni ed esempi, vedere [Raccolte ED enumeratori ATL](../../atl/atl-collections-and-enumerators.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`T`

`ICollectionOnSTLImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="icollectiononstlimplgetcount"></a><a name="get_count"></a>ICollectionOnSTLImpl::getcount

Questo metodo restituisce il numero di elementi nella raccolta.

```
STDMETHOD(getcount)(long* pcount);
```

### <a name="parameters"></a>Parametri

*pcount*<br/>
[fuori] Numero di elementi nella raccolta.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="icollectiononstlimplget_item"></a><a name="get_item"></a>ICollectionOnSTLImpl::get_Item

Questo metodo restituisce l'elemento specificato dalla raccolta.

```
STDMETHOD(get_Item)(long Index, ItemType* pvar);
```

### <a name="parameters"></a>Parametri

*Indice*<br/>
[in] Indice in base 1 di un elemento nella raccolta.

*pvar*<br/>
[fuori] L'elemento corrispondente a *Index*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'elemento viene ottenuto copiando i dati nella posizione specificata in [m_coll](#m_coll) utilizzando il `ICollectionOnSTLImpl` metodo copy della classe criteri di [copia](../../atl/atl-copy-policy-classes.md) passata come argomento di modello nella specializzazione.

## <a name="icollectiononstlimplget__newenum"></a><a name="newenum"></a>ICollectionOnSTLImpl::get__NewEnum

Restituisce un oggetto enumeratore per la raccolta.

```
STDMETHOD(get__NewEnum)(IUnknown** ppUnk);
```

### <a name="parameters"></a>Parametri

*ppUnk*<br/>
[fuori] Puntatore **IUnknown** di un oggetto enumeratore appena creato.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'enumeratore appena creato mantiene un `m_coll`iteratore sull'insieme originale, , (quindi non viene creata alcuna copia) e contiene un riferimento COM sull'oggetto insieme per garantire che l'insieme rimanga attivo mentre sono presenti enumeratori in sospeso.

## <a name="icollectiononstlimplm_coll"></a><a name="m_coll"></a>ICollectionOnSTLImpl::m_coll

Questo membro contiene gli elementi rappresentati dalla raccolta.

```
CollType m_coll;
```

## <a name="see-also"></a>Vedere anche

[Esempio ATLCollections](../../overview/visual-cpp-samples.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

---
description: 'Altre informazioni su: classe IEnumOnSTLImpl'
title: Classe IEnumOnSTLImpl
ms.date: 11/04/2016
f1_keywords:
- IEnumOnSTLImpl
- ATLCOM/ATL::IEnumOnSTLImpl
- ATLCOM/ATL::IEnumOnSTLImpl::Clone
- ATLCOM/ATL::IEnumOnSTLImpl::Init
- ATLCOM/ATL::IEnumOnSTLImpl::Next
- ATLCOM/ATL::IEnumOnSTLImpl::Reset
- ATLCOM/ATL::IEnumOnSTLImpl::Skip
- ATLCOM/ATL::IEnumOnSTLImpl::m_iter
- ATLCOM/ATL::IEnumOnSTLImpl::m_pcollection
- ATLCOM/ATL::IEnumOnSTLImpl::m_spUnk
helpviewer_keywords:
- IEnumOnSTLImpl class
ms.assetid: 1789e77b-88b8-447d-a490-806b918912ce
ms.openlocfilehash: 33bc34288ebd03f987532ebb078fed62ce2204c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139490"
---
# <a name="ienumonstlimpl-class"></a>Classe IEnumOnSTLImpl

Questa classe definisce un'interfaccia di enumeratore basata su una raccolta di librerie standard C++.

## <a name="syntax"></a>Sintassi

```
template <class Base,
    const IID* piid, class T, class Copy, class CollType>
class ATL_NO_VTABLE IEnumOnSTLImpl : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
Enumeratore COM. Per un esempio, vedere [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) .

*pIID*<br/>
Puntatore all'ID di interfaccia dell'interfaccia dell'enumeratore.

*T*<br/>
Tipo di elemento esposto dall'interfaccia dell'enumeratore.

*Copia*<br/>
[Classe di criteri Copy](../../atl/atl-copy-policy-classes.md).

*CollType*<br/>
Classe contenitore della libreria standard C++.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IEnumOnSTLImpl:: Clone](#clone)|Implementazione del **Clone**.|
|[IEnumOnSTLImpl:: init](#init)|Inizializza l'enumeratore.|
|[IEnumOnSTLImpl:: Next](#next)|Implementazione di **Next**.|
|[IEnumOnSTLImpl:: Reset](#reset)|Implementazione della **reimpostazione**.|
|[IEnumOnSTLImpl:: Skip](#skip)|Implementazione di **Skip**.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[IEnumOnSTLImpl:: m_iter](#m_iter)|Iteratore che rappresenta la posizione corrente dell'enumeratore all'interno dell'insieme.|
|[IEnumOnSTLImpl:: m_pcollection](#m_pcollection)|Puntatore al contenitore della libreria standard C++ che contiene gli elementi da enumerare.|
|[IEnumOnSTLImpl:: m_spUnk](#m_spunk)|`IUnknown`Puntatore dell'oggetto che fornisce la raccolta.|

## <a name="remarks"></a>Commenti

`IEnumOnSTLImpl` fornisce l'implementazione per un'interfaccia dell'enumeratore COM in cui gli elementi enumerati vengono archiviati in un contenitore compatibile con la libreria standard C++. Questa classe è simile alla classe [CComEnumImpl](../../atl/reference/ccomenumimpl-class.md) , che fornisce un'implementazione per un'interfaccia dell'enumeratore basata su una matrice.

> [!NOTE]
> Per informazioni dettagliate sulle ulteriori differenze tra e, vedere [CComEnumImpl:: init](../../atl/reference/ccomenumimpl-class.md#init) `CComEnumImpl` `IEnumOnSTLImpl` .

In genere, *non* è necessario creare una classe di enumeratore personalizzata derivando da questa implementazione dell'interfaccia. Se si desidera utilizzare un enumeratore fornito da ATL basato su un contenitore della libreria standard C++, è più comune creare un'istanza di [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md)o creare una classe di raccolta che restituisca un enumeratore mediante derivazione da [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md).

Tuttavia, se è necessario fornire un enumeratore personalizzato (ad esempio, uno che espone interfacce oltre all'interfaccia dell'enumeratore), è possibile derivare da questa classe. In questa situazione è probabile che sia necessario eseguire l'override del metodo [Clone](#clone) per fornire un'implementazione personalizzata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`IEnumOnSTLImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ienumonstlimplinit"></a><a name="init"></a> IEnumOnSTLImpl:: init

Inizializza l'enumeratore.

```
HRESULT Init(
    IUnknown* pUnkForRelease,
    CollType& collection);
```

### <a name="parameters"></a>Parametri

*pUnkForRelease*<br/>
in `IUnknown` Puntatore di un oggetto che deve essere mantenuto attivo nel corso della durata dell'enumeratore. Passare NULL se tale oggetto non esiste.

*raccolta*<br/>
Riferimento al contenitore della libreria standard C++ che include gli elementi da enumerare.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Se si passa `Init` un riferimento a una raccolta contenuta in un altro oggetto, è possibile usare il parametro *pUnkForRelease* per assicurarsi che l'oggetto e la raccolta che possiede siano disponibili per tutto il tempo necessario per l'enumeratore.

È necessario chiamare questo metodo prima di passare un puntatore all'interfaccia dell'enumeratore ai client.

## <a name="ienumonstlimplclone"></a><a name="clone"></a> IEnumOnSTLImpl:: Clone

Questo metodo fornisce l'implementazione del metodo **Clone** mediante la creazione di un oggetto di tipo `CComEnumOnSTL` , l'inizializzazione con la stessa raccolta e l'iteratore utilizzati dall'oggetto corrente e la restituzione dell'interfaccia nell'oggetto appena creato.

```
STDMETHOD(Clone)(Base** ppEnum);
```

### <a name="parameters"></a>Parametri

*ppEnum*<br/>
out Interfaccia dell'enumeratore su un oggetto appena creato clonato dall'enumeratore corrente.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ienumonstlimplm_spunk"></a><a name="m_spunk"></a> IEnumOnSTLImpl:: m_spUnk

`IUnknown`Puntatore dell'oggetto che fornisce la raccolta.

```
CComPtr<IUnknown> m_spUnk;
```

### <a name="remarks"></a>Commenti

Questo puntatore intelligente mantiene un riferimento all'oggetto passato a [IEnumOnSTLImpl:: init](#init), assicurando che rimanga attivo nel corso della durata dell'enumeratore.

## <a name="ienumonstlimplm_pcollection"></a><a name="m_pcollection"></a> IEnumOnSTLImpl:: m_pcollection

Questo membro punta alla raccolta che fornisce i dati che guidano l'implementazione dell'interfaccia dell'enumeratore.

```
CollType* m_pcollection;
```

### <a name="remarks"></a>Commenti

Questo membro viene inizializzato da una chiamata a [IEnumOnSTLImpl:: init](#init).

## <a name="ienumonstlimplm_iter"></a><a name="m_iter"></a> IEnumOnSTLImpl:: m_iter

Questo membro include l'iteratore usato per contrassegnare la posizione corrente all'interno dell'insieme e passare agli elementi successivi.

```
CollType::iterator m_iter;
```

## <a name="ienumonstlimplnext"></a><a name="next"></a> IEnumOnSTLImpl:: Next

Questo metodo fornisce l'implementazione del metodo **successivo** .

```
STDMETHOD(Next)(
    ULONG celt,
    T* rgelt,
    ULONG* pceltFetched);
```

### <a name="parameters"></a>Parametri

*celt*<br/>
in Numero di elementi richiesti.

*rgelt*<br/>
out Matrice da compilare con gli elementi.

*pceltFetched*<br/>
out Numero di elementi effettivamente restituiti in *rgelt*. Può essere minore di *celt* se il numero di elementi *celt* rimane nell'elenco.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ienumonstlimplreset"></a><a name="reset"></a> IEnumOnSTLImpl:: Reset

Questo metodo fornisce l'implementazione del metodo **Reset** .

```
STDMETHOD(Reset)(void);
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ienumonstlimplskip"></a><a name="skip"></a> IEnumOnSTLImpl:: Skip

Questo metodo fornisce l'implementazione del metodo **Skip** .

```
STDMETHOD(Skip)(ULONG celt);
```

### <a name="parameters"></a>Parametri

*celt*<br/>
in Numero di elementi da ignorare.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

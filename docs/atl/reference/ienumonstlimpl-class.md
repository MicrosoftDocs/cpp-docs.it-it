---
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
ms.openlocfilehash: 7cf777f3ff0d298f224157735a06bf57a2c10cf5
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495866"
---
# <a name="ienumonstlimpl-class"></a>Classe IEnumOnSTLImpl

Questa classe definisce un'interfaccia di enumeratore basata C++ su una raccolta di librerie standard.

## <a name="syntax"></a>Sintassi

```
template <class Base,
    const IID* piid, class T, class Copy, class CollType>
class ATL_NO_VTABLE IEnumOnSTLImpl : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
Enumeratore COM. Per un esempio, vedere [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) .

*piid*<br/>
Puntatore all'ID di interfaccia dell'interfaccia dell'enumeratore.

*T*<br/>
Tipo di elemento esposto dall'interfaccia dell'enumeratore.

*Copia*<br/>
[Classe di criteri Copy](../../atl/atl-copy-policy-classes.md).

*CollType*<br/>
Classe C++ contenitore della libreria standard.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IEnumOnSTLImpl::Clone](#clone)|Implementazione del **Clone**.|
|[IEnumOnSTLImpl::Init](#init)|Inizializza l'enumeratore.|
|[IEnumOnSTLImpl::Next](#next)|Implementazione di **Next**.|
|[IEnumOnSTLImpl::Reset](#reset)|Implementazione della **reimpostazione**.|
|[IEnumOnSTLImpl::Skip](#skip)|Implementazione di **Skip**.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[IEnumOnSTLImpl::m_iter](#m_iter)|Iteratore che rappresenta la posizione corrente dell'enumeratore all'interno dell'insieme.|
|[IEnumOnSTLImpl::m_pcollection](#m_pcollection)|Puntatore al contenitore della C++ libreria standard che contiene gli elementi da enumerare.|
|[IEnumOnSTLImpl::m_spUnk](#m_spunk)|`IUnknown` Puntatore dell'oggetto che fornisce la raccolta.|

## <a name="remarks"></a>Note

`IEnumOnSTLImpl`fornisce l'implementazione per un'interfaccia dell'enumeratore COM in cui gli elementi enumerati vengono archiviati C++ in un contenitore standard compatibile con la libreria. Questa classe è simile alla classe [CComEnumImpl](../../atl/reference/ccomenumimpl-class.md) , che fornisce un'implementazione per un'interfaccia dell'enumeratore basata su una matrice.

> [!NOTE]
>  Per informazioni dettagliate sulle ulteriori differenze tra `CComEnumImpl` e, `IEnumOnSTLImpl`vedere [CComEnumImpl:: init](../../atl/reference/ccomenumimpl-class.md#init) .

In genere, *non* è necessario creare una classe di enumeratore personalizzata derivando da questa implementazione dell'interfaccia. Se si desidera utilizzare un enumeratore fornito da ATL basato su un C++ contenitore della libreria standard, è più comune creare un'istanza di [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md)o creare una classe di raccolta che restituisce un enumeratore mediante derivazione da [ICollectionOnSTLImpl ](../../atl/reference/icollectiononstlimpl-class.md).

Tuttavia, se è necessario fornire un enumeratore personalizzato (ad esempio, uno che espone interfacce oltre all'interfaccia dell'enumeratore), è possibile derivare da questa classe. In questa situazione è probabile che sia necessario eseguire l'override del metodo [Clone](#clone) per fornire un'implementazione personalizzata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`IEnumOnSTLImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="init"></a>  IEnumOnSTLImpl::Init

Inizializza l'enumeratore.

```
HRESULT Init(
    IUnknown* pUnkForRelease,
    CollType& collection);
```

### <a name="parameters"></a>Parametri

*pUnkForRelease*<br/>
in `IUnknown` Puntatore di un oggetto che deve essere mantenuto attivo nel corso della durata dell'enumeratore. Passare NULL se tale oggetto non esiste.

*collection*<br/>
Riferimento al contenitore della C++ libreria standard che include gli elementi da enumerare.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

Se si passa `Init` un riferimento a una raccolta contenuta in un altro oggetto, è possibile usare il parametro *pUnkForRelease* per assicurarsi che l'oggetto e la raccolta che possiede siano disponibili per tutto il tempo necessario per l'enumeratore.

È necessario chiamare questo metodo prima di passare un puntatore all'interfaccia dell'enumeratore ai client.

##  <a name="clone"></a>  IEnumOnSTLImpl::Clone

Questo metodo fornisce l'implementazione del metodo **Clone** mediante la creazione di un oggetto di `CComEnumOnSTL`tipo, l'inizializzazione con la stessa raccolta e l'iteratore utilizzati dall'oggetto corrente e la restituzione dell'interfaccia nell'oggetto appena creato.

```
STDMETHOD(Clone)(Base** ppEnum);
```

### <a name="parameters"></a>Parametri

*ppEnum*<br/>
out Interfaccia dell'enumeratore su un oggetto appena creato clonato dall'enumeratore corrente.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="m_spunk"></a>  IEnumOnSTLImpl::m_spUnk

`IUnknown` Puntatore dell'oggetto che fornisce la raccolta.

```
CComPtr<IUnknown> m_spUnk;
```

### <a name="remarks"></a>Note

Questo puntatore intelligente mantiene un riferimento all'oggetto passato a [IEnumOnSTLImpl:: init](#init), assicurando che rimanga attivo nel corso della durata dell'enumeratore.

##  <a name="m_pcollection"></a>  IEnumOnSTLImpl::m_pcollection

Questo membro punta alla raccolta che fornisce i dati che guidano l'implementazione dell'interfaccia dell'enumeratore.

```
CollType* m_pcollection;
```

### <a name="remarks"></a>Note

Questo membro viene inizializzato da una chiamata a [IEnumOnSTLImpl:: init](#init).

##  <a name="m_iter"></a>  IEnumOnSTLImpl::m_iter

Questo membro include l'iteratore usato per contrassegnare la posizione corrente all'interno dell'insieme e passare agli elementi successivi.

```
CollType::iterator m_iter;
```

##  <a name="next"></a>  IEnumOnSTLImpl::Next

Questo metodo fornisce l'implementazione del metodo **successivo** .

```
STDMETHOD(Next)(
    ULONG celt,
    T* rgelt,
    ULONG* pceltFetched);
```

### <a name="parameters"></a>Parametri

*Celt*<br/>
in Numero di elementi richiesti.

*rgelt*<br/>
out Matrice da compilare con gli elementi.

*pceltFetched*<br/>
out Numero di elementi effettivamente restituiti in *rgelt*. Può essere minore di *celt* se il numero di elementi *celt* rimane nell'elenco.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="reset"></a>  IEnumOnSTLImpl::Reset

Questo metodo fornisce l'implementazione del metodo **Reset** .

```
STDMETHOD(Reset)(void);
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="skip"></a>  IEnumOnSTLImpl::Skip

Questo metodo fornisce l'implementazione del metodo **Skip** .

```
STDMETHOD(Skip)(ULONG celt);
```

### <a name="parameters"></a>Parametri

*Celt*<br/>
in Numero di elementi da ignorare.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)

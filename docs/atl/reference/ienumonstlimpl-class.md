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
ms.openlocfilehash: 2fbe6ccfbea2836c42a054da7ea9ebeac4e1555d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329703"
---
# <a name="ienumonstlimpl-class"></a>Classe IEnumOnSTLImpl

Questa classe definisce un'interfaccia dell'enumeratore in base a una raccolta di librerie standard di C.

## <a name="syntax"></a>Sintassi

```
template <class Base,
    const IID* piid, class T, class Copy, class CollType>
class ATL_NO_VTABLE IEnumOnSTLImpl : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
Enumeratore COM. Vedere [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) per un esempio.

*piid*<br/>
Puntatore all'ID di interfaccia dell'interfaccia dell'enumeratore.

*T*<br/>
Tipo di elemento esposto dall'interfaccia dell'enumeratore.

*Copia*<br/>
Classe [criteri di copia](../../atl/atl-copy-policy-classes.md).

*CollType (tipo di lavoro*<br/>
Una classe contenitore Libreria Standard di C.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IEnumOnSTLImpl::Clone](#clone)|L'implementazione di **Clone**.|
|[IEnumOnSTLImpl::Init](#init)|Inizializza l'enumeratore.|
|[IEnumOnSTLImpl::Avanti](#next)|L'implementazione di **Next**.|
|[IEnumOnSTLImpl::Reset](#reset)|L'implementazione di **Reset**.|
|[IEnumOnSTLImpl::Salta](#skip)|L'implementazione di **Skip**.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IEnumOnSTLImpl::m_iter](#m_iter)|Iteratore che rappresenta la posizione corrente dell'enumeratore all'interno della raccolta.|
|[IEnumOnSTLImpl::m_pcollection](#m_pcollection)|Un puntatore al contenitore della libreria standard di C, che contiene gli elementi da enumerare.|
|[IEnumOnSTLImpl::m_spUnk](#m_spunk)|Puntatore `IUnknown` dell'oggetto che fornisce la raccolta.|

## <a name="remarks"></a>Osservazioni

`IEnumOnSTLImpl`fornisce l'implementazione per un'interfaccia dell'enumeratore COM in cui gli elementi da enumerare vengono archiviati in un contenitore compatibile con la libreria standard di C. Questa classe è analoga alla classe [CComEnumImpl,](../../atl/reference/ccomenumimpl-class.md) che fornisce un'implementazione per un'interfaccia enumeratore basata su una matrice.

> [!NOTE]
> Vedere [CComEnumImpl::Init](../../atl/reference/ccomenumimpl-class.md#init) per informazioni `CComEnumImpl` dettagliate su ulteriori differenze tra e `IEnumOnSTLImpl`.

In genere, *non* è necessario creare una classe enumeratore personalizzata derivandola da questa implementazione dell'interfaccia. Se si desidera utilizzare un enumeratore fornito da ATL in base a un contenitore della libreria standard di C, è più comune creare un'istanza di [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md)o creare una classe di raccolta che restituisca un enumeratore derivandolo da [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md).

Tuttavia, se è necessario fornire un enumeratore personalizzato (ad esempio, uno che espone le interfacce oltre all'interfaccia dell'enumeratore), è possibile derivare da questa classe. In questo caso è probabile che sarà necessario eseguire l'override di [Clone](#clone) metodo per fornire la propria implementazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`IEnumOnSTLImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ienumonstlimplinit"></a><a name="init"></a>IEnumOnSTLImpl::Init

Inizializza l'enumeratore.

```
HRESULT Init(
    IUnknown* pUnkForRelease,
    CollType& collection);
```

### <a name="parameters"></a>Parametri

*Punkforrelease*<br/>
[in] Puntatore `IUnknown` di un oggetto che deve essere mantenuto attivo per tutta la durata dell'enumeratore. Passare NULL se tale oggetto non esiste.

*Collezione*<br/>
Un riferimento al contenitore della libreria standard di C' che contiene gli elementi da enumerare.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se si `Init` passa un riferimento a una raccolta contenuta in un altro oggetto, è possibile utilizzare il *pUnkForRelease* parametro per assicurarsi che l'oggetto, e la raccolta che contiene, è disponibile per tutto il tempo che l'enumeratore ha bisogno.

È necessario chiamare questo metodo prima di passare un puntatore all'interfaccia dell'enumeratore a qualsiasi client.

## <a name="ienumonstlimplclone"></a><a name="clone"></a>IEnumOnSTLImpl::Clone

Questo metodo fornisce l'implementazione del **Clone** `CComEnumOnSTL`metodo creando un oggetto di tipo , inizializzandolo con la stessa raccolta e iteratore utilizzati dall'oggetto corrente e restituendo l'interfaccia sull'oggetto appena creato.

```
STDMETHOD(Clone)(Base** ppEnum);
```

### <a name="parameters"></a>Parametri

*ppEnum (informazioni in questo gruppo)*<br/>
[fuori] Interfaccia dell'enumeratore su un oggetto appena creato clonato dall'enumeratore corrente.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ienumonstlimplm_spunk"></a><a name="m_spunk"></a>IEnumOnSTLImpl::m_spUnk

Puntatore `IUnknown` dell'oggetto che fornisce la raccolta.

```
CComPtr<IUnknown> m_spUnk;
```

### <a name="remarks"></a>Osservazioni

Questo puntatore intelligente mantiene un riferimento sull'oggetto passato a [IEnumOnSTLImpl::Init](#init), assicurandoche rimanga attivo per tutta la durata dell'enumeratore.

## <a name="ienumonstlimplm_pcollection"></a><a name="m_pcollection"></a>IEnumOnSTLImpl::m_pcollection

Questo membro punta alla raccolta che fornisce i dati che guidano l'implementazione dell'interfaccia dell'enumeratore.

```
CollType* m_pcollection;
```

### <a name="remarks"></a>Osservazioni

Questo membro viene inizializzato da una chiamata a [IEnumOnSTLImpl::Init](#init).

## <a name="ienumonstlimplm_iter"></a><a name="m_iter"></a>IEnumOnSTLImpl::m_iter

Questo membro contiene l'iteratore utilizzato per contrassegnare la posizione corrente all'interno della raccolta e passare agli elementi successivi.

```
CollType::iterator m_iter;
```

## <a name="ienumonstlimplnext"></a><a name="next"></a>IEnumOnSTLImpl::Avanti

Questo metodo fornisce l'implementazione del **Next** metodo.

```
STDMETHOD(Next)(
    ULONG celt,
    T* rgelt,
    ULONG* pceltFetched);
```

### <a name="parameters"></a>Parametri

*celt*<br/>
[in] Numero di elementi richiesti.

*Rgelt*<br/>
[fuori] Matrice da compilare con gli elementi.

*pceltFetched*<br/>
[fuori] Il numero di elementi effettivamente restituiti in *rgelt*. Questo può essere minore di *celt* se meno di *celt* elementi rimangono nell'elenco.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ienumonstlimplreset"></a><a name="reset"></a>IEnumOnSTLImpl::Reset

Questo metodo fornisce l'implementazione del **Reset** metodo.

```
STDMETHOD(Reset)(void);
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ienumonstlimplskip"></a><a name="skip"></a>IEnumOnSTLImpl::Salta

Questo metodo fornisce l'implementazione del **Skip** metodo.

```
STDMETHOD(Skip)(ULONG celt);
```

### <a name="parameters"></a>Parametri

*celt*<br/>
[in] Numero di elementi da ignorare.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

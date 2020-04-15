---
title: CComEnumImpl (classe)
ms.date: 11/04/2016
f1_keywords:
- CComEnumImpl
- ATLCOM/ATL::CComEnumImpl
- ATLCOM/ATL::CComEnumImpl::CComEnumImpl
- ATLCOM/ATL::CComEnumImpl::Clone
- ATLCOM/ATL::CComEnumImpl::Init
- ATLCOM/ATL::CComEnumImpl::Next
- ATLCOM/ATL::CComEnumImpl::Reset
- ATLCOM/ATL::CComEnumImpl::Skip
- ATLCOM/ATL::CComEnumImpl::m_begin
- ATLCOM/ATL::CComEnumImpl::m_dwFlags
- ATLCOM/ATL::CComEnumImpl::m_end
- ATLCOM/ATL::CComEnumImpl::m_iter
- ATLCOM/ATL::CComEnumImpl::m_spUnk
helpviewer_keywords:
- CComEnumImpl class
ms.assetid: cc0d8e76-e608-46db-87cd-4c7161fe32d2
ms.openlocfilehash: 965e0a8bf6c890882754b60e2785832933d1c52c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327869"
---
# <a name="ccomenumimpl-class"></a>CComEnumImpl (classe)

Questa classe fornisce l'implementazione per un'interfaccia enumeratore COM in cui gli elementi da enumerare vengono archiviati in una matrice.

## <a name="syntax"></a>Sintassi

```
template <class Base,
    const IID* piid, class T, class Copy>
class ATL_NO_VTABLE CComEnumImpl : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
Interfaccia dell'enumeratore COM. Vedere [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) per un esempio.

*piid*<br/>
Puntatore all'ID di interfaccia dell'interfaccia dell'enumeratore.

*T*<br/>
Tipo di elemento esposto dall'interfaccia dell'enumeratore.

*Copia*<br/>
Una [classe di criteri](../../atl/atl-copy-policy-classes.md)di copia omogenea .

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComEnumImpl::CComEnumImpl](#ccomenumimpl)|Costruttore.|
|[CComEnumImpl:: CComEnumImpl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComEnumImpl::Clone](#clone)|Implementazione del metodo di interfaccia di enumerazione **Clone.**|
|[CComEnumImpl::Init (Informazioni in cui è inesigusta)](#init)|Inizializza l'enumeratore.|
|[CComEnumImpl::Avanti](#next)|L'implementazione di **Next**.|
|[CComEnumImpl::Reset](#reset)|L'implementazione di **Reset**.|
|[CComEnumImpl::Salta](#skip)|L'implementazione di **Skip**.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComEnumImpl::m_begin](#m_begin)|Puntatore al primo elemento nella matrice.|
|[CComEnumImpl::m_dwFlags](#m_dwflags)|Flag di `Init`copia passati tramite .|
|[CComEnumImpl::m_end](#m_end)|Puntatore alla posizione appena oltre l'ultimo elemento nella matrice.|
|[CComEnumImpl::m_iter](#m_iter)|Puntatore all'elemento corrente nella matrice.|
|[CComEnumImpl::m_spUnk](#m_spunk)|Puntatore `IUnknown` dell'oggetto che fornisce la raccolta da enumerare.|

## <a name="remarks"></a>Osservazioni

Vedere [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) per un esempio di implementazioni di metodi. `CComEnumImpl`fornisce l'implementazione per un'interfaccia dell'enumeratore COM in cui gli elementi enumerati vengono archiviati in una matrice. Questa classe è analoga `IEnumOnSTLImpl` alla classe , che fornisce un'implementazione di un'interfaccia dell'enumeratore in base a un contenitore della libreria standard di C.

> [!NOTE]
> Per informazioni dettagliate `CComEnumImpl` `IEnumOnSTLImpl`sulle ulteriori differenze tra e , vedere [CComEnumImpl::Init](#init).

In genere, *non* è necessario creare una classe enumeratore personalizzata derivandola da questa implementazione dell'interfaccia. Se si desidera utilizzare un enumeratore fornito da ATL basato su una matrice, è più comune creare un'istanza di [CComEnum](../../atl/reference/ccomenum-class.md).

Tuttavia, se è necessario fornire un enumeratore personalizzato (ad esempio, uno che espone le interfacce oltre all'interfaccia dell'enumeratore), è possibile derivare da questa classe. In questo caso, è probabile che sarà necessario eseguire l'override di [CComEnumImpl::Clone](#clone) metodo per fornire la propria implementazione.

Per ulteriori informazioni, vedere [Raccolte ed enumeratori ATL](../../atl/atl-collections-and-enumerators.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComEnumImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomenumimplccomenumimpl"></a><a name="ccomenumimpl"></a>CComEnumImpl::CComEnumImpl

Costruttore.

```
CComEnumImpl();
```

## <a name="ccomenumimplccomenumimpl"></a><a name="dtor"></a>CComEnumImpl:: CComEnumImpl

Distruttore.

```
~CComEnumImpl();
```

## <a name="ccomenumimplinit"></a><a name="init"></a>CComEnumImpl::Init (Informazioni in cui è inesigusta)

È necessario chiamare questo metodo prima di passare un puntatore all'interfaccia dell'enumeratore a qualsiasi client.

```
HRESULT Init(
    T* begin,
    T* end,
    IUnknown* pUnk,
    CComEnumFlags flags = AtlFlagNoCopy);
```

### <a name="parameters"></a>Parametri

*Iniziare*<br/>
Puntatore al primo elemento della matrice contenente gli elementi da enumerare.

*end*<br/>
Puntatore alla posizione appena oltre l'ultimo elemento della matrice contenente gli elementi da enumerare.

*Punk*<br/>
[in] Puntatore `IUnknown` di un oggetto che deve essere mantenuto attivo per tutta la durata dell'enumeratore. Passare NULL se tale oggetto non esiste.

*Bandiere*<br/>
Flag che specificano se l'enumeratore deve assumere la proprietà della matrice o crearne una copia. I valori possibili sono descritti di seguito.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo solo una volta, ovvero inizializzare l'enumeratore, utilizzarlo, quindi buttarlo via.

Se si passano puntatori a elementi in una matrice contenuta in un altro oggetto (e non si chiede all'enumeratore di copiare i dati), è possibile utilizzare il *pUnk* parametro per garantire che l'oggetto e la matrice che contiene sono disponibili per tutto il tempo che l'enumeratore ne ha bisogno. L'enumeratore contiene semplicemente un riferimento COM sull'oggetto per mantenerlo attivo. Il riferimento COM viene rilasciato automaticamente quando l'enumeratore viene eliminato.

Il *flags* parametro consente di specificare come l'enumeratore deve gestire gli elementi della matrice passati. *i flag* possono accettare uno `CComEnumFlags` dei valori dell'enumerazione illustrata di seguito:

```
enum CComEnumFlags
   {
   AtlFlagNoCopy = 0,
   AtlFlagTakeOwnership = 2, // BitOwn
   AtlFlagCopy = 3           // BitOwn | BitCopy
   };
```

`AtlFlagNoCopy`significa che la durata della matrice non è controllata dall'enumeratore. In questo caso, la matrice sarà statica o l'oggetto identificato da *pUnk* sarà responsabile di liberare la matrice quando non è più necessaria.

`AtlFlagTakeOwnership`significa che la distruzione dell'array deve essere controllata dall'enumeratore. In questo caso, la matrice deve essere stata allocata dinamicamente utilizzando **new**. L'enumeratore eliminerà la matrice nel distruttore. In genere, si passa NULL per *pUnk*, anche se è comunque possibile passare un puntatore valido se è necessario ricevere una notifica dell'eliminazione dell'enumeratore per qualche motivo.

`AtlFlagCopy`significa che una nuova matrice deve essere creata `Init`copiando la matrice passata a . La durata della nuova matrice deve essere controllata dall'enumeratore. L'enumeratore eliminerà la matrice nel distruttore. In genere, si passa NULL per *pUnk*, anche se è comunque possibile passare un puntatore valido se è necessario ricevere una notifica dell'eliminazione dell'enumeratore per qualche motivo.

> [!NOTE]
> Il prototipo di questo metodo specifica gli `T`elementi `T` della matrice come di tipo , dove è stato definito come parametro di modello per la classe . Si tratta dello stesso tipo esposto tramite il metodo di interfaccia COM [CComEnumImpl::Next](#next). L'implicazione di ciò è che, a differenza di [IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md), questa classe non supporta tipi di dati di archiviazione ed esposti diversi. Il tipo di dati degli elementi nella matrice deve essere lo stesso del tipo di dati esposto tramite l'interfaccia COM.

## <a name="ccomenumimplclone"></a><a name="clone"></a>CComEnumImpl::Clone

Questo metodo fornisce l'implementazione del **Clone** `CComEnum`metodo creando un oggetto di tipo , inizializzandolo con la stessa matrice e iteratore utilizzato dall'oggetto corrente e restituendo l'interfaccia sull'oggetto appena creato.

```
STDMETHOD(Clone)(Base** ppEnum);
```

### <a name="parameters"></a>Parametri

*ppEnum (informazioni in questo gruppo)*<br/>
[fuori] Interfaccia dell'enumeratore su un oggetto appena creato clonato dall'enumeratore corrente.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Si noti che gli enumeratori clonati non fanno mai la propria copia (o ne assumono la proprietà) dei dati utilizzati dall'enumeratore originale. Se necessario, gli enumeratori clonati manterranno attivo l'enumeratore originale (utilizzando un riferimento COM) per garantire che i dati siano disponibili per tutto il tempo necessario.

## <a name="ccomenumimplm_spunk"></a><a name="m_spunk"></a>CComEnumImpl::m_spUnk

Questo puntatore intelligente mantiene un riferimento sull'oggetto passato a [CComEnumImpl::Init](#init), assicurandoche rimanga attivo per tutta la durata dell'enumeratore.

```
CComPtr<IUnknown> m_spUnk;
```

## <a name="ccomenumimplm_begin"></a><a name="m_begin"></a>CComEnumImpl::m_begin

Puntatore alla posizione appena oltre l'ultimo elemento della matrice contenente gli elementi da enumerare.

```
T* m_begin;
```

## <a name="ccomenumimplm_end"></a><a name="m_end"></a>CComEnumImpl::m_end

Puntatore al primo elemento della matrice contenente gli elementi da enumerare.

```
T* m_end;
```

## <a name="ccomenumimplm_iter"></a><a name="m_iter"></a>CComEnumImpl::m_iter

Puntatore all'elemento corrente della matrice contenente gli elementi da enumerare.

```
T* m_iter;
```

## <a name="ccomenumimplm_dwflags"></a><a name="m_dwflags"></a>CComEnumImpl::m_dwFlags

Flag passati a [CComEnumImpl::Init](#init).

```
DWORD m_dwFlags;
```

## <a name="ccomenumimplnext"></a><a name="next"></a>CComEnumImpl::Avanti

Questo metodo fornisce l'implementazione del **Next** metodo.

```
STDMETHOD(Next)(ULONG celt, T* rgelt, ULONG* pceltFetched);
```

### <a name="parameters"></a>Parametri

*celt*<br/>
[in] Numero di elementi richiesti.

*Rgelt*<br/>
[fuori] Matrice da riempire con gli elementi.

*pceltFetched*<br/>
[fuori] Il numero di elementi effettivamente restituiti in *rgelt*. Questo può essere minore di *celt* se meno di *celt* elementi sono rimasti nell'elenco.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccomenumimplreset"></a><a name="reset"></a>CComEnumImpl::Reset

Questo metodo fornisce l'implementazione del **Reset** metodo.

```
STDMETHOD(Reset)(void);
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccomenumimplskip"></a><a name="skip"></a>CComEnumImpl::Salta

Questo metodo fornisce l'implementazione del **Skip** metodo.

```
STDMETHOD(Skip)(ULONG celt);
```

### <a name="parameters"></a>Parametri

*celt*<br/>
[in] Numero di elementi da ignorare.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Restituisce E_INVALIDARG se *celt* è zero, restituisce S_FALSE se vengono restituiti elementi meno di *celt,* restituisce S_OK in caso contrario.

## <a name="see-also"></a>Vedere anche

[Classe IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)<br/>
[CComEnum (classe)](../../atl/reference/ccomenum-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

---
title: Classe CComEnumImpl
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
ms.openlocfilehash: 7d26c59a38bfe43e49215fbb6108453e10ca6dea
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497179"
---
# <a name="ccomenumimpl-class"></a>Classe CComEnumImpl

Questa classe fornisce l'implementazione per un'interfaccia dell'enumeratore COM in cui gli elementi enumerati vengono archiviati in una matrice.

## <a name="syntax"></a>Sintassi

```
template <class Base,
    const IID* piid, class T, class Copy>
class ATL_NO_VTABLE CComEnumImpl : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
Interfaccia dell'enumeratore COM. Per un esempio, vedere [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) .

*piid*<br/>
Puntatore all'ID di interfaccia dell'interfaccia dell'enumeratore.

*T*<br/>
Tipo di elemento esposto dall'interfaccia dell'enumeratore.

*Copia*<br/>
[Classe di criteri di copia](../../atl/atl-copy-policy-classes.md)omogenei.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CComEnumImpl::CComEnumImpl](#ccomenumimpl)|Costruttore.|
|[CComEnumImpl:: ~ CComEnumImpl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComEnumImpl:: Clone](#clone)|Implementazione del metodo di interfaccia **Clone** Enumeration.|
|[CComEnumImpl:: init](#init)|Inizializza l'enumeratore.|
|[CComEnumImpl::Next](#next)|Implementazione di **Next**.|
|[CComEnumImpl:: Reset](#reset)|Implementazione della **reimpostazione**.|
|[CComEnumImpl:: Skip](#skip)|Implementazione di **Skip**.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|DESCRIZIONE|
|----------|-----------------|
|[CComEnumImpl::m_begin](#m_begin)|Puntatore al primo elemento nella matrice.|
|[CComEnumImpl::m_dwFlags](#m_dwflags)|Flag di copia passati `Init`.|
|[CComEnumImpl:: m_end](#m_end)|Puntatore alla posizione immediatamente dopo l'ultimo elemento della matrice.|
|[CComEnumImpl::m_iter](#m_iter)|Puntatore all'elemento corrente nella matrice.|
|[CComEnumImpl::m_spUnk](#m_spunk)|`IUnknown` Puntatore dell'oggetto che fornisce la raccolta enumerata.|

## <a name="remarks"></a>Note

Vedere [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) per un esempio delle implementazioni dei metodi. `CComEnumImpl`fornisce l'implementazione per un'interfaccia dell'enumeratore COM in cui gli elementi enumerati vengono archiviati in una matrice. Questa classe è analoga alla `IEnumOnSTLImpl` classe, che fornisce un'implementazione di un'interfaccia dell'enumeratore basata C++ su un contenitore della libreria standard.

> [!NOTE]
>  Per informazioni dettagliate sulle ulteriori differenze `CComEnumImpl` tra `IEnumOnSTLImpl`e, vedere [CComEnumImpl:: init](#init).

In genere, *non* è necessario creare una classe di enumeratore personalizzata derivando da questa implementazione dell'interfaccia. Se si desidera utilizzare un enumeratore fornito da ATL basato su una matrice, è più comune creare un'istanza di [CComEnum](../../atl/reference/ccomenum-class.md).

Tuttavia, se è necessario fornire un enumeratore personalizzato (ad esempio, uno che espone interfacce oltre all'interfaccia dell'enumeratore), è possibile derivare da questa classe. In questa situazione è probabile che sia necessario eseguire l'override del metodo [CComEnumImpl:: Clone](#clone) per fornire un'implementazione personalizzata.

Per ulteriori informazioni, vedere [raccolte ed enumeratori ATL](../../atl/atl-collections-and-enumerators.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComEnumImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="ccomenumimpl"></a>CComEnumImpl:: CComEnumImpl

Costruttore.

```
CComEnumImpl();
```

##  <a name="dtor"></a>CComEnumImpl:: ~ CComEnumImpl

Distruttore.

```
~CComEnumImpl();
```

##  <a name="init"></a>CComEnumImpl:: init

È necessario chiamare questo metodo prima di passare un puntatore all'interfaccia dell'enumeratore ai client.

```
HRESULT Init(
    T* begin,
    T* end,
    IUnknown* pUnk,
    CComEnumFlags flags = AtlFlagNoCopy);
```

### <a name="parameters"></a>Parametri

*begin*<br/>
Puntatore al primo elemento della matrice contenente gli elementi da enumerare.

*end*<br/>
Puntatore alla posizione immediatamente dopo l'ultimo elemento della matrice contenente gli elementi da enumerare.

*pUnk*<br/>
in `IUnknown` Puntatore di un oggetto che deve essere mantenuto attivo nel corso della durata dell'enumeratore. Passare NULL se tale oggetto non esiste.

*flags*<br/>
Flag che specificano se l'enumeratore deve o meno assumere la proprietà della matrice o crearne una copia. I valori possibili sono descritti di seguito.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

Chiamare questo metodo una sola volta: inizializzare l'enumeratore, usarlo, quindi eliminarlo.

Se si passano puntatori a elementi in una matrice che si trova in un altro oggetto e non si chiede all'enumeratore di copiare i dati, è possibile usare il parametro *punk* per assicurarsi che l'oggetto e la matrice che possiede siano disponibili per tutto il tempo necessario per l'enumeratore. L'enumeratore include semplicemente un riferimento COM sull'oggetto per mantenerlo attivo. Il riferimento COM viene rilasciato automaticamente quando l'enumeratore viene eliminato definitivamente.

Il parametro flags consente di specificare il modo in cui l'enumeratore deve trattare gli elementi della matrice passati. i *flag* possono assumere uno dei valori `CComEnumFlags` dell'enumerazione illustrata di seguito:

```
enum CComEnumFlags
   {
   AtlFlagNoCopy = 0,
   AtlFlagTakeOwnership = 2, // BitOwn
   AtlFlagCopy = 3           // BitOwn | BitCopy
   };
```

`AtlFlagNoCopy`indica che la durata della matrice non è controllata dall'enumeratore. In questo caso, la matrice sarà statica o l'oggetto identificato da *punk* sarà responsabile della liberazione della matrice quando non è più necessario.

`AtlFlagTakeOwnership`indica che l'eliminazione della matrice deve essere controllata dall'enumeratore. In questo caso, è necessario che la matrice sia stata allocata dinamicamente utilizzando **New**. L'enumeratore eliminerà la matrice nel relativo distruttore. In genere, viene passato NULL per *punk*, sebbene sia comunque possibile passare un puntatore valido se è necessario ricevere una notifica relativa alla distruzione dell'enumeratore per qualche motivo.

`AtlFlagCopy`indica che è necessario creare una nuova matrice copiando la matrice passata a `Init`. La durata della nuova matrice deve essere controllata dall'enumeratore. L'enumeratore eliminerà la matrice nel relativo distruttore. In genere, viene passato NULL per *punk*, sebbene sia comunque possibile passare un puntatore valido se è necessario ricevere una notifica relativa alla distruzione dell'enumeratore per qualche motivo.

> [!NOTE]
>  Il prototipo di questo metodo specifica gli elementi della matrice come di `T`tipo, `T` dove è stato definito come parametro di modello per la classe. Si tratta dello stesso tipo esposto tramite il metodo dell'interfaccia COM [CComEnumImpl:: Next](#next). L'implicazione è che, a differenza di [IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md), questa classe non supporta l'archiviazione e i tipi di dati esposti diversi. Il tipo di dati degli elementi nella matrice deve essere uguale al tipo di dati esposto mediante l'interfaccia COM.

##  <a name="clone"></a>CComEnumImpl:: Clone

Questo metodo fornisce l'implementazione del metodo **Clone** mediante la creazione di un oggetto di `CComEnum`tipo, l'inizializzazione della stessa matrice e dell'iteratore usato dall'oggetto corrente e la restituzione dell'interfaccia nell'oggetto appena creato.

```
STDMETHOD(Clone)(Base** ppEnum);
```

### <a name="parameters"></a>Parametri

*ppEnum*<br/>
out Interfaccia dell'enumeratore su un oggetto appena creato clonato dall'enumeratore corrente.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

Si noti che gli enumeratori clonati non rendono mai la propria copia (o accettano la proprietà) dei dati usati dall'enumeratore originale. Se necessario, gli enumeratori clonati manterranno attivo l'enumeratore originale (usando un riferimento COM) per garantire che i dati siano disponibili per tutto il tempo necessario.

##  <a name="m_spunk"></a>CComEnumImpl:: m_spUnk

Questo puntatore intelligente mantiene un riferimento all'oggetto passato a [CComEnumImpl:: init](#init), assicurando che rimanga attivo nel corso della durata dell'enumeratore.

```
CComPtr<IUnknown> m_spUnk;
```

##  <a name="m_begin"></a>CComEnumImpl:: m_begin

Puntatore alla posizione immediatamente dopo l'ultimo elemento della matrice contenente gli elementi da enumerare.

```
T* m_begin;
```

##  <a name="m_end"></a>CComEnumImpl:: m_end

Puntatore al primo elemento della matrice contenente gli elementi da enumerare.

```
T* m_end;
```

##  <a name="m_iter"></a>CComEnumImpl:: m_iter

Puntatore all'elemento corrente della matrice contenente gli elementi da enumerare.

```
T* m_iter;
```

##  <a name="m_dwflags"></a>CComEnumImpl:: m_dwFlags

Flag passati a [CComEnumImpl:: init](#init).

```
DWORD m_dwFlags;
```

##  <a name="next"></a>  CComEnumImpl::Next

Questo metodo fornisce l'implementazione del metodo **successivo** .

```
STDMETHOD(Next)(ULONG celt, T* rgelt, ULONG* pceltFetched);
```

### <a name="parameters"></a>Parametri

*Celt*<br/>
in Numero di elementi richiesti.

*rgelt*<br/>
out Matrice da riempire con gli elementi.

*pceltFetched*<br/>
out Numero di elementi effettivamente restituiti in *rgelt*. Può essere minore di *celt* se un numero inferiore di elementi *celt* è rimasto nell'elenco.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="reset"></a>CComEnumImpl:: Reset

Questo metodo fornisce l'implementazione del metodo **Reset** .

```
STDMETHOD(Reset)(void);
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="skip"></a>CComEnumImpl:: Skip

Questo metodo fornisce l'implementazione del metodo **Skip** .

```
STDMETHOD(Skip)(ULONG celt);
```

### <a name="parameters"></a>Parametri

*Celt*<br/>
in Numero di elementi da ignorare.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

Restituisce E_INVALIDARG se *celt* è zero, restituisce S_FALSE se vengono restituiti elementi minori di *celt* , restituisce S_OK in caso contrario.

## <a name="see-also"></a>Vedere anche

[Classe IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)<br/>
[Classe CComEnum](../../atl/reference/ccomenum-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

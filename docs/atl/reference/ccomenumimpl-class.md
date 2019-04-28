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
ms.openlocfilehash: ccd083f3bfd9ae694c97e466fcb40b348fec0c27
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62259861"
---
# <a name="ccomenumimpl-class"></a>Classe CComEnumImpl

Questa classe fornisce l'implementazione per un'interfaccia dell'enumeratore COM in cui sono archiviati gli elementi vengono enumerati in una matrice.

## <a name="syntax"></a>Sintassi

```
template <class Base,
    const IID* piid, class T, class Copy>
class ATL_NO_VTABLE CComEnumImpl : public Base
```

#### <a name="parameters"></a>Parametri

*Base*<br/>
Un'interfaccia dell'enumeratore COM. Visualizzare [IEnumString](/windows/desktop/api/objidl/nn-objidl-ienumstring) per un esempio.

*piid*<br/>
Un puntatore all'ID di interfaccia di interfaccia dell'enumeratore.

*T*<br/>
Il tipo di elemento esposto dall'interfaccia dell'enumeratore.

*Copia*<br/>
Un omogenei [copiare criteri classe](../../atl/atl-copy-policy-classes.md).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComEnumImpl::CComEnumImpl](#ccomenumimpl)|Costruttore.|
|[CComEnumImpl:: ~ CComEnumImpl](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComEnumImpl::Clone](#clone)|L'implementazione del **Clone** il metodo di interfaccia di enumerazione.|
|[CComEnumImpl::Init](#init)|Inizializza l'enumeratore.|
|[CComEnumImpl::Next](#next)|L'implementazione di **successivo**.|
|[CComEnumImpl::Reset](#reset)|L'implementazione di **reimpostare**.|
|[CComEnumImpl::Skip](#skip)|L'implementazione di **Skip**.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComEnumImpl::m_begin](#m_begin)|Puntatore al primo elemento nella matrice.|
|[CComEnumImpl::m_dwFlags](#m_dwflags)|Copiare i flag passati `Init`.|
|[CComEnumImpl::m_end](#m_end)|Un puntatore alla posizione appena oltre l'ultimo elemento nella matrice.|
|[CComEnumImpl::m_iter](#m_iter)|Un puntatore all'elemento corrente nella matrice.|
|[CComEnumImpl::m_spUnk](#m_spunk)|Il `IUnknown` puntatore dell'oggetto che fornisce la raccolta in fase di enumerazione.|

## <a name="remarks"></a>Note

Visualizzare [IEnumString](/windows/desktop/api/objidl/nn-objidl-ienumstring) per un esempio di implementazioni del metodo. `CComEnumImpl` fornisce l'implementazione di un'interfaccia dell'enumeratore COM in cui sono archiviati gli elementi vengono enumerati in una matrice. Questa classe è analoga al `IEnumOnSTLImpl` (classe), che fornisce un'implementazione di un'interfaccia dell'enumeratore basato su un contenitore della libreria Standard C++.

> [!NOTE]
>  Per informazioni dettagliate sulle altre differenze tra `CComEnumImpl` e `IEnumOnSTLImpl`, vedere [CComEnumImpl::Init](#init).

In genere, verrà *non* necessario creare una classe enumerator mediante la derivazione da questa implementazione dell'interfaccia. Se si desidera utilizzare un enumeratore fornito ATL dal basato su una matrice, è più comune per creare un'istanza di [CComEnum](../../atl/reference/ccomenum-class.md).

Tuttavia, se è necessario fornire un enumeratore personalizzato (ad esempio, uno che espone le interfacce oltre all'interfaccia dell'enumeratore), è possibile derivare da questa classe. In questo caso, è probabile che sarà necessario eseguire l'override di [CComEnumImpl::Clone](#clone) metodo per fornire la propria implementazione.

Per altre informazioni, vedere [ATL raccolte ed enumeratori](../../atl/atl-collections-and-enumerators.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Base`

`CComEnumImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="ccomenumimpl"></a>  CComEnumImpl::CComEnumImpl

Costruttore.

```
CComEnumImpl();
```

##  <a name="dtor"></a>  CComEnumImpl:: ~ CComEnumImpl

Distruttore.

```
~CComEnumImpl();
```

##  <a name="init"></a>  CComEnumImpl::Init

È necessario chiamare questo metodo prima di passare un puntatore all'interfaccia dell'enumeratore a qualsiasi client.

```
HRESULT Init(
    T* begin,
    T* end,
    IUnknown* pUnk,
    CComEnumFlags flags = AtlFlagNoCopy);
```

### <a name="parameters"></a>Parametri

*begin*<br/>
Puntatore al primo elemento della matrice che contiene gli elementi da enumerare.

*end*<br/>
Un puntatore alla posizione oltre l'ultimo elemento della matrice che contiene gli elementi da enumerare.

*pUnk*<br/>
[in] Il `IUnknown` puntatore di un oggetto che deve essere mantenuto attivo nel corso della durata dell'enumeratore. Passare NULL se tale oggetto non esiste.

*flags*<br/>
Flag che specificano se l'enumeratore deve assumere la proprietà della matrice o crearne una copia. I valori possibili sono descritti di seguito.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Chiamare questo metodo solo una volta, inizializzare l'enumeratore, usato e quindi eliminarlo.

Se si passano i puntatori agli elementi nella matrice contenuti in un altro oggetto (e non deve chiedere l'enumeratore per copiare i dati), è possibile usare la *pUnk* parametro per garantire che l'oggetto e la matrice contiene siano disponibili per fino a quando l'enumeratore Questi sono necessari. L'enumeratore contiene semplicemente un riferimento COM sull'oggetto per mantenerlo attivo. Il riferimento COM viene rilasciato automaticamente quando l'enumeratore viene eliminato definitivamente.

Il *flag* parametro consente di specificare come l'enumeratore deve considerare gli elementi della matrice passati ad esso. *i flag* può assumere uno dei valori di `CComEnumFlags` enumerazione illustrato di seguito:

```
enum CComEnumFlags
   {
   AtlFlagNoCopy = 0,
   AtlFlagTakeOwnership = 2, // BitOwn
   AtlFlagCopy = 3           // BitOwn | BitCopy
   };
```

`AtlFlagNoCopy` significa che la durata della matrice non è controllata dall'enumeratore. In questo caso, sarà la matrice statica oppure l'oggetto identificato da *pUnk* sarà responsabile della liberazione della matrice quando non è più necessario.

`AtlFlagTakeOwnership` significa che l'eliminazione della matrice deve essere controllato dall'enumeratore. In questo caso, la matrice deve essere dinamicamente allocata usando **nuovo**. L'enumeratore eliminerà la matrice nel relativo distruttore. In genere, è necessario passare NULL *pUnk*, anche se è ancora possibile passare un puntatore valido se è necessario in essere notificata la distruzione dell'enumeratore per qualche motivo.

`AtlFlagCopy` indica che una nuova matrice deve essere creato tramite la copia la matrice passata al `Init`. Durata della nuova matrice deve essere controllato dall'enumeratore. L'enumeratore eliminerà la matrice nel relativo distruttore. In genere, è necessario passare NULL *pUnk*, anche se è ancora possibile passare un puntatore valido se è necessario in essere notificata la distruzione dell'enumeratore per qualche motivo.

> [!NOTE]
>  Il prototipo di questo metodo consente di specificare gli elementi della matrice come tipo `T`, dove `T` è stato definito come parametro di modello per la classe. Questo è lo stesso tipo che viene esposta tramite il metodo di interfaccia COM [CComEnumImpl::Next](#next). L'implicazione di ciò è che, a differenza [IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md), questa classe non supporta l'archiviazione diversi ed esposti i tipi di dati. Il tipo di dati degli elementi nella matrice deve essere identico al tipo di dati esposto tramite l'interfaccia COM.

##  <a name="clone"></a>  CComEnumImpl::Clone

Questo metodo fornisce l'implementazione del **Clone** metodo tramite la creazione di un oggetto di tipo `CComEnum`, inizializzandola con la stessa matrice e iteratori usati dall'oggetto corrente e che restituisce l'interfaccia sull'oggetto appena creato oggetto.

```
STDMETHOD(Clone)(Base** ppEnum);
```

### <a name="parameters"></a>Parametri

*ppEnum*<br/>
[out] Interfaccia dell'enumeratore per un oggetto appena creato verrà duplicato dell'enumeratore corrente.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Si noti che gli enumeratori clonati non apportare mai i propri copia (o take ownership) dei dati utilizzati dall'enumeratore originale. Se necessario, enumeratori clonati manterrà l'enumeratore originale (tramite un riferimento COM) attivi per garantire che i dati sono disponibili per, purché ne hanno bisogno.

##  <a name="m_spunk"></a>  CComEnumImpl::m_spUnk

Questo puntatore intelligente mantiene un riferimento all'oggetto passato a [CComEnumImpl::Init](#init), garantire che rimane attivo durante il ciclo di vita dell'enumeratore.

```
CComPtr<IUnknown> m_spUnk;
```

##  <a name="m_begin"></a>  CComEnumImpl::m_begin

Un puntatore alla posizione oltre l'ultimo elemento della matrice che contiene gli elementi da enumerare.

```
T* m_begin;
```

##  <a name="m_end"></a>  CComEnumImpl::m_end

Puntatore al primo elemento della matrice che contiene gli elementi da enumerare.

```
T* m_end;
```

##  <a name="m_iter"></a>  CComEnumImpl::m_iter

Un puntatore all'elemento corrente della matrice che contiene gli elementi da enumerare.

```
T* m_iter;
```

##  <a name="m_dwflags"></a>  CComEnumImpl::m_dwFlags

I flag passati al [CComEnumImpl::Init](#init).

```
DWORD m_dwFlags;
```

##  <a name="next"></a>  CComEnumImpl::Next

Questo metodo fornisce l'implementazione del **successivo** (metodo).

```
STDMETHOD(Next)(ULONG celt, T* rgelt, ULONG* pceltFetched);
```

### <a name="parameters"></a>Parametri

*celt*<br/>
[in] Il numero di elementi richiesti.

*rgelt*<br/>
[out] Matrice da riempire con gli elementi.

*pceltFetched*<br/>
[out] Il numero di elementi effettivamente restituiti nella *rgelt*. Può essere minore *celt* se meno *celt* elementi sono rimaste nell'elenco.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="reset"></a>  CComEnumImpl::Reset

Questo metodo fornisce l'implementazione del **reimpostare** (metodo).

```
STDMETHOD(Reset)(void);
```

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="skip"></a>  CComEnumImpl

Questo metodo fornisce l'implementazione del **Skip** (metodo).

```
STDMETHOD(Skip)(ULONG celt);
```

### <a name="parameters"></a>Parametri

*celt*<br/>
[in] Il numero di elementi da ignorare.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Restituisce E_INVALIDARG se *celt* è uguale a zero, restituisce S_FALSE se minore *celt* vengono restituiti gli elementi, in caso contrario restituisce S_OK.

## <a name="see-also"></a>Vedere anche

[Classe IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)<br/>
[Classe CComEnum](../../atl/reference/ccomenum-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

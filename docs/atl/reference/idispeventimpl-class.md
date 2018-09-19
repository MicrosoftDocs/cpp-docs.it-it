---
title: Classe IDispEventImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IDispEventImpl
- ATLCOM/ATL::IDispEventImpl
- ATLCOM/ATL::IDispEventImpl::IDispEventImpl
- ATLCOM/ATL::IDispEventImpl::GetFuncInfoFromId
- ATLCOM/ATL::IDispEventImpl::GetIDsOfNames
- ATLCOM/ATL::IDispEventImpl::GetTypeInfo
- ATLCOM/ATL::IDispEventImpl::GetTypeInfoCount
- ATLCOM/ATL::IDispEventImpl::GetUserDefinedType
dev_langs:
- C++
helpviewer_keywords:
- IDispEventImpl class
ms.assetid: a64b5288-35cb-4638-aad6-2d15b1c7cf7b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 815a276cb07a91da73acb68a32cceef4b2138325
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46093843"
---
# <a name="idispeventimpl-class"></a>Classe IDispEventImpl

Questa classe fornisce le implementazioni del `IDispatch` metodi.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <UINT nID, class T,
    const IID* pdiid = &IID_NULL,
    const GUID* plibid = &GUID_NULL,
    WORD wMajor = 0,
    WORD wMinor = 0, 
    class tihclass = CcomTypeInfoHolder>
class ATL_NO_VTABLE IDispEventImpl : public IDispEventSimpleImpl<nID, T, pdiid>
```

#### <a name="parameters"></a>Parametri

*nID*<br/>
Identificatore univoco per l'oggetto di origine. Quando si `IDispEventImpl` è la classe base per un controllo composito, usare l'ID risorsa del controllo contenuto desiderato per questo parametro. In altri casi, usare un numero intero positivo arbitrario.

*T*<br/>
Classe dell'utente, che è derivata da `IDispEventImpl`.

*pdiid*<br/>
Il puntatore per l'IID dell'interfaccia dispatch eventi implementata da questa classe. Questa interfaccia deve essere definita nella libreria dei tipi indicata dal *plibid*, *wMajor*, e *wMinor*.

*plibid*<br/>
Un puntatore alla libreria dei tipi che definisce l'interfaccia dispatch a cui punta *pdiid*. Se **& GUID_NULL**, la libreria dei tipi verrà caricata dall'oggetto di origine eventi.

*wMajor*<br/>
Versione principale della libreria dei tipi. Il valore predefinito è 0.

*wMinor*<br/>
Versione secondaria della libreria dei tipi. Il valore predefinito è 0.

*tihclass*<br/>
La classe usata per gestire le informazioni sul tipo per *T*. Il valore predefinito è una classe di tipo `CComTypeInfoHolder`; tuttavia, è possibile eseguire l'override di questo parametro di modello, fornendo una classe di un tipo diverso da `CComTypeInfoHolder`.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispEventImpl::_tihclass](../../atl/reference/idispeventimpl-class.md)|La classe usata per gestire le informazioni sul tipo. Per impostazione predefinita, `CComTypeInfoHolder`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispEventImpl::IDispEventImpl](#idispeventimpl)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispEventImpl::GetFuncInfoFromId](#getfuncinfofromid)|Individua l'indice di funzione per l'ID dispatch specificato.|
|[IDispEventImpl::GetIDsOfNames](#getidsofnames)|Esegue il mapping di un set di nomi degli argomenti facoltativo e un singolo membro a un set corrispondente di integer DISPID.|
|[IDispEventImpl::GetTypeInfo](#gettypeinfo)|Recupera le informazioni sul tipo per un oggetto.|
|[IDispEventImpl::GetTypeInfoCount](#gettypeinfocount)|Recupera il numero di interfacce di informazioni sul tipo.|
|[IDispEventImpl::GetUserDefinedType](#getuserdefinedtype)|Recupera il tipo di base di un tipo definito dall'utente.|

## <a name="remarks"></a>Note

`IDispEventImpl` fornisce un modo di implementazione di un'interfaccia dispatch eventi senza dover fornire codice di implementazione per ogni metodo/evento in quell'interfaccia. `IDispEventImpl` fornisce le implementazioni del `IDispatch` metodi. È necessario solo fornire implementazioni per gli eventi che si è interessati nella gestione.

`IDispEventImpl` funziona in combinazione con la mappa di sink di evento nella classe per instradare gli eventi per la funzione del gestore appropriato. Utilizzare questa classe:

Aggiungere un [macro SINK_ENTRY](composite-control-macros.md#sink_entry) oppure [SINK_ENTRY_EX](composite-control-macros.md#sink_entry_ex) macro per la mappa di sink di evento per ogni evento per ogni oggetto che si desidera gestire. Quando si usa `IDispEventImpl` come classe di base di un controllo composito, è possibile chiamare [AtlAdviseSinkMap](connection-point-global-functions.md#atladvisesinkmap) per stabilire e interrompere la connessione con le origini eventi per tutte le voci di sink di eventi della mappa. In altri casi, o per un maggiore controllo, chiamare [DispEventAdvise](idispeventsimpleimpl-class.md#dispeventadvise) per stabilire la connessione tra l'oggetto di origine e la classe di base. Chiamare [DispEventUnadvise](idispeventsimpleimpl-class.md#dispeventunadvise) per interrompere la connessione.  

È necessario derivare da `IDispEventImpl` (uso di un valore univoco per *nID*) per ogni oggetto per cui è necessario gestire gli eventi. È possibile riutilizzare la classe di base per l'annullamento della notifica per oggetto una sola origine quindi che informa su un oggetto di origine diversa, ma il numero massimo di oggetti di origine che può essere gestita da un singolo oggetto in una sola volta è limitato dal numero di `IDispEventImpl` le classi di base.

`IDispEventImpl` fornisce la stessa funzionalità del [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md), ad eccezione del fatto che ottiene informazioni sul tipo sull'interfaccia da una libreria dei tipi anziché fornito come un puntatore a un [ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md) struttura. Usare `IDispEventSimpleImpl` quando non si dispone di una libreria dei tipi che descrive l'interfaccia di eventi o per evitare il sovraccarico associato usando la libreria dei tipi.

> [!NOTE]
> `IDispEventImpl` e `IDispEventSimpleImpl` fornire la propria implementazione di `IUnknown::QueryInterface` abilitazione della ognuno `IDispEventImpl` e `IDispEventSimpleImpl` classe per fungere da un'identità distinta COM consentendo comunque accesso diretto ai membri della classe nel principale oggetto COM di base.

Implementazione di ATL CE di ActiveX evento sink solo supporta valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il comportamento sarà indefinito.

Per altre informazioni, vedere [supporto di IDispEventImpl](../../atl/supporting-idispeventimpl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_IDispEvent`

`_IDispEventLocator`

[IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)

`IDispEventImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="getfuncinfofromid"></a>  IDispEventImpl::GetFuncInfoFromId

Individua l'indice di funzione per l'ID dispatch specificato.

```
HRESULT GetFuncInfoFromId(
    const IID& iid,
    DISPID dispidMember,
    LCID lcid,
    _ATL_FUNC_INFO& info);
```

### <a name="parameters"></a>Parametri

*IID*<br/>
[in] Un riferimento all'ID della funzione.

*dispidMember*<br/>
[in] ID dispatch della funzione.

*lcid*<br/>
[in] Il contesto delle impostazioni locali dell'ID di funzione.

*Informazioni*<br/>
[in] Struttura che indica come viene chiamata la funzione.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="getidsofnames"></a>  IDispEventImpl::GetIDsOfNames

Esegue il mapping di un set di nomi degli argomenti facoltativo e un singolo membro a un set corrispondente di integer DISPID, che può essere utilizzato nelle successive chiamate a [IDispatch:: Invoke](/previous-versions/windows/desktop/api/oaidl/nf-oaidl-idispatch-invoke).

```
STDMETHOD(GetIDsOfNames)(
    REFIID riid,
    LPOLESTR* rgszNames,
    UINT cNames,
    LCID lcid,
    DISPID* rgdispid);
```

### <a name="remarks"></a>Note

Visualizzare [GetIDsOfNames](/previous-versions/windows/desktop/api/oaidl/nf-oaidl-idispatch-getidsofnames) in Windows SDK.

##  <a name="gettypeinfo"></a>  IDispEventImpl::GetTypeInfo

Recupera le informazioni sul tipo relative a un oggetto che può quindi essere usato per ottenere informazioni sul tipo relative a un'interfaccia.

```
STDMETHOD(GetTypeInfo)(
    UINT itinfo,
    LCID lcid,
    ITypeInfo** pptinfo);
```

### <a name="remarks"></a>Note

##  <a name="gettypeinfocount"></a>  IDispEventImpl::GetTypeInfoCount

Recupera il numero delle interfacce di informazioni sul tipo fornite da un oggetto (0 o 1).

```
STDMETHOD(GetTypeInfoCount)(UINT* pctinfo);
```

### <a name="remarks"></a>Note

Visualizzare [IDispatch:: GetTypeInfoCount](/previous-versions/windows/desktop/api/oaidl/nf-oaidl-idispatch-gettypeinfocount) in Windows SDK.

##  <a name="getuserdefinedtype"></a>  IDispEventImpl::GetUserDefinedType

Recupera il tipo di base di un tipo definito dall'utente.

```
VARTYPE GetUserDefinedType(
    ITypeInfo* pTI,
    HREFTYPE hrt);
```

### <a name="parameters"></a>Parametri

*PTI*<br/>
[in] Un puntatore per il [ITypeInfo](/previous-versions/windows/desktop/api/oaidl/nn-oaidl-itypeinfo) interfaccia che contiene il tipo definito dall'utente.

*hrt*<br/>
[in] Handle alla descrizione del tipo da recuperare.

### <a name="return-value"></a>Valore restituito

Il tipo di variante.

### <a name="remarks"></a>Note

Visualizzare [ITypeInfo:: GetRefTypeInfo](/previous-versions/windows/desktop/api/oaidl/nf-oaidl-itypeinfo-getreftypeinfo).

##  <a name="idispeventimpl"></a>  IDispEventImpl::IDispEventImpl

Costruttore. Archivia i valori dei parametri del modello di classe *plibid*, *pdiid*, *wMajor*, e *wMinor*.

```
IDispEventImpl();
```

##  <a name="tihclass"></a>  IDispEventImpl::tihclass

Questo typedef è un'istanza del parametro di modello di classe *tihclass*.

```
typedef tihclass _tihclass;
```

### <a name="remarks"></a>Note

Per impostazione predefinita, la classe è `CComTypeInfoHolder`. `CComTypeInfoHolder` gestisce le informazioni sul tipo per la classe.

## <a name="see-also"></a>Vedere anche

[Struttura _ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md)<br/>
[Classe IDispatchImpl](../../atl/reference/idispatchimpl-class.md)<br/>
[Classe IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)<br/>
[MACRO SINK_ENTRY](composite-control-macros.md#sink_entry)<br/>
[SINK_ENTRY_EX](composite-control-macros.md#sink_entry_ex)<br/>
[SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
---
title: Classe IDispEventImpl
ms.date: 11/04/2016
f1_keywords:
- IDispEventImpl
- ATLCOM/ATL::IDispEventImpl
- ATLCOM/ATL::IDispEventImpl::IDispEventImpl
- ATLCOM/ATL::IDispEventImpl::GetFuncInfoFromId
- ATLCOM/ATL::IDispEventImpl::GetIDsOfNames
- ATLCOM/ATL::IDispEventImpl::GetTypeInfo
- ATLCOM/ATL::IDispEventImpl::GetTypeInfoCount
- ATLCOM/ATL::IDispEventImpl::GetUserDefinedType
helpviewer_keywords:
- IDispEventImpl class
ms.assetid: a64b5288-35cb-4638-aad6-2d15b1c7cf7b
ms.openlocfilehash: fa6e9f972accd0115d9f1e3248bd97ddde0c3c63
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329762"
---
# <a name="idispeventimpl-class"></a>Classe IDispEventImpl

Questa classe fornisce implementazioni dei `IDispatch` metodi.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

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
Identificatore univoco dell'oggetto di origine. Quando `IDispEventImpl` è la classe base per un controllo composito, usare l'ID di risorsa del controllo contenuto desiderato per questo parametro. In altri casi, utilizzare un numero intero positivo arbitrario.

*T*<br/>
Classe dell'utente, derivata `IDispEventImpl`da .

*pdiid*<br/>
Puntatore all'IID dell'interfaccia dispatch dell'evento implementata da questa classe. Questa interfaccia deve essere definita nella libreria dei tipi indicata da *plibid*, *wMajor*e *wMinor*.

*plibid*<br/>
Puntatore alla libreria dei tipi che definisce l'interfaccia dispatch a cui punta *pdiid*. Se **&GUID_NULL**, la libreria dei tipi verrà caricata dall'oggetto che si avsce degli eventi.

*wMajor (informazioni in base al t*<br/>
Versione principale della libreria dei tipi. Il valore predefinito è 0.

*wMinore*<br/>
Versione secondaria della libreria dei tipi. Il valore predefinito è 0.

*tihclass*<br/>
Classe utilizzata per gestire le informazioni sul tipo per *T*. Il valore predefinito è `CComTypeInfoHolder`una classe di tipo ; Tuttavia, è possibile eseguire l'override di questo `CComTypeInfoHolder`parametro di modello fornendo una classe di un tipo diverso da .

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispEventImpl::_tihclass](../../atl/reference/idispeventimpl-class.md)|Classe utilizzata per gestire le informazioni sul tipo. Per impostazione predefinita, `CComTypeInfoHolder`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispEventImpl::IDispEventImpl](#idispeventimpl)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispEventImpl::GetFuncInfoFromIdIDispEventImpl::GetFuncInfoFromId](#getfuncinfofromid)|Individua l'indice della funzione per l'identificatore dispatch specificato.|
|[IDispEventImpl::GetIDsOfNames](#getidsofnames)|Esegue il mapping di un singolo membro e di un set facoltativo di nomi di argomenti a un set corrispondente di DISPID integer.|
|[IDispEventImpl::GetTypeInfo](#gettypeinfo)|Recupera le informazioni sul tipo per un oggetto.|
|[IDispEventImpl::GetTypeInfoCount](#gettypeinfocount)|Recupera il numero di interfacce di informazioni sul tipo.|
|[IDispEventImpl::GetUserDefinedType](#getuserdefinedtype)|Recupera il tipo di base di un tipo definito dall'utente.|

## <a name="remarks"></a>Osservazioni

`IDispEventImpl`fornisce un modo per implementare un'interfaccia dispatch di eventi senza che sia necessario fornire codice di implementazione per ogni metodo/evento su tale interfaccia. `IDispEventImpl`fornisce implementazioni `IDispatch` dei metodi. È sufficiente fornire implementazioni per gli eventi che si desidera gestire.

`IDispEventImpl`funziona insieme alla mappa del sink di evento nella classe per indirizzare gli eventi alla funzione del gestore appropriata. Per utilizzare questa classe:

Aggiungere [una](composite-control-macros.md#sink_entry) SINK_ENTRY o [una](composite-control-macros.md#sink_entry_ex) SINK_ENTRY_EX macro alla mappa del sink di evento per ogni evento su ogni oggetto che si desidera gestire. Quando `IDispEventImpl` si usa come classe base di un controllo composito, è possibile chiamare [AtlAdviseSinkMap](connection-point-global-functions.md#atladvisesinkmap) per stabilire e interrompere la connessione con le origini eventi per tutte le voci nella mappa del sink di evento. In altri casi, o per un maggiore controllo, chiamare [DispEventAdvise](idispeventsimpleimpl-class.md#dispeventadvise) per stabilire la connessione tra l'oggetto di origine e la classe base. Chiamare [DispEventUnadvise](idispeventsimpleimpl-class.md#dispeventunadvise) per interrompere la connessione.

È necessario `IDispEventImpl` derivare da (utilizzando un valore univoco per *nID*) per ogni oggetto per il quale è necessario gestire gli eventi. È possibile riutilizzare la classe base senza eseguire l'indvizione su un oggetto di origine e quindi consigliando di eseguire l'accesso a un `IDispEventImpl` oggetto di origine diverso, ma il numero massimo di oggetti di origine che possono essere gestiti da un singolo oggetto contemporaneamente è limitato dal numero di classi base.

`IDispEventImpl`fornisce la stessa funzionalità di [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md), ad eccezione del fatto che ottiene informazioni sul tipo sull'interfaccia da una libreria dei tipi anziché fornirle come puntatore a una struttura [_ATL_FUNC_INFO.](../../atl/reference/atl-func-info-structure.md) Utilizzare `IDispEventSimpleImpl` quando non si dispone di una libreria dei tipi che descrive l'interfaccia eventi o si desidera evitare l'overhead associato all'utilizzo della libreria dei tipi.

> [!NOTE]
> `IDispEventImpl`e `IDispEventSimpleImpl` fornire la `IUnknown::QueryInterface` propria `IDispEventImpl` implementazione di consentire a ogni classe e `IDispEventSimpleImpl` classe di base di agire come un'identità COM separata, pur consentendo l'accesso diretto ai membri della classe nell'oggetto COM principale.

L'implementazione ATL CE dei sink di evento ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi. qualsiasi altro valore restituito non è supportato e il relativo comportamento non è definito.

Per ulteriori informazioni, vedere [Supporto di IDispEventImpl](../../atl/supporting-idispeventimpl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_IDispEvent`

`_IDispEventLocator`

[Idispeventsimpleimpl](../../atl/reference/idispeventsimpleimpl-class.md)

`IDispEventImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="idispeventimplgetfuncinfofromid"></a><a name="getfuncinfofromid"></a>IDispEventImpl::GetFuncInfoFromIdIDispEventImpl::GetFuncInfoFromId

Individua l'indice della funzione per l'identificatore dispatch specificato.

```
HRESULT GetFuncInfoFromId(
    const IID& iid,
    DISPID dispidMember,
    LCID lcid,
    _ATL_FUNC_INFO& info);
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] Riferimento all'ID della funzione.

*dispidMember*<br/>
[in] ID di invio della funzione.

*Lcid*<br/>
[in] Contesto delle impostazioni locali dell'ID funzione.

*info*<br/>
[in] Struttura che indica come viene chiamata la funzione.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="idispeventimplgetidsofnames"></a><a name="getidsofnames"></a>IDispEventImpl::GetIDsOfNames

Esegue il mapping di un singolo membro e di un set facoltativo di nomi di argomenti a un set corrispondente di DISPID integer, che può essere utilizzato nelle chiamate successive a [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke).

```
STDMETHOD(GetIDsOfNames)(
    REFIID riid,
    LPOLESTR* rgszNames,
    UINT cNames,
    LCID lcid,
    DISPID* rgdispid);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDispatch::GetIDsOfNames](/windows/win32/api/oaidl/nf-oaidl-idispatch-getidsofnames) in Windows SDK.

## <a name="idispeventimplgettypeinfo"></a><a name="gettypeinfo"></a>IDispEventImpl::GetTypeInfo

Recupera le informazioni sul tipo relative a un oggetto che può quindi essere usato per ottenere informazioni sul tipo relative a un'interfaccia.

```
STDMETHOD(GetTypeInfo)(
    UINT itinfo,
    LCID lcid,
    ITypeInfo** pptinfo);
```

### <a name="remarks"></a>Osservazioni

## <a name="idispeventimplgettypeinfocount"></a><a name="gettypeinfocount"></a>IDispEventImpl::GetTypeInfoCount

Recupera il numero delle interfacce di informazioni sul tipo fornite da un oggetto (0 o 1).

```
STDMETHOD(GetTypeInfoCount)(UINT* pctinfo);
```

### <a name="remarks"></a>Osservazioni

Vedere [IDispatch::GetTypeInfoCount](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfocount) in Windows SDK.

## <a name="idispeventimplgetuserdefinedtype"></a><a name="getuserdefinedtype"></a>IDispEventImpl::GetUserDefinedType

Recupera il tipo di base di un tipo definito dall'utente.

```
VARTYPE GetUserDefinedType(
    ITypeInfo* pTI,
    HREFTYPE hrt);
```

### <a name="parameters"></a>Parametri

*Pti*<br/>
[in] Puntatore all'interfaccia [ITypeInfo](/windows/win32/api/oaidl/nn-oaidl-itypeinfo) contenente il tipo definito dall'utente.

*Hrt*<br/>
[in] Handle per la descrizione del tipo da recuperare.

### <a name="return-value"></a>Valore restituito

Tipo di variante.

### <a name="remarks"></a>Osservazioni

Vedere [ITypeInfo::GetRefTypeInfo](/windows/win32/api/oaidl/nf-oaidl-itypeinfo-getreftypeinfo).

## <a name="idispeventimplidispeventimpl"></a><a name="idispeventimpl"></a>IDispEventImpl::IDispEventImpl

Costruttore. Archivia i valori dei parametri del modello di classe *plibid*, *pdiid*, *wMajor*e *wMinor*.

```
IDispEventImpl();
```

## <a name="idispeventimpltihclass"></a><a name="tihclass"></a>IDispEventImpl::tihclass

Questo typedef è un'istanza del parametro del modello di classe *tihclass*.

```
typedef tihclass _tihclass;
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, la classe è `CComTypeInfoHolder`. `CComTypeInfoHolder`gestisce le informazioni sul tipo per la classe.

## <a name="see-also"></a>Vedere anche

[Struttura _ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md)<br/>
[Classe IDispatchImpl](../../atl/reference/idispatchimpl-class.md)<br/>
[Classe IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)<br/>
[SINK_ENTRY](composite-control-macros.md#sink_entry)<br/>
[SINK_ENTRY_EX](composite-control-macros.md#sink_entry_ex)<br/>
[SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

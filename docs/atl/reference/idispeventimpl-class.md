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
ms.openlocfilehash: e82a397b6d2abb66f773908c72a287c979e5ae1d
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495925"
---
# <a name="idispeventimpl-class"></a>Classe IDispEventImpl

Questa classe fornisce le `IDispatch` implementazioni dei metodi.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

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
Identificatore univoco per l'oggetto di origine. Quando `IDispEventImpl` è la classe base per un controllo composito, usare l'ID di risorsa del controllo contenuto desiderato per questo parametro. In altri casi, usare un numero intero positivo arbitrario.

*T*<br/>
Classe dell'utente, derivata da `IDispEventImpl`.

*pdiid*<br/>
Puntatore all'IID dell'interfaccia dispatch dell'evento implementata da questa classe. Questa interfaccia deve essere definita nella libreria dei tipi indicata da *plibid*, *wMajor*e *wMinor*.

*plibid*<br/>
Puntatore alla libreria dei tipi che definisce l'interfaccia dispatch a cui punta *pdiid*. Se **&AMP; GUID_NULL**, la libreria dei tipi verrà caricata dall'oggetto che utilizza gli eventi.

*wMajor*<br/>
Versione principale della libreria dei tipi. Il valore predefinito è 0.

*wMinor*<br/>
Versione secondaria della libreria dei tipi. Il valore predefinito è 0.

*tihclass*<br/>
Classe utilizzata per gestire le informazioni sul tipo per *T*. Il valore predefinito è una classe di tipo `CComTypeInfoHolder`; tuttavia, è possibile eseguire l'override di questo parametro di modello fornendo una classe di un `CComTypeInfoHolder`tipo diverso da.

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|NOME|Descrizione|
|----------|-----------------|
|[IDispEventImpl::_tihclass](../../atl/reference/idispeventimpl-class.md)|Classe utilizzata per gestire le informazioni sul tipo. Per impostazione predefinita `CComTypeInfoHolder`,.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispEventImpl::IDispEventImpl](#idispeventimpl)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IDispEventImpl::GetFuncInfoFromId](#getfuncinfofromid)|Individua l'indice della funzione per l'identificatore di invio specificato.|
|[IDispEventImpl::GetIDsOfNames](#getidsofnames)|Esegue il mapping di un singolo membro e di un set facoltativo di nomi di argomento a un set corrispondente di DISPID di tipo Integer.|
|[IDispEventImpl::GetTypeInfo](#gettypeinfo)|Recupera le informazioni sul tipo per un oggetto.|
|[IDispEventImpl::GetTypeInfoCount](#gettypeinfocount)|Recupera il numero di interfacce di informazioni sul tipo.|
|[IDispEventImpl::GetUserDefinedType](#getuserdefinedtype)|Recupera il tipo di base di un tipo definito dall'utente.|

## <a name="remarks"></a>Note

`IDispEventImpl`fornisce un modo per implementare un'interfaccia dispatch dell'evento senza che sia necessario fornire il codice di implementazione per ogni metodo o evento su tale interfaccia. `IDispEventImpl`fornisce le `IDispatch` implementazioni dei metodi. È sufficiente fornire implementazioni per gli eventi che si desidera gestire.

`IDispEventImpl`funziona insieme alla mappa di sink di evento nella classe per indirizzare gli eventi alla funzione del gestore appropriata. Per usare questa classe:

Aggiungere una macro [SINK_ENTRY](composite-control-macros.md#sink_entry) o [SINK_ENTRY_EX](composite-control-macros.md#sink_entry_ex) alla mappa di sink di evento per ogni evento in ogni oggetto che si desidera gestire. Quando si `IDispEventImpl` USA come classe di base di un controllo composito, è possibile chiamare [AtlAdviseSinkMap](connection-point-global-functions.md#atladvisesinkmap) per stabilire e interrompere la connessione con le origini eventi per tutte le voci nella mappa di sink di evento. In altri casi, o per un maggiore controllo, chiamare [DispEventAdvise](idispeventsimpleimpl-class.md#dispeventadvise) per stabilire la connessione tra l'oggetto di origine e la classe di base. Chiamare [DispEventUnadvise](idispeventsimpleimpl-class.md#dispeventunadvise) per interrompere la connessione.

È necessario derivare `IDispEventImpl` da (usando un valore univoco per *NID*) per ogni oggetto per cui è necessario gestire gli eventi. È possibile riutilizzare la classe di base non consigliando a fronte di un oggetto di origine e consigliando a fronte di un oggetto di origine diverso, ma il numero massimo di oggetti di origine che può essere gestito da un singolo oggetto in `IDispEventImpl` una volta è limitato dal numero di classi di base.

`IDispEventImpl`fornisce la stessa funzionalità di [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md), ad eccezione del fatto che ottiene le informazioni sul tipo relative all'interfaccia da una libreria dei tipi anziché essere fornita come puntatore a una struttura [_ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md) . Utilizzare `IDispEventSimpleImpl` quando non è presente una libreria dei tipi che descrive l'interfaccia eventi o si desidera evitare il sovraccarico associato all'utilizzo della libreria dei tipi.

> [!NOTE]
> `IDispEventImpl`e `IDispEventSimpleImpl` forniscono una propria implementazione di `IUnknown::QueryInterface` per consentire `IDispEventImpl` a `IDispEventSimpleImpl` ciascuna classe di base di fungere da identità com separata, consentendo comunque l'accesso diretto ai membri della classe nell'oggetto com principale.

L'implementazione della CE ATL dei sink di eventi ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il suo comportamento non è definito.

Per ulteriori informazioni, vedere [supporto di IDispEventImpl](../../atl/supporting-idispeventimpl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_IDispEvent`

`_IDispEventLocator`

[IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)

`IDispEventImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="getfuncinfofromid"></a>  IDispEventImpl::GetFuncInfoFromId

Individua l'indice della funzione per l'identificatore di invio specificato.

```
HRESULT GetFuncInfoFromId(
    const IID& iid,
    DISPID dispidMember,
    LCID lcid,
    _ATL_FUNC_INFO& info);
```

### <a name="parameters"></a>Parametri

*iid*<br/>
in Riferimento all'ID della funzione.

*dispidMember*<br/>
in ID di invio della funzione.

*lcid*<br/>
in Contesto delle impostazioni locali dell'ID funzione.

*info*<br/>
in Struttura che indica come viene chiamata la funzione.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="getidsofnames"></a>IDispEventImpl:: GetIDsOfNames

Esegue il mapping di un singolo membro e di un set facoltativo di nomi di argomento a un set corrispondente di dispid Integer, che può essere usato nelle chiamate successive a [IDispatch:: Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke).

```
STDMETHOD(GetIDsOfNames)(
    REFIID riid,
    LPOLESTR* rgszNames,
    UINT cNames,
    LCID lcid,
    DISPID* rgdispid);
```

### <a name="remarks"></a>Note

Vedere [IDispatch:: GetIDsOfNames](/windows/win32/api/oaidl/nf-oaidl-idispatch-getidsofnames) nel Windows SDK.

##  <a name="gettypeinfo"></a>IDispEventImpl:: GetTypeInfo

Recupera le informazioni sul tipo relative a un oggetto che può quindi essere usato per ottenere informazioni sul tipo relative a un'interfaccia.

```
STDMETHOD(GetTypeInfo)(
    UINT itinfo,
    LCID lcid,
    ITypeInfo** pptinfo);
```

### <a name="remarks"></a>Note

##  <a name="gettypeinfocount"></a>IDispEventImpl:: GetTypeInfoCount

Recupera il numero delle interfacce di informazioni sul tipo fornite da un oggetto (0 o 1).

```
STDMETHOD(GetTypeInfoCount)(UINT* pctinfo);
```

### <a name="remarks"></a>Note

Vedere [IDispatch:: GetTypeInfoCount](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfocount) nel Windows SDK.

##  <a name="getuserdefinedtype"></a>IDispEventImpl:: GetUserDefinedType

Recupera il tipo di base di un tipo definito dall'utente.

```
VARTYPE GetUserDefinedType(
    ITypeInfo* pTI,
    HREFTYPE hrt);
```

### <a name="parameters"></a>Parametri

*pTI*<br/>
in Puntatore all'interfaccia [ITypeInfo](/windows/win32/api/oaidl/nn-oaidl-itypeinfo) che contiene il tipo definito dall'utente.

*hrt*<br/>
in Handle per la descrizione del tipo da recuperare.

### <a name="return-value"></a>Valore restituito

Tipo di Variant.

### <a name="remarks"></a>Note

Vedere [ITypeInfo:: GetRefTypeInfo](/windows/win32/api/oaidl/nf-oaidl-itypeinfo-getreftypeinfo).

##  <a name="idispeventimpl"></a>IDispEventImpl:: IDispEventImpl

Costruttore. Archivia i valori dei parametri del modello di classe *plibid*, *pdiid*, *wMajor*e *wMinor*.

```
IDispEventImpl();
```

##  <a name="tihclass"></a>  IDispEventImpl::tihclass

Questo typedef è un'istanza del parametro di modello di classe *tihclass*.

```
typedef tihclass _tihclass;
```

### <a name="remarks"></a>Note

Per impostazione predefinita, la classe `CComTypeInfoHolder`è. `CComTypeInfoHolder`gestisce le informazioni sul tipo per la classe.

## <a name="see-also"></a>Vedere anche

[Struttura _ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md)<br/>
[Classe IDispatchImpl](../../atl/reference/idispatchimpl-class.md)<br/>
[Classe IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)<br/>
[SINK_ENTRY](composite-control-macros.md#sink_entry)<br/>
[SINK_ENTRY_EX](composite-control-macros.md#sink_entry_ex)<br/>
[SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

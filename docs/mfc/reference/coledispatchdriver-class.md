---
title: Classe COleDispatchDriver
ms.date: 11/04/2016
f1_keywords:
- COleDispatchDriver
- AFXDISP/COleDispatchDriver
- AFXDISP/COleDispatchDriver::COleDispatchDriver
- AFXDISP/COleDispatchDriver::AttachDispatch
- AFXDISP/COleDispatchDriver::CreateDispatch
- AFXDISP/COleDispatchDriver::DetachDispatch
- AFXDISP/COleDispatchDriver::GetProperty
- AFXDISP/COleDispatchDriver::InvokeHelper
- AFXDISP/COleDispatchDriver::ReleaseDispatch
- AFXDISP/COleDispatchDriver::SetProperty
- AFXDISP/COleDispatchDriver::m_bAutoRelease
- AFXDISP/COleDispatchDriver::m_lpDispatch
helpviewer_keywords:
- COleDispatchDriver [MFC], COleDispatchDriver
- COleDispatchDriver [MFC], AttachDispatch
- COleDispatchDriver [MFC], CreateDispatch
- COleDispatchDriver [MFC], DetachDispatch
- COleDispatchDriver [MFC], GetProperty
- COleDispatchDriver [MFC], InvokeHelper
- COleDispatchDriver [MFC], ReleaseDispatch
- COleDispatchDriver [MFC], SetProperty
- COleDispatchDriver [MFC], m_bAutoRelease
- COleDispatchDriver [MFC], m_lpDispatch
ms.assetid: 3ed98daf-cdc7-4374-8a0c-cf695a8d3657
ms.openlocfilehash: 27520f09506698833b1449552ce669223cc0c4c6
ms.sourcegitcommit: f2a135d69a2a8ef1777da60c53d58fe06980c997
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/03/2020
ms.locfileid: "87520642"
---
# <a name="coledispatchdriver-class"></a>Classe COleDispatchDriver

Implementa il lato client dell'automazione OLE.

## <a name="syntax"></a>Sintassi

```
class COleDispatchDriver
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDispatchDriver:: COleDispatchDriver](#coledispatchdriver)|Costruisce un oggetto `COleDispatchDriver`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDispatchDriver:: AttachDispatch](#attachdispatch)|Connette una `IDispatch` connessione all' `COleDispatchDriver` oggetto.|
|[COleDispatchDriver:: CreateDispatch](#createdispatch)|Crea una `IDispatch` connessione e la collega all' `COleDispatchDriver` oggetto.|
|[COleDispatchDriver::D etachDispatch](#detachdispatch)|Scollega una `IDispatch` connessione senza rilasciarla.|
|[COleDispatchDriver:: GetProperty](#getproperty)|Ottiene una proprietà di automazione.|
|[COleDispatchDriver::InvokeHelper](#invokehelper)|Helper per chiamare i metodi di automazione.|
|[COleDispatchDriver:: ReleaseDispatch](#releasedispatch)|Rilascia una `IDispatch` connessione.|
|[COleDispatchDriver:: SetProperty](#setproperty)|Imposta una proprietà di automazione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDispatchDriver:: operator =](#operator_eq)|Copia il valore di origine nell' `COleDispatchDriver` oggetto.|
|[COleDispatchDriver:: operator LPDISPATCH](#operator_lpdispatch)|Accede al puntatore sottostante `IDispatch` .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDispatchDriver:: m_bAutoRelease](#m_bautorelease)|Specifica se rilasciare l' `IDispatch` oggetto durante la `ReleaseDispatch` distruzione dell'oggetto o.|
|[COleDispatchDriver:: m_lpDispatch](#m_lpdispatch)|Indica il puntatore all' `IDispatch` interfaccia associata a questo oggetto `COleDispatchDriver` .|

## <a name="remarks"></a>Commenti

`COleDispatchDriver`non dispone di una classe base.

Le interfacce dispatch OLE forniscono l'accesso ai metodi e alle proprietà di un oggetto. Le funzioni membro di `COleDispatchDriver` collegano, scollegano, creano e rilasciano una connessione dispatch di tipo `IDispatch` . Altre funzioni membro usano elenchi di argomenti variabili per semplificare la chiamata a `IDispatch::Invoke` .

Questa classe può essere utilizzata direttamente, ma viene generalmente utilizzata solo dalle classi create dalla procedura guidata Aggiungi classe. Quando si creano nuove classi C++ importando una libreria dei tipi, le nuove classi sono derivate da `COleDispatchDriver` .

Per ulteriori informazioni sull'utilizzo di `COleDispatchDriver` , vedere gli articoli seguenti:

- [Client di automazione](../../mfc/automation-clients.md)

- [Server di automazione](../../mfc/automation-servers.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`COleDispatchDriver`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="coledispatchdriverattachdispatch"></a><a name="attachdispatch"></a>COleDispatchDriver:: AttachDispatch

Chiamare la funzione membro `AttachDispatch` per collegare un puntatore `IDispatch` all'oggetto `COleDispatchDriver` . Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

```cpp
void AttachDispatch(
    LPDISPATCH lpDispatch,
    BOOL bAutoRelease = TRUE);
```

### <a name="parameters"></a>Parametri

*lpDispatch*<br/>
Puntatore a un oggetto OLE `IDispatch` da collegare all'oggetto `COleDispatchDriver` .

*bAutoRelease*<br/>
Specifica se rilasciare l'invio quando l'oggetto esce dall'ambito.

### <a name="remarks"></a>Commenti

Questa funzione rilascia qualsiasi puntatore `IDispatch` già collegato all'oggetto `COleDispatchDriver` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#3](../../mfc/codesnippet/cpp/coledispatchdriver-class_1.cpp)]

## <a name="coledispatchdrivercoledispatchdriver"></a><a name="coledispatchdriver"></a>COleDispatchDriver:: COleDispatchDriver

Costruisce un oggetto `COleDispatchDriver`.

```
COleDispatchDriver();
COleDispatchDriver(LPDISPATCH lpDispatch, BOOL bAutoRelease = TRUE);
COleDispatchDriver(const COleDispatchDriver& dispatchSrc);
```

### <a name="parameters"></a>Parametri

*lpDispatch*<br/>
Puntatore a un oggetto OLE `IDispatch` da collegare all'oggetto `COleDispatchDriver` .

*bAutoRelease*<br/>
Specifica se rilasciare l'invio quando l'oggetto esce dall'ambito.

*dispatchSrc*<br/>
Riferimento a un `COleDispatchDriver` oggetto esistente.

### <a name="remarks"></a>Commenti

Il form `COleDispatchDriver( LPDISPATCH lpDispatch, BOOL bAutoRelease = TRUE )` connette l'interfaccia [IDispatch](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) .

Il modulo `COleDispatchDriver( const COleDispatchDriver& dispatchSrc )` copia un `COleDispatchDriver` oggetto esistente e incrementa il conteggio dei riferimenti.

Il form `COleDispatchDriver( )` Crea un `COleDispatchDriver` oggetto ma non connette l' `IDispatch` interfaccia. Prima `COleDispatchDriver( )` di utilizzare senza argomenti, è necessario connettere un oggetto `IDispatch` utilizzando [COleDispatchDriver:: CreateDispatch](#createdispatch) o [COleDispatchDriver:: AttachDispatch](#attachdispatch). Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [COleDispatchDriver::CreateDispatch](#createdispatch).

## <a name="coledispatchdrivercreatedispatch"></a><a name="createdispatch"></a>COleDispatchDriver:: CreateDispatch

Crea un oggetto interfaccia [IDispatch](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) e lo collega all'oggetto `COleDispatchDriver` .

```
BOOL CreateDispatch(
    REFCLSID clsid,
    COleException* pError = NULL);

BOOL CreateDispatch(
    LPCTSTR lpszProgID,
    COleException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
ID di classe dell'oggetto connessione `IDispatch` da creare.

*pError*<br/>
Puntatore a un oggetto eccezione OLE, che conterrà il codice stato risultante dalla creazione.

*lpszProgID*<br/>
Puntatore all'identificatore a livello di codice, ad esempio "Excel.Document.5", dell'oggetto di automazione per il quale viene creato l'oggetto distribuzione.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#4](../../mfc/codesnippet/cpp/coledispatchdriver-class_2.cpp)]

## <a name="coledispatchdriverdetachdispatch"></a><a name="detachdispatch"></a>COleDispatchDriver::D etachDispatch

Scollega la connessione corrente `IDispatch` da questo oggetto.

```
LPDISPATCH DetachDispatch();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto OLE associato in precedenza `IDispatch` .

### <a name="remarks"></a>Commenti

L'oggetto `IDispatch` non viene rilasciato.

Per ulteriori informazioni sul tipo LPDISPATCH, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) nell'Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#5](../../mfc/codesnippet/cpp/coledispatchdriver-class_3.cpp)]

## <a name="coledispatchdrivergetproperty"></a><a name="getproperty"></a>COleDispatchDriver:: GetProperty

Ottiene la proprietà dell'oggetto specificata da *dwDispID*.

```cpp
void GetProperty(
    DISPID dwDispID,
    VARTYPE vtProp,
    void* pvProp) const;
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica la proprietà da recuperare.

*vtProp*<br/>
Specifica la proprietà da recuperare. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](#invokehelper).

*pvProp*<br/>
Indirizzo della variabile che riceverà il valore della proprietà. Deve corrispondere al tipo specificato da *vtProp*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#6](../../mfc/codesnippet/cpp/coledispatchdriver-class_4.cpp)]

## <a name="coledispatchdriverinvokehelper"></a><a name="invokehelper"></a>COleDispatchDriver:: InvokeHelper

Chiama il metodo o la proprietà dell'oggetto specificata da *dwDispID*nel contesto specificato da *wFlags*.

```cpp
void AFX_CDECL InvokeHelper(
    DISPID dwDispID,
    WORD wFlags,
    VARTYPE vtRet,
    void* pvRet,
    const BYTE* pbParamInfo, ...);
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica il metodo o la proprietà da richiamare.

*wFlags*<br/>
Flag che descrivono il contesto della chiamata a `IDispatch::Invoke` . . Per un elenco di valori possibili, vedere il parametro *wFlags* in [IDispatch:: Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke) nel Windows SDK.

*vtRet*<br/>
Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione Osservazioni.

*pvRet*<br/>
Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato da *vtRet*.

*pbParamInfo*<br/>
Puntatore a una stringa di byte con terminazione null che specifica i tipi dei parametri che seguono *pbParamInfo*.

*...*<br/>
Elenco variabile di parametri dei tipi specificati in *pbParamInfo*.

### <a name="remarks"></a>Commenti

Il parametro *pbParamInfo* specifica i tipi dei parametri passati al metodo o alla proprietà. L'elenco di argomenti variabile è rappresentato da **...** nella dichiarazione di sintassi.

I valori possibili per l'argomento *vtRet* sono ricavati dall'enumerazione VarEnum. I possibili valori sono i seguenti:

|Simbolo|Tipo restituito|
|------------|-----------------|
|VT_EMPTY|**`void`**|
|VT_I2|**`short`**|
|VT_I4|**`long`**|
|VT_R4|**`float`**|
|VT_R8|**`double`**|
|VT_CY|**CY**|
|VT_DATE|**Data**|
|VT_BSTR|BSTR|
|VT_DISPATCH|LPDISPATCH|
|VT_ERROR|SCODE|
|VT_BOOL|**BOOL**|
|VT_VARIANT|**VARIANTE**|
|VT_UNKNOWN|LPUNKNOWN|

L'argomento *pbParamInfo* è un elenco separato da spazi di costanti **VTS_** . Uno o più di questi valori, separati da spazi (non virgole), specificano l'elenco dei parametri della funzione. I valori possibili sono elencati con la macro [EVENT_CUSTOM](event-maps.md#event_custom) .

Questa funzione converte i parametri in valori VARIANTARG , quindi richiama il metodo [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke) . Se la chiamata a `Invoke` ha esito negativo, questa funzione genera un'eccezione. Se SCODE (codice di stato) restituito da `IDispatch::Invoke` è DISP_E_EXCEPTION, questa funzione genera un oggetto [COleException](../../mfc/reference/coleexception-class.md) . in caso contrario, genera un'eccezione [COleDispatchException](../../mfc/reference/coledispatchexception-class.md).

Per altre informazioni, vedere [VARIANTARG](/windows/win32/api/oaidl/ns-oaidl-variant), [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface), [IDispatch:: Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke)e [Structure of com error codes](/windows/win32/com/structure-of-com-error-codes) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [COleDispatchDriver::CreateDispatch](#createdispatch).

## <a name="coledispatchdriverm_bautorelease"></a><a name="m_bautorelease"></a>COleDispatchDriver:: m_bAutoRelease

Se TRUE, l'oggetto COM a cui si accede da [m_lpDispatch](#m_lpdispatch) verrà rilasciato automaticamente quando viene chiamato [ReleaseDispatch](#releasedispatch) o quando questo `COleDispatchDriver` oggetto viene eliminato definitivamente.

```
BOOL m_bAutoRelease;
```

### <a name="remarks"></a>Commenti

Per impostazione predefinita, `m_bAutoRelease` è impostato su true nel costruttore.

Per ulteriori informazioni sul rilascio di oggetti COM, vedere [implementazione del conteggio dei riferimenti](/windows/win32/com/implementing-reference-counting) e [IUnknown:: Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) nella Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#9](../../mfc/codesnippet/cpp/coledispatchdriver-class_5.cpp)]

## <a name="coledispatchdriverm_lpdispatch"></a><a name="m_lpdispatch"></a>COleDispatchDriver:: m_lpDispatch

Puntatore all' `IDispatch` interfaccia associata a questo oggetto `COleDispatchDriver` .

```
LPDISPATCH m_lpDispatch;
```

### <a name="remarks"></a>Commenti

Il `m_lpDispatch` membro dati è una variabile pubblica di tipo LPDISPATCH.

Per ulteriori informazioni, vedere [IDispatch](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) nella Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleDispatchDriver:: AttachDispatch](#attachdispatch).

## <a name="coledispatchdriveroperator-"></a><a name="operator_eq"></a>COleDispatchDriver:: operator =

Copia il valore di origine nell' `COleDispatchDriver` oggetto.

```
const COleDispatchDriver& operator=(const COleDispatchDriver& dispatchSrc);
```

### <a name="parameters"></a>Parametri

*dispatchSrc*<br/>
Puntatore a un oggetto esistente `COleDispatchDriver` .

## <a name="coledispatchdriveroperator-lpdispatch"></a><a name="operator_lpdispatch"></a>COleDispatchDriver:: operator LPDISPATCH

Accede al puntatore sottostante `IDispatch` dell' `COleDispatchDriver` oggetto.

```
operator LPDISPATCH();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#8](../../mfc/codesnippet/cpp/coledispatchdriver-class_6.cpp)]

## <a name="coledispatchdriverreleasedispatch"></a><a name="releasedispatch"></a>COleDispatchDriver:: ReleaseDispatch

Rilascia la `IDispatch` connessione. Per ulteriori informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface)

```cpp
void ReleaseDispatch();
```

### <a name="remarks"></a>Commenti

Se per questa connessione è stata impostata la versione automatica, questa funzione chiama `IDispatch::Release` prima di rilasciare l'interfaccia.

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleDispatchDriver:: AttachDispatch](#attachdispatch).

## <a name="coledispatchdriversetproperty"></a><a name="setproperty"></a>COleDispatchDriver:: SetProperty

Imposta la proprietà dell'oggetto OLE specificata da *dwDispID*.

```cpp
void AFX_CDECL SetProperty(
    DISPID dwDispID,
    VARTYPE vtProp, ...);
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica la proprietà da impostare.

*vtProp*<br/>
Specifica il tipo della proprietà da impostare. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](#invokehelper).

*...*<br/>
Un singolo parametro del tipo specificato da *vtProp*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#7](../../mfc/codesnippet/cpp/coledispatchdriver-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[CALCDRIV di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[ACDUAL di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)

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
ms.openlocfilehash: fa88147b57b0506f7f9ab96d4a5d2f43fdd75458
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79421261"
---
# <a name="coledispatchdriver-class"></a>Classe COleDispatchDriver

Implementa il lato client dell'automazione OLE.

## <a name="syntax"></a>Sintassi

```
class COleDispatchDriver
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDispatchDriver:: COleDispatchDriver](#coledispatchdriver)|Costruisce un oggetto `COleDispatchDriver`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDispatchDriver:: AttachDispatch](#attachdispatch)|Connette una connessione `IDispatch` all'oggetto `COleDispatchDriver`.|
|[COleDispatchDriver:: CreateDispatch](#createdispatch)|Crea una connessione `IDispatch` e la collega all'oggetto `COleDispatchDriver`.|
|[COleDispatchDriver::D etachDispatch](#detachdispatch)|Scollega una connessione `IDispatch`, senza rilasciarla.|
|[COleDispatchDriver:: GetProperty](#getproperty)|Ottiene una proprietà di automazione.|
|[COleDispatchDriver:: InvokeHelper](#invokehelper)|Helper per chiamare i metodi di automazione.|
|[COleDispatchDriver:: ReleaseDispatch](#releasedispatch)|Rilascia una connessione `IDispatch`.|
|[COleDispatchDriver:: SetProperty](#setproperty)|Imposta una proprietà di automazione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDispatchDriver:: operator =](#operator_eq)|Copia il valore di origine nell'oggetto `COleDispatchDriver`.|
|[COleDispatchDriver:: operator LPDISPATCH](#operator_lpdispatch)|Accede al puntatore `IDispatch` sottostante.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDispatchDriver:: m_bAutoRelease](#m_bautorelease)|Specifica se rilasciare il `IDispatch` durante l'`ReleaseDispatch` o l'eliminazione di oggetti.|
|[COleDispatchDriver:: m_lpDispatch](#m_lpdispatch)|Indica il puntatore all'interfaccia `IDispatch` collegata a questo `COleDispatchDriver`.|

## <a name="remarks"></a>Osservazioni

`COleDispatchDriver` non dispone di una classe di base.

Le interfacce dispatch OLE forniscono l'accesso ai metodi e alle proprietà di un oggetto. Le funzioni membro di `COleDispatchDriver` collegano, scollegano, creano e rilasciano una connessione dispatch di tipo `IDispatch`. Altre funzioni membro usano elenchi di argomenti variabili per semplificare la chiamata di `IDispatch::Invoke`.

Questa classe può essere utilizzata direttamente, ma viene generalmente utilizzata solo dalle classi create dalla procedura guidata Aggiungi classe. Quando si creano nuove C++ classi importando una libreria dei tipi, le nuove classi sono derivate da `COleDispatchDriver`.

Per ulteriori informazioni sull'utilizzo di `COleDispatchDriver`, vedere gli articoli seguenti:

- [Automation Clients](../../mfc/automation-clients.md)

- [Server di automazione](../../mfc/automation-servers.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`COleDispatchDriver`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="attachdispatch"></a>COleDispatchDriver:: AttachDispatch

Chiamare la funzione membro `AttachDispatch` per collegare un puntatore `IDispatch` all'oggetto `COleDispatchDriver` . Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

```
void AttachDispatch(
    LPDISPATCH lpDispatch,
    BOOL bAutoRelease = TRUE);
```

### <a name="parameters"></a>Parametri

*lpDispatch*<br/>
Puntatore a un oggetto OLE `IDispatch` da collegare all'oggetto `COleDispatchDriver` .

*bAutoRelease*<br/>
Specifica se rilasciare l'invio quando l'oggetto esce dall'ambito.

### <a name="remarks"></a>Osservazioni

Questa funzione rilascia qualsiasi puntatore `IDispatch` già collegato all'oggetto `COleDispatchDriver` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#3](../../mfc/codesnippet/cpp/coledispatchdriver-class_1.cpp)]

##  <a name="coledispatchdriver"></a>COleDispatchDriver:: COleDispatchDriver

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
Riferimento a un oggetto `COleDispatchDriver` esistente.

### <a name="remarks"></a>Osservazioni

Il form `COleDispatchDriver`(`LPDISPATCH lpDispatch`, **BOOL**`bAutoRelease` = **true**) connette l'interfaccia [IDispatch](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) .

Il form `COleDispatchDriver`( **const**`COleDispatchDriver`& `dispatchSrc`) copia un oggetto `COleDispatchDriver` esistente e incrementa il conteggio dei riferimenti.

Il form `COleDispatchDriver`() crea un oggetto `COleDispatchDriver` ma non connette l'interfaccia `IDispatch`. Prima di usare `COleDispatchDriver`() senza argomenti, è necessario connettere una `IDispatch` a essa usando [COleDispatchDriver:: CreateDispatch](#createdispatch) o [COleDispatchDriver:: AttachDispatch](#attachdispatch). Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [COleDispatchDriver::CreateDispatch](#createdispatch).

##  <a name="createdispatch"></a>COleDispatchDriver:: CreateDispatch

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

*CLSID*<br/>
ID di classe dell'oggetto connessione `IDispatch` da creare.

*pError*<br/>
Puntatore a un oggetto eccezione OLE, che conterrà il codice stato risultante dalla creazione.

*lpszProgID*<br/>
Puntatore all'identificatore a livello di codice, ad esempio "Excel.Document.5", dell'oggetto di automazione per il quale viene creato l'oggetto distribuzione.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#4](../../mfc/codesnippet/cpp/coledispatchdriver-class_2.cpp)]

##  <a name="detachdispatch"></a>COleDispatchDriver::D etachDispatch

Scollega la connessione `IDispatch` corrente da questo oggetto.

```
LPDISPATCH DetachDispatch();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto OLE `IDispatch` precedentemente associato.

### <a name="remarks"></a>Osservazioni

Il `IDispatch` non viene rilasciato.

Per ulteriori informazioni sul tipo LPDISPATCH, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) nell'Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#5](../../mfc/codesnippet/cpp/coledispatchdriver-class_3.cpp)]

##  <a name="getproperty"></a>COleDispatchDriver:: GetProperty

Ottiene la proprietà dell'oggetto specificata da *dwDispID*.

```
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

##  <a name="invokehelper"></a>COleDispatchDriver:: InvokeHelper

Chiama il metodo o la proprietà dell'oggetto specificata da *dwDispID*nel contesto specificato da *wFlags*.

```
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
Flag che descrivono il contesto della chiamata a `IDispatch::Invoke`. . Per un elenco di valori possibili, vedere il parametro *wFlags* in [IDispatch:: Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke) nel Windows SDK.

*vtRet*<br/>
Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione Osservazioni.

*pvRet*<br/>
Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato da *vtRet*.

*pbParamInfo*<br/>
Puntatore a una stringa di byte con terminazione null che specifica i tipi dei parametri che seguono *pbParamInfo*.

*...*<br/>
Elenco variabile di parametri dei tipi specificati in *pbParamInfo*.

### <a name="remarks"></a>Osservazioni

Il parametro *pbParamInfo* specifica i tipi dei parametri passati al metodo o alla proprietà. L'elenco di argomenti variabile è rappresentato da **...** nella dichiarazione di sintassi.

I valori possibili per l'argomento *vtRet* sono ricavati dall'enumerazione VarEnum. Sono disponibili i valori seguenti:

|Simbolo|Tipo restituito|
|------------|-----------------|
|VT_EMPTY|**void**|
|VT_I2|**short**|
|VT_I4|**long**|
|VT_R4|**float**|
|VT_R8|**double**|
|VT_CY|**CY**|
|VT_DATE|**DATE**|
|VT_BSTR|BSTR|
|VT_DISPATCH|LPDISPATCH|
|VT_ERROR|SCODE|
|VT_BOOL|**BOOL**|
|VT_VARIANT|**VARIANTE**|
|VT_UNKNOWN|LPUNKNOWN|

L'argomento *pbParamInfo* è un elenco separato da spazi di costanti **VTS_** . Uno o più di questi valori, separati da spazi (non virgole), specificano l'elenco dei parametri della funzione. I valori possibili sono elencati con la macro [EVENT_CUSTOM](event-maps.md#event_custom) .

Questa funzione converte i parametri in valori VARIANTARG, quindi richiama il metodo [IDispatch:: Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke) . Se la chiamata a `Invoke` ha esito negativo, questa funzione genera un'eccezione. Se SCODE (codice di stato) restituito da `IDispatch::Invoke` è DISP_E_EXCEPTION, questa funzione genera un oggetto [COleException](../../mfc/reference/coleexception-class.md) ; in caso contrario, viene generato un [COleDispatchException](../../mfc/reference/coledispatchexception-class.md).

Per altre informazioni, vedere [VARIANTARG](/windows/win32/api/oaidl/ns-oaidl-variant), [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface), [IDispatch:: Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke)e [Structure of com error codes](/windows/win32/com/structure-of-com-error-codes) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [COleDispatchDriver::CreateDispatch](#createdispatch).

##  <a name="m_bautorelease"></a>COleDispatchDriver:: m_bAutoRelease

Se TRUE, l'oggetto COM a cui si accede da [m_lpDispatch](#m_lpdispatch) verrà rilasciato automaticamente quando viene chiamato [ReleaseDispatch](#releasedispatch) o quando questo `COleDispatchDriver` oggetto viene eliminato definitivamente.

```
BOOL m_bAutoRelease;
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `m_bAutoRelease` è impostato su TRUE nel costruttore.

Per ulteriori informazioni sul rilascio di oggetti COM, vedere [implementazione del conteggio dei riferimenti](/windows/win32/com/implementing-reference-counting) e [IUnknown:: Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) nella Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#9](../../mfc/codesnippet/cpp/coledispatchdriver-class_5.cpp)]

##  <a name="m_lpdispatch"></a>COleDispatchDriver:: m_lpDispatch

Puntatore all'interfaccia `IDispatch` collegata a questo `COleDispatchDriver`.

```
LPDISPATCH m_lpDispatch;
```

### <a name="remarks"></a>Osservazioni

Il membro dati `m_lpDispatch` è una variabile pubblica di tipo LPDISPATCH.

Per ulteriori informazioni, vedere [IDispatch](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) nella Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleDispatchDriver:: AttachDispatch](#attachdispatch).

##  <a name="operator_eq"></a>COleDispatchDriver:: operator =

Copia il valore di origine nell'oggetto `COleDispatchDriver`.

```
const COleDispatchDriver& operator=(const COleDispatchDriver& dispatchSrc);
```

### <a name="parameters"></a>Parametri

*dispatchSrc*<br/>
Puntatore a un oggetto `COleDispatchDriver` esistente.

##  <a name="operator_lpdispatch"></a>COleDispatchDriver:: operator LPDISPATCH

Accede al puntatore `IDispatch` sottostante dell'oggetto `COleDispatchDriver`.

```
operator LPDISPATCH();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#8](../../mfc/codesnippet/cpp/coledispatchdriver-class_6.cpp)]

##  <a name="releasedispatch"></a>COleDispatchDriver:: ReleaseDispatch

Rilascia la connessione `IDispatch`. Per ulteriori informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface)

```
void ReleaseDispatch();
```

### <a name="remarks"></a>Osservazioni

Se per questa connessione è stata impostata la versione automatica, questa funzione chiama `IDispatch::Release` prima di rilasciare l'interfaccia.

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleDispatchDriver:: AttachDispatch](#attachdispatch).

##  <a name="setproperty"></a>COleDispatchDriver:: SetProperty

Imposta la proprietà dell'oggetto OLE specificata da *dwDispID*.

```
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
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

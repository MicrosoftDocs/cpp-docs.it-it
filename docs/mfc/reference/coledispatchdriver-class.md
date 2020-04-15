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
ms.openlocfilehash: c22097c3a686857a6a5698033b7395c5d15f2570
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366072"
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
|[COleDispatchDriver::COleDispatchDriver](#coledispatchdriver)|Costruisce un oggetto `COleDispatchDriver`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDispatchDriver::AttachDispatch](#attachdispatch)|Associa una `IDispatch` connessione all'oggetto. `COleDispatchDriver`|
|[COleDispatchDriver::CreateDispatch](#createdispatch)|Crea `IDispatch` una connessione e la `COleDispatchDriver` associa all'oggetto.|
|[COleDispatchDriver::DetachDispatch](#detachdispatch)|Scollega una `IDispatch` connessione, senza rilasciarla.|
|[COleDispatchDriver::GetProperty](#getproperty)|Ottiene una proprietà di automazione.|
|[COleDispatchDriver::InvokeHelper](#invokehelper)|Helper per la chiamata di metodi di automazione.|
|[COleDispatchDriver::ReleaseDispatch](#releasedispatch)|Rilascia `IDispatch` una connessione.|
|[COleDispatchDriver::SetProperty](#setproperty)|Imposta una proprietà di automazione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDispatchDriver::operatore .](#operator_eq)|Copia il valore di `COleDispatchDriver` origine nell'oggetto.|
|[COleDispatchDriver::operatore LPDISPATCH](#operator_lpdispatch)|Accede al puntatore sottostante. `IDispatch`|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDispatchDriver::m_bAutoRelease](#m_bautorelease)|Specifica se rilasciare `IDispatch` la `ReleaseDispatch` distruzione durante o dell'oggetto.|
|[COleDispatchDriver::m_lpDispatch](#m_lpdispatch)|Indica il puntatore `IDispatch` all'interfaccia `COleDispatchDriver`associata a questo oggetto .|

## <a name="remarks"></a>Osservazioni

`COleDispatchDriver`non dispone di una classe base.

Le interfacce di invio OLE forniscono l'accesso ai metodi e alle proprietà di un oggetto. Funzioni membro `COleDispatchDriver` di attach, detach, create e `IDispatch`release di una connessione dispatch di tipo . Altre funzioni membro utilizzano elenchi `IDispatch::Invoke`di argomenti variabili per semplificare la chiamata a .

Questa classe può essere utilizzata direttamente, ma viene in genere utilizzata solo dalle classi create dalla procedura guidata Aggiungi classe. Quando si creano nuove classi C, importando una libreria `COleDispatchDriver`dei tipi, le nuove classi derivano da .

Per ulteriori informazioni `COleDispatchDriver`sull'utilizzo di , vedere i seguenti articoli:

- [Client di automazione](../../mfc/automation-clients.md)

- [Server di automazione](../../mfc/automation-servers.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`COleDispatchDriver`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="coledispatchdriverattachdispatch"></a><a name="attachdispatch"></a>COleDispatchDriver::AttachDispatch

Chiamare la funzione membro `AttachDispatch` per collegare un puntatore `IDispatch` all'oggetto `COleDispatchDriver` . Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

```
void AttachDispatch(
    LPDISPATCH lpDispatch,
    BOOL bAutoRelease = TRUE);
```

### <a name="parameters"></a>Parametri

*Lpdispatch*<br/>
Puntatore a un oggetto OLE `IDispatch` da collegare all'oggetto `COleDispatchDriver` .

*bRilascioautomatico*<br/>
Specifica se rilasciare l'invio quando l'oggetto esce dall'ambito.

### <a name="remarks"></a>Osservazioni

Questa funzione rilascia qualsiasi puntatore `IDispatch` già collegato all'oggetto `COleDispatchDriver` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#3](../../mfc/codesnippet/cpp/coledispatchdriver-class_1.cpp)]

## <a name="coledispatchdrivercoledispatchdriver"></a><a name="coledispatchdriver"></a>COleDispatchDriver::COleDispatchDriver

Costruisce un oggetto `COleDispatchDriver`.

```
COleDispatchDriver();
COleDispatchDriver(LPDISPATCH lpDispatch, BOOL bAutoRelease = TRUE);
COleDispatchDriver(const COleDispatchDriver& dispatchSrc);
```

### <a name="parameters"></a>Parametri

*Lpdispatch*<br/>
Puntatore a un oggetto OLE `IDispatch` da collegare all'oggetto `COleDispatchDriver` .

*bRilascioautomatico*<br/>
Specifica se rilasciare l'invio quando l'oggetto esce dall'ambito.

*dispatchSrc*<br/>
Riferimento a `COleDispatchDriver` un oggetto esistente.

### <a name="remarks"></a>Osservazioni

Il `COleDispatchDriver`formato `LPDISPATCH lpDispatch`( , **BOOL**`bAutoRelease` = **TRUE**) connette l'interfaccia [IDispatch.](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface)

Il `COleDispatchDriver`form ( **const**`COleDispatchDriver`& `dispatchSrc`) `COleDispatchDriver` copia un oggetto esistente e incrementa il conteggio dei riferimenti.

Il `COleDispatchDriver`form ( `COleDispatchDriver` ) crea un `IDispatch` oggetto ma non connette l'interfaccia. Prima `COleDispatchDriver`di utilizzare ( ) senza `IDispatch` argomenti, è necessario connettervi un oggetto utilizzando [COleDispatchDriver::CreateDispatch](#createdispatch) o [COleDispatchDriver::AttachDispatch](#attachdispatch). Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [COleDispatchDriver::CreateDispatch](#createdispatch).

## <a name="coledispatchdrivercreatedispatch"></a><a name="createdispatch"></a>COleDispatchDriver::CreateDispatch

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

*lpszProgID (ID Prog)*<br/>
Puntatore all'identificatore a livello di codice, ad esempio "Excel.Document.5", dell'oggetto di automazione per il quale viene creato l'oggetto distribuzione.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#4](../../mfc/codesnippet/cpp/coledispatchdriver-class_2.cpp)]

## <a name="coledispatchdriverdetachdispatch"></a><a name="detachdispatch"></a>COleDispatchDriver::DetachDispatch

Scollega la `IDispatch` connessione corrente da questo oggetto.

```
LPDISPATCH DetachDispatch();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto OLE `IDispatch` associato in precedenza.

### <a name="remarks"></a>Osservazioni

Il `IDispatch` non viene rilasciato.

Per ulteriori informazioni sul tipo LPDISPATCH, vedere [Implementazione dell'interfaccia IDispatch](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#5](../../mfc/codesnippet/cpp/coledispatchdriver-class_3.cpp)]

## <a name="coledispatchdrivergetproperty"></a><a name="getproperty"></a>COleDispatchDriver::GetProperty

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

*vtProp (informazioni in base al tasi*<br/>
Specifica la proprietà da recuperare. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](#invokehelper).

*pvProp*<br/>
Indirizzo della variabile che riceverà il valore della proprietà. Deve corrispondere al tipo specificato da *vtProp*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#6](../../mfc/codesnippet/cpp/coledispatchdriver-class_4.cpp)]

## <a name="coledispatchdriverinvokehelper"></a><a name="invokehelper"></a>COleDispatchDriver::InvokeHelper

Chiama il metodo o la proprietà dell'oggetto specificato da *dwDispID*, nel contesto specificato da *wFlags*.

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

*Wflags*<br/>
Flag che descrivono il `IDispatch::Invoke`contesto della chiamata a . . Per un elenco dei valori possibili, vedere il parametro *wFlags* in [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke) in Windows SDK.

*vtRet (in vtRet)*<br/>
Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione Osservazioni.

*pvRet (inversione di tempo)*<br/>
Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato da *vtRet*.

*pbParamInfo (informazioni in base alle proprietà del personale*<br/>
Puntatore a una stringa di byte con terminazione null che specifica i tipi dei parametri che seguono *pbParamInfo*.

*...*<br/>
Elenco di variabili di parametri, di tipi specificati in *pbParamInfo*.

### <a name="remarks"></a>Osservazioni

Il parametro *pbParamInfo* consente di specificare i tipi di parametri passati al metodo o alla proprietà. L'elenco di argomenti variabile è rappresentato da **...** nella dichiarazione di sintassi.

I valori possibili per l'argomento *vtRet* sono tratti dall'enumerazione VARENUM. Sono disponibili i valori seguenti:

|Simbolo|Tipo restituito|
|------------|-----------------|
|VT_EMPTY|**void**|
|VT_I2|**short**|
|VT_I4|**Lungo**|
|VT_R4|**Galleggiante**|
|VT_R8|**double**|
|VT_CY|**CY**|
|VT_DATE|**Data**|
|VT_BSTR|BSTR|
|VT_DISPATCH|Lpdispatch|
|VT_ERROR|SCODE|
|VT_BOOL|**Bool**|
|VT_VARIANT|**VARIANT**|
|VT_UNKNOWN|LPUNKNOWN (Informazioni in base a LPUNKNOWN|

L'argomento *pbParamInfo* è un elenco separato da spazi di costanti **VTS_.** Uno o più di questi valori, separati da spazi (non virgole), specificano l'elenco dei parametri della funzione. I valori possibili sono elencati con la macro [EVENT_CUSTOM](event-maps.md#event_custom) .

Questa funzione converte i parametri in valori VARIANTARG , quindi richiama il metodo [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke) . Se la chiamata a `Invoke` ha esito negativo, questa funzione genera un'eccezione. Se il SCODE (codice di `IDispatch::Invoke` stato) restituito da è DISP_E_EXCEPTION, questa funzione genera un [COleException](../../mfc/reference/coleexception-class.md) oggetto; in caso contrario, genera [un'eccezione COleDispatchException](../../mfc/reference/coledispatchexception-class.md).

Per ulteriori informazioni, vedere [VARIANTARG](/windows/win32/api/oaidl/ns-oaidl-variant), [Implementazione dell'interfaccia IDispatch](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface), [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke)e [Struttura dei codici](/windows/win32/com/structure-of-com-error-codes) di errore COM in Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [COleDispatchDriver::CreateDispatch](#createdispatch).

## <a name="coledispatchdriverm_bautorelease"></a><a name="m_bautorelease"></a>COleDispatchDriver::m_bAutoRelease

Se TRUE, l'oggetto COM a cui accede [m_lpDispatch](#m_lpdispatch) verrà `COleDispatchDriver` rilasciato automaticamente quando viene chiamato [ReleaseDispatch](#releasedispatch) o quando l'oggetto viene eliminato.

```
BOOL m_bAutoRelease;
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `m_bAutoRelease` è impostato su TRUE nel costruttore.

Per ulteriori informazioni sul rilascio di oggetti COM, vedere [Implementazione del conteggio dei riferimenti](/windows/win32/com/implementing-reference-counting) e [IUnknown::Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#9](../../mfc/codesnippet/cpp/coledispatchdriver-class_5.cpp)]

## <a name="coledispatchdriverm_lpdispatch"></a><a name="m_lpdispatch"></a>COleDispatchDriver::m_lpDispatch

Puntatore all'interfaccia `IDispatch` associata `COleDispatchDriver`a questo oggetto .

```
LPDISPATCH m_lpDispatch;
```

### <a name="remarks"></a>Osservazioni

Il `m_lpDispatch` membro dati è una variabile pubblica di tipo LPDISPATCH.

Per ulteriori informazioni, vedere [IDispatch](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) in Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleDispatchDriver::AttachDispatch](#attachdispatch).

## <a name="coledispatchdriveroperator-"></a><a name="operator_eq"></a>COleDispatchDriver::operatore .

Copia il valore di `COleDispatchDriver` origine nell'oggetto.

```
const COleDispatchDriver& operator=(const COleDispatchDriver& dispatchSrc);
```

### <a name="parameters"></a>Parametri

*dispatchSrc*<br/>
Puntatore a `COleDispatchDriver` un oggetto esistente.

## <a name="coledispatchdriveroperator-lpdispatch"></a><a name="operator_lpdispatch"></a>COleDispatchDriver::operatore LPDISPATCH

Accede al puntatore sottostante `IDispatch` dell'oggetto. `COleDispatchDriver`

```
operator LPDISPATCH();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#8](../../mfc/codesnippet/cpp/coledispatchdriver-class_6.cpp)]

## <a name="coledispatchdriverreleasedispatch"></a><a name="releasedispatch"></a>COleDispatchDriver::ReleaseDispatch

Rilascia `IDispatch` la connessione. Per altre informazioni, vedere [Implementazione dell'interfaccia IDispatchFor](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) more information, see Implementing the IDispatch Interface

```
void ReleaseDispatch();
```

### <a name="remarks"></a>Osservazioni

Se il rilascio automatico è stato `IDispatch::Release` impostato per questa connessione, questa funzione chiama prima di rilasciare l'interfaccia.

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleDispatchDriver::AttachDispatch](#attachdispatch).

## <a name="coledispatchdriversetproperty"></a><a name="setproperty"></a>COleDispatchDriver::SetProperty

Imposta la proprietà dell'oggetto OLE specificata da *dwDispID*.

```
void AFX_CDECL SetProperty(
    DISPID dwDispID,
    VARTYPE vtProp, ...);
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica la proprietà da impostare.

*vtProp (informazioni in base al tasi*<br/>
Specifica il tipo della proprietà da impostare. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](#invokehelper).

*...*<br/>
Singolo parametro del tipo specificato da *vtProp*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#7](../../mfc/codesnippet/cpp/coledispatchdriver-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC CALCDRIV](../../overview/visual-cpp-samples.md)<br/>
[ACDUAL di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

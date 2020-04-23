---
title: Classe CCmdTarget
ms.date: 11/04/2016
f1_keywords:
- CCmdTarget
- AFXWIN/CCmdTarget
- AFXWIN/CCmdTarget::CCmdTarget
- AFXWIN/CCmdTarget::BeginWaitCursor
- AFXWIN/CCmdTarget::DoOleVerb
- AFXWIN/CCmdTarget::EnableAutomation
- AFXWIN/CCmdTarget::EnableConnections
- AFXWIN/CCmdTarget::EnableTypeLib
- AFXWIN/CCmdTarget::EndWaitCursor
- AFXWIN/CCmdTarget::EnumOleVerbs
- AFXWIN/CCmdTarget::FromIDispatch
- AFXWIN/CCmdTarget::GetDispatchIID
- AFXWIN/CCmdTarget::GetIDispatch
- AFXWIN/CCmdTarget::GetTypeInfoCount
- AFXWIN/CCmdTarget::GetTypeInfoOfGuid
- AFXWIN/CCmdTarget::GetTypeLib
- AFXWIN/CCmdTarget::GetTypeLibCache
- AFXWIN/CCmdTarget::IsInvokeAllowed
- AFXWIN/CCmdTarget::IsResultExpected
- AFXWIN/CCmdTarget::OnCmdMsg
- AFXWIN/CCmdTarget::OnFinalRelease
- AFXWIN/CCmdTarget::RestoreWaitCursor
helpviewer_keywords:
- CCmdTarget [MFC], CCmdTarget
- CCmdTarget [MFC], BeginWaitCursor
- CCmdTarget [MFC], DoOleVerb
- CCmdTarget [MFC], EnableAutomation
- CCmdTarget [MFC], EnableConnections
- CCmdTarget [MFC], EnableTypeLib
- CCmdTarget [MFC], EndWaitCursor
- CCmdTarget [MFC], EnumOleVerbs
- CCmdTarget [MFC], FromIDispatch
- CCmdTarget [MFC], GetDispatchIID
- CCmdTarget [MFC], GetIDispatch
- CCmdTarget [MFC], GetTypeInfoCount
- CCmdTarget [MFC], GetTypeInfoOfGuid
- CCmdTarget [MFC], GetTypeLib
- CCmdTarget [MFC], GetTypeLibCache
- CCmdTarget [MFC], IsInvokeAllowed
- CCmdTarget [MFC], IsResultExpected
- CCmdTarget [MFC], OnCmdMsg
- CCmdTarget [MFC], OnFinalRelease
- CCmdTarget [MFC], RestoreWaitCursor
ms.assetid: 8883b132-2057-4ce0-a5f2-88979f8f2b13
ms.openlocfilehash: 1ef7040f3be1e4c30a6dc19e6093727299c9f1c3
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752720"
---
# <a name="ccmdtarget-class"></a>Classe CCmdTarget

Classe base per l'architettura della mappa messaggi della libreria Microsoft Foundation Class.

## <a name="syntax"></a>Sintassi

```
class CCmdTarget : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCmdTarget::CCmdTarget](#ccmdtarget)|Costruisce un oggetto `CCmdTarget`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCmdTarget::BeginWaitCursor](#beginwaitcursor)|Visualizza il cursore come cursore a clessidra.|
|[CCmdTarget::DoOleVerb](#dooleverb)|Determina l'esecuzione di un'azione specificata da un verbo OLE.|
|[CCmdTarget::EnableAutomation](#enableautomation)|Consente l'automazione `CCmdTarget` OLE per l'oggetto.|
|[CCmdTarget::EnableConnections](#enableconnections)|Abilita la generazione di eventi sui punti di connessione.|
|[CCmdTarget::EnableTypeLib](#enabletypelib)|Abilita la libreria dei tipi di un oggetto.|
|[CCmdTarget::EndWaitCursor](#endwaitcursor)|Torna al cursore precedente.|
|[CCmdTarget::EnumOleVerbs](#enumoleverbs)|Enumera i verbi OLE di un oggetto.|
|[CCmdTarget::FromIDispatch](#fromidispatch)|Restituisce un `CCmdTarget` puntatore all'oggetto associato al `IDispatch` puntatore.|
|[CCmdTarget::GetDispatchIID](#getdispatchiid)|Ottiene l'ID dell'interfaccia di invio primario.|
|[CCmdTarget::GetIDispatch](#getidispatch)|Restituisce un `IDispatch` puntatore all'oggetto associato all'oggetto. `CCmdTarget`|
|[CCmdTarget::GetTypeInfoCount](#gettypeinfocount)|Recupera il numero di interfacce di informazioni sul tipo fornite da un oggetto.|
|[CCmdTarget::GetTypeInfoOfGuid](#gettypeinfoofguid)|Recupera la descrizione del tipo che corrisponde al GUID specificato.|
|[CCmdTarget::GetTypeLib](#gettypelib)|Ottiene un puntatore a una libreria dei tipi.|
|[CCmdTarget::GetTypeLibCache](#gettypelibcache)|Ottiene la cache della libreria dei tipi.|
|[CCmdTarget::IsInvokeAllowed](#isinvokeallowed)|Abilita la chiamata al metodo di automazione.|
|[CCmdTarget::IsResultExpected](#isresultexpected)|Restituisce diverso da zero se una funzione di automazione deve restituire un valore.|
|[CCmdTarget::OnCmdMsg](#oncmdmsg)|Instrada e invia i messaggi di comando.|
|[CCmdTarget::OnFinalRelease](#onfinalrelease)|Pulisce dopo il rilascio dell'ultimo riferimento OLE.|
|[CCmdTarget::RestoreWaitCursor](#restorewaitcursor)|Ripristina il cursore a clessidra.|

## <a name="remarks"></a>Osservazioni

Una mappa messaggi indirizza i comandi o i messaggi alle funzioni membro scritte per gestirli. Un comando è un messaggio proveniente da una voce di menu, un pulsante di comando o un tasto di scelta rapida.

Le classi di `CCmdTarget` framework chiave derivate da includono [CView](../../mfc/reference/cview-class.md), [CWinApp](../../mfc/reference/cwinapp-class.md), [CDocument](../../mfc/reference/cdocument-class.md), [CWnd](../../mfc/reference/cwnd-class.md)e [CFrameWnd](../../mfc/reference/cframewnd-class.md). Se si intende per una nuova classe gestire i `CCmdTarget`messaggi, derivare la classe da una di queste classi derivate. Raramente si deriva `CCmdTarget` una classe direttamente.

Per una panoramica `OnCmdMsg` delle destinazioni e del routing dei comandi, vedere [Destinazioni dei](../../mfc/command-targets.md)comandi , [Routing dei](../../mfc/command-routing.md)comandi e Mapping [dei messaggi](../../mfc/mapping-messages.md).

`CCmdTarget`include funzioni membro che gestiscono la visualizzazione di un cursore a clessidra. Visualizzare il cursore a clessidra quando si prevede che l'esecuzione di un comando richiede un intervallo di tempo notevole.

Le mappe di invio, simili alle mappe `IDispatch` messaggi, vengono utilizzate per esporre la funzionalità di automazione OLE. Esponendo questa interfaccia, altre applicazioni (ad esempio Visual Basic) possono chiamare nell'applicazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CCmdTarget`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="ccmdtargetbeginwaitcursor"></a><a name="beginwaitcursor"></a>CCmdTarget::BeginWaitCursor

Chiamare questa funzione per visualizzare il cursore come una clessidra quando si prevede che un comando per richiedere un intervallo di tempo notevole per l'esecuzione.

```cpp
void BeginWaitCursor();
```

### <a name="remarks"></a>Osservazioni

Il framework chiama questa funzione per mostrare all'utente `CDocument` che è occupato, ad esempio quando un oggetto viene caricato o salvato in un file.

Le azioni `BeginWaitCursor` di non sono sempre valide all'esterno `OnSetCursor` di un singolo gestore messaggi, poiché altre azioni, ad esempio la gestione, potrebbero modificare il cursore.

Chiamare `EndWaitCursor` per ripristinare il cursore precedente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]

## <a name="ccmdtargetccmdtarget"></a><a name="ccmdtarget"></a>CCmdTarget::CCmdTarget

Costruisce un oggetto `CCmdTarget`.

```
CCmdTarget();
```

## <a name="ccmdtargetdooleverb"></a><a name="dooleverb"></a>CCmdTarget::DoOleVerb

Determina l'esecuzione di un'azione specificata da un verbo OLE.

```
BOOL DoOleVerb(
    LONG iVerb,
    LPMSG lpMsg,
    HWND hWndParent,
    LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*IVerbo*<br/>
Identificatore numerico del verbo.

*lpMsg*<br/>
Puntatore alla struttura [MSG](/windows/win32/api/winuser/ns-winuser-msg) che descrive l'evento (ad esempio un doppio clic) che ha richiamato il verbo.

*hWndPadre*<br/>
Punto di controllo della finestra del documento contenente l'oggetto.

*Lprect*<br/>
Puntatore alla struttura [RECT](/windows/win32/api/windef/ns-windef-rect) contenente le coordinate, in pixel, che definiscono il rettangolo di delimitazione di un oggetto in *hwndParent*.

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo, in caso contrario FALSE.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è fondamentalmente un'implementazione di [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb). Le azioni possibili vengono enumerate da [CCmdTarget::EnumOleVerbs](#enumoleverbs).

## <a name="ccmdtargetenableautomation"></a><a name="enableautomation"></a>CCmdTarget::EnableAutomation

Chiamare questa funzione per abilitare l'automazione OLE per un oggetto.

```cpp
void EnableAutomation();
```

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere chiamata dal costruttore dell'oggetto e deve essere chiamata solo se una mappa di invio è stata dichiarata per la classe. Per ulteriori informazioni sull'automazione, vedere gli articoli [Automation Clients](../../mfc/automation-clients.md) and [Automation Servers](../../mfc/automation-servers.md).

## <a name="ccmdtargetenableconnections"></a><a name="enableconnections"></a>CCmdTarget::EnableConnections

Abilita la generazione di eventi sui punti di connessione.

```cpp
void EnableConnections();
```

### <a name="remarks"></a>Osservazioni

Per abilitare i punti di connessione, chiamare questa funzione membro nel costruttore della classe derivata.

## <a name="ccmdtargetenabletypelib"></a><a name="enabletypelib"></a>CCmdTarget::EnableTypeLib

Abilita la libreria dei tipi di un oggetto.

```cpp
void EnableTypeLib();
```

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro nel `CCmdTarget`costruttore dell'oggetto derivato da -se fornisce informazioni sul tipo.

## <a name="ccmdtargetendwaitcursor"></a><a name="endwaitcursor"></a>CCmdTarget::EndWaitCursor

Chiamare questa funzione dopo `BeginWaitCursor` aver chiamato la funzione membro per tornare dal cursore a clessidra al cursore precedente.

```cpp
void EndWaitCursor();
```

### <a name="remarks"></a>Osservazioni

Il framework chiama anche questa funzione membro dopo che ha chiamato il cursore a clessidra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]

## <a name="ccmdtargetenumoleverbs"></a><a name="enumoleverbs"></a>CCmdTarget::EnumOleVerbs

Enumera i verbi OLE di un oggetto.

```
BOOL EnumOleVerbs(LPENUMOLEVERB* ppenumOleVerb);
```

### <a name="parameters"></a>Parametri

*ppenumOleVerb (valore utente di ppenumOleVerb)*<br/>
Puntatore a un puntatore a un'interfaccia [IEnumOLEVERB.](/windows/win32/api/oleidl/nn-oleidl-ienumoleverb)

### <a name="return-value"></a>Valore restituito

TRUESe l'oggetto supporta almeno un verbo \* OLE (nel qual caso `IEnumOLEVERB` *ppenumOleVerb* punta a un'interfaccia dell'enumeratore), in caso contrario FALSE.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è fondamentalmente un'implementazione di [IOleObject::EnumVerbs](/windows/win32/api/oleidl/nf-oleidl-ioleobject-enumverbs).

## <a name="ccmdtargetfromidispatch"></a><a name="fromidispatch"></a>CCmdTarget::FromIDispatch

Chiamare questa funzione `IDispatch` per eseguire il mapping di un puntatore, ricevuto dalle funzioni membro di automazione di una classe, nell'oggetto `CCmdTarget` che implementa le interfacce dell'oggetto. `IDispatch`

```
static CCmdTarget* PASCAL FromIDispatch(LPDISPATCH lpDispatch);
```

### <a name="parameters"></a>Parametri

*Lpdispatch*<br/>
Puntatore a un oggetto `IDispatch`.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto `CCmdTarget` associato a *lpDispatch*. Questa funzione restituisce `IDispatch` NULL se l'oggetto `IDispatch` non è riconosciuto come oggetto Microsoft Foundation Class.

### <a name="remarks"></a>Osservazioni

Il risultato di questa funzione è l'inverso di una chiamata alla funzione `GetIDispatch`membro .

## <a name="ccmdtargetgetdispatchiid"></a><a name="getdispatchiid"></a>CCmdTarget::GetDispatchIID

Ottiene l'ID dell'interfaccia di invio primario.

```
virtual BOOL GetDispatchIID(IID* pIID);
```

### <a name="parameters"></a>Parametri

*pIID (in com/pIID)*<br/>
Puntatore a un ID di interfaccia (un [GUID](/windows/win32/api/guiddef/ns-guiddef-guid.

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo, in caso contrario FALSE. Se ha \* esito positivo, *pIID* è impostato sull'ID di interfaccia di invio primario.

### <a name="remarks"></a>Osservazioni

Le classi derivate devono eseguire l'override di questa funzione membro (se non sottoposto a override, `GetDispatchIID` restituisce FALSE). Vedere [COleControl](../../mfc/reference/colecontrol-class.md).

## <a name="ccmdtargetgetidispatch"></a><a name="getidispatch"></a>CCmdTarget::GetIDispatch

Chiamare questa funzione membro `IDispatch` per recuperare il puntatore `IDispatch` da un `IDispatch` metodo di automazione che restituisce un puntatore o accetta un puntatore per riferimento.

```
LPDISPATCH GetIDispatch(BOOL bAddRef);
```

### <a name="parameters"></a>Parametri

*bAddRef (in modo di insedelare*<br/>
Specifica se incrementare il conteggio dei riferimenti per l'oggetto.

### <a name="return-value"></a>Valore restituito

Puntatore `IDispatch` associato all'oggetto.

### <a name="remarks"></a>Osservazioni

Per gli `EnableAutomation` oggetti che chiamano nei relativi costruttori, rendendoli abilitati per `IDispatch` l'automazione, questa funzione `IDispatch` restituisce un puntatore all'implementazione Foundation Class di che viene utilizzata dai client che comunicano tramite l'interfaccia. La chiamata a questa funzione aggiunge automaticamente un riferimento al puntatore, pertanto non è necessario effettuare una chiamata a [IUnknown::AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref).

## <a name="ccmdtargetgettypeinfocount"></a><a name="gettypeinfocount"></a>CCmdTarget::GetTypeInfoCount

Recupera il numero di interfacce di informazioni sul tipo fornite da un oggetto.

```
virtual UINT GetTypeInfoCount();
```

### <a name="return-value"></a>Valore restituito

Numero di interfacce di informazioni sul tipo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa fondamentalmente [IDispatch::GetTypeInfoCount](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfocount).

Le classi derivate devono eseguire l'override di questa funzione per restituire il numero di interfacce di informazioni sul tipo fornite (0 o 1). Se non sottoposto a override, `GetTypeInfoCount` restituisce 0. Per eseguire l'override, utilizzare `GetTypeLib` la `GetTypeLibCache`macro [IMPLEMENT_OLETYPELIB,](../../mfc/reference/type-library-access.md#implement_oletypelib) che implementa anche e .

## <a name="ccmdtargetgettypeinfoofguid"></a><a name="gettypeinfoofguid"></a>CCmdTarget::GetTypeInfoOfGuid

Recupera la descrizione del tipo che corrisponde al GUID specificato.

```
HRESULT GetTypeInfoOfGuid(
    LCID lcid,
    const GUID& guid,
    LPTYPEINFO* ppTypeInfo);
```

### <a name="parameters"></a>Parametri

*lcid*<br/>
Un identificatore `LCID`delle impostazioni locali ( ).

*guid*<br/>
Il [GUID](/windows/win32/api/guiddef/ns-guiddef-guid della descrizione del tipo.

*ppTypeInfo (informazioni in due)*<br/>
Puntatore a un `ITypeInfo` puntatore all'interfaccia.

### <a name="return-value"></a>Valore restituito

HRESULT che indica l'esito positivo o negativo della chiamata. Se ha \* esito positivo, *ppTypeInfo* punta all'interfaccia di informazioni sul tipo.

## <a name="ccmdtargetgettypelib"></a><a name="gettypelib"></a>CCmdTarget::GetTypeLib

Ottiene un puntatore a una libreria dei tipi.

```
virtual HRESULT GetTypeLib(
    LCID lcid,
    LPTYPELIB* ppTypeLib);
```

### <a name="parameters"></a>Parametri

*lcid*<br/>
Identificatore delle impostazioni locali (LCID).

*ppTypeLib (informazioni in questo gruppo)*<br/>
Puntatore a un `ITypeLib` puntatore all'interfaccia.

### <a name="return-value"></a>Valore restituito

HRESULT che indica l'esito positivo o negativo della chiamata. In caso \* di esito positivo, *ppTypeLib* punta all'interfaccia della libreria dei tipi.

### <a name="remarks"></a>Osservazioni

Le classi derivate devono eseguire l'override di questa funzione membro (se non sottoposta a override, `GetTypeLib` restituisce TYPE_E_CANTLOADLIBRARY). Utilizzare la macro [IMPLEMENT_OLETYPELIB,](../../mfc/reference/type-library-access.md#implement_oletypelib) che implementa `GetTypeInfoCount` anche e `GetTypeLibCache`.

## <a name="ccmdtargetgettypelibcache"></a><a name="gettypelibcache"></a>CCmdTarget::GetTypeLibCache

Ottiene la cache della libreria dei tipi.

```
virtual CTypeLibCache* GetTypeLibCache();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CTypeLibCache`.

### <a name="remarks"></a>Osservazioni

Le classi derivate devono eseguire l'override di questa funzione membro (se non sottoposto a override, `GetTypeLibCache` restituisce NULL). Utilizzare la macro [IMPLEMENT_OLETYPELIB,](../../mfc/reference/type-library-access.md#implement_oletypelib) che implementa `GetTypeInfoCount` anche e `GetTypeLib`.

## <a name="ccmdtargetisinvokeallowed"></a><a name="isinvokeallowed"></a>CCmdTarget::IsInvokeAllowed

Questa funzione viene chiamata dall'implementazione di MFC di `IDispatch::Invoke` per determinare se un determinato metodo di automazione (identificato da *dispid*) può essere richiamato.

```
virtual BOOL IsInvokeAllowed(DISPID dispid);
```

### <a name="parameters"></a>Parametri

*Dispid*<br/>
Un documento d'identità di spedizione.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo può essere richiamato, in caso contrario FALSE.

### <a name="remarks"></a>Osservazioni

Se `IsInvokeAllowed` restituisce `Invoke` TRUE, procede a chiamare il metodo; in `Invoke` caso contrario, avrà esito negativo, restituendo E_UNEXPECTED.

Le classi derivate possono eseguire l'override di `IsInvokeAllowed` questa funzione per restituire i valori appropriati (se non sottoposti a override, restituisce TRUE). Vedere in particolare [COleControl::IsInvokeAllowed](../../mfc/reference/colecontrol-class.md#isinvokeallowed).

## <a name="ccmdtargetisresultexpected"></a><a name="isresultexpected"></a>CCmdTarget::IsResultExpected

Utilizzare `IsResultExpected` per verificare se un client prevede un valore restituito dalla relativa chiamata a una funzione di automazione.

```
BOOL IsResultExpected();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se una funzione di automazione deve restituire un valore; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'interfaccia OLE fornisce informazioni a MFC sull'utilizzo o la ignoreditta del client sul risultato di una `IsResultExpected`chiamata di funzione e MFC a sua volta utilizza queste informazioni per determinare il risultato di una chiamata a . Se la produzione di un valore restituito richiede un utilizzo intensivo del tempo o delle risorse, è possibile aumentare l'efficienza chiamando questa funzione prima di calcolare il valore restituito.

Questa funzione restituisce 0 solo una volta in modo da ottenere valori restituiti validi da altre funzioni di automazione se vengono chiamati dalla funzione di automazione chiamata dal client.

`IsResultExpected`restituisce un valore diverso da zero se viene chiamato quando non è in corso una chiamata di funzione di automazione.

## <a name="ccmdtargetoncmdmsg"></a><a name="oncmdmsg"></a>CCmdTarget::OnCmdMsg

Chiamato dal framework per instradare e inviare messaggi di comando e per gestire l'aggiornamento degli oggetti dell'interfaccia utente dei comandi.

```
virtual BOOL OnCmdMsg(
    UINT nID,
    int nCode,
    void* pExtra,
    AFX_CMDHANDLERINFO* pHandlerInfo);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Contiene l'ID di comando.

*Ncode*<br/>
Identifica il codice di notifica del comando. Vedere **Osservazioni** per ulteriori informazioni sui valori di *nCode*.

*pExtra*<br/>
Utilizzato in base al valore di *nCode*. Vedere **Osservazioni** per ulteriori informazioni su *pExtra*.

*pHandlerInfo (informazioni in stato in questo stato in*<br/>
Se non `OnCmdMsg` NULL, compila i membri *pTarget* e *pmf* della struttura *pHandlerInfo* anziché inviare il comando. In genere, questo parametro deve essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio viene gestito; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa è la routine di implementazione principale dell'architettura del comando del framework.

In fase `OnCmdMsg` di esecuzione, invia un comando ad altri oggetti o `CCmdTarget::OnCmdMsg`gestisce il comando stesso chiamando la classe radice , che esegue la ricerca effettiva della mappa messaggi. Per una descrizione completa del routing dei comandi predefinito, vedere Argomenti relativi alla gestione e al [mapping dei](../../mfc/message-handling-and-mapping.md)messaggi .

In rari casi, è possibile eseguire l'override di questa funzione membro per estendere il routing dei comandi standard del framework. Fare riferimento alla [nota tecnica 21](../../mfc/tn021-command-and-message-routing.md) per informazioni dettagliate sull'architettura di routing dei comandi.

Se si `OnCmdMsg`esegue l'override di , è necessario fornire il valore appropriato per *nCode*, il codice di notifica del comando e *pExtra*, che dipende dal valore di *nCode*. Nella tabella seguente sono elencati i valori corrispondenti:

|*nValore del* codice|*pValore aggiuntivo*|
|-------------------|--------------------|
|CN_COMMAND|[CCmdUI](../../mfc/reference/ccmdui-class.md)\*|
|CN_EVENT|AFX_EVENT\*|
|CN_UPDATE_COMMAND_UI|CCmdUI\*|
|CN_OLECOMMAND|[COleCmdUI (informazioni in due)](../../mfc/reference/colecmdui-class.md)\*|
|CN_OLE_UNREGISTER|NULL|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#44](../../mfc/codesnippet/cpp/ccmdtarget-class_2.cpp)]

[!code-cpp[NVC_MFCDocView#45](../../mfc/codesnippet/cpp/ccmdtarget-class_3.cpp)]

## <a name="ccmdtargetonfinalrelease"></a><a name="onfinalrelease"></a>CCmdTarget::OnFinalRelease

Chiamato dal framework quando viene rilasciato l'ultimo riferimento OLE da o verso l'oggetto.

```
virtual void OnFinalRelease();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per fornire una gestione speciale per questa situazione. L'implementazione predefinita elimina l'oggetto.

## <a name="ccmdtargetrestorewaitcursor"></a><a name="restorewaitcursor"></a>CCmdTarget::RestoreWaitCursor

Chiamare questa funzione per ripristinare il cursore a clessidra appropriato dopo la modifica del cursore di sistema (ad esempio, dopo l'apertura e la chiusura di una finestra di messaggio durante un'operazione lunga).

```cpp
void RestoreWaitCursor();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[ACDUAL di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CCmdUI](../../mfc/reference/ccmdui-class.md)<br/>
[Classe CDocument](../../mfc/reference/cdocument-class.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Classe CWinApp](../../mfc/reference/cwinapp-class.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Classe COleDispatchDriver](../../mfc/reference/coledispatchdriver-class.md)

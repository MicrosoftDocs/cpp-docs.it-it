---
description: 'Altre informazioni su: classe CCmdTarget'
title: CCmdTarget (classe)
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
ms.openlocfilehash: c4a579c0f224913cf47f332382fb71c12bdac755
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97133016"
---
# <a name="ccmdtarget-class"></a>CCmdTarget (classe)

Classe base per l'architettura della mappa messaggi libreria Microsoft Foundation Class.

## <a name="syntax"></a>Sintassi

```
class CCmdTarget : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CCmdTarget:: CCmdTarget](#ccmdtarget)|Costruisce un oggetto `CCmdTarget`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CCmdTarget:: BeginWaitCursor](#beginwaitcursor)|Visualizza il cursore come cursore a forma di clessidra.|
|[CCmdTarget::D oOleVerb](#dooleverb)|Determina l'esecuzione di un'azione specificata da un verbo OLE.|
|[CCmdTarget:: EnableAutomation](#enableautomation)|Consente l'automazione OLE per l' `CCmdTarget` oggetto.|
|[CCmdTarget:: EnableConnections](#enableconnections)|Abilita la generazione di eventi su punti di connessione.|
|[CCmdTarget:: EnableTypeLib](#enabletypelib)|Abilita la libreria dei tipi di un oggetto.|
|[CCmdTarget:: EndWaitCursor](#endwaitcursor)|Restituisce al cursore precedente.|
|[CCmdTarget:: EnumOleVerbs](#enumoleverbs)|Enumera i verbi OLE di un oggetto.|
|[CCmdTarget:: FromIDispatch](#fromidispatch)|Restituisce un puntatore all' `CCmdTarget` oggetto associato al `IDispatch` puntatore.|
|[CCmdTarget:: GetDispatchIID](#getdispatchiid)|Ottiene l'ID dell'interfaccia di invio primario.|
|[CCmdTarget:: GetIDispatch](#getidispatch)|Restituisce un puntatore all' `IDispatch` oggetto associato all' `CCmdTarget` oggetto.|
|[CCmdTarget:: GetTypeInfoCount](#gettypeinfocount)|Recupera il numero di interfacce di informazioni sul tipo fornite da un oggetto.|
|[CCmdTarget:: GetTypeInfoOfGuid](#gettypeinfoofguid)|Recupera la descrizione del tipo che corrisponde al GUID specificato.|
|[CCmdTarget:: GetTypeLib](#gettypelib)|Ottiene un puntatore a una libreria di tipi.|
|[CCmdTarget:: GetTypeLibCache](#gettypelibcache)|Ottiene la cache della libreria dei tipi.|
|[CCmdTarget:: IsInvokeAllowed](#isinvokeallowed)|Abilita la chiamata al metodo di automazione.|
|[CCmdTarget:: IsResultExpected](#isresultexpected)|Restituisce un valore diverso da zero se una funzione di automazione deve restituire un valore.|
|[CCmdTarget:: OnCmdMsg](#oncmdmsg)|Instrada e invia i messaggi di comando.|
|[CCmdTarget:: OnFinalRelease](#onfinalrelease)|Esegue la pulizia dopo che è stato rilasciato l'ultimo riferimento OLE.|
|[CCmdTarget:: RestoreWaitCursor](#restorewaitcursor)|Ripristina il cursore a clessidra.|

## <a name="remarks"></a>Commenti

Una mappa messaggi instrada i comandi o i messaggi alle funzioni membro scritte per gestirli. Un comando è un messaggio da una voce di menu, un pulsante di comando o un tasto di scelta rapida.

Le classi di Framework principali derivate da `CCmdTarget` includono [CView](../../mfc/reference/cview-class.md), [CWinApp](../../mfc/reference/cwinapp-class.md), [CDocument](../../mfc/reference/cdocument-class.md), [CWnd](../../mfc/reference/cwnd-class.md)e [CFrameWnd](../../mfc/reference/cframewnd-class.md). Se si desidera che una nuova classe gestisca i messaggi, derivare la classe da una di queste `CCmdTarget` classi derivate da. Raramente viene derivata una classe `CCmdTarget` direttamente da.

Per una panoramica delle destinazioni dei comandi e del `OnCmdMsg` routing, vedere [destinazioni](../../mfc/command-targets.md)dei comandi, routing [dei](../../mfc/mapping-messages.md) [comandi](../../mfc/command-routing.md)e messaggi di mapping.

`CCmdTarget` include funzioni membro che gestiscono la visualizzazione di un cursore a clessidra. Consente di visualizzare il cursore a clessidra quando si prevede che un comando esegua un intervallo di tempo evidente.

Le mappe di invio, simili alle mappe messaggi, vengono utilizzate per esporre le funzionalità di automazione OLE `IDispatch` . Esponendo questa interfaccia, altre applicazioni (ad esempio Visual Basic) possono chiamare l'applicazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CCmdTarget`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="ccmdtargetbeginwaitcursor"></a><a name="beginwaitcursor"></a> CCmdTarget:: BeginWaitCursor

Chiamare questa funzione per visualizzare il cursore come una clessidra quando si prevede l'esecuzione di un comando per richiedere un intervallo di tempo evidente.

```cpp
void BeginWaitCursor();
```

### <a name="remarks"></a>Commenti

Il Framework chiama questa funzione per mostrare all'utente che è occupato, ad esempio quando un `CDocument` oggetto viene caricato o salvato in un file.

Le azioni di `BeginWaitCursor` non sono sempre valide al di fuori di un singolo gestore di messaggi perché altre azioni, ad esempio `OnSetCursor` la gestione, potrebbero modificare il cursore.

Chiamare `EndWaitCursor` per ripristinare il cursore precedente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]

## <a name="ccmdtargetccmdtarget"></a><a name="ccmdtarget"></a> CCmdTarget:: CCmdTarget

Costruisce un oggetto `CCmdTarget`.

```
CCmdTarget();
```

## <a name="ccmdtargetdooleverb"></a><a name="dooleverb"></a> CCmdTarget::D oOleVerb

Determina l'esecuzione di un'azione specificata da un verbo OLE.

```
BOOL DoOleVerb(
    LONG iVerb,
    LPMSG lpMsg,
    HWND hWndParent,
    LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*iVerb*<br/>
Identificatore numerico del verbo.

*lpMsg*<br/>
Puntatore alla struttura del [messaggio](/windows/win32/api/winuser/ns-winuser-msg) che descrive l'evento, ad esempio un doppio clic, che ha richiamato il verbo.

*hWndParent*<br/>
Punto di controllo della finestra del documento contenente l'oggetto.

*lpRect*<br/>
Puntatore alla struttura [Rect](/windows/win32/api/windef/ns-windef-rect) contenente le coordinate, in pixel, che definiscono il rettangolo di delimitazione di un oggetto in *hwndParent*.

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo, in caso contrario FALSE.

### <a name="remarks"></a>Commenti

Questa funzione membro è fondamentalmente un'implementazione di [IOleObject::D overb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb). Le azioni possibili sono enumerate da [CCmdTarget:: EnumOleVerbs](#enumoleverbs).

## <a name="ccmdtargetenableautomation"></a><a name="enableautomation"></a> CCmdTarget:: EnableAutomation

Chiamare questa funzione per abilitare l'automazione OLE per un oggetto.

```cpp
void EnableAutomation();
```

### <a name="remarks"></a>Commenti

Questa funzione viene in genere chiamata dal costruttore dell'oggetto e deve essere chiamata solo se è stata dichiarata una mappa di invio per la classe. Per altre informazioni sull'automazione, vedere gli articoli [client di automazione](../../mfc/automation-clients.md) e server di [automazione](../../mfc/automation-servers.md).

## <a name="ccmdtargetenableconnections"></a><a name="enableconnections"></a> CCmdTarget:: EnableConnections

Abilita la generazione di eventi su punti di connessione.

```cpp
void EnableConnections();
```

### <a name="remarks"></a>Commenti

Per abilitare i punti di connessione, chiamare questa funzione membro nel costruttore della classe derivata.

## <a name="ccmdtargetenabletypelib"></a><a name="enabletypelib"></a> CCmdTarget:: EnableTypeLib

Abilita la libreria dei tipi di un oggetto.

```cpp
void EnableTypeLib();
```

### <a name="remarks"></a>Commenti

Chiamare questa funzione membro nel costruttore dell' `CCmdTarget` oggetto derivato da se fornisce informazioni sul tipo.

## <a name="ccmdtargetendwaitcursor"></a><a name="endwaitcursor"></a> CCmdTarget:: EndWaitCursor

Chiamare questa funzione dopo aver chiamato la `BeginWaitCursor` funzione membro per restituire dal cursore della clessidra al cursore precedente.

```cpp
void EndWaitCursor();
```

### <a name="remarks"></a>Commenti

Il Framework chiama anche questa funzione membro dopo aver chiamato il cursore a clessidra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]

## <a name="ccmdtargetenumoleverbs"></a><a name="enumoleverbs"></a> CCmdTarget:: EnumOleVerbs

Enumera i verbi OLE di un oggetto.

```
BOOL EnumOleVerbs(LPENUMOLEVERB* ppenumOleVerb);
```

### <a name="parameters"></a>Parametri

*ppenumOleVerb*<br/>
Puntatore a un puntatore a un'interfaccia [IEnumOLEVERB](/windows/win32/api/oleidl/nn-oleidl-ienumoleverb) .

### <a name="return-value"></a>Valore restituito

TRUE se l'oggetto supporta almeno un verbo OLE (nel qual caso \* *ppenumOleVerb* punta a un' `IEnumOLEVERB` interfaccia di enumeratore); in caso contrario, false.

### <a name="remarks"></a>Commenti

Questa funzione membro è fondamentalmente un'implementazione di [IOleObject:: EnumVerbs](/windows/win32/api/oleidl/nf-oleidl-ioleobject-enumverbs).

## <a name="ccmdtargetfromidispatch"></a><a name="fromidispatch"></a> CCmdTarget:: FromIDispatch

Chiamare questa funzione per eseguire il mapping di un `IDispatch` puntatore, ricevuto dalle funzioni membro di automazione di una classe, nell' `CCmdTarget` oggetto che implementa le interfacce dell' `IDispatch` oggetto.

```
static CCmdTarget* PASCAL FromIDispatch(LPDISPATCH lpDispatch);
```

### <a name="parameters"></a>Parametri

*lpDispatch*<br/>
Puntatore a un oggetto `IDispatch`.

### <a name="return-value"></a>Valore restituito

Puntatore all' `CCmdTarget` oggetto associato a *LPDISPATCH*. Questa funzione restituisce NULL se l' `IDispatch` oggetto non è riconosciuto come oggetto Microsoft Foundation Class `IDispatch` .

### <a name="remarks"></a>Commenti

Il risultato di questa funzione è l'inverso di una chiamata alla funzione membro `GetIDispatch` .

## <a name="ccmdtargetgetdispatchiid"></a><a name="getdispatchiid"></a> CCmdTarget:: GetDispatchIID

Ottiene l'ID dell'interfaccia di invio primario.

```
virtual BOOL GetDispatchIID(IID* pIID);
```

### <a name="parameters"></a>Parametri

*pIID*<br/>
Puntatore a un ID di interfaccia ([GUID] (/Windows/Win32/API/guiddef/NS-guiddef-GUID.

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo, in caso contrario FALSE. In caso di esito positivo, \* *pIID* viene impostato sull'ID dell'interfaccia di invio primario.

### <a name="remarks"></a>Commenti

Le classi derivate devono eseguire l'override di questa funzione membro, se non sottoposta a override, `GetDispatchIID` restituisce false. Vedere [COleControl](../../mfc/reference/colecontrol-class.md).

## <a name="ccmdtargetgetidispatch"></a><a name="getidispatch"></a> CCmdTarget:: GetIDispatch

Chiamare questa funzione membro per recuperare il `IDispatch` puntatore da un metodo di automazione che restituisce un `IDispatch` puntatore o accetta un `IDispatch` puntatore per riferimento.

```
LPDISPATCH GetIDispatch(BOOL bAddRef);
```

### <a name="parameters"></a>Parametri

*bAddRef*<br/>
Specifica se incrementare il conteggio dei riferimenti per l'oggetto.

### <a name="return-value"></a>Valore restituito

`IDispatch`Puntatore associato all'oggetto.

### <a name="remarks"></a>Commenti

Per gli oggetti che chiamano `EnableAutomation` nei costruttori, rendendoli abilitati per l'automazione, questa funzione restituisce un puntatore all'implementazione della classe Foundation di `IDispatch` utilizzata dai client che comunicano tramite l' `IDispatch` interfaccia. Se si chiama questa funzione, viene aggiunto automaticamente un riferimento al puntatore, pertanto non è necessario effettuare una chiamata a [IUnknown:: AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref).

## <a name="ccmdtargetgettypeinfocount"></a><a name="gettypeinfocount"></a> CCmdTarget:: GetTypeInfoCount

Recupera il numero di interfacce di informazioni sul tipo fornite da un oggetto.

```
virtual UINT GetTypeInfoCount();
```

### <a name="return-value"></a>Valore restituito

Numero di interfacce di informazioni sul tipo.

### <a name="remarks"></a>Commenti

Questa funzione membro fondamentalmente implementa [IDispatch:: GetTypeInfoCount](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfocount).

Le classi derivate devono eseguire l'override di questa funzione per restituire il numero di interfacce di informazioni sul tipo fornite (0 o 1). Se non è sottoposto a override, `GetTypeInfoCount` restituisce 0. Per eseguire l'override di, usare la macro [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) , che implementa anche `GetTypeLib` e `GetTypeLibCache` .

## <a name="ccmdtargetgettypeinfoofguid"></a><a name="gettypeinfoofguid"></a> CCmdTarget:: GetTypeInfoOfGuid

Recupera la descrizione del tipo che corrisponde al GUID specificato.

```
HRESULT GetTypeInfoOfGuid(
    LCID lcid,
    const GUID& guid,
    LPTYPEINFO* ppTypeInfo);
```

### <a name="parameters"></a>Parametri

*lcid*<br/>
Identificatore delle impostazioni locali ( `LCID` ).

*guid*<br/>
[GUID] (/Windows/Win32/API/guiddef/NS-guiddef-GUID della descrizione del tipo.

*ppTypeInfo*<br/>
Puntatore a un puntatore all' `ITypeInfo` interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT che indica l'esito positivo o negativo della chiamata. In caso di esito positivo, \* *ppTypeInfo* punta all'interfaccia informazioni sul tipo.

## <a name="ccmdtargetgettypelib"></a><a name="gettypelib"></a> CCmdTarget:: GetTypeLib

Ottiene un puntatore a una libreria di tipi.

```
virtual HRESULT GetTypeLib(
    LCID lcid,
    LPTYPELIB* ppTypeLib);
```

### <a name="parameters"></a>Parametri

*lcid*<br/>
Identificatore delle impostazioni locali (LCID).

*ppTypeLib*<br/>
Puntatore a un puntatore all' `ITypeLib` interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT che indica l'esito positivo o negativo della chiamata. In caso di esito positivo, \* *ppTypeLib* punta all'interfaccia della libreria dei tipi.

### <a name="remarks"></a>Commenti

Le classi derivate devono eseguire l'override di questa funzione membro (se non sottoposta a override, `GetTypeLib` restituisce TYPE_E_CANTLOADLIBRARY). Usare la macro [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) , che implementa anche `GetTypeInfoCount` e `GetTypeLibCache` .

## <a name="ccmdtargetgettypelibcache"></a><a name="gettypelibcache"></a> CCmdTarget:: GetTypeLibCache

Ottiene la cache della libreria dei tipi.

```
virtual CTypeLibCache* GetTypeLibCache();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CTypeLibCache`.

### <a name="remarks"></a>Commenti

Le classi derivate devono eseguire l'override di questa funzione membro (se non sottoposta a override, `GetTypeLibCache` restituisce null). Usare la macro [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) , che implementa anche `GetTypeInfoCount` e `GetTypeLib` .

## <a name="ccmdtargetisinvokeallowed"></a><a name="isinvokeallowed"></a> CCmdTarget:: IsInvokeAllowed

Questa funzione viene chiamata dall'implementazione di MFC di `IDispatch::Invoke` per determinare se è possibile richiamare un determinato metodo di automazione (identificato da *DISPID*).

```
virtual BOOL IsInvokeAllowed(DISPID dispid);
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
ID dispatch.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo può essere richiamato; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Se `IsInvokeAllowed` restituisce true, `Invoke` continua a chiamare il metodo; in caso contrario, `Invoke` avrà esito negativo, restituendo E_UNEXPECTED.

Le classi derivate possono eseguire l'override di questa funzione per restituire i valori appropriati (se non sottoposta a override, `IsInvokeAllowed` restituisce true). Vedere in particolare [COleControl:: IsInvokeAllowed](../../mfc/reference/colecontrol-class.md#isinvokeallowed).

## <a name="ccmdtargetisresultexpected"></a><a name="isresultexpected"></a> CCmdTarget:: IsResultExpected

Usare `IsResultExpected` per verificare se un client prevede un valore restituito dalla relativa chiamata a una funzione di automazione.

```
BOOL IsResultExpected();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se una funzione di automazione deve restituire un valore; in caso contrario, 0.

### <a name="remarks"></a>Commenti

L'interfaccia OLE fornisce informazioni a MFC sul fatto che il client utilizzi o ignori il risultato di una chiamata di funzione e MFC a sua volta utilizza tali informazioni per determinare il risultato di una chiamata a `IsResultExpected` . Se la produzione di un valore restituito è a elevato utilizzo di risorse o di tempo, è possibile aumentare l'efficienza chiamando questa funzione prima di calcolare il valore restituito.

Questa funzione restituisce 0 solo una volta, in modo da ottenere valori restituiti validi da altre funzioni di automazione se vengono chiamati dalla funzione di automazione chiamata dal client.

`IsResultExpected` Restituisce un valore diverso da zero se chiamato quando una chiamata di funzione di automazione non è in corso.

## <a name="ccmdtargetoncmdmsg"></a><a name="oncmdmsg"></a> CCmdTarget:: OnCmdMsg

Chiamata eseguita dal Framework per indirizzare e inviare messaggi di comando e per gestire l'aggiornamento degli oggetti dell'interfaccia utente del comando.

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

*nCode*<br/>
Identifica il codice di notifica del comando. Per ulteriori informazioni sui valori per *nCode*, vedere la **sezione Osservazioni** .

*pExtra*<br/>
Utilizzato in base al valore di *nCode*. Per ulteriori informazioni su *pExtra*, vedere la **sezione Osservazioni** .

*pHandlerInfo*<br/>
Se non è NULL, `OnCmdMsg` Compila i membri *PTarget* e *PMF* della struttura *pHandlerInfo* anziché inviare il comando. In genere, questo parametro deve essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è gestito; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa è la routine di implementazione principale dell'architettura dei comandi del Framework.

In fase di esecuzione invia `OnCmdMsg` un comando ad altri oggetti o gestisce il comando stesso chiamando la classe radice `CCmdTarget::OnCmdMsg` , che esegue la ricerca effettiva della mappa messaggi. Per una descrizione completa del routing dei comandi predefinito, vedere gli [argomenti relativi alla gestione dei messaggi e al mapping](../../mfc/message-handling-and-mapping.md).

In rare occasioni, potrebbe essere necessario eseguire l'override di questa funzione membro per estendere il routing dei comandi standard del Framework. Per informazioni dettagliate sull'architettura di routing dei comandi, vedere la [Nota tecnica 21](../../mfc/tn021-command-and-message-routing.md) .

Se si esegue l'override di `OnCmdMsg` , è necessario specificare il valore appropriato per *nCode*, il codice di notifica del comando e *pExtra*, che dipende dal valore di *nCode*. Nella tabella seguente sono elencati i valori corrispondenti:

|valore *nCode*|valore *pExtra*|
|-------------------|--------------------|
|CN_COMMAND|[CCmdUI](../../mfc/reference/ccmdui-class.md)\*|
|CN_EVENT|AFX_EVENT\*|
|CN_UPDATE_COMMAND_UI|CCmdUI\*|
|CN_OLECOMMAND|[COleCmdUI](../../mfc/reference/colecmdui-class.md)\*|
|CN_OLE_UNREGISTER|NULL|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#44](../../mfc/codesnippet/cpp/ccmdtarget-class_2.cpp)]

[!code-cpp[NVC_MFCDocView#45](../../mfc/codesnippet/cpp/ccmdtarget-class_3.cpp)]

## <a name="ccmdtargetonfinalrelease"></a><a name="onfinalrelease"></a> CCmdTarget:: OnFinalRelease

Chiamato dal framework quando viene rilasciato l'ultimo riferimento OLE a o dall'oggetto.

```
virtual void OnFinalRelease();
```

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione per fornire una gestione speciale per questa situazione. L'implementazione predefinita consente di eliminare l'oggetto.

## <a name="ccmdtargetrestorewaitcursor"></a><a name="restorewaitcursor"></a> CCmdTarget:: RestoreWaitCursor

Chiamare questa funzione per ripristinare il cursore a clessidra appropriato dopo che il cursore di sistema è stato modificato (ad esempio, dopo l'apertura e la chiusura di una finestra di messaggio durante un'operazione di lunga durata).

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
[CDocument (classe)](../../mfc/reference/cdocument-class.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Classe CWinApp](../../mfc/reference/cwinapp-class.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Classe COleDispatchDriver](../../mfc/reference/coledispatchdriver-class.md)

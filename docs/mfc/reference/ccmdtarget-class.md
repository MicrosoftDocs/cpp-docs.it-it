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
ms.openlocfilehash: 4e93f167b9cb28a83c42220fa58b17d5c4845a75
ms.sourcegitcommit: c85c8a1226d8fbbaa29f4691ed719f8e6cc6575c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/24/2019
ms.locfileid: "54894289"
---
# <a name="ccmdtarget-class"></a>Classe CCmdTarget

Classe di base per l'architettura della mappa messaggi libreria Microsoft Foundation Class.

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
|[CCmdTarget::BeginWaitCursor](#beginwaitcursor)|Visualizza il cursore di un cursore a forma di clessidra.|
|[CCmdTarget::DoOleVerb](#dooleverb)|Fa sì che un'azione specificata da un verbo OLE da eseguire.|
|[CCmdTarget::EnableAutomation](#enableautomation)|Consente l'automazione OLE per il `CCmdTarget` oggetto.|
|[CCmdTarget::EnableConnections](#enableconnections)|Abilita generazione dell'evento su punti di connessione.|
|[CCmdTarget::EnableTypeLib](#enabletypelib)|Abilita libreria dei tipi di oggetto.|
|[CCmdTarget::EndWaitCursor](#endwaitcursor)|Restituisce fino al cursore precedente.|
|[CCmdTarget::EnumOleVerbs](#enumoleverbs)|Enumera i verbi dell'oggetto OLE.|
|[CCmdTarget::FromIDispatch](#fromidispatch)|Restituisce un puntatore per il `CCmdTarget` oggetto associato ai `IDispatch` puntatore.|
|[CCmdTarget::GetDispatchIID](#getdispatchiid)|Ottiene l'ID di interfaccia dispatch principale.|
|[CCmdTarget::GetIDispatch](#getidispatch)|Restituisce un puntatore per il `IDispatch` oggetto associato il `CCmdTarget` oggetto.|
|[CCmdTarget::GetTypeInfoCount](#gettypeinfocount)|Recupera il numero di interfacce di informazioni sul tipo che fornisce un oggetto.|
|[CCmdTarget::GetTypeInfoOfGuid](#gettypeinfoofguid)|Recupera la descrizione del tipo che corrisponde al GUID specificato.|
|[CCmdTarget::GetTypeLib](#gettypelib)|Ottiene un puntatore a una libreria dei tipi.|
|[CCmdTarget::GetTypeLibCache](#gettypelibcache)|Ottiene la cache della libreria di tipi.|
|[CCmdTarget::IsInvokeAllowed](#isinvokeallowed)|Consente di chiamata al metodo di automazione.|
|[CCmdTarget::IsResultExpected](#isresultexpected)|Restituisce diversi da zero se una funzione di automazione devono restituire un valore.|
|[CCmdTarget::OnCmdMsg](#oncmdmsg)|Esegue il routing e l'invio dei messaggi di comando.|
|[CCmdTarget::OnFinalRelease](#onfinalrelease)|La pulizia dopo l'ultimo riferimento OLE viene rilasciato.|
|[CCmdTarget::RestoreWaitCursor](#restorewaitcursor)|Ripristina il cursore a forma di clessidra.|

## <a name="remarks"></a>Note

Una mappa messaggi instrada i comandi o i messaggi alle funzioni membro che si scrive in grado di gestirle. (Un comando è un messaggio da una voce di menu, pulsante di comando o tasto di scelta).

Le classi di framework chiavi derivate da `CCmdTarget` comprendono [CView](../../mfc/reference/cview-class.md), [CWinApp](../../mfc/reference/cwinapp-class.md), [CDocument](../../mfc/reference/cdocument-class.md), [CWnd](../../mfc/reference/cwnd-class.md), e [ CFrameWnd](../../mfc/reference/cframewnd-class.md). Se vuole che una nuova classe gestire i messaggi, derivare la classe da uno di questi `CCmdTarget`-le classi derivate. Si esegue la derivazione raramente una classe dalla classe `CCmdTarget` direttamente.

Per una panoramica delle destinazioni dei comandi e `OnCmdMsg` routing, vedere [destinazioni comandi](../../mfc/command-targets.md), [Routing dei comandi](../../mfc/command-routing.md), e [Mapping di messaggi](../../mfc/mapping-messages.md).

`CCmdTarget` include funzioni membro che gestiscono la visualizzazione di un cursore a forma di clessidra. Visualizza il cursore a forma di clessidra quando si prevede che un comando per richiedere un intervallo di tempo significativo per l'esecuzione.

Mappe di invio, simile a mappe messaggi, vengono usati per esporre l'automazione OLE `IDispatch` funzionalità. Per esporre questa interfaccia, è possono chiamare altre applicazioni (ad esempio Visual Basic) nell'applicazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CCmdTarget`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="beginwaitcursor"></a>  CCmdTarget::BeginWaitCursor

Chiamare questa funzione per visualizzare il cursore come una clessidra quando si prevede che un comando per richiedere un intervallo di tempo percettibile da eseguire.

```
void BeginWaitCursor();
```

### <a name="remarks"></a>Note

Il framework chiama questa funzione per visualizzare l'utente che è occupato, ad esempio quando un `CDocument` oggetto carica o Salva stesso in un file.

Le azioni delle `BeginWaitCursor` non sono sempre valide all'esterno di un singolo gestore di messaggi come altre azioni, ad esempio `OnSetCursor` la gestione, è stato possibile modificare il cursore.

Chiamare `EndWaitCursor` per ripristinare il cursore precedente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]

##  <a name="ccmdtarget"></a>  CCmdTarget::CCmdTarget

Costruisce un oggetto `CCmdTarget`.

```
CCmdTarget();
```

##  <a name="dooleverb"></a>  CCmdTarget::DoOleVerb

Fa sì che un'azione specificata da un verbo OLE da eseguire.

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
Puntatore per il [MSG](/windows/desktop/api/winuser/ns-winuser-msg) struttura che descrive l'evento richiamato dal verbo (ad esempio, un doppio clic).

*hWndParent*<br/>
Punto di controllo della finestra del documento contenente l'oggetto.

*lpRect*<br/>
Puntatore per il [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) rettangolo nel delimitatore della struttura che contiene le coordinate, in pixel, che definiscono un oggetto *hwndParent*.

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo, in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questa funzione membro è fondamentalmente un'implementazione di [IOleObject:: DoVerb](/windows/desktop/api/oleidl/nf-oleidl-ioleobject-doverb). Le azioni possibili sono state enumerate dal [CCmdTarget::EnumOleVerbs](#enumoleverbs).

##  <a name="enableautomation"></a>  CCmdTarget::EnableAutomation

Chiamare questa funzione per abilitare l'automazione OLE per un oggetto.

```
void EnableAutomation();
```

### <a name="remarks"></a>Note

Questa funzione viene in genere chiamata dal costruttore dell'oggetto e deve essere chiamata solo se è stata dichiarata una dispatch map per la classe. Per altre informazioni sull'automazione, vedere gli articoli [i client di automazione](../../mfc/automation-clients.md) e [server di automazione](../../mfc/automation-servers.md).

##  <a name="enableconnections"></a>  CCmdTarget::EnableConnections

Abilita generazione dell'evento su punti di connessione.

```
void EnableConnections();
```

### <a name="remarks"></a>Note

Per abilitare i punti di connessione, chiamare questa funzione membro nel costruttore della classe derivata.

##  <a name="enabletypelib"></a>  CCmdTarget::EnableTypeLib

Abilita libreria dei tipi di oggetto.

```
void EnableTypeLib();
```

### <a name="remarks"></a>Note

Chiamare questa funzione membro nel costruttore del `CCmdTarget`-oggetto che fornisca informazioni sul tipo derivato.

##  <a name="endwaitcursor"></a>  CCmdTarget::EndWaitCursor

Chiamare questa funzione dopo aver chiamato il `BeginWaitCursor` funzione membro da restituire dalla posizione del cursore a forma di clessidra fino al cursore precedente.

```
void EndWaitCursor();
```

### <a name="remarks"></a>Note

Il framework chiama questa funzione membro anche dopo aver chiamato il cursore a forma di clessidra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]

##  <a name="enumoleverbs"></a>  CCmdTarget::EnumOleVerbs

Enumera i verbi dell'oggetto OLE.

```
BOOL EnumOleVerbs(LPENUMOLEVERB* ppenumOleVerb);
```

### <a name="parameters"></a>Parametri

*ppenumOleVerb*<br/>
Un puntatore a un puntatore a un [IEnumOLEVERB](/windows/desktop/api/oleidl/nn-oleidl-ienumoleverb) interfaccia.

### <a name="return-value"></a>Valore restituito

TRUE se l'oggetto supporta almeno un verbo OLE (nel qual caso \* *ppenumOleVerb* punta a un `IEnumOLEVERB` interfaccia dell'enumeratore), in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questa funzione membro è fondamentalmente un'implementazione di [IOleObject:: EnumVerbs](/windows/desktop/api/oleidl/nf-oleidl-ioleobject-enumverbs).

##  <a name="fromidispatch"></a>  CCmdTarget::FromIDispatch

Chiamare questa funzione per eseguire il mapping di un `IDispatch` puntatore, ricevuti dalle funzioni membro di automazione di una classe, nelle `CCmdTarget` oggetto che implementa le interfacce del `IDispatch` oggetto.

```
static CCmdTarget* PASCAL FromIDispatch(LPDISPATCH lpDispatch);
```

### <a name="parameters"></a>Parametri

*lpDispatch*<br/>
Puntatore a un oggetto `IDispatch` .

### <a name="return-value"></a>Valore restituito

Un puntatore per il `CCmdTarget` oggetto associato *lpDispatch*. Questa funzione restituisce NULL se il `IDispatch` oggetto non è riconosciuto come un Microsoft Foundation Class `IDispatch` oggetto.

### <a name="remarks"></a>Note

Il risultato di questa funzione è l'inverso di una chiamata alla funzione membro `GetIDispatch`.

##  <a name="getdispatchiid"></a>  CCmdTarget::GetDispatchIID

Ottiene l'ID di interfaccia dispatch principale.

```
virtual BOOL GetDispatchIID(IID* pIID);
```

### <a name="parameters"></a>Parametri

*pIID*<br/>
Un puntatore a un ID di interfaccia (un [GUID](https://msdn.microsoft.com/library/windows/desktop/aa373931)).

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo, in caso contrario, FALSE. Caso di esito positivo \* *pIID* è impostato per l'ID di interfaccia dispatch principale.

### <a name="remarks"></a>Note

Le classi derivate devono eseguire l'override di questa funzione membro (se non viene sottoposto a override, `GetDispatchIID` restituisce FALSE). Visualizzare [COleControl](../../mfc/reference/colecontrol-class.md).

##  <a name="getidispatch"></a>  CCmdTarget::GetIDispatch

Chiamare questa funzione membro per recuperare il `IDispatch` puntatore da un metodo di automazione che restituisce un `IDispatch` puntatore o accetta un `IDispatch` il puntatore di riferimento.

```
LPDISPATCH GetIDispatch(BOOL bAddRef);
```

### <a name="parameters"></a>Parametri

*bAddRef*<br/>
Specifica se incrementare il conteggio dei riferimenti dell'oggetto.

### <a name="return-value"></a>Valore restituito

Il `IDispatch` puntatore associato all'oggetto.

### <a name="remarks"></a>Note

Per gli oggetti che chiamano `EnableAutomation` nei propri costruttori, rendendoli automazione abilitata, questa funzione restituisce un puntatore all'implementazione della classe di base del `IDispatch` che viene usato dai client che comunicano tramite il `IDispatch` interfaccia. Chiamare questa funzione automaticamente aggiunto un riferimento a indicatore di misura, in modo che non è necessario effettuare una chiamata a [IUnknown:: AddRef](/windows/desktop/api/unknwn/nf-unknwn-iunknown-addref).

##  <a name="gettypeinfocount"></a>  CCmdTarget::GetTypeInfoCount

Recupera il numero di interfacce di informazioni sul tipo che fornisce un oggetto.

```
virtual UINT GetTypeInfoCount();
```

### <a name="return-value"></a>Valore restituito

Il numero di interfacce di informazioni sul tipo.

### <a name="remarks"></a>Note

Questa funzione membro viene implementata [IDispatch:: GetTypeInfoCount](/windows/desktop/api/oaidl/nf-oaidl-idispatch-gettypeinfocount).

Le classi derivate devono eseguire l'override di questa funzione per restituire il numero di interfacce di informazioni sul tipo fornito (0 o 1). Se non viene sottoposto a override, `GetTypeInfoCount` restituisce 0. Per eseguire l'override, usare il [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) macro, che implementa anche `GetTypeLib` e `GetTypeLibCache`.

##  <a name="gettypeinfoofguid"></a>  CCmdTarget::GetTypeInfoOfGuid

Recupera la descrizione del tipo che corrisponde al GUID specificato.

```
HRESULT GetTypeInfoOfGuid(
    LCID lcid,
    const GUID& guid,
    LPTYPEINFO* ppTypeInfo);
```

### <a name="parameters"></a>Parametri

*lcid*<br/>
Un identificatore delle impostazioni locali ( `LCID`).

*guid*<br/>
Il [GUID](https://msdn.microsoft.com/library/windows/desktop/aa373931) della descrizione del tipo.

*ppTypeInfo*<br/>
Puntatore a un puntatore per il `ITypeInfo` interfaccia.

### <a name="return-value"></a>Valore restituito

Un HRESULT che indica l'esito positivo o negativo della chiamata. Caso di esito positivo \* *ppTypeInfo* punta all'interfaccia di informazioni di tipo.

##  <a name="gettypelib"></a>  CCmdTarget::GetTypeLib

Ottiene un puntatore a una libreria dei tipi.

```
virtual HRESULT GetTypeLib(
    LCID lcid,
    LPTYPELIB* ppTypeLib);
```

### <a name="parameters"></a>Parametri

*lcid*<br/>
Identificatore delle impostazioni locali (LCID).

*ppTypeLib*<br/>
Un puntatore a un puntatore al `ITypeLib` interfaccia.

### <a name="return-value"></a>Valore restituito

Un HRESULT che indica l'esito positivo o negativo della chiamata. Caso di esito positivo \* *ppTypeLib* punta all'interfaccia di raccolta di tipo.

### <a name="remarks"></a>Note

Le classi derivate devono eseguire l'override di questa funzione membro (se non viene sottoposto a override, `GetTypeLib` restituisce TYPE_E_CANTLOADLIBRARY). Usare la [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) macro, che implementa anche `GetTypeInfoCount` e `GetTypeLibCache`.

##  <a name="gettypelibcache"></a>  CCmdTarget::GetTypeLibCache

Ottiene la cache della libreria di tipi.

```
virtual CTypeLibCache* GetTypeLibCache();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CTypeLibCache` .

### <a name="remarks"></a>Note

Le classi derivate devono eseguire l'override di questa funzione membro (se non viene sottoposto a override, `GetTypeLibCache` restituisce NULL). Usare la [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) macro, che implementa anche `GetTypeInfoCount` e `GetTypeLib`.

##  <a name="isinvokeallowed"></a>  CCmdTarget::IsInvokeAllowed

Questa funzione viene chiamata dall'implementazione di MFC `IDispatch::Invoke` per determinare se un metodo di automazione specificato (identificato dal *dispid*) può essere richiamato.

```
virtual BOOL IsInvokeAllowed(DISPID dispid);
```

### <a name="parameters"></a>Parametri

*dispid*<br/>
Un ID di invio.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo può essere richiamato, in caso contrario, FALSE.

### <a name="remarks"></a>Note

Se `IsInvokeAllowed` restituisce TRUE, `Invoke` procede a chiamare il metodo; in caso contrario, `Invoke` , verrà restituito E_UNEXPECTED.

Le classi derivate possono eseguire l'override di questa funzione per restituire i valori appropriati (se non viene sottoposto a override, `IsInvokeAllowed` restituisce TRUE). Vedere in particolare [COleControl::IsInvokeAllowed](../../mfc/reference/colecontrol-class.md#isinvokeallowed).

##  <a name="isresultexpected"></a>  CCmdTarget::IsResultExpected

Usare `IsResultExpected` per verificare se un client prevede un valore restituito dalla relativa chiamata a una funzione di automazione.

```
BOOL IsResultExpected();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se una funzione di automazione deve restituire un valore. in caso contrario 0.

### <a name="remarks"></a>Note

L'interfaccia OLE fornisce informazioni a MFC su indica se il client utilizza o ignorando il risultato di una chiamata di funzione e MFC a sua volta utilizza queste informazioni per determinare il risultato di una chiamata a `IsResultExpected`. Se la produzione di un valore restituito è ora - o -elevato utilizzo di risorse, è possibile aumentare l'efficienza, chiamare questa funzione prima di calcolare il valore restituito.

Questa funzione restituisce 0 solo una volta in modo che si otterranno i valori validi restituiti da altre funzioni di automazione se vengono chiamate dalla funzione di automazione che il client ha chiamato.

`IsResultExpected` Restituisce un valore diverso da zero se viene chiamato quando una chiamata di funzione di automazione non è in corso.

##  <a name="oncmdmsg"></a>  CCmdTarget::OnCmdMsg

Chiamato dal framework per inviare o smistare messaggi di comando e per gestire l'aggiornamento di oggetti dell'interfaccia utente comandi.

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
Identifica il codice di notifica comando. Visualizzare **osservazioni** per altre informazioni sui valori per *nCode*.

*pExtra*<br/>
Utilizzato in base al valore della *nCode*. Visualizzare **osservazioni** per altre informazioni sui *pExtra*.

*pHandlerInfo*<br/>
Se non è NULL, `OnCmdMsg` viene compilato il *pTarget* e *pmf* i membri del *pHandlerInfo* struttura invece di inviare il comando. In genere, questo parametro deve essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è gestito; in caso contrario 0.

### <a name="remarks"></a>Note

Questa è la routine di implementazione principali dell'architettura di comando di framework.

In fase di esecuzione `OnCmdMsg` invia un comando ad altri oggetti o gestisce il comando stesso chiamando la classe radice `CCmdTarget::OnCmdMsg`, che esegue la ricerca della mappa messaggi effettivi. Per una descrizione completa del comando predefinito routing, vedere [la gestione dei messaggi e Mapping argomenti](../../mfc/message-handling-and-mapping.md).

In rari casi, è possibile eseguire l'override di questa funzione membro per estendere il framework di routing standard dei comandi. Fare riferimento a [21 Nota tecnica](../../mfc/tn021-command-and-message-routing.md) per informazioni dettagliate avanzate dell'architettura routing dei comandi.

Se esegue l'override `OnCmdMsg`, è necessario specificare il valore appropriato *nCode*, il codice di notifica del comando, e *pExtra*, che dipende dal valore del *nCode* . La tabella seguente elenca i relativi valori:

|*nCode* valore|*pExtra* value|
|-------------------|--------------------|
|CN_COMMAND|[CCmdUI](../../mfc/reference/ccmdui-class.md)\*|
|CN_EVENT|AFX_EVENT\*|
|CN_UPDATE_COMMAND_UI|CCmdUI\*|
|CN_OLECOMMAND|[COleCmdUI](../../mfc/reference/colecmdui-class.md)\*|
|CN_OLE_UNREGISTER|NULL|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#44](../../mfc/codesnippet/cpp/ccmdtarget-class_2.cpp)]

[!code-cpp[NVC_MFCDocView#45](../../mfc/codesnippet/cpp/ccmdtarget-class_3.cpp)]

##  <a name="onfinalrelease"></a>  CCmdTarget:: OnFinalRelease

Chiamato dal framework quando viene rilasciato l'ultimo riferimento OLE a o dall'oggetto.

```
virtual void OnFinalRelease();
```

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per fornire una gestione speciale per questa situazione. L'implementazione predefinita consente di eliminare l'oggetto.

##  <a name="restorewaitcursor"></a>  CCmdTarget::RestoreWaitCursor

Chiamare questa funzione per ripristinare il cursore a forma di clessidra appropriato dopo il cursore di sistema è stato modificato (ad esempio, dopo che una finestra di messaggio ha aperto e quindi viene chiusa mentre è in corso un'operazione di lunga durata).

```
void RestoreWaitCursor();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC ACDUAL](../../visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CCmdUI](../../mfc/reference/ccmdui-class.md)<br/>
[Classe CDocument](../../mfc/reference/cdocument-class.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Classe CWinApp](../../mfc/reference/cwinapp-class.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Classe COleDispatchDriver](../../mfc/reference/coledispatchdriver-class.md)

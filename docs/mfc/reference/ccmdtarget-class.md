---
title: CCmdTarget (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs: C++
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
caps.latest.revision: "23"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: aaae01c2e63c152139694c9d723b6bde7febf9c6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ccmdtarget-class"></a>CCmdTarget (classe)
Classe di base per l'architettura di mappa messaggi della libreria Microsoft Foundation Class.  
  
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
|[CCmdTarget::BeginWaitCursor](#beginwaitcursor)|Visualizza il cursore come una clessidra.|  
|[CCmdTarget::DoOleVerb](#dooleverb)|Fa sì che un'azione specificata da un verbo OLE da eseguire.|  
|[CCmdTarget::EnableAutomation](#enableautomation)|Consente l'automazione OLE per il `CCmdTarget` oggetto.|  
|[CCmdTarget::EnableConnections](#enableconnections)|Abilita generazione dell'evento su punti di connessione.|  
|[CCmdTarget::EnableTypeLib](#enabletypelib)|Abilita libreria dei tipi dell'oggetto.|  
|[CCmdTarget::EndWaitCursor](#endwaitcursor)|Restituisce un valore per il cursore precedente.|  
|[CCmdTarget::EnumOleVerbs](#enumoleverbs)|Enumera i verbi dell'oggetto OLE.|  
|[CCmdTarget::FromIDispatch](#fromidispatch)|Restituisce un puntatore al `CCmdTarget` oggetto associato di `IDispatch` puntatore.|  
|[CCmdTarget::GetDispatchIID](#getdispatchiid)|Ottiene l'ID di interfaccia dispatch principale.|  
|[CCmdTarget::GetIDispatch](#getidispatch)|Restituisce un puntatore al `IDispatch` oggetto associato di `CCmdTarget` oggetto.|  
|[CCmdTarget::GetTypeInfoCount](#gettypeinfocount)|Recupera il numero di interfacce di informazioni sul tipo che fornisce un oggetto.|  
|[CCmdTarget::GetTypeInfoOfGuid](#gettypeinfoofguid)|Recupera la descrizione del tipo che corrisponde al GUID specificato.|  
|[CCmdTarget::GetTypeLib](#gettypelib)|Ottiene un puntatore a una libreria dei tipi.|  
|[CCmdTarget::GetTypeLibCache](#gettypelibcache)|Ottiene la cache di libreria di tipi.|  
|[CCmdTarget::IsInvokeAllowed](#isinvokeallowed)|Consente la chiamata di metodo di automazione.|  
|[CCmdTarget::IsResultExpected](#isresultexpected)|Restituisce diverso da zero se una funzione di automazione devono restituire un valore.|  
|[CCmdTarget:: OnCmdMsg](#oncmdmsg)|Esegue il routing e invia i messaggi di comando.|  
|[CCmdTarget:: OnFinalRelease](#onfinalrelease)|La pulizia dopo l'ultimo riferimento OLE viene rilasciato.|  
|[CCmdTarget::RestoreWaitCursor](#restorewaitcursor)|Ripristina il cursore a clessidra.|  
  
## <a name="remarks"></a>Note  
 Una mappa messaggi instrada i comandi o i messaggi alle funzioni membro che si scrive gestirli. (Un comando è un messaggio da una voce di menu, un pulsante di comando o un tasto di scelta rapida).  
  
 Chiave framework classi derivate da `CCmdTarget` includono [CView](../../mfc/reference/cview-class.md), [CWinApp](../../mfc/reference/cwinapp-class.md), [CDocument](../../mfc/reference/cdocument-class.md), [CWnd](../../mfc/reference/cwnd-class.md), e [ CFrameWnd](../../mfc/reference/cframewnd-class.md). Se intende una nuova classe gestire i messaggi, derivare la classe da uno di questi `CCmdTarget`-classi derivate. Raramente si verrà derivare una classe da `CCmdTarget` direttamente.  
  
 Per una panoramica delle destinazioni dei comandi e `OnCmdMsg` routing, vedere [destinazioni comandi](../../mfc/command-targets.md), [comandi (Routing)](../../mfc/command-routing.md), e [Mapping di messaggi](../../mfc/mapping-messages.md).  
  
 `CCmdTarget`include funzioni membro che gestiscono la visualizzazione di un cursore a clessidra. Cursore a clessidra viene visualizzato quando si prevede che un comando per richiedere un intervallo di tempo significativo per l'esecuzione.  
  
 Mappe di invio, simile a mappe messaggi, vengono utilizzati per esporre l'automazione OLE `IDispatch` funzionalità. Per esporre questa interfaccia, è possono chiamare altre applicazioni (ad esempio Visual Basic) nell'applicazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CCmdTarget`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="beginwaitcursor"></a>CCmdTarget::BeginWaitCursor  
 Chiamare questa funzione per visualizzare il cursore come una clessidra quando è previsto un comando per richiedere un intervallo di tempo significativo per l'esecuzione.  
  
```  
void BeginWaitCursor();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione per indicare all'utente è occupato, ad esempio quando un **CDocument** oggetto viene caricato o salvato automaticamente in un file.  
  
 Le azioni di `BeginWaitCursor` non sono sempre valide all'esterno di un singolo gestore di messaggi come altre azioni, ad esempio `OnSetCursor` la gestione, è possibile modificare il cursore.  
  
 Chiamare `EndWaitCursor` per ripristinare il cursore precedente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]  
  
##  <a name="ccmdtarget"></a>CCmdTarget::CCmdTarget  
 Costruisce un oggetto `CCmdTarget`.  
  
```  
CCmdTarget();
```  
  
##  <a name="dooleverb"></a>CCmdTarget::DoOleVerb  
 Fa sì che un'azione specificata da un verbo OLE da eseguire.  
  
```  
BOOL DoOleVerb(
    LONG iVerb,  
    LPMSG lpMsg,  
    HWND hWndParent,  
    LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `iVerb`  
 Identificatore numerico del verbo.  
  
 `lpMsg`  
 Puntatore al [MSG](http://msdn.microsoft.com/library/windows/desktop/ms644958) struttura che descrive l'evento richiamato dal verbo (ad esempio, un doppio clic).  
  
 `hWndParent`  
 Punto di controllo della finestra del documento contenente l'oggetto.  
  
 `lpRect`  
 Puntatore al [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) rettangolo di delimitazione della struttura che contiene le coordinate, in pixel, che definiscono un oggetto *hwndParent*.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se ha esito positivo, FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è un'implementazione di [IOleObject:: DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508). Le azioni possibili sono enumerate da [CCmdTarget::EnumOleVerbs](#enumoleverbs).  
  
##  <a name="enableautomation"></a>CCmdTarget::EnableAutomation  
 Chiamare questa funzione per abilitare l'automazione OLE per un oggetto.  
  
```  
void EnableAutomation();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene in genere chiamata dal costruttore dell'oggetto e deve essere chiamata solo se è stata dichiarata una mappa di invio per la classe. Per ulteriori informazioni sull'automazione, vedere gli articoli [client di automazione](../../mfc/automation-clients.md) e [server di automazione](../../mfc/automation-servers.md).  
  
##  <a name="enableconnections"></a>CCmdTarget::EnableConnections  
 Abilita generazione dell'evento su punti di connessione.  
  
```  
void EnableConnections();
```  
  
### <a name="remarks"></a>Note  
 Per abilitare i punti di connessione, chiamare questa funzione membro nel costruttore della classe derivata.  
  
##  <a name="enabletypelib"></a>CCmdTarget::EnableTypeLib  
 Abilita libreria dei tipi dell'oggetto.  
  
```  
void EnableTypeLib();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro nel costruttore del `CCmdTarget`-se contiene informazioni sul tipo di oggetto derivato. Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q185720, "procedura: fornire informazioni sul tipo da un Server di automazione MFC." Articoli della Knowledge Base sono disponibili in [http://support.microsoft.com](http://support.microsoft.com/).  
  
##  <a name="endwaitcursor"></a>CCmdTarget::EndWaitCursor  
 Chiamare questa funzione, dopo aver chiamato il `BeginWaitCursor` funzione membro da restituire dalla posizione del cursore di attesa fino al cursore precedente.  
  
```  
void EndWaitCursor();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione membro anche dopo aver chiamato il cursore a clessidra.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]  
  
##  <a name="enumoleverbs"></a>CCmdTarget::EnumOleVerbs  
 Enumera i verbi dell'oggetto OLE.  
  
```  
BOOL EnumOleVerbs(LPENUMOLEVERB* ppenumOleVerb);
```  
  
### <a name="parameters"></a>Parametri  
 `ppenumOleVerb`  
 Un puntatore a un puntatore a un [IEnumOLEVERB](http://msdn.microsoft.com/library/windows/desktop/ms695084) interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'oggetto supporta almeno un verbo OLE (nel qual caso \* `ppenumOleVerb` punta a un **IEnumOLEVERB** interfaccia dell'enumeratore), in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è un'implementazione di [IOleObject:: EnumVerbs](http://msdn.microsoft.com/library/windows/desktop/ms692781).  
  
##  <a name="fromidispatch"></a>CCmdTarget::FromIDispatch  
 Chiamare questa funzione per eseguire il mapping un `IDispatch` puntatore, ricevuti dalle funzioni membro di automazione di una classe, nel `CCmdTarget` oggetto che implementa le interfacce del `IDispatch` oggetto.  
  
```  
static CCmdTarget* PASCAL FromIDispatch(LPDISPATCH lpDispatch);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDispatch`  
 Puntatore a un oggetto `IDispatch` .  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `CCmdTarget` associato `lpDispatch`. Questa funzione restituisce **NULL** se il `IDispatch` oggetto non è riconosciuto come un Microsoft Foundation Class `IDispatch` oggetto.  
  
### <a name="remarks"></a>Note  
 Il risultato di questa funzione è l'inverso di una chiamata alla funzione membro `GetIDispatch`.  
  
##  <a name="getdispatchiid"></a>CCmdTarget::GetDispatchIID  
 Ottiene l'ID di interfaccia dispatch principale.  
  
```  
virtual BOOL GetDispatchIID(IID* pIID);
```  
  
### <a name="parameters"></a>Parametri  
 *pIID*  
 Un puntatore a un ID di interfaccia (un [GUID](http://msdn.microsoft.com/library/windows/desktop/aa373931)).  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se ha esito positivo, FALSE in caso contrario. Se ha esito positivo, \* *pIID* è impostato per l'ID di interfaccia dispatch principale.  
  
### <a name="remarks"></a>Note  
 Le classi derivate devono eseguire l'override di questa funzione membro (se non viene sottoposto a override, `GetDispatchIID` restituisce FALSE). Vedere [COleControl](../../mfc/reference/colecontrol-class.md).  
  
 Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q185720, "procedura: fornire informazioni sul tipo da un Server di automazione MFC." Articoli della Knowledge Base sono disponibili in [http://support.microsoft.com](http://support.microsoft.com/).  
  
##  <a name="getidispatch"></a>CCmdTarget::GetIDispatch  
 Chiamare questa funzione membro per recuperare il `IDispatch` puntatore da un metodo di automazione che restituisce un `IDispatch` puntatore o accetta una `IDispatch` puntatore per riferimento.  
  
```  
LPDISPATCH GetIDispatch(BOOL bAddRef);
```  
  
### <a name="parameters"></a>Parametri  
 *bAddRef*  
 Specifica se incrementare il conteggio dei riferimenti per l'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Il `IDispatch` puntatore associato all'oggetto.  
  
### <a name="remarks"></a>Note  
 Per gli oggetti che chiamano `EnableAutomation` nei propri costruttori, rendendoli automazione abilitata, questa funzione restituisce un puntatore all'implementazione della classe di base di `IDispatch` utilizzato dai client che comunicano tramite il `IDispatch` interfaccia. Chiamare questa funzione automaticamente aggiunge un riferimento al puntatore, pertanto non è necessario effettuare una chiamata a [IUnknown:: AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379).  
  
##  <a name="gettypeinfocount"></a>CCmdTarget::GetTypeInfoCount  
 Recupera il numero di interfacce di informazioni sul tipo che fornisce un oggetto.  
  
```  
virtual UINT GetTypeInfoCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di interfacce di informazioni sul tipo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene implementata [IDispatch:: GetTypeInfoCount](http://msdn.microsoft.com/en-us/da876d53-cb8a-465c-a43e-c0eb272e2a12).  
  
 Le classi derivate devono eseguire l'override di questa funzione per restituire il numero di interfacce di informazioni sul tipo fornito (0 o 1). Se non viene sottoposto a override, **GetTypeInfoCount** restituisce 0. Per eseguire l'override, utilizzare il [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) (macro), che implementa anche `GetTypeLib` e `GetTypeLibCache`.  
  
##  <a name="gettypeinfoofguid"></a>CCmdTarget::GetTypeInfoOfGuid  
 Recupera la descrizione del tipo che corrisponde al GUID specificato.  
  
```  
HRESULT GetTypeInfoOfGuid(
    LCID lcid,  
    const GUID& guid,  
    LPTYPEINFO* ppTypeInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `lcid`  
 Un identificatore delle impostazioni locali ( `LCID`).  
  
 `guid`  
 Il [GUID](http://msdn.microsoft.com/library/windows/desktop/aa373931) della descrizione del tipo.  
  
 `ppTypeInfo`  
 Puntatore a un puntatore per il `ITypeInfo` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un HRESULT che indica l'esito positivo o negativo della chiamata. Se ha esito positivo, * `ppTypeInfo` fa riferimento all'interfaccia di informazioni di tipo.  
  
##  <a name="gettypelib"></a>CCmdTarget::GetTypeLib  
 Ottiene un puntatore a una libreria dei tipi.  
  
```  
virtual HRESULT GetTypeLib(
    LCID lcid,  
    LPTYPELIB* ppTypeLib);
```  
  
### <a name="parameters"></a>Parametri  
 `lcid`  
 Un identificatore delle impostazioni locali ( `LCID`).  
  
 `ppTypeLib`  
 Un puntatore a un puntatore per il `ITypeLib` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un HRESULT che indica l'esito positivo o negativo della chiamata. Se ha esito positivo, * `ppTypeLib` fa riferimento all'interfaccia di raccolta del tipo.  
  
### <a name="remarks"></a>Note  
 Le classi derivate devono eseguire l'override di questa funzione membro (se non viene sottoposto a override, `GetTypeLib` restituisce TYPE_E_CANTLOADLIBRARY). Utilizzare il [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) (macro), che implementa anche `GetTypeInfoCount` e `GetTypeLibCache`.  
  
##  <a name="gettypelibcache"></a>CCmdTarget::GetTypeLibCache  
 Ottiene la cache di libreria di tipi.  
  
```  
virtual CTypeLibCache* GetTypeLibCache();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un **CTypeLibCache** oggetto.  
  
### <a name="remarks"></a>Note  
 Le classi derivate devono eseguire l'override di questa funzione membro (se non viene sottoposto a override, **GetTypeLibCache** restituisce NULL). Utilizzare il [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) (macro), che implementa anche `GetTypeInfoCount` e `GetTypeLib`.  
  
##  <a name="isinvokeallowed"></a>CCmdTarget::IsInvokeAllowed  
 Questa funzione viene chiamata dall'implementazione MFC di **IDispatch:: Invoke** per determinare se un metodo di automazione specificato (identificato da `dispid`) può essere richiamato.  
  
```  
virtual BOOL IsInvokeAllowed(DISPID dispid);
```  
  
### <a name="parameters"></a>Parametri  
 `dispid`  
 Un ID dispatch.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo può essere richiamato, in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Se `IsInvokeAllowed` restituisce TRUE, **Invoke** consente di passare alla chiamata al metodo; in caso contrario, `Invoke` , verrà restituito E_UNEXPECTED.  
  
 Le classi derivate possono eseguire l'override di questa funzione per restituire i valori appropriati (se non viene sottoposto a override, `IsInvokeAllowed` restituisce TRUE). In particolare vedere [COleControl::IsInvokeAllowed](../../mfc/reference/colecontrol-class.md#isinvokeallowed).  
  
##  <a name="isresultexpected"></a>CCmdTarget::IsResultExpected  
 Utilizzare `IsResultExpected` per verificare se un client prevede un valore restituito dalla chiamata a una funzione di automazione.  
  
```  
BOOL IsResultExpected();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se una funzione di automazione deve restituire un valore. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'interfaccia OLE fornisce informazioni a MFC se il client utilizza o ignorando il risultato di una chiamata di funzione e MFC a sua volta utilizza queste informazioni per determinare il risultato di una chiamata a `IsResultExpected`. Se la produzione di un valore restituito o risorsa-molto tempo, è possibile aumentare l'efficienza chiamando questa funzione prima di calcolare il valore restituito.  
  
 Questa funzione restituisce 0 solo una volta in modo che per ottenere i valori validi restituiti da altre funzioni di automazione chiamarle dalla funzione di automazione che il client ha chiamato.  
  
 `IsResultExpected`Restituisce un valore diverso da zero se viene chiamato quando una chiamata di funzione di automazione non è in corso.  
  
##  <a name="oncmdmsg"></a>CCmdTarget:: OnCmdMsg  
 Chiamato dal framework per inviare o smistare messaggi di comando e di gestire l'aggiornamento dell'interfaccia utente di oggetti del comando.  
  
```  
virtual BOOL OnCmdMsg(
    UINT nID,  
    int nCode,  
    void* pExtra,  
    AFX_CMDHANDLERINFO* pHandlerInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Contiene l'ID di comando.  
  
 `nCode`  
 Identifica il codice di notifica comando. Vedere **osservazioni** per ulteriori informazioni sui valori per `nCode`.  
  
 `pExtra`  
 Utilizzato in base al valore di `nCode`. Vedere **osservazioni** per ulteriori informazioni su `pExtra`.  
  
 `pHandlerInfo`  
 In caso contrario **NULL**, `OnCmdMsg` viene compilato il **pTarget** e **pmf** i membri del `pHandlerInfo` struttura anziché inviando il comando. In genere, questo parametro deve essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio è stato gestito; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa è la routine di implementazione principali dell'architettura di comando di framework.  
  
 In fase di esecuzione `OnCmdMsg` invia un comando ad altri oggetti o gestisce il comando stesso chiamando la classe radice `CCmdTarget::OnCmdMsg`, che venga eseguita di ricerca la mappa messaggi effettivo. Per una descrizione completa del routing dei comandi predefiniti, vedere [la gestione dei messaggi e mapping dei](../../mfc/message-handling-and-mapping.md).  
  
 In rari casi, si consiglia di eseguire l'override di questa funzione membro per estendere il framework routing dei comandi standard. Fare riferimento a [21 Nota tecnica](../../mfc/tn021-command-and-message-routing.md) per informazioni dettagliate avanzate dell'architettura di routing dei comandi.  
  
 Se esegue l'override `OnCmdMsg`, è necessario specificare il valore appropriato per `nCode`, il codice di notifica di comando e `pExtra`, che dipende dal valore di `nCode`. Nella tabella seguente sono elencati i valori corrispondenti:  
  
|Valore di `nCode`|Valore di `pExtra`|  
|-------------------|--------------------|  
|CN_UPDATE_COMMAND_UI|[CCmdUI](../../mfc/reference/ccmdui-class.md)*|  
|CN_EVENT|AFX_EVENT *|  
|MEDIANTE|CCmdUI *|  
|CN_OLECOMMAND|[COleCmdUI](../../mfc/reference/colecmdui-class.md)*|  
|CN_OLE_UNREGISTER|NULL|  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#44](../../mfc/codesnippet/cpp/ccmdtarget-class_2.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#45](../../mfc/codesnippet/cpp/ccmdtarget-class_3.cpp)]  
  
##  <a name="onfinalrelease"></a>CCmdTarget:: OnFinalRelease  
 Chiamato dal framework quando viene rilasciato l'ultimo riferimento OLE a o dall'oggetto.  
  
```  
virtual void OnFinalRelease();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per fornire una gestione speciale per questa situazione. L'implementazione predefinita elimina l'oggetto.  
  
##  <a name="restorewaitcursor"></a>CCmdTarget::RestoreWaitCursor  
 Chiamare questa funzione per ripristinare il cursore a clessidra appropriato dopo il cursore di sistema è stato modificato (ad esempio, dopo che una finestra di messaggio ha aperto e quindi chiuso durante l'esecuzione di un'operazione di lunga durata).  
  
```  
void RestoreWaitCursor();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [MFC esempio ACDUAL](../../visual-cpp-samples.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCmdUI (classe)](../../mfc/reference/ccmdui-class.md)   
 [CDocument (classe)](../../mfc/reference/cdocument-class.md)   
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)   
 [CWinApp (classe)](../../mfc/reference/cwinapp-class.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)   
 [Classe COleDispatchDriver](../../mfc/reference/coledispatchdriver-class.md)

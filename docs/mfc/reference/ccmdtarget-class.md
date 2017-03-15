---
title: CCmdTarget (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCmdTarget
dev_langs:
- C++
helpviewer_keywords:
- message maps, CCmdTarget base class
- command targets
- CCmdTarget class
- command routing, command targets
- targets, command
ms.assetid: 8883b132-2057-4ce0-a5f2-88979f8f2b13
caps.latest.revision: 23
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 0b5b7617f6b3d89e454e31c9f95b5d4455569114
ms.lasthandoff: 02/24/2017

---
# <a name="ccmdtarget-class"></a>CCmdTarget (classe)
La classe base per l'architettura di mappa messaggi della libreria Microsoft Foundation Class.  
  
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
|[CCmdTarget::BeginWaitCursor](#beginwaitcursor)|Visualizza il cursore come un cursore a clessidra.|  
|[CCmdTarget::DoOleVerb](#dooleverb)|Fa sì che un'azione specificata da un verbo OLE da eseguire.|  
|[CCmdTarget::EnableAutomation](#enableautomation)|Consente l'automazione OLE per il `CCmdTarget` oggetto.|  
|[CCmdTarget::EnableConnections](#enableconnections)|Abilita la generazione di eventi su punti di connessione.|  
|[CCmdTarget::EnableTypeLib](#enabletypelib)|Abilita libreria dei tipi di un oggetto.|  
|[CCmdTarget::EndWaitCursor](#endwaitcursor)|Restituisce fino al cursore precedente.|  
|[CCmdTarget::EnumOleVerbs](#enumoleverbs)|Enumera i verbi di un oggetto OLE.|  
|[CCmdTarget::FromIDispatch](#fromidispatch)|Restituisce un puntatore per il `CCmdTarget` oggetto associato di `IDispatch` puntatore.|  
|[CCmdTarget::GetDispatchIID](#getdispatchiid)|Ottiene l'ID di interfaccia dispatch principale.|  
|[CCmdTarget::GetIDispatch](#getidispatch)|Restituisce un puntatore per il `IDispatch` oggetto associato di `CCmdTarget` oggetto.|  
|[CCmdTarget::GetTypeInfoCount](#gettypeinfocount)|Recupera il numero di interfacce di informazioni sul tipo che fornisce un oggetto.|  
|[CCmdTarget::GetTypeInfoOfGuid](#gettypeinfoofguid)|Recupera la descrizione del tipo che corrisponde al GUID specificato.|  
|[CCmdTarget::GetTypeLib](#gettypelib)|Ottiene un puntatore a una libreria dei tipi.|  
|[CCmdTarget::GetTypeLibCache](#gettypelibcache)|Ottiene la cache di libreria di tipi.|  
|[CCmdTarget::IsInvokeAllowed](#isinvokeallowed)|Consente di chiamata al metodo di automazione.|  
|[CCmdTarget::IsResultExpected](#isresultexpected)|Restituisce zero se una funzione di automazione devono restituire un valore.|  
|[CCmdTarget:: OnCmdMsg](#oncmdmsg)|Indirizza e invia i messaggi di comando.|  
|[CCmdTarget:: OnFinalRelease](#onfinalrelease)|La pulizia dopo l'ultimo riferimento OLE viene rilasciato.|  
|[CCmdTarget::RestoreWaitCursor](#restorewaitcursor)|Ripristina il cursore a clessidra.|  
  
## <a name="remarks"></a>Note  
 Una mappa messaggi instrada i messaggi o comandi alle funzioni membro che è scrivere per gestirli. (Un comando è un messaggio da una voce di menu, un pulsante di comando o un tasto di scelta rapida).  
  
 Chiave framework le classi derivate da `CCmdTarget` includono [CView](../../mfc/reference/cview-class.md), [CWinApp](../../mfc/reference/cwinapp-class.md), [CDocument](../../mfc/reference/cdocument-class.md), [CWnd](../../mfc/reference/cwnd-class.md), e [CFrameWnd](../../mfc/reference/cframewnd-class.md). Se si desidera che una nuova classe gestire i messaggi, derivare la classe da una di queste `CCmdTarget`-classi derivate. Si esegue la derivazione raramente una classe dalla classe `CCmdTarget` direttamente.  
  
 Per una panoramica delle destinazioni dei comandi e `OnCmdMsg` il routing, vedere [destinazioni comandi](../../mfc/command-targets.md), [comandi (Routing)](../../mfc/command-routing.md), e [Mapping di messaggi](../../mfc/mapping-messages.md).  
  
 `CCmdTarget`incluse le funzioni membro che gestiscono la visualizzazione di un cursore a clessidra. Visualizzare il cursore a clessidra quando si prevede che un comando per richiedere un intervallo di tempo significativo da eseguire.  
  
 Mappe di invio, simile a mappe messaggi, vengono utilizzati per esporre l'automazione OLE `IDispatch` funzionalità. Tramite l'esposizione di questa interfaccia, è possono chiamare altre applicazioni (ad esempio Visual Basic) nell'applicazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CCmdTarget`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="a-namebeginwaitcursora--ccmdtargetbeginwaitcursor"></a><a name="beginwaitcursor"></a>CCmdTarget::BeginWaitCursor  
 Chiamare questa funzione per visualizzare il cursore come una clessidra quando si prevede che un comando per richiedere un intervallo di tempo significativo da eseguire.  
  
```  
void BeginWaitCursor();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione per indicare all'utente che è occupato, ad esempio, quando un **CDocument** oggetto viene caricato o salvato automaticamente in un file.  
  
 Le azioni di `BeginWaitCursor` non sono sempre efficace all'esterno di un singolo gestore di messaggi come altre azioni, ad esempio `OnSetCursor` la gestione, è possibile modificare il cursore.  
  
 Chiamare `EndWaitCursor` per ripristinare il cursore precedente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#43;](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]  
  
##  <a name="a-nameccmdtargeta--ccmdtargetccmdtarget"></a><a name="ccmdtarget"></a>CCmdTarget::CCmdTarget  
 Costruisce un oggetto `CCmdTarget`.  
  
```  
CCmdTarget();
```  
  
##  <a name="a-namedooleverba--ccmdtargetdooleverb"></a><a name="dooleverb"></a>CCmdTarget::DoOleVerb  
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
 Questa funzione membro è un'implementazione di [IOleObject:: DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508). Le possibili azioni sono state enumerate dal [CCmdTarget::EnumOleVerbs](#enumoleverbs).  
  
##  <a name="a-nameenableautomationa--ccmdtargetenableautomation"></a><a name="enableautomation"></a>CCmdTarget::EnableAutomation  
 Chiamare questa funzione per abilitare l'automazione OLE per un oggetto.  
  
```  
void EnableAutomation();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene in genere chiamata dal costruttore dell'oggetto e deve essere chiamata solo se una mappa di invio è stata dichiarata per la classe. Per ulteriori informazioni sull'automazione, vedere gli articoli [client di automazione](../../mfc/automation-clients.md) e [server di automazione](../../mfc/automation-servers.md).  
  
##  <a name="a-nameenableconnectionsa--ccmdtargetenableconnections"></a><a name="enableconnections"></a>CCmdTarget::EnableConnections  
 Abilita la generazione di eventi su punti di connessione.  
  
```  
void EnableConnections();
```  
  
### <a name="remarks"></a>Note  
 Per abilitare i punti di connessione, chiamare questa funzione membro nel costruttore della classe derivata.  
  
##  <a name="a-nameenabletypeliba--ccmdtargetenabletypelib"></a><a name="enabletypelib"></a>CCmdTarget::EnableTypeLib  
 Abilita libreria dei tipi di un oggetto.  
  
```  
void EnableTypeLib();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro nel costruttore del `CCmdTarget`-oggetto che fornisca informazioni sul tipo derivato. Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q185720, "procedura: fornire informazioni sul tipo da un Server di automazione MFC." Articoli della Knowledge Base sono disponibili nella documentazione di Visual Studio di MSDN Library o al [http://support.microsoft.com](http://support.microsoft.com/).  
  
##  <a name="a-nameendwaitcursora--ccmdtargetendwaitcursor"></a><a name="endwaitcursor"></a>CCmdTarget::EndWaitCursor  
 Chiamare questa funzione dopo aver chiamato il `BeginWaitCursor` funzione membro da restituire dalla posizione del cursore a clessidra fino al cursore precedente.  
  
```  
void EndWaitCursor();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione membro anche dopo aver chiamato il cursore a clessidra.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#43;](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]  
  
##  <a name="a-nameenumoleverbsa--ccmdtargetenumoleverbs"></a><a name="enumoleverbs"></a>CCmdTarget::EnumOleVerbs  
 Enumera i verbi di un oggetto OLE.  
  
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
  
##  <a name="a-namefromidispatcha--ccmdtargetfromidispatch"></a><a name="fromidispatch"></a>CCmdTarget::FromIDispatch  
 Chiamare questa funzione per eseguire il mapping di un `IDispatch` puntatore, ricevuti da funzioni membro di automazione di una classe, nel `CCmdTarget` oggetto che implementa le interfacce di `IDispatch` oggetto.  
  
```  
static CCmdTarget* PASCAL FromIDispatch(LPDISPATCH lpDispatch);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDispatch`  
 Puntatore a un oggetto `IDispatch` .  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `CCmdTarget` oggetto associato a `lpDispatch`. Questa funzione restituisce **NULL** se il `IDispatch` oggetto non è riconosciuto come un Microsoft Foundation Class `IDispatch` oggetto.  
  
### <a name="remarks"></a>Note  
 Il risultato di questa funzione è l'inverso di una chiamata alla funzione membro `GetIDispatch`.  
  
##  <a name="a-namegetdispatchiida--ccmdtargetgetdispatchiid"></a><a name="getdispatchiid"></a>CCmdTarget::GetDispatchIID  
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
 Le classi derivate devono eseguire l'override di questa funzione membro (se non sottoposto a override, `GetDispatchIID` restituisce FALSE). Vedere [COleControl](../../mfc/reference/colecontrol-class.md).  
  
 Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q185720, "procedura: fornire informazioni sul tipo da un Server di automazione MFC." Articoli della Knowledge Base sono disponibili nella documentazione di Visual Studio di MSDN Library o al [http://support.microsoft.com](http://support.microsoft.com/).  
  
##  <a name="a-namegetidispatcha--ccmdtargetgetidispatch"></a><a name="getidispatch"></a>CCmdTarget::GetIDispatch  
 Chiamare questa funzione membro per recuperare il `IDispatch` puntatore da un metodo di automazione che restituisce un `IDispatch` puntatore o accetta un `IDispatch` puntatore per riferimento.  
  
```  
LPDISPATCH GetIDispatch(BOOL bAddRef);
```  
  
### <a name="parameters"></a>Parametri  
 *bAddRef*  
 Specifica se incrementare il conteggio dei riferimenti dell'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Il `IDispatch` puntatore associato all'oggetto.  
  
### <a name="remarks"></a>Note  
 Per gli oggetti che chiamano `EnableAutomation` nei propri costruttori, rendendoli automazione attivata, questa funzione restituisce un puntatore all'implementazione della classe di base di `IDispatch` che viene utilizzato dai client che comunicano tramite il `IDispatch` interfaccia. Chiamare questa funzione automaticamente aggiunto un riferimento al puntatore, pertanto non è necessario effettuare una chiamata a [IUnknown:: AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379).  
  
##  <a name="a-namegettypeinfocounta--ccmdtargetgettypeinfocount"></a><a name="gettypeinfocount"></a>CCmdTarget::GetTypeInfoCount  
 Recupera il numero di interfacce di informazioni sul tipo che fornisce un oggetto.  
  
```  
virtual UINT GetTypeInfoCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di interfacce di informazioni sul tipo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene implementata [IDispatch:: GetTypeInfoCount](http://msdn.microsoft.com/en-us/da876d53-cb8a-465c-a43e-c0eb272e2a12).  
  
 Le classi derivate devono eseguire l'override di questa funzione per restituire il numero di interfacce di informazioni sul tipo fornito (0 o 1). Se non sottoposto a override, **GetTypeInfoCount** restituisce 0. Per eseguire l'override, utilizzare il [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) macro, che implementa anche `GetTypeLib` e `GetTypeLibCache`.  
  
##  <a name="a-namegettypeinfoofguida--ccmdtargetgettypeinfoofguid"></a><a name="gettypeinfoofguid"></a>CCmdTarget::GetTypeInfoOfGuid  
 Recupera la descrizione del tipo che corrisponde al GUID specificato.  
  
```  
HRESULT GetTypeInfoOfGuid(
    LCID lcid,  
    const GUID& guid,  
    LPTYPEINFO* ppTypeInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `lcid`  
 Identificatore delle impostazioni locali ( `LCID`).  
  
 `guid`  
 Il [GUID](http://msdn.microsoft.com/library/windows/desktop/aa373931) della descrizione del tipo.  
  
 `ppTypeInfo`  
 Puntatore a un puntatore per il `ITypeInfo` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un HRESULT che indica l'esito positivo o negativo della chiamata. Se ha esito positivo, * `ppTypeInfo` punta all'interfaccia di informazioni di tipo.  
  
##  <a name="a-namegettypeliba--ccmdtargetgettypelib"></a><a name="gettypelib"></a>CCmdTarget::GetTypeLib  
 Ottiene un puntatore a una libreria dei tipi.  
  
```  
virtual HRESULT GetTypeLib(
    LCID lcid,  
    LPTYPELIB* ppTypeLib);
```  
  
### <a name="parameters"></a>Parametri  
 `lcid`  
 Identificatore delle impostazioni locali ( `LCID`).  
  
 `ppTypeLib`  
 Un puntatore a un puntatore per il `ITypeLib` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un HRESULT che indica l'esito positivo o negativo della chiamata. Se ha esito positivo, * `ppTypeLib` punta all'interfaccia della libreria dei tipi.  
  
### <a name="remarks"></a>Note  
 Le classi derivate devono eseguire l'override di questa funzione membro (se non sottoposto a override, `GetTypeLib` restituisce TYPE_E_CANTLOADLIBRARY). Utilizzare il [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) macro, che implementa anche `GetTypeInfoCount` e `GetTypeLibCache`.  
  
##  <a name="a-namegettypelibcachea--ccmdtargetgettypelibcache"></a><a name="gettypelibcache"></a>CCmdTarget::GetTypeLibCache  
 Ottiene la cache di libreria di tipi.  
  
```  
virtual CTypeLibCache* GetTypeLibCache();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un **CTypeLibCache** oggetto.  
  
### <a name="remarks"></a>Note  
 Le classi derivate devono eseguire l'override di questa funzione membro (se non sottoposto a override, **GetTypeLibCache** restituisce NULL). Utilizzare il [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) macro, che implementa anche `GetTypeInfoCount` e `GetTypeLib`.  
  
##  <a name="a-nameisinvokealloweda--ccmdtargetisinvokeallowed"></a><a name="isinvokeallowed"></a>CCmdTarget::IsInvokeAllowed  
 Questa funzione viene chiamata dall'implementazione MFC di **IDispatch:: Invoke** per determinare se un metodo di automazione specificato (identificato da `dispid`) può essere richiamato.  
  
```  
virtual BOOL IsInvokeAllowed(DISPID dispid);
```  
  
### <a name="parameters"></a>Parametri  
 `dispid`  
 Un ID di invio.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo può essere richiamato, in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Se `IsInvokeAllowed` restituisce TRUE, **Invoke** procede per chiamare il metodo; in caso contrario, `Invoke` , verrà restituito E_UNEXPECTED.  
  
 Le classi derivate possono eseguire l'override di questa funzione per restituire i valori appropriati (se non sottoposto a override, `IsInvokeAllowed` restituisce TRUE). Vedere in particolare [COleControl::IsInvokeAllowed](../../mfc/reference/colecontrol-class.md#isinvokeallowed).  
  
##  <a name="a-nameisresultexpecteda--ccmdtargetisresultexpected"></a><a name="isresultexpected"></a>CCmdTarget::IsResultExpected  
 Utilizzare `IsResultExpected` per determinare se un client prevede un valore restituito dalla chiamata a una funzione di automazione.  
  
```  
BOOL IsResultExpected();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se una funzione di automazione deve restituire un valore. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'interfaccia OLE fornisce informazioni di MFC che il client viene utilizzato o ignorando il risultato di una chiamata di funzione e MFC a sua volta utilizza queste informazioni per determinare il risultato di una chiamata a `IsResultExpected`. Se la produzione di un valore restituito o risorse-molto tempo, è possibile aumentare l'efficienza chiamando questa funzione prima di calcolare il valore restituito.  
  
 Questa funzione restituisce 0 solo una volta in modo che si otterranno i valori validi restituiti da altre funzioni di automazione se vengono chiamati dalla funzione di automazione che il client ha chiamato.  
  
 `IsResultExpected`Restituisce un valore diverso da zero se viene chiamato quando una chiamata di funzione di automazione non è in corso.  
  
##  <a name="a-nameoncmdmsga--ccmdtargetoncmdmsg"></a><a name="oncmdmsg"></a>CCmdTarget:: OnCmdMsg  
 Chiamato dal framework di indirizzare e inviare messaggi di comando e di gestire l'aggiornamento degli oggetti dell'interfaccia utente di comando.  
  
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
 Se non **NULL**, `OnCmdMsg` viene compilato il **pTarget** e **pmf** i membri del `pHandlerInfo` struttura anziché inviare il comando. In genere, questo parametro deve essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio è stato gestito; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa è la routine di implementazione principali dell'architettura di comando di framework.  
  
 In fase di esecuzione `OnCmdMsg` invia un comando ad altri oggetti o gestisce il comando chiamando la classe radice `CCmdTarget::OnCmdMsg`, che viene la ricerca effettiva mappa messaggi. Per una descrizione completa del routing dei comandi predefinito, vedere [la gestione dei messaggi e Mapping degli argomenti](../../mfc/message-handling-and-mapping.md).  
  
 In rari casi, si consiglia di eseguire l'override di questa funzione membro per estendere il framework routing dei comandi standard. Fare riferimento a [21 Nota tecnica](../../mfc/tn021-command-and-message-routing.md) per informazioni dettagliate avanzate dell'architettura di routing dei comandi.  
  
 Se esegue l'override `OnCmdMsg`, è necessario fornire il valore appropriato per `nCode`, il codice di notifica di comando, e `pExtra`, che dipende dal valore di `nCode`. Nella tabella seguente sono elencati i valori corrispondenti:  
  
|Valore di `nCode`|Valore di `pExtra`|  
|-------------------|--------------------|  
|CN_UPDATE_COMMAND_UI|[CCmdUI](../../mfc/reference/ccmdui-class.md)*|  
|CN_EVENT|AFX_EVENT *|  
|MEDIANTE|CCmdUI *|  
|CN_OLECOMMAND|[COleCmdUI](../../mfc/reference/colecmdui-class.md)*|  
|CN_OLE_UNREGISTER|NULL|  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#44;](../../mfc/codesnippet/cpp/ccmdtarget-class_2.cpp)]  
  
 [!code-cpp[N. NVC_MFCDocView&45;](../../mfc/codesnippet/cpp/ccmdtarget-class_3.cpp)]  
  
##  <a name="a-nameonfinalreleasea--ccmdtargetonfinalrelease"></a><a name="onfinalrelease"></a>CCmdTarget:: OnFinalRelease  
 Chiamato dal framework quando viene rilasciato l'ultimo riferimento OLE a o dall'oggetto.  
  
```  
virtual void OnFinalRelease();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per fornire una gestione speciale per questa situazione. L'implementazione predefinita consente di eliminare l'oggetto.  
  
##  <a name="a-namerestorewaitcursora--ccmdtargetrestorewaitcursor"></a><a name="restorewaitcursor"></a>CCmdTarget::RestoreWaitCursor  
 Chiamare questa funzione per ripristinare il cursore a clessidra appropriato dopo il cursore di sistema è stato modificato (ad esempio, dopo una finestra di messaggio ha aperto e chiuso mentre è in corso un'operazione lunga).  
  
```  
void RestoreWaitCursor();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#43;](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio ACDUAL](../../visual-cpp-samples.md)   
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


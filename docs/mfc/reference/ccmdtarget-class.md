---
title: CCmdTarget (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1dfc1c4d5cf753ae102d7656e94d63923004d2cc
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36955661"
---
# <a name="ccmdtarget-class"></a>CCmdTarget (classe)
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
|[CCmdTarget::BeginWaitCursor](#beginwaitcursor)|Visualizza il cursore come una clessidra.|  
|[CCmdTarget::DoOleVerb](#dooleverb)|Fa sì che un'azione specificata da un verbo OLE da eseguire.|  
|[CCmdTarget::EnableAutomation](#enableautomation)|Consente l'automazione OLE per il `CCmdTarget` oggetto.|  
|[CCmdTarget::EnableConnections](#enableconnections)|Abilita generazione dell'evento su punti di connessione.|  
|[CCmdTarget::EnableTypeLib](#enabletypelib)|Abilita libreria dei tipi dell'oggetto.|  
|[CCmdTarget::EndWaitCursor](#endwaitcursor)|Restituisce un valore per il cursore precedente.|  
|[CCmdTarget::EnumOleVerbs](#enumoleverbs)|Enumera i verbi di un oggetto OLE.|  
|[CCmdTarget::FromIDispatch](#fromidispatch)|Restituisce un puntatore ai `CCmdTarget` oggetto associato di `IDispatch` puntatore.|  
|[CCmdTarget::GetDispatchIID](#getdispatchiid)|Ottiene l'ID di interfaccia dispatch principale.|  
|[CCmdTarget::GetIDispatch](#getidispatch)|Restituisce un puntatore ai `IDispatch` oggetto associato di `CCmdTarget` oggetto.|  
|[CCmdTarget::GetTypeInfoCount](#gettypeinfocount)|Recupera il numero di interfacce di informazioni sul tipo che fornisce un oggetto.|  
|[CCmdTarget::GetTypeInfoOfGuid](#gettypeinfoofguid)|Recupera la descrizione del tipo che corrisponde al GUID specificato.|  
|[CCmdTarget::GetTypeLib](#gettypelib)|Ottiene un puntatore a una libreria dei tipi.|  
|[CCmdTarget::GetTypeLibCache](#gettypelibcache)|Ottiene la cache di libreria di tipi.|  
|[CCmdTarget::IsInvokeAllowed](#isinvokeallowed)|Abilita chiamata al metodo di automazione.|  
|[CCmdTarget::IsResultExpected](#isresultexpected)|Restituisce diverso da zero se una funzione di automazione devono restituire un valore.|  
|[CCmdTarget:: OnCmdMsg](#oncmdmsg)|Esegue il routing e invia i messaggi di comando.|  
|[CCmdTarget:: OnFinalRelease](#onfinalrelease)|La pulizia dopo l'ultimo riferimento OLE viene rilasciato.|  
|[CCmdTarget::RestoreWaitCursor](#restorewaitcursor)|Ripristina il cursore a clessidra.|  
  
## <a name="remarks"></a>Note  
 Una mappa messaggi instrada i messaggi o comandi alle funzioni membro che si scrive gestirli. (Un comando è un messaggio da una voce di menu, un pulsante di comando o un tasto di scelta rapida).  
  
 Chiave framework le classi derivate da `CCmdTarget` includono [CView](../../mfc/reference/cview-class.md), [CWinApp](../../mfc/reference/cwinapp-class.md), [CDocument](../../mfc/reference/cdocument-class.md), [CWnd](../../mfc/reference/cwnd-class.md), e [ CFrameWnd](../../mfc/reference/cframewnd-class.md). Se intende una nuova classe gestire i messaggi, derivare la classe da uno di questi `CCmdTarget`-classi derivate. Si verrà raramente derivare una classe da `CCmdTarget` direttamente.  
  
 Per una panoramica delle destinazioni comandi e `OnCmdMsg` routing, vedere [destinazioni comandi](../../mfc/command-targets.md), [comandi (Routing)](../../mfc/command-routing.md), e [Mapping di messaggi](../../mfc/mapping-messages.md).  
  
 `CCmdTarget` include funzioni membro che gestiscono la visualizzazione di un cursore a clessidra. Cursore a clessidra viene visualizzato quando si prevede che un comando per richiedere un intervallo di tempo significativo per l'esecuzione.  
  
 Mappe di invio, simile a mappe messaggi, vengono utilizzati per esporre l'automazione OLE `IDispatch` funzionalità. Esponendo questa interfaccia, è possono chiamare altre applicazioni (ad esempio Visual Basic) nell'applicazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CCmdTarget`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="beginwaitcursor"></a>  CCmdTarget::BeginWaitCursor  
 Chiamare questa funzione per visualizzare il cursore come una clessidra quando si prevede che un comando per richiedere un intervallo di tempo significativo per l'esecuzione.  
  
```  
void BeginWaitCursor();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione per indicare all'utente che è occupata, ad esempio quando un `CDocument` oggetto viene caricato o salvato automaticamente in un file.  
  
 Le azioni di `BeginWaitCursor` non sono sempre valide all'esterno di un singolo gestore di messaggi come altre azioni, ad esempio `OnSetCursor` gestione, è possibile modificare il cursore.  
  
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
 *iVerb*  
 Identificatore numerico del verbo.  
  
 *lpMsg*  
 Puntatore ai [MSG](http://msdn.microsoft.com/library/windows/desktop/ms644958) struttura che descrive l'evento (ad esempio, un doppio clic) richiamato dal verbo.  
  
 *hWndParent*  
 Punto di controllo della finestra del documento contenente l'oggetto.  
  
 *lpRect*  
 Puntatore ai [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) rettangolo di delimitazione della struttura che contiene le coordinate, in pixel, che definiscono un oggetto *hwndParent*.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'esito positivo, in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è un'implementazione di [IOleObject:: DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508). Le azioni possibili sono enumerate da [CCmdTarget::EnumOleVerbs](#enumoleverbs).  
  
##  <a name="enableautomation"></a>  CCmdTarget::EnableAutomation  
 Chiamare questa funzione per abilitare l'automazione OLE per un oggetto.  
  
```  
void EnableAutomation();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene in genere chiamata dal costruttore dell'oggetto e deve essere chiamata solo se una mappa di invio è stata dichiarata per la classe. Per ulteriori informazioni sull'automazione vedere gli articoli [i client di automazione](../../mfc/automation-clients.md) e [server di automazione](../../mfc/automation-servers.md).  
  
##  <a name="enableconnections"></a>  CCmdTarget::EnableConnections  
 Abilita generazione dell'evento su punti di connessione.  
  
```  
void EnableConnections();
```  
  
### <a name="remarks"></a>Note  
 Per abilitare i punti di connessione, chiamare questa funzione membro nel costruttore della classe derivata.  
  
##  <a name="enabletypelib"></a>  CCmdTarget::EnableTypeLib  
 Abilita libreria dei tipi dell'oggetto.  
  
```  
void EnableTypeLib();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro nel costruttore del `CCmdTarget`-oggetto derivato se contiene informazioni sul tipo. Per altre informazioni, vedere l'articolo della Knowledge Base Q185720, "procedura: fornire informazioni sul tipo da un Server di automazione MFC." Articoli della Knowledge Base sono disponibili in [ http://support.microsoft.com ](http://support.microsoft.com/).  
  
##  <a name="endwaitcursor"></a>  CCmdTarget::EndWaitCursor  
 Chiamare questa funzione dopo aver chiamato il `BeginWaitCursor` funzione membro da restituire dalla posizione del cursore clessidra fino al cursore precedente.  
  
```  
void EndWaitCursor();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione membro anche dopo aver chiamato il cursore a clessidra.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]  
  
##  <a name="enumoleverbs"></a>  CCmdTarget::EnumOleVerbs  
 Enumera i verbi di un oggetto OLE.  
  
```  
BOOL EnumOleVerbs(LPENUMOLEVERB* ppenumOleVerb);
```  
  
### <a name="parameters"></a>Parametri  
 *ppenumOleVerb*  
 Un puntatore a un puntatore a un [IEnumOLEVERB](http://msdn.microsoft.com/library/windows/desktop/ms695084) interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'oggetto supporta almeno un verbo OLE (nel qual caso \* *ppenumOleVerb* punta a un `IEnumOLEVERB` interfaccia dell'enumeratore), in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è un'implementazione di [IOleObject:: EnumVerbs](http://msdn.microsoft.com/library/windows/desktop/ms692781).  
  
##  <a name="fromidispatch"></a>  CCmdTarget::FromIDispatch  
 Chiamare questa funzione per eseguire il mapping di un `IDispatch` puntatore, ricevuti dalle funzioni membro di automazione di una classe, nelle `CCmdTarget` oggetto che implementa le interfacce del `IDispatch` oggetto.  
  
```  
static CCmdTarget* PASCAL FromIDispatch(LPDISPATCH lpDispatch);
```  
  
### <a name="parameters"></a>Parametri  
 *lpDispatch*  
 Puntatore a un oggetto `IDispatch` .  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `CCmdTarget` oggetto associato *lpDispatch*. Questa funzione restituisce **NULL** se il `IDispatch` oggetto non è riconosciuto come Microsoft Foundation Class `IDispatch` oggetto.  
  
### <a name="remarks"></a>Note  
 Il risultato di questa funzione è l'inverso di una chiamata alla funzione membro `GetIDispatch`.  
  
##  <a name="getdispatchiid"></a>  CCmdTarget::GetDispatchIID  
 Ottiene l'ID di interfaccia dispatch principale.  
  
```  
virtual BOOL GetDispatchIID(IID* pIID);
```  
  
### <a name="parameters"></a>Parametri  
 *pIID*  
 Un puntatore a un ID di interfaccia (un [GUID](http://msdn.microsoft.com/library/windows/desktop/aa373931)).  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'esito positivo, in caso contrario, FALSE. Se ha esito positivo, \* *pIID* è impostato per l'ID di interfaccia dispatch principale.  
  
### <a name="remarks"></a>Note  
 Le classi derivate devono eseguire l'override di questa funzione membro (se non viene sottoposto a override, `GetDispatchIID` restituisce FALSE). Vedere [COleControl](../../mfc/reference/colecontrol-class.md).  
  
 Per altre informazioni, vedere l'articolo della Knowledge Base Q185720, "procedura: fornire informazioni sul tipo da un Server di automazione MFC." Articoli della Knowledge Base sono disponibili in [ http://support.microsoft.com ](http://support.microsoft.com/).  
  
##  <a name="getidispatch"></a>  CCmdTarget::GetIDispatch  
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
 Per gli oggetti che chiamano `EnableAutomation` nei propri costruttori, rendendoli automazione abilitata, questa funzione restituisce un puntatore all'implementazione della classe Foundation `IDispatch` che viene usato dai client che comunicano tramite il `IDispatch` interfaccia. Chiamare questa funzione automaticamente aggiunge un riferimento al puntatore, pertanto non è necessario effettuare una chiamata a [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379).  
  
##  <a name="gettypeinfocount"></a>  CCmdTarget::GetTypeInfoCount  
 Recupera il numero di interfacce di informazioni sul tipo che fornisce un oggetto.  
  
```  
virtual UINT GetTypeInfoCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di interfacce di informazioni sul tipo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene implementata [IDispatch:: GetTypeInfoCount](http://msdn.microsoft.com/en-us/da876d53-cb8a-465c-a43e-c0eb272e2a12).  
  
 Le classi derivate devono eseguire l'override di questa funzione per restituire il numero di interfacce di informazioni sul tipo fornite (0 o 1). Se non viene sottoposto a override, `GetTypeInfoCount` restituisce 0. Per eseguire l'override, usare il [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) (macro), che implementa inoltre `GetTypeLib` e `GetTypeLibCache`.  
  
##  <a name="gettypeinfoofguid"></a>  CCmdTarget::GetTypeInfoOfGuid  
 Recupera la descrizione del tipo che corrisponde al GUID specificato.  
  
```  
HRESULT GetTypeInfoOfGuid(
    LCID lcid,  
    const GUID& guid,  
    LPTYPEINFO* ppTypeInfo);
```  
  
### <a name="parameters"></a>Parametri  
 *lcid*  
 Un identificatore delle impostazioni locali ( `LCID`).  
  
 *guid*  
 Il [GUID](http://msdn.microsoft.com/library/windows/desktop/aa373931) della descrizione del tipo.  
  
 *ppTypeInfo*  
 Puntatore a un puntatore per il `ITypeInfo` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT che indica l'esito positivo o negativo della chiamata. Se l'operazione riesce, * *ppTypeInfo* fa riferimento all'interfaccia di informazioni di tipo.  
  
##  <a name="gettypelib"></a>  CCmdTarget::GetTypeLib  
 Ottiene un puntatore a una libreria dei tipi.  
  
```  
virtual HRESULT GetTypeLib(
    LCID lcid,  
    LPTYPELIB* ppTypeLib);
```  
  
### <a name="parameters"></a>Parametri  
 *lcid*  
 Un identificatore delle impostazioni locali ( `LCID`).  
  
 *ppTypeLib*  
 Un puntatore a un puntatore per il `ITypeLib` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT che indica l'esito positivo o negativo della chiamata. Se l'operazione riesce, * *ppTypeLib* fa riferimento all'interfaccia di raccolta del tipo.  
  
### <a name="remarks"></a>Note  
 Le classi derivate devono eseguire l'override di questa funzione membro (se non viene sottoposto a override, `GetTypeLib` restituisce TYPE_E_CANTLOADLIBRARY). Usare la [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) (macro), che implementa inoltre `GetTypeInfoCount` e `GetTypeLibCache`.  
  
##  <a name="gettypelibcache"></a>  CCmdTarget::GetTypeLibCache  
 Ottiene la cache di libreria di tipi.  
  
```  
virtual CTypeLibCache* GetTypeLibCache();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CTypeLibCache` oggetto.  
  
### <a name="remarks"></a>Note  
 Le classi derivate devono eseguire l'override di questa funzione membro (se non viene sottoposto a override, `GetTypeLibCache` restituisce NULL). Usare la [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) (macro), che implementa inoltre `GetTypeInfoCount` e `GetTypeLib`.  
  
##  <a name="isinvokeallowed"></a>  CCmdTarget::IsInvokeAllowed  
 Questa funzione viene chiamata dall'implementazione di MFC `IDispatch::Invoke` per determinare se un metodo di automazione specificato (identificate *dispid*) può essere richiamato.  
  
```  
virtual BOOL IsInvokeAllowed(DISPID dispid);
```  
  
### <a name="parameters"></a>Parametri  
 *DISPID*  
 Un ID dispatch.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo può essere richiamato in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Se `IsInvokeAllowed` restituisce TRUE, `Invoke` consente di passare alla chiamata al metodo; in caso contrario, `Invoke` , verrà restituito E_UNEXPECTED.  
  
 Le classi derivate possono eseguire l'override di questa funzione per restituire i valori appropriati (se non viene sottoposto a override, `IsInvokeAllowed` restituisce TRUE). Vedere in particolare [COleControl::IsInvokeAllowed](../../mfc/reference/colecontrol-class.md#isinvokeallowed).  
  
##  <a name="isresultexpected"></a>  CCmdTarget::IsResultExpected  
 Utilizzare `IsResultExpected` per verificare se un client prevede un valore restituito dalla relativa chiamata a una funzione di automazione.  
  
```  
BOOL IsResultExpected();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se una funzione di automazione deve restituire un valore. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'interfaccia OLE fornisce informazioni a MFC indica se il client utilizza o ignorando il risultato di una chiamata di funzione e MFC a sua volta utilizza queste informazioni per determinare il risultato di una chiamata a `IsResultExpected`. Se la produzione di un valore restituito o risorsa-molto tempo, è possibile aumentare l'efficienza chiamando questa funzione prima di calcolare il valore restituito.  
  
 Questa funzione restituisce 0 solo una volta in modo che si otterranno i valori restituiti validi rispetto ad altre funzioni di automazione se chiamarle dalla funzione di automazione che il client ha chiamato.  
  
 `IsResultExpected` Restituisce un valore diverso da zero se viene chiamato quando una chiamata di funzione di automazione non è in corso.  
  
##  <a name="oncmdmsg"></a>  CCmdTarget:: OnCmdMsg  
 Chiamato dal framework per inviare o smistare messaggi di comando e per gestire l'aggiornamento dell'interfaccia utente di oggetti del comando.  
  
```  
virtual BOOL OnCmdMsg(
    UINT nID,  
    int nCode,  
    void* pExtra,  
    AFX_CMDHANDLERINFO* pHandlerInfo);
```  
  
### <a name="parameters"></a>Parametri  
 *nID*  
 Contiene l'ID di comando.  
  
 *nCode*  
 Identifica il codice di notifica comando. Vedere **osservazioni** per ulteriori informazioni sui valori per *nCode*.  
  
 *pExtra*  
 Utilizzato in base al valore di *nCode*. Vedere **osservazioni** per ulteriori informazioni sulle *pExtra*.  
  
 *pHandlerInfo*  
 In caso contrario **NULL**, `OnCmdMsg` compila il *pTarget* e *pmf* i membri della *pHandlerInfo* struttura invece dell'invio il comando. In genere, questo parametro deve essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio viene gestito; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa è la routine di implementazione principali dell'architettura di comando di framework.  
  
 In fase di esecuzione `OnCmdMsg` invia un comando ad altri oggetti o gestisce il comando stesso chiamando la classe radice `CCmdTarget::OnCmdMsg`, che venga eseguita ricerca la mappa messaggi effettivo. Per una descrizione completa del routing dei comandi predefiniti, vedere [la gestione dei messaggi e Mapping argomenti](../../mfc/message-handling-and-mapping.md).  
  
 In rari casi, è possibile eseguire l'override di questa funzione membro per estendere il framework routing dei comandi standard. Fare riferimento a [21 Nota tecnica](../../mfc/tn021-command-and-message-routing.md) per informazioni dettagliate avanzate dell'architettura di routing dei comandi.  
  
 Se esegue l'override `OnCmdMsg`, è necessario fornire il valore appropriato per *nCode*, il codice di notifica comando, e *pExtra*, che dipende dal valore del *nCode* . Nella tabella seguente sono elencati i valori corrispondenti:  
  
|*nCode* valore|*pExtra* valore|  
|-------------------|--------------------|  
|CN_UPDATE_COMMAND_UI|[CCmdUI](../../mfc/reference/ccmdui-class.md)*|  
|CN_EVENT|AFX_EVENT *|  
|MEDIANTE|CCmdUI *|  
|CN_OLECOMMAND|[COleCmdUI](../../mfc/reference/colecmdui-class.md)*|  
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
 Eseguire l'override di questa funzione per fornire una gestione speciale per questa situazione. L'implementazione predefinita viene eliminato l'oggetto.  
  
##  <a name="restorewaitcursor"></a>  CCmdTarget::RestoreWaitCursor  
 Chiamare questa funzione per ripristinare il cursore a clessidra appropriato dopo il cursore di sistema è stato modificato (ad esempio, dopo che una finestra di messaggio ha aperto e quindi viene chiusa durante l'esecuzione di un'operazione di lunga durata).  
  
```  
void RestoreWaitCursor();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC ACDUAL](../../visual-cpp-samples.md)   
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

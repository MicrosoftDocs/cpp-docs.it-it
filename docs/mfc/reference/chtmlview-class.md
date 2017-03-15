---
title: Classe CHtmlView | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CHtmlView
dev_langs:
- C++
helpviewer_keywords:
- browsers, MFC support for
- CHtmlView class
- WebBrowser control
- WebBrowser control, MFC support
ms.assetid: 904976af-73de-4aba-84ac-cfae8e2be09a
caps.latest.revision: 24
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: d9d96ab02a0c49a2ece12c933f5d550a46204a39
ms.lasthandoff: 02/24/2017

---
# <a name="chtmlview-class"></a>CHtmlView (classe)
Fornisce la funzionalità del controllo WebBrowser nel contesto dell'architettura documento/visualizzazione di MFC.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CHtmlView : public CFormView  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHtmlView::Create](#create)|Crea il controllo WebBrowser.|  
|[CHtmlView::CreateControlSite](#createcontrolsite)|Overridable usato per creare un'istanza del sito del controllo per ospitare un controllo nel form.|  
|[CHtmlView::ExecFormsCommand](#execformscommand)|Esegue il comando specificato usando il metodo `IOleCommandTarget::Exec` .|  
|[CHtmlView::ExecWB](#execwb)|Esegue un comando.|  
|[CHtmlView::GetAddressBar](#getaddressbar)|Determina se la barra degli indirizzi dell'oggetto Internet Explorer è visibile. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::GetApplication](#getapplication)|Recupera un oggetto applicazione che rappresenta l'applicazione contenente l'istanza corrente dell'applicazione Internet Explorer.|  
|[CHtmlView::GetBusy](#getbusy)|Recupera un valore che indica se è ancora in corso un download o un'altra attività.|  
|[CHtmlView::GetContainer](#getcontainer)|Recupera il contenitore del controllo WebBrowser.|  
|[CHtmlView::GetFullName](#getfullname)|Recupera il nome completo, incluso il percorso, della risorsa visualizzata nel Web browser. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::GetFullScreen](#getfullscreen)|Indica se il controllo WebBrowser opera in modalità a schermo intero o in modalità normale.|  
|[CHtmlView::GetHeight](#getheight)|Recupera l'altezza della finestra principale di Internet Explorer.|  
|[CHtmlView::GetHtmlDocument](#gethtmldocument)|Recupera il documento HTML attivo.|  
|[CHtmlView::GetLeft](#getleft)|Recupera le coordinate dello schermo del bordo sinistro della finestra principale di Internet Explorer.|  
|[CHtmlView::GetLocationName](#getlocationname)|Recupera il nome della risorsa che è attualmente visualizzata in WebBrowser|  
|[CHtmlView::GetLocationURL](#getlocationurl)|Recupera l'URL della risorsa che è attualmente visualizzata in WebBrowser.|  
|[CHtmlView::GetMenuBar](#getmenubar)|Recupera un valore che determina se la barra dei menu è visibile.|  
|[CHtmlView::GetOffline](#getoffline)|Recupera un valore che determina se il controllo è offline.|  
|[CHtmlView::GetParentBrowser](#getparentbrowser)|Recupera un puntatore all'interfaccia `IDispatch` . Per ulteriori informazioni, vedere [che implementa l'interfaccia IDispatch](http://msdn.microsoft.com/en-us/0e171f7f-0022-4e9b-ac8e-98192828e945).|  
|[CHtmlView::GetProperty](#getproperty)|Recupera il valore corrente di una proprietà associata all'oggetto specificato.|  
|[CHtmlView::GetReadyState](#getreadystate)|Recupera lo stato di pronto dell'oggetto del Web browser.|  
|[CHtmlView::GetRegisterAsBrowser](#getregisterasbrowser)|Indica se il controllo WebBrowser viene registrato come browser di livello superiore per la risoluzione dei nomi di destinazione.|  
|[CHtmlView::GetRegisterAsDropTarget](#getregisterasdroptarget)|Indica se il controllo WebBrowser viene registrato come destinazione di rilascio per la navigazione.|  
|[CHtmlView::GetSilent](#getsilent)|Indica se è possibile visualizzare qualsiasi finestra di dialogo.|  
|[CHtmlView::GetSource](#getsource)|Il codice sorgente HTML della pagina Web.|  
|[CHtmlView::GetStatusBar](#getstatusbar)|Indica se la barra di stato di Internet Explorer è visibile. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::GetTheaterMode](#gettheatermode)|Indica se il controllo WebBrowser è in modalità schermo intero.|  
|[CHtmlView::GetToolBar](#gettoolbar)|Recupera un valore che determina se la barra degli strumenti è visibile.|  
|[CHtmlView::GetTop](#gettop)|Recupera le coordinate dello schermo del bordo destro della finestra principale di Internet Explorer.|  
|[CHtmlView::GetTopLevelContainer](#gettoplevelcontainer)|Recupera un valore che indica se l'oggetto corrente è il contenitore di livello superiore del controllo WebBrowser.|  
|[CHtmlView::GetType](#gettype)|Recupera il nome del tipo dell'oggetto documento.|  
|[CHtmlView::GetVisible](#getvisible)|Recupera un valore che indica se l'oggetto è visibile o nascosto.|  
|[CHtmlView::GetWidth](#getwidth)|Recupera la larghezza della finestra principale di Internet Explorer.|  
|[CHtmlView::GoBack](#goback)|Passa all'elemento precedente nell'elenco di cronologia.|  
|[CHtmlView::GoForward](#goforward)|Passa all'elemento successivo nell'elenco di cronologia.|  
|[CHtmlView::GoHome](#gohome)|Consente di passare alla home page o alla pagina iniziale corrente.|  
|[CHtmlView::GoSearch](#gosearch)|Passa alla pagina di ricerca corrente.|  
|[CHtmlView::LoadFromResource](#loadfromresource)|Carica una risorsa nel controllo WebBrowser.|  
|[CHtmlView::Navigate](#navigate)|Passa alla risorsa identificata da un URL.|  
|[CHtmlView::Navigate2](#navigate2)|Passa alla risorsa identificata da un URL o al file identificato da un percorso completo.|  
|[CHtmlView::OnBeforeNavigate2](#onbeforenavigate2)|Chiamata eseguita prima di una navigazione con il controllo WebBrowser dato (sia su una finestra che su una pagina con frame).|  
|[CHtmlView::OnCommandStateChange](#oncommandstatechange)|Chiamata eseguita per notificare a un'applicazione che lo stato di abilitazione di un comando del Web browser è cambiato.|  
|[CHtmlView::OnDocumentComplete](#ondocumentcomplete)|Chiamata eseguita per notificare a un'applicazione che un documento ha raggiunto lo stato `READYSTATE_COMPLETE` .|  
|[CHtmlView::OnDocWindowActivate](#ondocwindowactivate)|Chiamato dall'implementazione di Internet Explorer o MSHTML di [IOleInPlaceActiveObject::OnDocWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms687281), l'oggetto attivo sul posto che invia una notifica quando la finestra di documento del contenitore è attivata o disattivata.|  
|[CHtmlView::OnDownloadBegin](#ondownloadbegin)|Chiamata eseguita per notificare a un'applicazione l'inizio di un'operazione di navigazione.|  
|[CHtmlView::OnDownloadComplete](#ondownloadcomplete)|Chiamata eseguita quando un'operazione di navigazione termina, viene bloccata o ha esito negativo.|  
|[CHtmlView::OnEnableModeless](#onenablemodeless)|Chiamata eseguita per abilitare o disabilitare le finestre di dialogo non modali quando un contenitore crea o elimina una finestra di dialogo modale.|  
|[CHtmlView::OnFilterDataObject](#onfilterdataobject)|Chiamata eseguita sull'host da Internet Explorer o MSHTML per consentire all'host di sostituire l'oggetto dati di Internet Explorer o MSHTML.|  
|[CHtmlView::OnFrameWindowActivate](#onframewindowactivate)|Chiamato da [IOleInPlaceActiveObject::OnFrameWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms683969) per notificare all'oggetto quando il contenitore di primo livello della finestra cornice è attivata o disattivata.|  
|[CHtmlView::OnFullScreen](#onfullscreen)|Chiamata eseguita quando la proprietà FullScreen viene modificata.|  
|[CHtmlView::OnGetDropTarget](#ongetdroptarget)|Chiamato da Internet Explorer o MSHTML quando viene utilizzato come destinazione di trascinamento per consentire all'host di fornire un'alternativa [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679).|  
|[CHtmlView::OnGetExternal](#ongetexternal)|Chiamata eseguita da Internet Explorer o MSHTML per ottenere l'interfaccia dell'host `IDispatch` .|  
|[CHtmlView::OnGetHostInfo](#ongethostinfo)|Recupera le funzionalità dell'interfaccia utente dell'host di Internet Explorer o MSHTML.|  
|[CHtmlView::OnGetOptionKeyPath](#ongetoptionkeypath)|Restituisce la chiave del Registro di sistema in cui Internet Explorer o MSHTML archivia le preferenze dell'utente.|  
|[CHtmlView::OnHideUI](#onhideui)|Chiamata eseguita quando Internet Explorer o MSHTML rimuove i menu e le barre degli strumenti.|  
|[CHtmlView::OnMenuBar](#onmenubar)|Chiamata eseguita quando la proprietà MenuBar viene modificata.|  
|[CHtmlView::OnNavigateComplete2](#onnavigatecomplete2)|Chiamata eseguita dopo una navigazione a un collegamento ipertestuale (sia su una finestra che su una pagina con frame).|  
|[CHtmlView::OnNavigateError](#onnavigateerror)|Chiamata eseguita dal framework in caso di errore di un collegamento ipertestuale.|  
|[CHtmlView::OnNewWindow2](#onnewwindow2)|Chiamata eseguita quando occorre creare una nuova finestra per visualizzare una risorsa.|  
|[CHtmlView::OnProgressChange](#onprogresschange)|Chiamata eseguita per notificare a un'applicazione che lo stato di avanzamento di un'operazione di download è stato aggiornato.|  
|[CHtmlView::OnPropertyChange](#onpropertychange)|Chiamato per notificare a un'applicazione che la [PutProperty](#putproperty) metodo ha modificato il valore di una proprietà.|  
|[CHtmlView::OnQuit](#onquit)|Chiamata eseguita per notificare a un'applicazione che l'applicazione Internet Explorer è pronta per essere chiusa (si applica solo a Internet Explorer).|  
|[CHtmlView::OnResizeBorder](#onresizeborder)|Chiamato dall'implementazione di Internet Explorer o MSHTML di [IOleInPlaceActiveObject::ResizeBorder](http://msdn.microsoft.com/library/windows/desktop/ms680053), che avvisa l'oggetto che è necessario ridimensionare il relativo spazio di bordo.|  
|[CHtmlView::OnShowContextMenu](#onshowcontextmenu)|Chiamata eseguita da Internet Explorer o MSHTML quando sta per visualizzare il menu di scelta rapida.|  
|[CHtmlView::OnShowUI](#onshowui)|Chiamata eseguita prima che Internet Explorer o MSHTML visualizzi i menu e le barre degli strumenti.|  
|[CHtmlView::OnStatusBar](#onstatusbar)|Chiamata eseguita quando la proprietà StatusBar viene modificata.|  
|[CHtmlView::OnStatusTextChange](#onstatustextchange)|Chiamata eseguita per notificare a un'applicazione che il testo della barra di stato associata al controllo WebBrowser è cambiato.|  
|[CHtmlView::OnTheaterMode](#ontheatermode)|Chiamata eseguita quando la proprietà TheaterMode viene modificata.|  
|[CHtmlView::OnTitleChange](#ontitlechange)|Chiamata eseguita per notificare a un'applicazione che il titolo di un documento nel controllo WebBrowser diviene disponibile o cambia.|  
|[CHtmlView::OnToolBar](#ontoolbar)|Chiamata eseguita quando la proprietà ToolBar viene modificata.|  
|[CHtmlView::OnTranslateAccelerator](#ontranslateaccelerator)|Chiamato da Internet Explorer o MSHTML quando [IOleInPlaceActiveObject::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693360) o [IOleControlSite::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693756) viene chiamato per elaborare i messaggi di tasto di scelta rapida di menu dalla coda di messaggi del contenitore.|  
|[CHtmlView::OnTranslateUrl](#ontranslateurl)|Chiamata eseguita da Internet Explorer o MSHTML per consentire all'host la possibilità di modificare l'URL che deve essere caricato.|  
|[CHtmlView::OnUpdateUI](#onupdateui)|Notifica all'host che lo stato del comando è stato modificato.|  
|[CHtmlView::OnVisible](#onvisible)|Chiamata eseguita quando la finestra del controllo WebBrowser deve essere mostrata o nascosta.|  
|[CHtmlView::PutProperty](#putproperty)|Imposta il valore di una proprietà associata all'oggetto specificato.|  
|[CHtmlView::QueryFormsCommand](#queryformscommand)|Query per lo stato di uno o più comandi generati dagli eventi dell'interfaccia utente.|  
|[CHtmlView::QueryStatusWB](#querystatuswb)|Esegue la query dello stato di un comando elaborato dal controllo WebBrowser.|  
|[CHtmlView::Refresh](#refresh)|Ricarica il file corrente.|  
|[CHtmlView::Refresh2](#refresh2)|Ricarica il file corrente e, facoltativamente, impedisce l'invio dell'intestazione `pragma:nocache` .|  
|[CHtmlView::SetAddressBar](#setaddressbar)|Mostra o nasconde la barra degli indirizzi dell'oggetto Internet Explorer. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::SetFullScreen](#setfullscreen)|Imposta un valore per determinare se il controllo opera in modalità a schermo intero o in modalità normale. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::SetHeight](#setheight)|Imposta l'altezza della finestra principale di Internet Explorer.|  
|[CHtmlView::SetLeft](#setleft)|Imposta la posizione orizzontale della finestra principale di Internet Explorer.|  
|[CHtmlView::SetMenuBar](#setmenubar)|Imposta un valore per determinare se la barra dei menu del controllo è visibile. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::SetOffline](#setoffline)|Imposta un valore per determinare se il controllo è offline.|  
|[CHtmlView::SetRegisterAsBrowser](#setregisterasbrowser)|Imposta un valore che indica se il controllo WebBrowser viene registrato come browser di livello superiore per la risoluzione dei nomi di destinazione.|  
|[CHtmlView::SetRegisterAsDropTarget](#setregisterasdroptarget)|Imposta un valore che indica se il controllo WebBrowser viene registrato come destinazione di rilascio per la navigazione.|  
|[CHtmlView::SetSilent](#setsilent)|Imposta un valore per determinare se il controllo consente di visualizzare finestre di dialogo.|  
|[CHtmlView::SetStatusBar](#setstatusbar)|Imposta un valore per determinare se la barra di stato di Internet Explorer è visibile. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::SetTheaterMode](#settheatermode)|Imposta un valore che indica se il controllo WebBrowser è in modalità schermo intero.|  
|[CHtmlView::SetToolBar](#settoolbar)|Imposta un valore per determinare se la barra degli strumenti del controllo è visibile. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::SetTop](#settop)|Imposta la posizione verticale della finestra principale di Internet Explorer.|  
|[CHtmlView::SetVisible](#setvisible)|Imposta un valore che indica se l'oggetto è visibile o nascosto.|  
|[CHtmlView::SetWidth](#setwidth)|Imposta la larghezza della finestra principale di Internet Explorer.|  
|[CHtmlView::Stop](#stop)|Interrompe l'apertura di un file.|  
  
## <a name="remarks"></a>Note  
 Il controllo WebBrowser è una finestra in cui l'utente può esplorare siti nel Web, nonché le cartelle nel file system locale e in una rete. Il controllo WebBrowser supporta collegamenti ipertestuali, la navigazione con URL (Uniform Resource Locator) e conserva un elenco di cronologia.  
  
## <a name="using-the-chtmlview-class-in-an-mfc-application"></a>Uso della classe CHtmlView in un'applicazione MFC  
 Nell'applicazione framework MFC standard (basata su SDI o MDI) l'oggetto visualizzazione deriva comunemente da un set di classi specializzato. Queste classi, tutte derivate da `CView`, offrono funzionalità specializzate oltre a quelle fornite da `CView`.  
  
 Basando la classe visualizzazione dell'applicazione su `CHtmlView` fornisce la visualizzazione con il controllo WebBrowser. Ciò rende effettivamente l'applicazione un Web browser. Il metodo preferito per creare un'applicazione di tipo Web browser consiste nell'usare la Creazione guidata applicazione MFC e specificare `CHtmlView` come classe visualizzazione. Per ulteriori informazioni sull'implementazione e l'utilizzo del controllo WebBrowser all'interno di applicazioni MFC, vedere [creazione di un'applicazione di tipo Browser Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md).  
  
> [!NOTE]
>  Il controllo ActiveX WebBrowser (e quindi `CHtmlView`) è disponibile solo per i programmi in esecuzione in Windows NT 4.0 o versioni successive, in cui è installato Internet Explorer 4.0 o versione successiva.  
  
 `CHtmlView`è progettato per le applicazioni che accedono al Web (e/o documenti HTML). Le funzioni membro `CHtmlView` seguenti sono relative solo all'applicazione Internet Explorer. Queste funzioni verranno eseguite sul controllo WebBrowser, ma non hanno alcun effetto visibile.  
  
- [GetAddressBar](#getaddressbar)  
  
- [GetFullName](#getfullname)  
  
- [GetStatusBar](#getstatusbar)  
  
- [SetAddressBar](#setaddressbar)  
  
- [SetFullScreen](#setfullscreen)  
  
- [SetMenuBar](#setmenubar)  
  
- [SetStatusBar](#setstatusbar)  
  
- [SetToolBar](#settoolbar)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 [CFormView](../../mfc/reference/cformview-class.md)  
  
 `CHtmlView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxhtml.h  
  
##  <a name="a-namecreatea--chtmlviewcreate"></a><a name="create"></a>CHtmlView::Create  
 Chiamare questa funzione membro per creare eseguibile un controllo WebBrowser o un contenitore per Internet Explorer.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszClassName,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszClassName`  
 Punta a una stringa di caratteri con terminazione null che denomina la classe di Windows. Il nome della classe può essere qualsiasi nome registrato con il [AfxRegisterWndClass](../../mfc/reference/application-information-and-management.md#afxregisterwndclass) funzione globale o **RegisterClass** funzione di Windows. Se **NULL**, utilizza il valore predefinito predefinito [CFrameWnd](../../mfc/reference/cframewnd-class.md) attributi.  
  
 `lpszWindowName`  
 Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra.  
  
 `dwStyle`  
 Specifica gli attributi di stile di finestra. Per impostazione predefinita, il **WS_VISIBLE** e **WS_CHILD** gli stili di Windows vengono impostati.  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica le dimensioni e posizione della finestra. Il `rectDefault` valore consente di specificare le dimensioni e posizione della nuova finestra.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 Il numero ID della vista. Per impostazione predefinita, **AFX_IDW_PANE_FIRST**.  
  
 `pContext`  
 Un puntatore a un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md). **NULL** per impostazione predefinita.  
  
##  <a name="a-namecreatecontrolsitea--chtmlviewcreatecontrolsite"></a><a name="createcontrolsite"></a>CHtmlView::CreateControlSite  
 Overridable usato per creare un'istanza del sito del controllo per ospitare un controllo nel form.  
  
```  
virtual BOOL CreateControlSite(
    COleControlContainer* pContainer,  
    COleControlSite** ppSite,  
    UINT nID,  
    REFCLSID clsid);
```  
  
### <a name="parameters"></a>Parametri  
 `pContainer`  
 Un puntatore a un [COleControlContainer](../../mfc/reference/colecontrolcontainer-class.md) oggetto che contiene il controllo.  
  
 `ppSite`  
 Un puntatore a un puntatore a un [COleControlSite](../../mfc/reference/colecontrolsite-class.md) oggetto, che fornisce il sito per il controllo.  
  
 `nID`  
 L'identificatore del controllo deve essere ospitato.  
  
 `clsid`  
 Il CLSID del controllo deve essere ospitato  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 È possibile eseguire l'override di questa funzione membro per restituire un'istanza della classe sito controllo.  
  
##  <a name="a-nameexecformscommanda--chtmlviewexecformscommand"></a><a name="execformscommand"></a>CHtmlView::ExecFormsCommand  
 Esegue il comando specificato usando il metodo `IOleCommandTarget::Exec` .  
  
```  
HRESULT ExecFormsCommand(
    DWORD dwCommandID,  
    VARIANT* pVarIn,  
    VARIANT* pVarOut);
```  
  
### <a name="parameters"></a>Parametri  
 `dwCommandID`  
 Comando da eseguire. Questo comando deve appartenere al **CMDSETID3_Forms3** gruppo.  
  
 *pVarIn*  
 Puntatore a un **VARIANT** struttura che contiene gli argomenti di input. Può essere **NULL**.  
  
 *pVarOut*  
 Puntatore a un **VARIANT** struttura per la ricezione dell'output del comando. Può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard. Per un elenco completo dei valori possibili, vedere [IOleCommandTarget::Exec](http://msdn.microsoft.com/library/windows/desktop/ms690300) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 **ExecFormsCommand** implementa il comportamento di [IOleCommandTarget::Exec](http://msdn.microsoft.com/library/windows/desktop/ms690300) metodo.  
  
##  <a name="a-nameexecwba--chtmlviewexecwb"></a><a name="execwb"></a>CHtmlView::ExecWB  
 Chiamare questa funzione membro per eseguire un comando nel WebBrowser o Internet Explorer.  
  
```  
void ExecWB(
    OLECMDID cmdID,  
    OLECMDEXECOPT cmdexecopt,  
    VARIANT* pvaIn,  
    VARIANT* pvaOut);
```  
  
### <a name="parameters"></a>Parametri  
 `cmdID`  
 Comando da eseguire.  
  
 *cmdexecopt*  
 Le opzioni impostate per l'esecuzione del comando.  
  
 `pvaIn`  
 Valore variant utilizzato per specificare gli argomenti di input di comando.  
  
 *pvaOut*  
 Valore variant utilizzato per specificare argomenti di output del comando.  
  
### <a name="remarks"></a>Note  
 Vedere [IWebBrowser2::ExecWB](https://msdn.microsoft.com/library/aa752117.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetaddressbara--chtmlviewgetaddressbar"></a><a name="getaddressbar"></a>CHtmlView::GetAddressBar  
 Chiamare questa funzione membro per recuperare una barra degli indirizzi di Internet Explorer.  
  
```  
BOOL GetAddressBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la barra degli indirizzi è visibile; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a Internet Explorer. Se si utilizza questa chiamata con un controllo WebBrowser, non verrà restituito alcun errore, ma lo ignora questa chiamata.  
  
##  <a name="a-namegetapplicationa--chtmlviewgetapplication"></a><a name="getapplication"></a>CHtmlView::GetApplication  
 Chiamare questa funzione membro per recuperare l'oggetto di automazione supportato dall'applicazione che contiene il controllo WebBrowser.  
  
```  
LPDISPATCH GetApplication() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `IDispatch` interfaccia dell'oggetto documento attivo. Per ulteriori informazioni, vedere [che implementa l'interfaccia IDispatch](http://msdn.microsoft.com/en-us/0e171f7f-0022-4e9b-ac8e-98192828e945).  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetbusya--chtmlviewgetbusy"></a><a name="getbusy"></a>CHtmlView::GetBusy  
 Chiamare questa funzione membro per determinare se il controllo WebBrowser è impegnato in un'operazione download o spostamento.  
  
```  
BOOL GetBusy() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il browser web è occupato. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetcontainera--chtmlviewgetcontainer"></a><a name="getcontainer"></a>CHtmlView::GetContainer  
 Chiamare questa funzione membro per recuperare un oggetto che restituisce il contenitore del browser web.  
  
```  
LPDISPATCH GetContainer() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `IDispatch` interfaccia dell'oggetto documento attivo.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetfullnamea--chtmlviewgetfullname"></a><a name="getfullname"></a>CHtmlView::GetFullName  
 Chiamare questa funzione membro per recuperare il percorso completo del file di Internet Explorer è attualmente visualizzato.  
  
```  
CString GetFullName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il percorso e il nome del file attualmente visualizzato. Se nessun percorso e nome file esiste, `GetFullName` restituisce un oggetto vuoto `CString`.  
  
### <a name="remarks"></a>Note  
 Si applica a Internet Explorer. Se si utilizza questa chiamata con un controllo WebBrowser, non verrà restituito alcun errore, ma lo ignora questa chiamata.  
  
##  <a name="a-namegetfullscreena--chtmlviewgetfullscreen"></a><a name="getfullscreen"></a>CHtmlView::GetFullScreen  
 Chiamare questa funzione membro per determinare se il controllo WebBrowser funziona in modalità a schermo intero o in modalità normale.  
  
```  
BOOL GetFullScreen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il browser è in esecuzione in modalità schermo intero. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 In modalità a schermo intero, viene ingrandita la finestra principale di Internet Explorer e la barra di stato, sulla barra degli strumenti, barra dei menu e barra del titolo sono nascoste.  
  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetheighta--chtmlviewgetheight"></a><a name="getheight"></a>CHtmlView::GetHeight  
 Chiamare questa funzione membro per recuperare l'altezza, in pixel, della finestra cornice del controllo WebBrowser.  
  
```  
long GetHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Frame altezza finestra del controllo in pixel.  
  
##  <a name="a-namegethtmldocumenta--chtmlviewgethtmldocument"></a><a name="gethtmldocument"></a>CHtmlView::GetHtmlDocument  
 Chiamare questa funzione membro per recuperare il documento HTML per il documento attivo.  
  
```  
LPDISPATCH GetHtmlDocument() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `IDispatch` interfaccia dell'oggetto documento attivo.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetlefta--chtmlviewgetleft"></a><a name="getleft"></a>CHtmlView::GetLeft  
 Chiamare questa funzione membro per recuperare la distanza tra il margine interno sinistro del controllo WebBrowser e il bordo sinistro del relativo contenitore.  
  
```  
long GetLeft() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La distanza di un bordo sinistro, in pixel.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetlocationnamea--chtmlviewgetlocationname"></a><a name="getlocationname"></a>CHtmlView::GetLocationName  
 Chiamare questa funzione membro per ottenere il nome della risorsa visualizzato nel controllo WebBrowser.  
  
```  
CString GetLocationName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il nome della risorsa attualmente visualizzato nel WebBrowser.  
  
### <a name="remarks"></a>Note  
 Se la risorsa è una pagina HTML sul World Wide Web, il nome è il titolo della pagina. Se la risorsa è una cartella o un file nella rete o nel computer locale, il nome è il percorso UNC o completo della cartella o file.  
  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetlocationurla--chtmlviewgetlocationurl"></a><a name="getlocationurl"></a>CHtmlView::GetLocationURL  
 Chiamare questa funzione membro per recuperare l'URL della risorsa che il controllo WebBrowser è attualmente visualizzato.  
  
```  
CString GetLocationURL() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente l'URL della risorsa attualmente visualizzata nel WebBrowser.  
  
### <a name="remarks"></a>Note  
 Se la risorsa è una cartella o un file nella rete o nel computer locale, il nome è il percorso UNC o completo della cartella o file.  
  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetmenubara--chtmlviewgetmenubar"></a><a name="getmenubar"></a>CHtmlView::GetMenuBar  
 Chiamare questa funzione membro per determinare se la barra dei menu è visibile.  
  
```  
BOOL GetMenuBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la barra dei menu è visibile; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetofflinea--chtmlviewgetoffline"></a><a name="getoffline"></a>CHtmlView::GetOffline  
 Chiamare questa funzione membro per determinare se il browser opera in modalità offline.  
  
```  
BOOL GetOffline() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il browser web è attualmente offline; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetparentbrowsera--chtmlviewgetparentbrowser"></a><a name="getparentbrowser"></a>CHtmlView::GetParentBrowser  
 Chiamare questa funzione membro per recuperare un puntatore all'oggetto padre del controllo WebBrowser.  
  
```  
LPDISPATCH GetParentBrowser() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `IDispatch` interfaccia dell'oggetto che rappresenta l'elemento padre del controllo WebBrowser.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetpropertya--chtmlviewgetproperty"></a><a name="getproperty"></a>CHtmlView::GetProperty  
 Chiamare questa funzione membro per ottenere il valore della proprietà attualmente associato al controllo.  
  
```  
BOOL GetProperty(
    LPCTSTR lpszProperty,  
    CString& strValue);  
  
COleVariant GetProperty(LPCTSTR lpszProperty);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszProperty`  
 Un puntatore a una stringa contenente la proprietà da recuperare.  
  
 `strValue`  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che riceve il valore corrente della proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Nella prima versione, diverso da zero se è stata completata correttamente. in caso contrario, zero. Nella seconda versione, un [COleVariant](../../mfc/reference/colevariant-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetreadystatea--chtmlviewgetreadystate"></a><a name="getreadystate"></a>CHtmlView::GetReadyState  
 Chiamare questa funzione membro per recuperare lo stato di pronto dell'oggetto WebBrowser.  
  
```  
READYSTATE GetReadyState() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [READYSTATE](https://msdn.microsoft.com/library/aa768362.aspx) valore, come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetregisterasbrowsera--chtmlviewgetregisterasbrowser"></a><a name="getregisterasbrowser"></a>CHtmlView::GetRegisterAsBrowser  
 Chiamare questa funzione membro per determinare se l'oggetto WebBrowser viene registrato come un browser di livello superiore per la risoluzione dei nomi di destinazione.  
  
```  
BOOL GetRegisterAsBrowser() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il browser è registrato come un browser di livello superiore. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetregisterasdroptargeta--chtmlviewgetregisterasdroptarget"></a><a name="getregisterasdroptarget"></a>CHtmlView::GetRegisterAsDropTarget  
 Chiamare questa funzione membro per determinare se il controllo WebBrowser viene registrato come destinazione di rilascio per la navigazione.  
  
```  
BOOL GetRegisterAsDropTarget() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il browser viene registrato come destinazione di trascinamento; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetsilenta--chtmlviewgetsilent"></a><a name="getsilent"></a>CHtmlView::GetSilent  
 Chiamare questa funzione membro per determinare se eventuali finestre di dialogo possono essere visualizzate nel controllo WebBrowser.  
  
```  
BOOL GetSilent() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le finestre di dialogo non possono essere visualizzate dal controllo WebBrowser; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetsourcea--chtmlviewgetsource"></a><a name="getsource"></a>CHtmlView::GetSource  
 Chiamare questa funzione membro per recuperare il codice sorgente HTML della pagina web.  
  
```  
BOOL GetSource(CString& strRef);
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="parameters"></a>Parametri  
 `refString`  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che conterrà il codice sorgente.  
  
### <a name="remarks"></a>Note  
 Questa funzione è equivalente al comando "HTML" in Internet Explorer, ad eccezione del fatto che viene restituito il codice di origine un `CString`.  
  
##  <a name="a-namegetstatusbara--chtmlviewgetstatusbar"></a><a name="getstatusbar"></a>CHtmlView::GetStatusBar  
 Chiamare questa funzione membro per determinare se il controllo WebBrowser visualizza una barra di stato.  
  
```  
BOOL GetStatusBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la barra di stato può essere visualizzata. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a Internet Explorer. Se si utilizza questa chiamata con un controllo WebBrowser, non verrà restituito alcun errore, ma lo ignora questa chiamata.  
  
##  <a name="a-namegettheatermodea--chtmlviewgettheatermode"></a><a name="gettheatermode"></a>CHtmlView::GetTheaterMode  
 Chiamare questa funzione membro per determinare se il browser web è in modalità teatro.  
  
```  
BOOL GetTheaterMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il browser web è in modalità teatro. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Quando il browser web è in modalità teatro, la finestra principale del browser riempie l'intera schermata, viene visualizzata una barra degli strumenti con un set minimo di strumenti di esplorazione e la barra di stato viene visualizzato nell'angolo superiore destro dello schermo.  
  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegettoolbara--chtmlviewgettoolbar"></a><a name="gettoolbar"></a>CHtmlView::GetToolBar  
 Chiamare questa funzione membro per determinare se la barra degli strumenti è visibile.  
  
```  
int GetToolBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che indica se la barra degli strumenti è visibile. Diverso da zero se sulla barra degli strumenti è visibile; in caso contrario, zero.  
  
##  <a name="a-namegettopa--chtmlviewgettop"></a><a name="gettop"></a>CHtmlView::GetTop  
 Chiamare questa funzione membro per recuperare la coordinata del bordo superiore della finestra principale del controllo WebBrowser della schermata.  
  
```  
long GetTop() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Indirizzo di una variabile che riceve le coordinate dello schermo del bordo superiore della finestra principale.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegettoplevelcontainera--chtmlviewgettoplevelcontainer"></a><a name="gettoplevelcontainer"></a>CHtmlView::GetTopLevelContainer  
 Chiamare questa funzione membro per determinare se Internet Explorer è il contenitore di livello superiore del controllo WebBrowser.  
  
```  
BOOL GetTopLevelContainer() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il contenitore diverso da zero è il contenitore di livello superiore. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegettypea--chtmlviewgettype"></a><a name="gettype"></a>CHtmlView::GetType  
 Chiamare questa funzione membro per recuperare il nome del tipo di documento attivo contenuto.  
  
```  
CString GetType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il nome del tipo di documento attivo contenuto.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetvisiblea--chtmlviewgetvisible"></a><a name="getvisible"></a>CHtmlView::GetVisible  
 Chiamare questa funzione membro per determinare se l'oggetto contenuto che è visibile.  
  
```  
BOOL GetVisible() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto è visibile; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegetwidtha--chtmlviewgetwidth"></a><a name="getwidth"></a>CHtmlView::GetWidth  
 Recupera la larghezza della finestra principale di Internet Explorer.  
  
```  
long GetWidth() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza corrente della finestra in pixel.  
  
##  <a name="a-namegobacka--chtmlviewgoback"></a><a name="goback"></a>CHtmlView::GoBack  
 Consente di spostarsi all'indietro un elemento nell'elenco della cronologia.  
  
```  
void GoBack();
```  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegoforwarda--chtmlviewgoforward"></a><a name="goforward"></a>CHtmlView::GoForward  
 Consente di spostarsi in avanti un elemento nell'elenco della cronologia.  
  
```  
void GoForward();
```  
  
##  <a name="a-namegohomea--chtmlviewgohome"></a><a name="gohome"></a>CHtmlView::GoHome  
 Passa alla home page o alla pagina iniziale corrente specificata nella finestra di dialogo Opzioni Internet di Internet Explorer o nella finestra di dialogo Proprietà Internet, accessibili dal Pannello di controllo.  
  
```  
void GoHome();
```  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namegosearcha--chtmlviewgosearch"></a><a name="gosearch"></a>CHtmlView::GoSearch  
 Passa alla pagina di ricerca, come specificato nella finestra di dialogo Opzioni Internet di Internet Explorer o la finestra di dialogo Proprietà Internet, che si accede dal Pannello di controllo.  
  
```  
void GoSearch();
```  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-nameloadfromresourcea--chtmlviewloadfromresource"></a><a name="loadfromresource"></a>CHtmlView::LoadFromResource  
 Chiamare questa funzione membro per caricare la risorsa specificata nel controllo WebBrowser.  
  
```  
BOOL LoadFromResource(LPCTSTR lpszResource);  
BOOL LoadFromResource(UINT nRes);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszResource`  
 Un puntatore a una stringa contenente il nome della risorsa da caricare.  
  
 `nRes`  
 L'ID del buffer che contiene il nome della risorsa da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namenavigatea--chtmlviewnavigate"></a><a name="navigate"></a>CHtmlView::Navigate  
 Chiamare questa funzione membro per passare alla risorsa identificata da un URL.  
  
```  
void Navigate(
    LPCTSTR URL,  
    DWORD dwFlags = 0,  
    LPCTSTR lpszTargetFrameName = NULL,  
    LPCTSTR lpszHeaders = NULL,  
    LPVOID lpvPostData = NULL,  
    DWORD dwPostDataLen = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *URL*  
 Una stringa allocata dal chiamante che contiene l'URL a cui passare, o il percorso completo del file da visualizzare.  
  
 `dwFlags`  
 I flag di una variabile che specifica se aggiungere la risorsa all'elenco della cronologia, se si desidera leggere o scrivere dalla cache e se visualizzare la risorsa in una nuova finestra. La variabile può essere una combinazione dei valori definiti per il [BrowserNavConstants](https://msdn.microsoft.com/library/aa768360.aspx) enumerazione.  
  
 `lpszTargetFrameName`  
 Un puntatore a una stringa che contiene il nome del frame in cui visualizzare la risorsa.  
  
 `lpszHeaders`  
 Un puntatore a un valore che specifica le intestazioni HTTP da inviare al server. Queste intestazioni vengono aggiunte alle intestazioni predefinite Internet Explorer. Le intestazioni è possono specificare tali operazioni come l'azione richiesta del server, il tipo di dati passati al server o un codice di stato. Questo parametro viene ignorato se *URL* non è un URL HTTP.  
  
 `lpvPostData`  
 Un puntatore ai dati da inviare con la transazione HTTP POST. Ad esempio, la transazione POST viene utilizzata per inviare i dati raccolti da un modulo HTML. Se questo parametro non corrisponde a tutti i dati inviati, **Navigate** genera una transazione HTTP GET. Questo parametro viene ignorato se *URL* non è un URL HTTP.  
  
 `dwPostDataLen`  
 Dati da inviare con la transazione HTTP POST. Ad esempio, la transazione POST viene utilizzata per inviare i dati raccolti da un modulo HTML. Se questo parametro non corrisponde a tutti i dati inviati, **Navigate** genera una transazione HTTP GET. Questo parametro viene ignorato se *URL* non è un URL HTTP.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namenavigate2a--chtmlviewnavigate2"></a><a name="navigate2"></a>CHtmlView::Navigate2  
 Chiamare questa funzione membro per passare alla risorsa identificata da un URL o al file identificato da un percorso completo.  
  
```  
void Navigate2(
    LPITEMIDLIST pIDL,  
    DWORD dwFlags = 0,  
    LPCTSTR lpszTargetFrameName = NULL);

 
void Navigate2(
    LPCTSTR lpszURL,  
    DWORD dwFlags = 0,  
    LPCTSTR lpszTargetFrameName = NULL,  
    LPCTSTR lpszHeaders = NULL,  
    LPVOID lpvPostData = NULL,  
    DWORD dwPostDataLen = 0);

 
void Navigate2(
    LPCTSTR lpszURL,  
    DWORD dwFlags,  
    CByteArray& baPostedData,  
    LPCTSTR lpszTargetFrameName = NULL,  
    LPCTSTR lpszHeader = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pIDL*  
 Un puntatore a un [ITEMIDLIST](http://msdn.microsoft.com/library/windows/desktop/bb773321) struttura.  
  
 `dwFlags`  
 I flag di una variabile che specifica se aggiungere la risorsa all'elenco della cronologia, se si desidera leggere o scrivere dalla cache e se visualizzare la risorsa in una nuova finestra. La variabile può essere una combinazione dei valori definiti per il [BrowserNavConstants](https://msdn.microsoft.com/library/aa768360.aspx) enumerazione.  
  
 `lpszTargetFrameName`  
 Un puntatore a una stringa che contiene il nome del frame in cui visualizzare la risorsa.  
  
 `lpszURL`  
 Un puntatore a una stringa contenente l'URL.  
  
 `lpvPostData`  
 Dati da inviare con la transazione HTTP POST. Ad esempio, la transazione POST viene utilizzata per inviare i dati raccolti da un modulo HTML. Se questo parametro non corrisponde a tutti i dati inviati, `Navigate2` genera una transazione HTTP GET. Questo parametro viene ignorato se *URL* non è un URL HTTP o HTTPS.  
  
 `dwPostDataLen`  
 Lunghezza in byte dei dati a cui punta il `lpvPostData` parametro.  
  
 `lpszHeaders`  
 Un puntatore a un valore che specifica le intestazioni HTTP o HTTPS da inviare al server. Queste intestazioni vengono aggiunte alle intestazioni predefinite Internet Explorer. Le intestazioni è possono specificare tali operazioni come l'azione richiesta del server, il tipo di dati passati al server o un codice di stato. Questo parametro viene ignorato se *URL* non è un URL HTTP o HTTPS.  
  
 `baPostedData`  
 Un riferimento a un [CByteArray](../../mfc/reference/cbytearray-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro estende il **Navigate** funzione membro per supportare la ricerca in cartelle speciali, ad esempio Desktop e risorse del Computer, che sono rappresentate dal parametro *pIDL*.  
  
 Si applica a WebBrowser e Internet Explorer.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCHtmlHttp&#7;](../../mfc/reference/codesnippet/cpp/chtmlview-class_1.cpp)]  
  
##  <a name="a-nameonbeforenavigate2a--chtmlviewonbeforenavigate2"></a><a name="onbeforenavigate2"></a>CHtmlView::OnBeforeNavigate2  
 Questa funzione membro viene chiamata dal framework per causare un evento generato prima che si verifichi una navigazione nel web browser.  
  
```  
virtual void OnBeforeNavigate2(
    LPCTSTR lpszURL,  
    DWORD nFlags,  
    LPCTSTR lpszTargetFrameName,  
    CByteArray& baPostedData,  
    LPCTSTR lpszHeaders,  
    BOOL* pbCancel);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszURL`  
 Puntatore a una stringa contenente l'URL a cui passare.  
  
 `nFlags`  
 Riservato per utilizzi futuri.  
  
 `lpszTargetFrameName`  
 Una stringa che contiene il nome del frame in cui visualizzare la risorsa o **NULL** se nessun frame denominato è la destinazione per la risorsa.  
  
 `baPostedData`  
 Un riferimento a un `CByteArray` oggetto contenente i dati da inviare al server se viene utilizzata la transazione HTTP POST.  
  
 `lpszHeaders`  
 Un puntatore a una stringa contenente le intestazioni HTTP aggiuntive da inviare al server (solo URL HTTP). Le intestazioni è possono specificare tali operazioni come l'azione richiesta del server, il tipo di dati passati al server o un codice di stato.  
  
 `pbCancel`  
 Un puntatore a un flag di annullamento. Un'applicazione può impostare questo parametro per diversi da zero per annullare l'operazione di spostamento o a zero per consentirgli di continuare.  
  
##  <a name="a-nameoncommandstatechangea--chtmlviewoncommandstatechange"></a><a name="oncommandstatechange"></a>CHtmlView::OnCommandStateChange  
 Questa funzione membro viene chiamata dal framework per notificare a un'applicazione che è stato modificato lo stato abilitato di un comando del browser web.  
  
```  
virtual void OnCommandStateChange(
    long nCommand,  
    BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 *n Ncomando*  
 Identificatore del comando è stato modificato il cui stato abilitato.  
  
 `bEnable`  
 Stato abilitato. Questo parametro è diverso da zero se il comando è abilitato, oppure zero se è disabilitato.  
  
##  <a name="a-nameondocumentcompletea--chtmlviewondocumentcomplete"></a><a name="ondocumentcomplete"></a>CHtmlView::OnDocumentComplete  
 Questa funzione membro viene chiamata dal framework per notificare a un'applicazione che ha raggiunto un documento di `READYSTATE_COMPLETE` dello stato.  
  
```  
virtual void OnDocumentComplete(LPCTSTR lpszURL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszURL`  
 Un puntatore a una stringa che restituisce l'URL, UNC del file o nome, un PIDL (un puntatore a un elenco di identificatori di elemento) che è stato aperto.  
  
### <a name="remarks"></a>Note  
 Non tutti i frame verrà generato questo evento, ma ogni frame che viene generato un [OnDownloadBegin](#ondownloadbegin) evento verrà generato un oggetto corrispondente `OnDocumentComplete` evento.  
  
 L'URL indicato dal `lpszURL` può essere diverso dall'URL che il browser è stato detto a cui passare, perché questo URL è l'URL completo e in forma canonica. Ad esempio, se un'applicazione specifica un URL "www.microsoft.com" in una chiamata a [Navigate](#navigate) o [Navigate2](#navigate2), l'URL passato `OnNavigateComplete2` sarà "http://www.microsoft.com/". Inoltre, se il server ha reindirizzato il browser su un URL diverso, l'URL reindirizzato comparirà qui.  
  
##  <a name="a-nameondocwindowactivatea--chtmlviewondocwindowactivate"></a><a name="ondocwindowactivate"></a>CHtmlView::OnDocWindowActivate  
 Chiamata eseguita da Internet Explorer o da un'implementazione MSHTML di **IOleInPlaceActiveObject::OnDocWindowActivate**per notificare l'oggetto sul posto attivo quando la finestra del documento del contenitore è attivata o disattivata.  
  
```  
virtual HRESULT OnDocWindowActivate(BOOL fActivate);
```  
  
### <a name="parameters"></a>Parametri  
 `fActivate`  
 Indica lo stato della finestra del documento. Se questo valore è diverso da zero, la finestra viene attivata. Se questo valore è zero, la finestra viene disattivata.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo, o un codice di errore definito da OLE a in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnDocWindowActivate` per rispondere al `OnDocWindowActivate` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::OnDocWindowActivate](https://msdn.microsoft.com/library/aa753261.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameondownloadbegina--chtmlviewondownloadbegin"></a><a name="ondownloadbegin"></a>CHtmlView::OnDownloadBegin  
 Questa funzione membro viene chiamata dal framework per iniziare il download di un documento.  
  
```  
virtual void OnDownloadBegin();
```  
  
### <a name="remarks"></a>Note  
 Questo evento viene generato dopo il [OnBeforeNavigate2](#onbeforenavigate2) evento, a meno che non lo spostamento viene annullato. Le animazioni o "occupato" indica che è necessario visualizzare il contenitore deve essere connesso a questo evento.  
  
##  <a name="a-nameondownloadcompletea--chtmlviewondownloadcomplete"></a><a name="ondownloadcomplete"></a>CHtmlView::OnDownloadComplete  
 Questa funzione membro viene chiamata dal framework per indicare che un'operazione di spostamento finita, è stata interrotta o non è riuscita.  
  
```  
virtual void OnDownloadComplete();
```  
  
##  <a name="a-nameonenablemodelessa--chtmlviewonenablemodeless"></a><a name="onenablemodeless"></a>CHtmlView::OnEnableModeless  
 Chiamato quando Internet Explorer o MSHTML Visualizza un'interfaccia utente modale.  
  
```  
virtual HRESULT OnEnableModeless(BOOL fEnable);
```  
  
### <a name="parameters"></a>Parametri  
 `fEnable`  
 Indica se le finestre di dialogo non modale dell'host vengono abilitate o disabilitate. Se questo valore è diverso da zero, le finestre di dialogo non modali sono abilitate. Se questo valore è zero, le finestre di dialogo non modali sono disabilitate.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo, o un codice di errore definito da OLE a in caso contrario.  
  
### <a name="remarks"></a>Note  
 Abilita o disabilita le finestre di dialogo non modale quando il contenitore crea o elimina una finestra di dialogo modale. Eseguire l'override `OnEnableModeless` per rispondere al `EnableModeless` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::EnableModeless](https://msdn.microsoft.com/library/aa753253.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameonfilterdataobjecta--chtmlviewonfilterdataobject"></a><a name="onfilterdataobject"></a>CHtmlView::OnFilterDataObject  
 Chiamata eseguita sull'host da Internet Explorer o MSHTML per consentire all'host di sostituire l'oggetto dati di Internet Explorer o MSHTML.  
  
```  
virtual HRESULT OnFilterDataObject(
    LPDATAOBJECT pDataObject,  
    LPDATAOBJECT* ppDataObject);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataObject`  
 All'indirizzo di [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) interfaccia fornita da Internet Explorer o MSHTML.  
  
 *ppDataObject*  
 Indirizzo che riceve il `IDataObject` puntatore a interfaccia fornita dall'host. Il contenuto di questo parametro deve essere sempre inizializzato a **NULL**, anche se il metodo non riesce.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se l'oggetto dati viene sostituito, **S_FALSE** se l'oggetto dati non viene sostituito, o un codice di errore definito da OLE a se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnFilterDataObject` per rispondere al `FilterDataObject` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::FilterDataObject](https://msdn.microsoft.com/library/aa753254.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameonframewindowactivatea--chtmlviewonframewindowactivate"></a><a name="onframewindowactivate"></a>CHtmlView::OnFrameWindowActivate  
 Chiamato da [IOleInPlaceActiveObject::OnFrameWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms683969) per notificare all'oggetto quando il contenitore di primo livello della finestra cornice è attivata o disattivata.  
  
```  
virtual HRESULT OnFrameWindowActivate(BOOL fActivate);
```  
  
### <a name="parameters"></a>Parametri  
 `fActivate`  
 Indica lo stato della finestra cornice di primo livello del contenitore. Se questo valore è diverso da zero, la finestra viene attivata. Se questo valore è zero, la finestra viene disattivata.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo, o un codice di errore definito da OLE a in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnFrameWindowActivate` per rispondere al `OnFrameWindowActivate` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::OnFrameWindowActivate](https://msdn.microsoft.com/library/aa753262.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameonfullscreena--chtmlviewonfullscreen"></a><a name="onfullscreen"></a>CHtmlView::OnFullScreen  
 Questa funzione membro viene chiamata dal framework quando il [a schermo intero](https://msdn.microsoft.com/library/aa752119.aspx) proprietà è stata modificata.  
  
```  
virtual void OnFullScreen(BOOL bFullScreen);
```  
  
### <a name="parameters"></a>Parametri  
 *bFullScreen*  
 Diverso da zero se Internet Explorer è in modalità schermo intero. in caso contrario, zero.  
  
##  <a name="a-nameongetdroptargeta--chtmlviewongetdroptarget"></a><a name="ongetdroptarget"></a>CHtmlView::OnGetDropTarget  
 Chiamata eseguita da Internet Explorer o MSHTML quando viene usato come destinazione di trascinamento per consentire all'host di fornire una destinazione `IDropTarget`.  
  
```  
virtual HRESULT OnGetDropTarget(
    LPDROPTARGET pDropTarget,  
    LPDROPTARGET* ppDropTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pDropTarget`  
 [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) Internet Explorer o MSHTML intende utilizzare.  
  
 `ppDropTarget`  
 All'indirizzo di `IDropTarget` che riceve il `IDropTarget` puntatore a interfaccia host desidera fornire.  
  
### <a name="return-value"></a>Valore restituito  
 Vedere [IDocHostUIHandler::GetDropTarget](https://msdn.microsoft.com/library/aa753255.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco dei codici restituiti.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnGetDropTarget` per rispondere al `GetDropTarget` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::GetDropTarget](https://msdn.microsoft.com/library/aa753255.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameongetexternala--chtmlviewongetexternal"></a><a name="ongetexternal"></a>CHtmlView::OnGetExternal  
 Chiamata eseguita da Internet Explorer o MSHTML per ottenere l'interfaccia dell'host `IDispatch` .  
  
```  
virtual HRESULT OnGetExternal(LPDISPATCH* lppDispatch);
```  
  
### <a name="parameters"></a>Parametri  
 *lppDispatch*  
 Un puntatore all'indirizzo che riceve il `IDispatch` puntatore a interfaccia dell'applicazione host. Se l'host espone un'interfaccia di automazione, è possibile fornire un riferimento a Internet Explorer o MSHTML tramite questo parametro. Il contenuto di questo parametro deve essere sempre inizializzato a **NULL**, anche se il metodo non riesce.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo, o un codice di errore definito da OLE a in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnGetExternal` per rispondere al `GetExternal` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::GetExternal](https://msdn.microsoft.com/library/aa753256.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameongethostinfoa--chtmlviewongethostinfo"></a><a name="ongethostinfo"></a>CHtmlView::OnGetHostInfo  
 Recupera le funzionalità dell'interfaccia utente dell'host di Internet Explorer o MSHTML.  
  
```  
virtual HRESULT OnGetHostInfo(DOCHOSTUIINFO* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `pInfo`  
 Indirizzo di un [DOCHOSTUIINFO](https://msdn.microsoft.com/library/aa770044.aspx) struttura che riceve le funzionalità dell'interfaccia utente dell'host.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo, o un codice di errore definito da OLE a in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnGetHostInfo` per rispondere al `GetHostInfo` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::GetHostInfo](https://msdn.microsoft.com/library/aa753257.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameongetoptionkeypatha--chtmlviewongetoptionkeypath"></a><a name="ongetoptionkeypath"></a>CHtmlView::OnGetOptionKeyPath  
 Chiamare questa funzione membro per ottenere la chiave del Registro di sistema in cui Internet Explorer o MSHTML archivia le preferenze dell'utente.  
  
```  
virtual HRESULT OnGetOptionKeyPath(
    LPOLESTR* pchKey,  
    DWORD dwReserved);
```  
  
### <a name="parameters"></a>Parametri  
 `pchKey`  
 Indirizzo di un `LPOLESTR` che riceve la stringa della sottochiave del Registro di sistema in cui l'host archivia le opzioni predefinite. Questa sottochiave sarà sotto la chiave HKEY_CURRENT_USER. Allocare la memoria utilizzando [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727). L'applicazione chiamante è responsabile per liberare la memoria utilizzando [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722). Questo parametro deve essere sempre inizializzato a **NULL**, anche se il metodo non riesce.  
  
 `dwReserved`  
 Riservato per utilizzi futuri. Non è attualmente utilizzato.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo, o **S_FALSE** in caso contrario. Se **S_FALSE**, Internet Explorer o MSHTML utilizzerà opzioni utente.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnGetOptionKeyPath` per rispondere al `GetOptionKeyPath` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::GetOptionKeyPath](https://msdn.microsoft.com/library/aa753258.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameonhideuia--chtmlviewonhideui"></a><a name="onhideui"></a>CHtmlView::OnHideUI  
 Questa funzione membro viene chiamata dal framework quando Internet Explorer o MSHTML rimuove i menu e barre degli strumenti.  
  
```  
virtual HRESULT OnHideUI();
```  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo, o un codice di errore definito da OLE a in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnHideUI` per rispondere al `HideUI` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::HideUI](https://msdn.microsoft.com/library/aa753259.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameonmenubara--chtmlviewonmenubar"></a><a name="onmenubar"></a>CHtmlView::OnMenuBar  
 Questa funzione membro viene chiamata dal framework quando il [MenuBar](https://msdn.microsoft.com/library/aa752131.aspx) proprietà è stata modificata.  
  
```  
virtual void OnMenuBar(BOOL bMenuBar);
```  
  
### <a name="parameters"></a>Parametri  
 *bMenuBar*  
 Diverso da zero se la barra dei menu di Internet Explorer è visibile; in caso contrario, zero.  
  
##  <a name="a-nameonnavigatecomplete2a--chtmlviewonnavigatecomplete2"></a><a name="onnavigatecomplete2"></a>CHtmlView::OnNavigateComplete2  
 Questa funzione membro viene chiamata dal framework dopo uno spostamento in un collegamento ipertestuale viene completata (elemento di una finestra o frame).  
  
```  
virtual void OnNavigateComplete2(LPCTSTR strURL);
```  
  
### <a name="parameters"></a>Parametri  
 *strURL*  
 Espressione stringa che restituisce l'URL di file UNC nome o PIDL (un puntatore a un elenco di identificatori di elemento) che è stato aperto.  
  
### <a name="remarks"></a>Note  
 Il parametro URL può essere un PIDL nel caso di un'entità di spazio nome shell per il quale non esiste alcuna rappresentazione URL.  
  
 Si noti che l'URL del contenuto in *strURL* può essere diverso dall'URL che il browser è stato detto a cui passare, perché questo URL è l'URL completo e in forma canonica. Ad esempio, se un'applicazione specifica un URL "www.microsoft.com" in una chiamata a [Navigate](#navigate) o [Navigate2](#navigate2), l'URL passato `OnNavigateComplete2` sarà "http://www.microsoft.com/". Inoltre, se il server ha reindirizzato il browser su un URL diverso, l'URL reindirizzato comparirà qui.  
  
##  <a name="a-nameonnavigateerrora--chtmlviewonnavigateerror"></a><a name="onnavigateerror"></a>CHtmlView::OnNavigateError  
 Chiamata eseguita dal framework in caso di errore di un collegamento ipertestuale.  
  
```  
virtual void OnNavigateError(
    LPCTSTR lpszURL,  
    LPCTSTR lpszFrame,  
    DWORD dwError,  
    BOOL* pbCancel);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszURL`  
 L'URL per il quale spostamento non è riuscito.  
  
 *lpszFrame*  
 Il nome del frame in cui la risorsa è visualizzata, o NULL se nessun frame denominato era destinato la risorsa.  
  
 `dwError`  
 Un codice di stato di errore, se disponibile. Per un elenco dei possibili codici di stato HTTP e HRESULT, vedere [NavigateError codici di stato di evento.](https://msdn.microsoft.com/library/aa768365.aspx)  
  
 `pbCancel`  
 Specifica se annullare lo spostamento di una pagina di errore o qualsiasi ulteriore ricerca. Se **TRUE** (impostazione predefinita), continuare con la navigazione a una pagina di errore o la ricerca automatica; se **FALSE**, annullare la navigazione a una pagina di errore o la ricerca automatica.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per fornire la gestione degli errori di navigazione personalizzata.  
  
 Per ulteriori informazioni, vedere [DWebBrowserEvents2::NavigateError](https://msdn.microsoft.com/library/aa768286.aspx)  
  
##  <a name="a-nameonnewwindow2a--chtmlviewonnewwindow2"></a><a name="onnewwindow2"></a>CHtmlView::OnNewWindow2  
 Questa funzione membro viene chiamata dal framework quando viene creato per la visualizzazione di una risorsa di una nuova finestra.  
  
```  
virtual void OnNewWindow2(
    LPDISPATCH* ppDisp,  
    BOOL* Cancel);
```  
  
### <a name="parameters"></a>Parametri  
 `ppDisp`  
 Un puntatore a un puntatore a interfaccia che, facoltativamente, riceve il `IDispatch` puntatore a interfaccia di un nuovo oggetto WebBrowser o Internet Explorer.  
  
 `Cancel`  
 Un puntatore a un flag di annullamento. Un'applicazione può impostare questo parametro per diversi da zero per annullare l'operazione di spostamento o a zero per consentirgli di continuare.  
  
### <a name="remarks"></a>Note  
 Questo evento precede la creazione di una nuova finestra all'interno il controllo WebBrowser.  
  
##  <a name="a-nameonprogresschangea--chtmlviewonprogresschange"></a><a name="onprogresschange"></a>CHtmlView::OnProgressChange  
 Questa funzione membro viene chiamata dal framework per notificare a un'applicazione che lo stato di avanzamento di un'operazione di download è stato aggiornato.  
  
```  
virtual void OnProgressChange(
    long nProgress,  
    long nProgressMax);
```  
  
### <a name="parameters"></a>Parametri  
 *nProgress*  
 Quantità di avanzamento complessivo per mostrare o -1 se l'operazione è stata completata.  
  
 *nProgressMax*  
 Valore massimo corrente.  
  
### <a name="remarks"></a>Note  
 Il contenitore può utilizzare le informazioni fornite da questo evento per visualizzare il numero di byte scaricati o per aggiornare un indicatore di stato.  
  
##  <a name="a-nameonpropertychangea--chtmlviewonpropertychange"></a><a name="onpropertychange"></a>CHtmlView::OnPropertyChange  
 Questa funzione membro viene chiamata dal framework per notificare a un'applicazione che [PutProperty](#putproperty) ha modificato il valore di una proprietà.  
  
```  
virtual void OnPropertyChange(LPCTSTR lpszProperty);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszProperty`  
 Un puntatore a una stringa contenente il nome della proprietà.  
  
##  <a name="a-nameonquita--chtmlviewonquit"></a><a name="onquit"></a>CHtmlView::OnQuit  
 Questa funzione membro viene chiamata dal framework per notificare a un'applicazione che è possibile chiudere l'applicazione di Internet Explorer.  
  
```  
virtual void OnQuit();
```  
  
##  <a name="a-nameonresizebordera--chtmlviewonresizeborder"></a><a name="onresizeborder"></a>CHtmlView::OnResizeBorder  
 Chiamato dall'implementazione di Internet Explorer o MSHTML di [IOleInPlaceActiveObject::ResizeBorder](http://msdn.microsoft.com/library/windows/desktop/ms680053), che avvisa l'oggetto che è necessario ridimensionare il relativo spazio di bordo.  
  
```  
virtual HRESULT OnResizeBorder(
    LPCRECT prcBorder,  
    LPOLEINPLACEUIWINDOW pUIWindow,  
    BOOL fFrameWindow);
```  
  
### <a name="parameters"></a>Parametri  
 `prcBorder`  
 Nuovo rettangolo esterno per lo spazio di bordo.  
  
 `pUIWindow`  
 Puntatore all'interfaccia per l'oggetto finestra cornice o del documento il cui bordo è stato modificato.  
  
 `fFrameWindow`  
 **TRUE** se la finestra cornice viene chiamato il metodo [IOleInPlaceActiveObject::ResizeBorder](http://msdn.microsoft.com/library/windows/desktop/ms680053), in caso contrario **FALSE**.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo, o un codice di errore definito da OLE a in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnResizeBorder` per rispondere al `ResizeBorder` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::ResizeBorder](https://msdn.microsoft.com/library/aa753263.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameonshowcontextmenua--chtmlviewonshowcontextmenu"></a><a name="onshowcontextmenu"></a>CHtmlView::OnShowContextMenu  
 Chiamata eseguita da Internet Explorer o MSHTML quando sta per visualizzare il menu di scelta rapida.  
  
```  
virtual HRESULT OnShowContextMenu(
    DWORD dwID,  
    LPPOINT ppt,  
    LPUNKNOWN pcmdtReserved,  
    LPDISPATCH pdispReserved);
```  
  
### <a name="parameters"></a>Parametri  
 `dwID`  
 Identificatore del menu di scelta rapida da visualizzare. Vedere **IDocHostUIHandler::ShowContextMenu** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di valori.  
  
 `ppt`  
 Coordinate dello schermo per il menu.  
  
 `pcmdtReserved`  
 [IOleCommandTarget](http://msdn.microsoft.com/library/windows/desktop/ms683797) interfaccia utilizzata per lo stato del comando di query ed eseguire comandi su questo oggetto.  
  
 `pdispReserved`  
 Interfaccia IDispatch dell'oggetto in corrispondenza delle coordinate dello schermo. Ciò consente a un host differenziare gli oggetti specifici per fornire un contesto più specifico.  
  
### <a name="return-value"></a>Valore restituito  
 Vedere [IDocHostUIHandler::ShowContextMenu](https://msdn.microsoft.com/library/aa753264.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di valori.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnShowContextMenu` per rispondere al `ShowContextMenu` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::ShowContextMenu](https://msdn.microsoft.com/library/aa753264.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameonshowuia--chtmlviewonshowui"></a><a name="onshowui"></a>CHtmlView::OnShowUI  
 Chiamata eseguita prima che Internet Explorer o MSHTML visualizzi i menu e le barre degli strumenti.  
  
```  
virtual HRESULT OnShowUI(
    DWORD dwID,  
    LPOLEINPLACEACTIVEOBJECT pActiveObject,  
    LPOLECOMMANDTARGET pCommandTarget,  
    LPOLEINPLACEFRAME pFrame,  
    LPOLEINPLACEUIWINDOW pDoc);
```  
  
### <a name="parameters"></a>Parametri  
 `dwID`  
 Riservato per utilizzi futuri.  
  
 `pActiveObject`  
 [IOleInPlaceActiveObject](http://msdn.microsoft.com/library/windows/desktop/ms691299) interfaccia dell'oggetto attualmente attivo.  
  
 `pCommandTarget`  
 [IOleCommandTarget](http://msdn.microsoft.com/library/windows/desktop/ms683797) interfaccia dell'oggetto.  
  
 `pFrame`  
 [IOleInPlaceFrame](http://msdn.microsoft.com/library/windows/desktop/ms692770) interfaccia dell'oggetto. Questa operazione è necessaria per i menu e barre degli strumenti.  
  
 `pDoc`  
 [IOleInPlaceUIWindow](http://msdn.microsoft.com/library/windows/desktop/ms680716) interfaccia per l'oggetto. Questa operazione è necessaria per le barre degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Vedere [IDocHostUIHandler::ShowUI](https://msdn.microsoft.com/library/aa753265.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di valori.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnShowUI` per rispondere al `ShowUI` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::ShowUI](https://msdn.microsoft.com/library/aa753265.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameonstatusbara--chtmlviewonstatusbar"></a><a name="onstatusbar"></a>CHtmlView::OnStatusBar  
 Questa funzione membro viene chiamata dal framework quando il [StatusBar](https://msdn.microsoft.com/library/aa768270.aspx) proprietà è stata modificata.  
  
```  
virtual void OnStatusBar(BOOL bStatusBar);
```  
  
### <a name="parameters"></a>Parametri  
 *bStatusBar*  
 Diverso da zero se la barra di stato Internet Explorer o zero in caso contrario.  
  
##  <a name="a-nameonstatustextchangea--chtmlviewonstatustextchange"></a><a name="onstatustextchange"></a>CHtmlView::OnStatusTextChange  
 Questa funzione membro viene chiamata dal framework per notificare a un'applicazione che viene modificato il testo della barra di stato associato al controllo WebBrowser.  
  
```  
virtual void OnStatusTextChange(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszText`  
 Stringa che contiene il nuovo testo della barra di stato.  
  
##  <a name="a-nameontheatermodea--chtmlviewontheatermode"></a><a name="ontheatermode"></a>CHtmlView::OnTheaterMode  
 Questa funzione membro viene chiamata dal framework quando il [TheaterMode viene](https://msdn.microsoft.com/library/aa768273.aspx) proprietà è stata modificata.  
  
```  
virtual void OnTheaterMode(BOOL bTheaterMode);
```  
  
### <a name="parameters"></a>Parametri  
 *bTheaterMode*  
 Diverso da zero se Internet Explorer è in modalità teatro. in caso contrario, zero.  
  
##  <a name="a-nameontitlechangea--chtmlviewontitlechange"></a><a name="ontitlechange"></a>CHtmlView::OnTitleChange  
 Questa funzione membro viene chiamata da .NET framework per notificare a un'applicazione se il titolo di un documento nel controllo WebBrowser diventa disponibile o le modifiche.  
  
```  
virtual void OnTitleChange(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszText`  
 Il nuovo titolo del documento.  
  
### <a name="remarks"></a>Note  
 Per HTML, è possibile modificare il titolo; mentre è ancora il download di HTML, come il titolo è impostato l'URL del documento. Dopo il titolo reale (se presente) viene analizzato dal codice HTML, il titolo viene modificato per riflettere il titolo effettivo.  
  
##  <a name="a-nameontoolbara--chtmlviewontoolbar"></a><a name="ontoolbar"></a>CHtmlView::OnToolBar  
 Questa funzione membro viene chiamata dal framework quando il [sulla barra degli strumenti](https://msdn.microsoft.com/library/aa768274.aspx) proprietà è stata modificata.  
  
```  
virtual void OnToolBar(BOOL bToolBar);
```  
  
### <a name="parameters"></a>Parametri  
 *bToolBar*  
 Diverso da zero se è visibile sulla barra degli strumenti di Internet Explorer o zero in caso contrario.  
  
##  <a name="a-nameontranslateacceleratora--chtmlviewontranslateaccelerator"></a><a name="ontranslateaccelerator"></a>CHtmlView::OnTranslateAccelerator  
 Chiamato da Internet Explorer o MSHTML quando [IOleInPlaceActiveObject::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693360) o [IOleControlSite::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693756) viene chiamato per elaborare i messaggi di tasto di scelta rapida di menu dalla coda di messaggi del contenitore.  
  
```  
virtual HRESULT OnTranslateAccelerator(
    LPMSG lpMsg,  
    const GUID* pguidCmdGroup,  
    DWORD nCmdID);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMsg`  
 Punta al messaggio che deve essere convertito.  
  
 `pguidCmdGroup`  
 Identificatore del gruppo di comando.  
  
 `nCmdID`  
 Identificatore di comando.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo, o **S_FALSE** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnTranslateAccelerator` per rispondere al `TranslateAccelerator` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::TranslateAccelerator](https://msdn.microsoft.com/library/aa753266.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameontranslateurla--chtmlviewontranslateurl"></a><a name="ontranslateurl"></a>CHtmlView::OnTranslateUrl  
 Chiamata eseguita da Internet Explorer o MSHTML per consentire all'host la possibilità di modificare l'URL che deve essere caricato.  
  
```  
virtual HRESULT OnTranslateUrl(
    DWORD dwTranslate,  
    OLECHAR* pchURLIn,  
    OLECHAR** ppchURLOut);
```  
  
### <a name="parameters"></a>Parametri  
 `dwTranslate`  
 Riservato per utilizzi futuri.  
  
 `pchURLIn`  
 Indirizzo di una stringa fornita in Internet Explorer o MSHTML che rappresenta l'URL da convertire.  
  
 `ppchURLOut`  
 Indirizzo di un puntatore di stringa che riceve l'indirizzo dell'URL tradotti. L'host alloca il buffer utilizzando l'allocatore di memoria delle attività. Il contenuto di questo parametro deve essere sempre inizializzato a **NULL**, anche se non viene tradotta, l'URL o il metodo non riesce.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se l'URL è stato convertito, **S_FALSE** se l'URL non è stato convertito, o un codice di errore definito da OLE a se si è verificato un errore.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override `OnTranslateUrl` per rispondere al `TranslateUrl` notifica dal controllo del Browser Web Microsoft. Vedere [IDocHostUIHandler::TranslateUrl](https://msdn.microsoft.com/library/aa753267.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameonupdateuia--chtmlviewonupdateui"></a><a name="onupdateui"></a>CHtmlView::OnUpdateUI  
 Notifica all'host che lo stato del comando è stato modificato.  
  
```  
virtual HRESULT OnUpdateUI();
```  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se ha esito positivo, o un codice di errore definito da OLE a in caso contrario.  
  
### <a name="remarks"></a>Note  
 L'host deve aggiornare lo stato dei pulsanti della barra degli strumenti. Questo metodo viene chiamato indipendentemente dal valore restituito da `ShowUI`. Eseguire l'override `OnUpdateUI` per rispondere al `UpdateUI` notifica dal controllo del Browser Web Microsoft.  
  
##  <a name="a-nameonvisiblea--chtmlviewonvisible"></a><a name="onvisible"></a>CHtmlView::OnVisible  
 Questa funzione membro viene chiamata dal framework quando la finestra del controllo WebBrowser debba essere mostrata o nascosta.  
  
```  
virtual void OnVisible(BOOL bVisible);
```  
  
### <a name="parameters"></a>Parametri  
 `bVisible`  
 Diverso da zero se l'oggetto è visibile o zero in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo consente l'oggetto controllo host della finestra funziona allo stesso modo, che si comporteranno la finestra di Internet Explorer.  
  
##  <a name="a-nameputpropertya--chtmlviewputproperty"></a><a name="putproperty"></a>CHtmlView::PutProperty  
 Chiamare questa funzione membro per impostare la proprietà associata a un determinato oggetto.  
  
```  
void PutProperty(
    LPCTSTR lpszProperty,  
    const VARIANT& vtValue);

 
void PutProperty(
    LPCTSTR lpszPropertyName,  
    double dValue);

 
void PutProperty(
    LPCTSTR lpszPropertyName,  
    long lValue);

 
void PutProperty(
    LPCTSTR lpszPropertyName,  
    LPCTSTR lpszValue);

 
void PutProperty(
    LPCTSTR lpszPropertyName,  
    short nValue);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszProperty`  
 Stringa contenente la proprietà da impostare.  
  
 *vtValue*  
 Il nuovo valore della proprietà indicata da `lpszProperty`.  
  
 *lpszPropertyName*  
 Un puntatore a una stringa contenente il nome della proprietà da impostare.  
  
 *dValue*  
 Nuovo valore della proprietà.  
  
 `lValue`  
 Nuovo valore della proprietà.  
  
 `lpszValue`  
 Un puntatore a una stringa contenente il nuovo valore della proprietà.  
  
 `nValue`  
 Nuovo valore della proprietà.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namequeryformscommanda--chtmlviewqueryformscommand"></a><a name="queryformscommand"></a>CHtmlView::QueryFormsCommand  
 Query per lo stato di uno o più comandi generati dagli eventi dell'interfaccia utente.  
  
```  
HRESULT QueryFormsCommand(
    DWORD dwCommandID,  
    BOOL* pbSupported,  
    BOOL* pbEnabled,  
    BOOL* pbChecked);
```  
  
### <a name="parameters"></a>Parametri  
 `dwCommandID`  
 L'identificatore del comando sottoposta a query.  
  
 *pbSupported*  
 Un puntatore a un **BOOL** che specifica se il comando (identificato da `dwCommandID`) è supportato. Se TRUE, il comando è supportato; in caso contrario FALSE.  
  
 `pbEnabled`  
 Un puntatore a un **BOOL** che specifica se il comando (identificato da `dwCommandID`) è abilitato. Se TRUE, il comando è supportato; in caso contrario FALSE.  
  
 *pbChecked*  
 Un puntatore a un **BOOL** che specifica se il comando (identificato da `dwCommandID`) sia selezionata. Se TRUE, il comando è supportato; in caso contrario FALSE.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard. Per un elenco completo dei valori possibili, vedere [IOleCommandTarget::QueryStatus](http://msdn.microsoft.com/library/windows/desktop/ms688491) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 `QueryFormsCommand`implementa il comportamento di [IOleCommandTarget::QueryStatus](http://msdn.microsoft.com/library/windows/desktop/ms688491) metodo.  
  
##  <a name="a-namequerystatuswba--chtmlviewquerystatuswb"></a><a name="querystatuswb"></a>CHtmlView::QueryStatusWB  
 Chiamare questa funzione membro per eseguire una query sullo stato di un comando.  
  
```  
OLECMDF QueryStatusWB(OLECMDID cmdID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `cmdID`  
 Il [OLECMDID](http://msdn.microsoft.com/library/windows/desktop/ms691264) valore del comando per il quale il chiamante necessita di informazioni sullo stato.  
  
### <a name="return-value"></a>Valore restituito  
 L'indirizzo del [OLECMDF](http://msdn.microsoft.com/library/windows/desktop/ms695237) che riceve lo stato del comando.  
  
### <a name="remarks"></a>Note  
 `QueryStatusWB`implementa il comportamento di [IOleCommandTarget::QueryStatus](http://msdn.microsoft.com/library/windows/desktop/ms688491) metodo.  
  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namerefresha--chtmlviewrefresh"></a><a name="refresh"></a>CHtmlView::Refresh  
 Ricarica l'URL o un file che è attualmente visualizzato nel browser web.  
  
```  
void Refresh();
```  
  
### <a name="remarks"></a>Note  
 **Aggiorna** non contiene parametri per impostare il livello di aggiornamento.  
  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namerefresh2a--chtmlviewrefresh2"></a><a name="refresh2"></a>CHtmlView::Refresh2  
 Ricarica il file di Internet Explorer è attualmente visualizzato.  
  
```  
void Refresh2(int nLevel);
```  
  
### <a name="parameters"></a>Parametri  
 `nLevel`  
 L'indirizzo della variabile che specifica il livello di aggiornamento. Le variabili possibili sono definite [RefreshConstants](https://msdn.microsoft.com/library/aa768363.aspx), nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 A differenza di [aggiornamento](#refresh), `Refresh2` contiene un parametro che specifica il livello di aggiornamento.  
  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namesetaddressbara--chtmlviewsetaddressbar"></a><a name="setaddressbar"></a>CHtmlView::SetAddressBar  
 Chiamare questa funzione membro per mostrare o nascondere la barra degli indirizzi dell'oggetto Internet Explorer.  
  
```  
void SetAddressBar(BOOL bNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `bNewValue`  
 Diverso da zero per visualizzare una barra degli indirizzi. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a Internet Explorer. Se si utilizza questa chiamata con un controllo WebBrowser, non verrà restituito alcun errore, ma lo ignora questa chiamata.  
  
##  <a name="a-namesetfullscreena--chtmlviewsetfullscreen"></a><a name="setfullscreen"></a>CHtmlView::SetFullScreen  
 Chiamare questa funzione membro per impostare entrambe le modalità schermo intero o normale finestra di Internet Explorer.  
  
```  
void SetFullScreen(BOOL bNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `bNewValue`  
 Diverso da zero per la modalità schermo intero. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 In modalità a schermo intero, viene ingrandita la finestra principale di Internet Explorer e la barra di stato, sulla barra degli strumenti, barra dei menu e barra del titolo sono nascoste.  
  
 Si applica a Internet Explorer. Se si utilizza questa chiamata con un controllo WebBrowser, non verrà restituito alcun errore, ma lo ignora questa chiamata.  
  
##  <a name="a-namesetheighta--chtmlviewsetheight"></a><a name="setheight"></a>CHtmlView::SetHeight  
 Chiamare questa funzione membro per impostare l'altezza della finestra principale di Internet Explorer.  
  
```  
void SetHeight(long nNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `nNewValue`  
 L'altezza, in pixel, della finestra principale.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namesetlefta--chtmlviewsetleft"></a><a name="setleft"></a>CHtmlView::SetLeft  
 Imposta la posizione orizzontale della finestra principale di Internet Explorer.  
  
```  
void SetLeft(long nNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `nNewValue`  
 Coordinata dello schermo del bordo sinistro della finestra principale.  
  
##  <a name="a-namesetmenubara--chtmlviewsetmenubar"></a><a name="setmenubar"></a>CHtmlView::SetMenuBar  
 Chiamare questa funzione membro per mostrare o nascondere la barra dei menu di Internet Explorer.  
  
```  
void SetMenuBar(BOOL bNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `bNewValue`  
 Diverso da zero per visualizzare la barra dei menu; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a Internet Explorer. Se si utilizza questa chiamata con un controllo WebBrowser, non verrà restituito alcun errore, ma lo ignora questa chiamata.  
  
##  <a name="a-namesetofflinea--chtmlviewsetoffline"></a><a name="setoffline"></a>CHtmlView::SetOffline  
 Chiamare questa funzione membro per impostare un valore che indica se il controllo WebBrowser operano in modalità offline.  
  
```  
void SetOffline(BOOL bNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `bNewValue`  
 Diverso da zero per la lettura dalla cache locale. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 In modalità offline, il browser legge le pagine HTML dalla cache locale invece che dal documento di origine.  
  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namesetregisterasbrowsera--chtmlviewsetregisterasbrowser"></a><a name="setregisterasbrowser"></a>CHtmlView::SetRegisterAsBrowser  
 Chiamare questa funzione membro per impostare un valore che indica se il controllo WebBrowser viene registrato come un browser di livello superiore per la risoluzione dei nomi di destinazione.  
  
```  
void SetRegisterAsBrowser(BOOL bNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `bNewValue`  
 Determina se Internet Explorer viene registrato come un browser di livello superiore. Se diverso da zero, il browser web è registrato come un browser di livello superiore. Se è zero, non è un browser di livello superiore. Il valore predefinito è zero.  
  
### <a name="remarks"></a>Note  
 Un browser di livello superiore viene impostato nel Registro di sistema come browser predefinito.  
  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namesetregisterasdroptargeta--chtmlviewsetregisterasdroptarget"></a><a name="setregisterasdroptarget"></a>CHtmlView::SetRegisterAsDropTarget  
 Chiamare questa funzione membro per impostare un valore che indica se il controllo WebBrowser viene registrato come destinazione di rilascio per la navigazione.  
  
```  
void SetRegisterAsDropTarget(BOOL bNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `bNewValue`  
 Determina se il controllo WebBrowser è registrato come destinazione di rilascio per la navigazione. Se diverso da zero, l'oggetto viene registrato come destinazione di trascinamento; Se è zero, non è una destinazione di rilascio.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namesetsilenta--chtmlviewsetsilent"></a><a name="setsilent"></a>CHtmlView::SetSilent  
 Chiamare questa funzione membro per impostare un valore che indica se può essere visualizzata alcuna finestra di dialogo.  
  
```  
void SetSilent(BOOL bNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `bNewValue`  
 Se diverso da zero, non verranno visualizzate finestre di dialogo; Se è zero, verranno visualizzate finestre di dialogo. Il valore predefinito è zero.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namesetstatusbara--chtmlviewsetstatusbar"></a><a name="setstatusbar"></a>CHtmlView::SetStatusBar  
 Chiamare questa funzione membro per visualizzare la barra di stato.  
  
```  
void SetStatusBar(BOOL bNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `bNewValue`  
 Diverso da zero se la barra di stato è visibile; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a Internet Explorer. Se si utilizza questa chiamata con un controllo WebBrowser, non verrà restituito alcun errore, ma lo ignora questa chiamata.  
  
##  <a name="a-namesettheatermodea--chtmlviewsettheatermode"></a><a name="settheatermode"></a>CHtmlView::SetTheaterMode  
 Chiamare questa funzione membro per impostare un valore che indica se il controllo WebBrowser è in modalità teatro.  
  
```  
void SetTheaterMode(BOOL bNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `bNewValue`  
 Diverso da zero per impostare il controllo WebBrowser alla modalità teatro. in caso contrario, zero. Il valore predefinito è zero.  
  
### <a name="remarks"></a>Note  
 Quando il browser web è in modalità teatro, la finestra principale del browser riempie l'intera schermata, viene visualizzata una barra degli strumenti con un set minimo di strumenti di esplorazione e la barra di stato viene visualizzato nell'angolo superiore destro dello schermo.  
  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namesettoolbara--chtmlviewsettoolbar"></a><a name="settoolbar"></a>CHtmlView::SetToolBar  
 Chiamare questa funzione membro per mostrare o nascondere la barra degli strumenti di Internet Explorer.  
  
```  
void SetToolBar(int nNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `nNewValue`  
 Indica se visualizzare la barra degli strumenti. Diverso da zero se la barra degli strumenti è visualizzata; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a Internet Explorer. Se si utilizza questa chiamata con un controllo WebBrowser, non verrà restituito alcun errore, ma lo ignora questa chiamata.  
  
##  <a name="a-namesettopa--chtmlviewsettop"></a><a name="settop"></a>CHtmlView::SetTop  
 Chiamare questa funzione membro per impostare la distanza tra il margine interno superiore del controllo WebBrowser e il bordo superiore del relativo contenitore  
  
```  
void SetTop(long nNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `nNewValue`  
 Coordinata dello schermo del bordo superiore della finestra principale.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namesetvisiblea--chtmlviewsetvisible"></a><a name="setvisible"></a>CHtmlView::SetVisible  
 Chiamare questa funzione membro per impostare lo stato di visibilità del controllo WebBrowser.  
  
```  
void SetVisible(BOOL bNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `bNewValue`  
 Diverso da zero se il controllo è visibile; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
##  <a name="a-namesetwidtha--chtmlviewsetwidth"></a><a name="setwidth"></a>CHtmlView::SetWidth  
 Imposta la larghezza della finestra principale di Internet Explorer.  
  
```  
void SetWidth(long nNewValue);
```  
  
### <a name="parameters"></a>Parametri  
 `nNewValue`  
 La larghezza, in pixel, della finestra principale di Internet Explorer.  
  
##  <a name="a-namestopa--chtmlviewstop"></a><a name="stop"></a>CHtmlView::Stop  
 Chiamare questa funzione membro per Annulla ogni spostamento in sospeso o operazione di download e arresta qualsiasi elemento dinamico della pagina, ad esempio background suoni e animazioni.  
  
```  
void Stop();
```  
  
### <a name="remarks"></a>Note  
 Si applica a WebBrowser e Internet Explorer.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di MFCIE MFC](../../visual-cpp-samples.md)   
 [Classe CFormView](../../mfc/reference/cformview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [IWebBrowser2](https://msdn.microsoft.com/library/aa752127.aspx)



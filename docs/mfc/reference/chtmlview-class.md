---
title: "CHtmlView (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CHtmlView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "browser, supporto MFC per"
  - "CHtmlView (classe)"
  - "WebBrowser (controllo)"
  - "WebBrowser (controllo), supporto MFC"
ms.assetid: 904976af-73de-4aba-84ac-cfae8e2be09a
caps.latest.revision: 24
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CHtmlView (classe)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità del controllo WebBrowser nel contesto dell'architettura documento\/visualizzazione di MFC.  
  
## Sintassi  
  
```  
class CHtmlView : public CFormView  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHtmlView::Create](../Topic/CHtmlView::Create.md)|Crea il controllo WebBrowser.|  
|[CHtmlView::CreateControlSite](../Topic/CHtmlView::CreateControlSite.md)|Overridable usato per creare un'istanza del sito del controllo per ospitare un controllo nel form.|  
|[CHtmlView::ExecFormsCommand](../Topic/CHtmlView::ExecFormsCommand.md)|Esegue il comando specificato usando il metodo `IOleCommandTarget::Exec`.|  
|[CHtmlView::ExecWB](../Topic/CHtmlView::ExecWB.md)|Esegue un comando.|  
|[CHtmlView::GetAddressBar](../Topic/CHtmlView::GetAddressBar.md)|Determina se la barra degli indirizzi dell'oggetto Internet Explorer è visibile. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::GetApplication](../Topic/CHtmlView::GetApplication.md)|Recupera un oggetto applicazione che rappresenta l'applicazione contenente l'istanza corrente dell'applicazione Internet Explorer.|  
|[CHtmlView::GetBusy](../Topic/CHtmlView::GetBusy.md)|Recupera un valore che indica se è ancora in corso un download o un'altra attività.|  
|[CHtmlView::GetContainer](../Topic/CHtmlView::GetContainer.md)|Recupera il contenitore del controllo WebBrowser.|  
|[CHtmlView::GetFullName](../Topic/CHtmlView::GetFullName.md)|Recupera il nome completo, incluso il percorso, della risorsa visualizzata nel Web browser. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::GetFullScreen](../Topic/CHtmlView::GetFullScreen.md)|Indica se il controllo WebBrowser opera in modalità a schermo intero o in modalità normale.|  
|[CHtmlView::GetHeight](../Topic/CHtmlView::GetHeight.md)|Recupera l'altezza della finestra principale di Internet Explorer.|  
|[CHtmlView::GetHtmlDocument](../Topic/CHtmlView::GetHtmlDocument.md)|Recupera il documento HTML attivo.|  
|[CHtmlView::GetLeft](../Topic/CHtmlView::GetLeft.md)|Recupera le coordinate dello schermo del bordo sinistro della finestra principale di Internet Explorer.|  
|[CHtmlView::GetLocationName](../Topic/CHtmlView::GetLocationName.md)|Recupera il nome della risorsa che è attualmente visualizzata in WebBrowser|  
|[CHtmlView::GetLocationURL](../Topic/CHtmlView::GetLocationURL.md)|Recupera l'URL della risorsa che è attualmente visualizzata in WebBrowser.|  
|[CHtmlView::GetMenuBar](../Topic/CHtmlView::GetMenuBar.md)|Recupera un valore che determina se la barra dei menu è visibile.|  
|[CHtmlView::GetOffline](../Topic/CHtmlView::GetOffline.md)|Recupera un valore che determina se il controllo è offline.|  
|[CHtmlView::GetParentBrowser](../Topic/CHtmlView::GetParentBrowser.md)|Recupera un puntatore all'interfaccia `IDispatch`. Per altre informazioni, vedere [Implementing the IDispatch Interface](http://msdn.microsoft.com/it-it/0e171f7f-0022-4e9b-ac8e-98192828e945).|  
|[CHtmlView::GetProperty](../Topic/CHtmlView::GetProperty.md)|Recupera il valore corrente di una proprietà associata all'oggetto specificato.|  
|[CHtmlView::GetReadyState](../Topic/CHtmlView::GetReadyState.md)|Recupera lo stato di pronto dell'oggetto del Web browser.|  
|[CHtmlView::GetRegisterAsBrowser](../Topic/CHtmlView::GetRegisterAsBrowser.md)|Indica se il controllo WebBrowser viene registrato come browser di livello superiore per la risoluzione dei nomi di destinazione.|  
|[CHtmlView::GetRegisterAsDropTarget](../Topic/CHtmlView::GetRegisterAsDropTarget.md)|Indica se il controllo WebBrowser viene registrato come destinazione di rilascio per la navigazione.|  
|[CHtmlView::GetSilent](../Topic/CHtmlView::GetSilent.md)|Indica se è possibile visualizzare qualsiasi finestra di dialogo.|  
|[CHtmlView::GetSource](../Topic/CHtmlView::GetSource.md)|Il codice sorgente HTML della pagina Web.|  
|[CHtmlView::GetStatusBar](../Topic/CHtmlView::GetStatusBar.md)|Indica se la barra di stato di Internet Explorer è visibile. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::GetTheaterMode](../Topic/CHtmlView::GetTheaterMode.md)|Indica se il controllo WebBrowser è in modalità schermo intero.|  
|[CHtmlView::GetToolBar](../Topic/CHtmlView::GetToolBar.md)|Recupera un valore che determina se la barra degli strumenti è visibile.|  
|[CHtmlView::GetTop](../Topic/CHtmlView::GetTop.md)|Recupera le coordinate dello schermo del bordo destro della finestra principale di Internet Explorer.|  
|[CHtmlView::GetTopLevelContainer](../Topic/CHtmlView::GetTopLevelContainer.md)|Recupera un valore che indica se l'oggetto corrente è il contenitore di livello superiore del controllo WebBrowser.|  
|[CHtmlView::GetType](../Topic/CHtmlView::GetType.md)|Recupera il nome del tipo dell'oggetto documento.|  
|[CHtmlView::GetVisible](../Topic/CHtmlView::GetVisible.md)|Recupera un valore che indica se l'oggetto è visibile o nascosto.|  
|[CHtmlView::GetWidth](../Topic/CHtmlView::GetWidth.md)|Recupera la larghezza della finestra principale di Internet Explorer.|  
|[CHtmlView::GoBack](../Topic/CHtmlView::GoBack.md)|Passa all'elemento precedente nell'elenco di cronologia.|  
|[CHtmlView::GoForward](../Topic/CHtmlView::GoForward.md)|Passa all'elemento successivo nell'elenco di cronologia.|  
|[CHtmlView::GoHome](../Topic/CHtmlView::GoHome.md)|Consente di passare alla home page o alla pagina iniziale corrente.|  
|[CHtmlView::GoSearch](../Topic/CHtmlView::GoSearch.md)|Passa alla pagina di ricerca corrente.|  
|[CHtmlView::LoadFromResource](../Topic/CHtmlView::LoadFromResource.md)|Carica una risorsa nel controllo WebBrowser.|  
|[CHtmlView::Navigate](../Topic/CHtmlView::Navigate.md)|Passa alla risorsa identificata da un URL.|  
|[CHtmlView::Navigate2](../Topic/CHtmlView::Navigate2.md)|Passa alla risorsa identificata da un URL o al file identificato da un percorso completo.|  
|[CHtmlView::OnBeforeNavigate2](../Topic/CHtmlView::OnBeforeNavigate2.md)|Chiamata eseguita prima di una navigazione con il controllo WebBrowser dato \(sia su una finestra che su una pagina con frame\).|  
|[CHtmlView::OnCommandStateChange](../Topic/CHtmlView::OnCommandStateChange.md)|Chiamata eseguita per notificare a un'applicazione che lo stato di abilitazione di un comando del Web browser è cambiato.|  
|[CHtmlView::OnDocumentComplete](../Topic/CHtmlView::OnDocumentComplete.md)|Chiamata eseguita per notificare a un'applicazione che un documento ha raggiunto lo stato `READYSTATE_COMPLETE`.|  
|[CHtmlView::OnDocWindowActivate](../Topic/CHtmlView::OnDocWindowActivate.md)|Chiamata eseguita da Internet Explorer o da un'implementazione MSHTML di [IOleInPlaceActiveObject::OnDocWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms687281) per notificare l'oggetto sul posto attivo quando la finestra del documento del contenitore è attivata o disattivata.|  
|[CHtmlView::OnDownloadBegin](../Topic/CHtmlView::OnDownloadBegin.md)|Chiamata eseguita per notificare a un'applicazione l'inizio di un'operazione di navigazione.|  
|[CHtmlView::OnDownloadComplete](../Topic/CHtmlView::OnDownloadComplete.md)|Chiamata eseguita quando un'operazione di navigazione termina, viene bloccata o ha esito negativo.|  
|[CHtmlView::OnEnableModeless](../Topic/CHtmlView::OnEnableModeless.md)|Chiamata eseguita per abilitare o disabilitare le finestre di dialogo non modali quando un contenitore crea o elimina una finestra di dialogo modale.|  
|[CHtmlView::OnFilterDataObject](../Topic/CHtmlView::OnFilterDataObject.md)|Chiamata eseguita sull'host da Internet Explorer o MSHTML per consentire all'host di sostituire l'oggetto dati di Internet Explorer o MSHTML.|  
|[CHtmlView::OnFrameWindowActivate](../Topic/CHtmlView::OnFrameWindowActivate.md)|Chiamata eseguita da [IOleInPlaceActiveObject::OnFrameWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms683969) per notificare all'oggetto quando la finestra cornice di primo livello del contenitore è attivata o disattivata.|  
|[CHtmlView::OnFullScreen](../Topic/CHtmlView::OnFullScreen.md)|Chiamata eseguita quando la proprietà FullScreen viene modificata.|  
|[CHtmlView::OnGetDropTarget](../Topic/CHtmlView::OnGetDropTarget.md)|Chiamata eseguita da Internet Explorer o MSHTML quando viene usato come destinazione di trascinamento per consentire all'host di fornire una destinazione [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) alternativa.|  
|[CHtmlView::OnGetExternal](../Topic/CHtmlView::OnGetExternal.md)|Chiamata eseguita da Internet Explorer o MSHTML per ottenere l'interfaccia dell'host `IDispatch`.|  
|[CHtmlView::OnGetHostInfo](../Topic/CHtmlView::OnGetHostInfo.md)|Recupera le funzionalità dell'interfaccia utente dell'host di Internet Explorer o MSHTML.|  
|[CHtmlView::OnGetOptionKeyPath](../Topic/CHtmlView::OnGetOptionKeyPath.md)|Restituisce la chiave del Registro di sistema in cui Internet Explorer o MSHTML archivia le preferenze dell'utente.|  
|[CHtmlView::OnHideUI](../Topic/CHtmlView::OnHideUI.md)|Chiamata eseguita quando Internet Explorer o MSHTML rimuove i menu e le barre degli strumenti.|  
|[CHtmlView::OnMenuBar](../Topic/CHtmlView::OnMenuBar.md)|Chiamata eseguita quando la proprietà MenuBar viene modificata.|  
|[CHtmlView::OnNavigateComplete2](../Topic/CHtmlView::OnNavigateComplete2.md)|Chiamata eseguita dopo una navigazione a un collegamento ipertestuale \(sia su una finestra che su una pagina con frame\).|  
|[CHtmlView::OnNavigateError](../Topic/CHtmlView::OnNavigateError.md)|Chiamata eseguita dal framework in caso di errore di un collegamento ipertestuale.|  
|[CHtmlView::OnNewWindow2](../Topic/CHtmlView::OnNewWindow2.md)|Chiamata eseguita quando occorre creare una nuova finestra per visualizzare una risorsa.|  
|[CHtmlView::OnProgressChange](../Topic/CHtmlView::OnProgressChange.md)|Chiamata eseguita per notificare a un'applicazione che lo stato di avanzamento di un'operazione di download è stato aggiornato.|  
|[CHtmlView::OnPropertyChange](../Topic/CHtmlView::OnPropertyChange.md)|Chiamata eseguita per notificare a un'applicazione che il metodo [PutProperty](../Topic/CHtmlView::PutProperty.md) ha modificato il valore di una proprietà.|  
|[CHtmlView::OnQuit](../Topic/CHtmlView::OnQuit.md)|Chiamata eseguita per notificare a un'applicazione che l'applicazione Internet Explorer è pronta per essere chiusa \(si applica solo a Internet Explorer\).|  
|[CHtmlView::OnResizeBorder](../Topic/CHtmlView::OnResizeBorder.md)|Chiamata eseguita dall'implementazione di Internet Explorer o MSHTML di [IOleInPlaceActiveObject::ResizeBorder](http://msdn.microsoft.com/library/windows/desktop/ms680053), che avvisa l'oggetto che è necessario ridimensionare il relativo spazio di bordo.|  
|[CHtmlView::OnShowContextMenu](../Topic/CHtmlView::OnShowContextMenu.md)|Chiamata eseguita da Internet Explorer o MSHTML quando sta per visualizzare il menu di scelta rapida.|  
|[CHtmlView::OnShowUI](../Topic/CHtmlView::OnShowUI.md)|Chiamata eseguita prima che Internet Explorer o MSHTML visualizzi i menu e le barre degli strumenti.|  
|[CHtmlView::OnStatusBar](../Topic/CHtmlView::OnStatusBar.md)|Chiamata eseguita quando la proprietà StatusBar viene modificata.|  
|[CHtmlView::OnStatusTextChange](../Topic/CHtmlView::OnStatusTextChange.md)|Chiamata eseguita per notificare a un'applicazione che il testo della barra di stato associata al controllo WebBrowser è cambiato.|  
|[CHtmlView::OnTheaterMode](../Topic/CHtmlView::OnTheaterMode.md)|Chiamata eseguita quando la proprietà TheaterMode viene modificata.|  
|[CHtmlView::OnTitleChange](../Topic/CHtmlView::OnTitleChange.md)|Chiamata eseguita per notificare a un'applicazione che il titolo di un documento nel controllo WebBrowser diviene disponibile o cambia.|  
|[CHtmlView::OnToolBar](../Topic/CHtmlView::OnToolBar.md)|Chiamata eseguita quando la proprietà ToolBar viene modificata.|  
|[CHtmlView::OnTranslateAccelerator](../Topic/CHtmlView::OnTranslateAccelerator.md)|Chiamata eseguita da Internet Explorer o MSHTML quando [IOleInPlaceActiveObject::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693360) o [IOleControlSite::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693756) viene chiamato per elaborare i messaggi del tasto di scelta rapida di menu dalla coda di messaggi del contenitore.|  
|[CHtmlView::OnTranslateUrl](../Topic/CHtmlView::OnTranslateUrl.md)|Chiamata eseguita da Internet Explorer o MSHTML per consentire all'host la possibilità di modificare l'URL che deve essere caricato.|  
|[CHtmlView::OnUpdateUI](../Topic/CHtmlView::OnUpdateUI.md)|Notifica all'host che lo stato del comando è stato modificato.|  
|[CHtmlView::OnVisible](../Topic/CHtmlView::OnVisible.md)|Chiamata eseguita quando la finestra del controllo WebBrowser deve essere mostrata o nascosta.|  
|[CHtmlView::PutProperty](../Topic/CHtmlView::PutProperty.md)|Imposta il valore di una proprietà associata all'oggetto specificato.|  
|[CHtmlView::QueryFormsCommand](../Topic/CHtmlView::QueryFormsCommand.md)|Query per lo stato di uno o più comandi generati dagli eventi dell'interfaccia utente.|  
|[CHtmlView::QueryStatusWB](../Topic/CHtmlView::QueryStatusWB.md)|Esegue la query dello stato di un comando elaborato dal controllo WebBrowser.|  
|[CHtmlView::Refresh](../Topic/CHtmlView::Refresh.md)|Ricarica il file corrente.|  
|[CHtmlView::Refresh2](../Topic/CHtmlView::Refresh2.md)|Ricarica il file corrente e, facoltativamente, impedisce l'invio dell'intestazione `pragma:nocache`.|  
|[CHtmlView::SetAddressBar](../Topic/CHtmlView::SetAddressBar.md)|Mostra o nasconde la barra degli indirizzi dell'oggetto Internet Explorer. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::SetFullScreen](../Topic/CHtmlView::SetFullScreen.md)|Imposta un valore per determinare se il controllo opera in modalità a schermo intero o in modalità normale. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::SetHeight](../Topic/CHtmlView::SetHeight.md)|Imposta l'altezza della finestra principale di Internet Explorer.|  
|[CHtmlView::SetLeft](../Topic/CHtmlView::SetLeft.md)|Imposta la posizione orizzontale della finestra principale di Internet Explorer.|  
|[CHtmlView::SetMenuBar](../Topic/CHtmlView::SetMenuBar.md)|Imposta un valore per determinare se la barra dei menu del controllo è visibile. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::SetOffline](../Topic/CHtmlView::SetOffline.md)|Imposta un valore per determinare se il controllo è offline.|  
|[CHtmlView::SetRegisterAsBrowser](../Topic/CHtmlView::SetRegisterAsBrowser.md)|Imposta un valore che indica se il controllo WebBrowser viene registrato come browser di livello superiore per la risoluzione dei nomi di destinazione.|  
|[CHtmlView::SetRegisterAsDropTarget](../Topic/CHtmlView::SetRegisterAsDropTarget.md)|Imposta un valore che indica se il controllo WebBrowser viene registrato come destinazione di rilascio per la navigazione.|  
|[CHtmlView::SetSilent](../Topic/CHtmlView::SetSilent.md)|Imposta un valore per determinare se il controllo consente di visualizzare finestre di dialogo.|  
|[CHtmlView::SetStatusBar](../Topic/CHtmlView::SetStatusBar.md)|Imposta un valore per determinare se la barra di stato di Internet Explorer è visibile. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::SetTheaterMode](../Topic/CHtmlView::SetTheaterMode.md)|Imposta un valore che indica se il controllo WebBrowser è in modalità schermo intero.|  
|[CHtmlView::SetToolBar](../Topic/CHtmlView::SetToolBar.md)|Imposta un valore per determinare se la barra degli strumenti del controllo è visibile. Il controllo WebBrowser viene ignorato; solo Internet Explorer.|  
|[CHtmlView::SetTop](../Topic/CHtmlView::SetTop.md)|Imposta la posizione verticale della finestra principale di Internet Explorer.|  
|[CHtmlView::SetVisible](../Topic/CHtmlView::SetVisible.md)|Imposta un valore che indica se l'oggetto è visibile o nascosto.|  
|[CHtmlView::SetWidth](../Topic/CHtmlView::SetWidth.md)|Imposta la larghezza della finestra principale di Internet Explorer.|  
|[CHtmlView::Stop](../Topic/CHtmlView::Stop.md)|Interrompe l'apertura di un file.|  
  
## Note  
 Il controllo WebBrowser è una finestra in cui l'utente può esplorare siti nel Web, nonché le cartelle nel file system locale e in una rete. Il controllo WebBrowser supporta collegamenti ipertestuali, la navigazione con URL \(Uniform Resource Locator\) e conserva un elenco di cronologia.  
  
## Uso della classe CHtmlView in un'applicazione MFC  
 Nell'applicazione framework MFC standard \(basata su SDI o MDI\) l'oggetto visualizzazione deriva comunemente da un set di classi specializzato. Queste classi, tutte derivate da `CView`, offrono funzionalità specializzate oltre a quelle fornite da `CView`.  
  
 Basando la classe visualizzazione dell'applicazione su `CHtmlView` fornisce la visualizzazione con il controllo WebBrowser. Ciò rende effettivamente l'applicazione un Web browser. Il metodo preferito per creare un'applicazione di tipo Web browser consiste nell'usare la Creazione guidata applicazione MFC e specificare `CHtmlView` come classe visualizzazione. Per altre informazioni sull'implementazione e sull'uso del controllo WebBrowser all'interno delle applicazioni MFC, vedere [Creazione di un'applicazione MFC di tipo Web browser](../../mfc/reference/creating-a-web-browser-style-mfc-application.md).  
  
> [!NOTE]
>  Il controllo ActiveX WebBrowser \(e quindi `CHtmlView`\) è disponibile solo per i programmi in esecuzione in Windows NT 4.0 o versioni successive, in cui è installato Internet Explorer 4.0 o versione successiva.  
  
 `CHtmlView` è progettato per le applicazioni che accedono al Web \(e\/o documenti HTML\). Le funzioni membro `CHtmlView` seguenti sono relative solo all'applicazione Internet Explorer. Queste funzioni verranno eseguite sul controllo WebBrowser, ma non hanno alcun effetto visibile.  
  
-   [GetAddressBar](../Topic/CHtmlView::GetAddressBar.md)  
  
-   [GetFullName](../Topic/CHtmlView::GetFullName.md)  
  
-   [GetStatusBar](../Topic/CHtmlView::GetStatusBar.md)  
  
-   [SetAddressBar](../Topic/CHtmlView::SetAddressBar.md)  
  
-   [SetFullScreen](../Topic/CHtmlView::SetFullScreen.md)  
  
-   [SetMenuBar](../Topic/CHtmlView::SetMenuBar.md)  
  
-   [SetStatusBar](../Topic/CHtmlView::SetStatusBar.md)  
  
-   [SetToolBar](../Topic/CHtmlView::SetToolBar.md)  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 [CFormView](../../mfc/reference/cformview-class.md)  
  
 `CHtmlView`  
  
## Requisiti  
 **Intestazione:** afxhtml.h  
  
## Vedere anche  
 [Esempio MFCIE di MFC](../../top/visual-cpp-samples.md)   
 [CFormView Class](../../mfc/reference/cformview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [IWebBrowser2](https://msdn.microsoft.com/en-us/library/aa752127.aspx)
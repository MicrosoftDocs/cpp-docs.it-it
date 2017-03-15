---
title: COleControl (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleControl
dev_langs:
- C++
helpviewer_keywords:
- OLE controls, MFC
- windowless controls, MFC
- windowless controls
- controls [MFC], OLE
- controls [MFC], windowless
- COleControl class
ms.assetid: 53e95299-38e8-447b-9c5f-a381d27f5123
caps.latest.revision: 25
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
ms.openlocfilehash: 7ef5621aaf940be3ebe2806971dfc65d06972a5a
ms.lasthandoff: 02/24/2017

---
# <a name="colecontrol-class"></a>COleControl (classe)
Classe di base avanzata per lo sviluppo di controlli OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleControl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControl::COleControl](#colecontrol)|Crea un oggetto `COleControl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControl::AmbientAppearance](#ambientappearance)|Recupera l'aspetto del controllo corrente.|  
|[COleControl::AmbientBackColor](#ambientbackcolor)|Restituisce il valore della proprietà BackColor di ambiente.|  
|[COleControl::AmbientDisplayName](#ambientdisplayname)|Restituisce il nome del controllo come specificato dal contenitore.|  
|[COleControl::AmbientFont](#ambientfont)|Restituisce il valore della proprietà di tipo di carattere ambiente.|  
|[COleControl::AmbientForeColor](#ambientforecolor)|Restituisce il valore della proprietà ForeColor di ambiente.|  
|[COleControl:: AmbientLocaleID](#ambientlocaleid)|Restituisce l'ID impostazioni locali. del contenitore|  
|[COleControl::AmbientScaleUnits](#ambientscaleunits)|Restituisce il tipo di unità usate dal contenitore.|  
|[COleControl::AmbientShowGrabHandles](#ambientshowgrabhandles)|Determina se devono essere visualizzati quadratini di ridimensionamento.|  
|[COleControl::AmbientShowHatching](#ambientshowhatching)|Determina se verrà visualizzato un tratteggio.|  
|[COleControl::AmbientTextAlign](#ambienttextalign)|Restituisce il tipo di allineamento del testo specificato dal contenitore.|  
|[COleControl::AmbientUIDead](#ambientuidead)|Determina se il controllo deve rispondere alle azioni dell'interfaccia utente.|  
|[COleControl::AmbientUserMode](#ambientusermode)|Determina la modalità del contenitore.|  
|[COleControl::BoundPropertyChanged](#boundpropertychanged)|Notifica al contenitore che è stata modificata una proprietà associata.|  
|[COleControl::BoundPropertyRequestEdit](#boundpropertyrequestedit)|Autorizzazioni richieste per modificare il valore della proprietà.|  
|[COleControl::ClientToParent](#clienttoparent)|Converte un punto relativo all'origine del controllo a un punto relativo all'origine del relativo contenitore.|  
|[COleControl::ClipCaretRect](#clipcaretrect)|Modifica di un rettangolo di accento circonflesso se di un controllo si sovrapposta.|  
|[COleControl::ControlInfoChanged](#controlinfochanged)|Chiamare questa funzione dopo che è stato modificato il set di tasti di scelta gestita dal controllo.|  
|[COleControl::DisplayError](#displayerror)|Visualizza eventi di errore predefiniti del controllo.|  
|[COleControl::DoClick](#doclick)|Implementazione del materiale `DoClick` metodo.|  
|[DoPropExchange](#dopropexchange)|Serializza le proprietà di un `COleControl` oggetto.|  
|[COleControl::DoSuperclassPaint](#dosuperclasspaint)|Ridisegna un controllo OLE che è stato sottoclassato da un controllo di Windows.|  
|[COleControl::EnableSimpleFrame](#enablesimpleframe)|Abilita il supporto di frame semplice per un controllo.|  
|[COleControl::ExchangeExtent](#exchangeextent)|Serializza la larghezza e altezza del controllo.|  
|[COleControl::ExchangeStockProps](#exchangestockprops)|Serializza le proprietà predefinite del controllo.|  
|[COleControl:: ExchangeVersion](#exchangeversion)|Serializza il numero di versione del controllo.|  
|[COleControl::FireClick](#fireclick)|Viene generato il codice `Click` evento.|  
|[COleControl::FireDblClick](#firedblclick)|Viene generato il codice `DblClick` evento.|  
|[COleControl:: FireError](#fireerror)|Viene generato il codice `Error` evento.|  
|[COleControl:: FireEvent](#fireevent)|Viene generato un evento personalizzato.|  
|[COleControl::FireKeyDown](#firekeydown)|Viene generato il codice `KeyDown` evento.|  
|[COleControl::FireKeyPress](#firekeypress)|Viene generato il codice `KeyPress` evento.|  
|[COleControl::FireKeyUp](#firekeyup)|Viene generato il codice `KeyUp` evento.|  
|[COleControl::FireMouseDown](#firemousedown)|Viene generato il codice `MouseDown` evento.|  
|[COleControl::FireMouseMove](#firemousemove)|Viene generato il codice `MouseMove` evento.|  
|[COleControl::FireMouseUp](#firemouseup)|Viene generato il codice `MouseUp` evento.|  
|[COleControl::FireReadyStateChange](#firereadystatechange)|Viene generato un evento quando lo stato del controllo cambia.|  
|[COleControl:: GetActivationPolicy](#getactivationpolicy)|Modifica il comportamento di attivazione predefinito di un controllo che supporta il `IPointerInactive` interfaccia.|  
|[COleControl:: getAmbientProperty](#getambientproperty)|Restituisce il valore della proprietà di ambiente specificato.|  
|[COleControl::GetAppearance](#getappearance)|Restituisce il valore della proprietà Appearance azionario.|  
|[COleControl::GetBackColor](#getbackcolor)|Restituisce il valore della proprietà BackColor azionario.|  
|[COleControl::GetBorderStyle](#getborderstyle)|Restituisce il valore della proprietà BorderStyle azionario.|  
|[COleControl::GetCapture](#getcapture)|Determina se un oggetto controllo senza finestra, attivato lo stato mouse capture.|  
|[COleControl::GetClassID](#getclassid)|Recupera l'ID della classe del controllo OLE.|  
|[COleControl::GetClientOffset](#getclientoffset)|Recupera la differenza tra l'angolo superiore sinistro dell'area rettangolare del controllo e nell'angolo superiore sinistro della relativa area client.|  
|[COleControl::GetClientRect](#getclientrect)|Recupera le dimensioni dell'area client del controllo.|  
|[COleControl::GetClientSite](#getclientsite)|Query su un oggetto per il puntatore al relativo sito client corrente all'interno del contenitore.|  
|[COleControl:: GetControlFlags](#getcontrolflags)|Recupera le impostazioni del flag di controllo.|  
|[COleControl::GetControlSize](#getcontrolsize)|Restituisce la posizione e le dimensioni del controllo OLE.|  
|[COleControl::GetDC](#getdc)|Fornisce un mezzo per un controllo senza finestra ottenere un contesto di dispositivo dal relativo contenitore.|  
|[COleControl::GetEnabled](#getenabled)|Restituisce il valore della proprietà Enabled di scorte.|  
|[COleControl::GetExtendedControl](#getextendedcontrol)|Recupera un puntatore a un oggetto controllo esteso appartenente al contenitore.|  
|[COleControl::GetFocus](#getfocus)|Determina se il controllo ha lo stato attivo.|  
|[COleControl::GetFont](#getfont)|Restituisce il valore della proprietà del carattere predefinite.|  
|[COleControl::GetFontTextMetrics](#getfonttextmetrics)|Restituisce le metriche di un `CFontHolder` oggetto.|  
|[COleControl::GetForeColor](#getforecolor)|Restituisce il valore della proprietà ForeColor predefinite.|  
|[COleControl::GetHwnd](#gethwnd)|Restituisce il valore della proprietà hWnd azionario.|  
|[COleControl::GetMessageString](#getmessagestring)|Fornisce il testo della barra di stato per una voce di menu.|  
|[COleControl::GetNotSupported](#getnotsupported)|Impedisce l'accesso al valore della proprietà del controllo dall'utente.|  
|[COleControl::GetReadyState](#getreadystate)|Restituisce lo stato di conformità del controllo.|  
|[COleControl::GetRectInContainer](#getrectincontainer)|Restituisce il rettangolo del controllo rispetto al relativo contenitore.|  
|[COleControl::GetStockTextMetrics](#getstocktextmetrics)|Restituisce le metriche della proprietà predefinita.|  
|[COleControl::GetText](#gettext)|Restituisce il valore della proprietà di testo o didascalia predefinite.|  
|[COleControl:: GetWindowlessDropTarget](#getwindowlessdroptarget)|Eseguire l'override per consentire un controllo senza finestra per la destinazione di trascinamento e operazioni di trascinamento.|  
|[COleControl::InitializeIIDs](#initializeiids)|Indica la classe base degli IID verrà utilizzato il controllo.|  
|[COleControl::InternalGetFont](#internalgetfont)|Restituisce un `CFontHolder` oggetto per la proprietà predefinita.|  
|[COleControl::InternalGetText](#internalgettext)|Recupera la proprietà di testo o didascalia predefinita.|  
|[COleControl:: InternalSetReadyState](#internalsetreadystate)|Imposta lo stato di conformità del controllo e viene generato l'evento di modifica di stato pronto.|  
|[COleControl::InvalidateControl](#invalidatecontrol)|Invalida un'area del controllo visualizzata, in modo da ricreare.|  
|[COleControl::InvalidateRgn](#invalidatergn)|Invalida l'area client della finestra contenitore all'interno dell'area specificata. Consente di ricreare i controlli privi di finestra nell'area.|  
|[COleControl::IsConvertingVBX](#isconvertingvbx)|Consente di caricare specializzati di un controllo OLE.|  
|[COleControl::IsModified](#ismodified)|Determina se è cambiato lo stato del controllo.|  
|[COleControl:: IsOptimizedDraw](#isoptimizeddraw)|Indica se il contenitore supporta disegno ottimizzato per l'operazione di disegno corrente.|  
|[COleControl::IsSubclassedControl](#issubclassedcontrol)|Chiamato per determinare se il controllo è una sottoclasse una finestra di controllano.|  
|[COleControl::Load](#load)|Reimposta dati asincroni precedenti e avvia un nuovo caricamento della proprietà asincrona del controllo.|  
|[COleControl::LockInPlaceActive](#lockinplaceactive)|Determina se il controllo può essere disattivato dal contenitore.|  
|[COleControl::OnAmbientPropertyChange](#onambientpropertychange)|Chiamato quando viene modificata una proprietà di ambiente.|  
|[COleControl::OnAppearanceChanged](#onappearancechanged)|Chiamato quando viene modificata la proprietà di aspetto predefinita.|  
|[COleControl::OnBackColorChanged](#onbackcolorchanged)|Chiamato quando viene modificata la proprietà BackColor predefinita.|  
|[COleControl::OnBorderStyleChanged](#onborderstylechanged)|Chiamato quando viene modificata la proprietà BorderStyle predefinita.|  
|[COleControl::OnClick](#onclick)|Chiamato per generare azioni fare clic su eventi.|  
|[COleControl::OnClose](#onclose)|Notifica al controllo che `IOleControl::Close` è stato chiamato.|  
|[COleControl::OnDoVerb](#ondoverb)|Chiamato dopo l'esecuzione di un verbo di controllo.|  
|[COleControl:: OnDraw](#ondraw)|Chiamato quando viene richiesto un controllo venga ricreato.|  
|[COleControl:: OnDrawMetafile](#ondrawmetafile)|Chiamato dal contenitore quando viene richiesto un controllo venga ricreato utilizzando un contesto di dispositivo metafile.|  
|[COleControl::OnEdit](#onedit)|Chiamato dal contenitore dell'interfaccia utente di attivare un controllo OLE.|  
|[COleControl::OnEnabledChanged](#onenabledchanged)|Chiamato quando viene modificata la proprietà Enabled di scorte.|  
|[COleControl::OnEnumVerbs](#onenumverbs)|Chiamato dal contenitore di enumerare i verbi del controllo.|  
|[COleControl::OnEventAdvise](#oneventadvise)|Chiamato quando i gestori eventi siano connessi o disconnessi da un controllo.|  
|[COleControl::OnFontChanged](#onfontchanged)|Chiamato quando viene modificata la proprietà predefinita.|  
|[COleControl::OnForeColorChanged](#onforecolorchanged)|Chiamato quando viene modificata la proprietà ForeColor predefinite.|  
|[COleControl::OnFreezeEvents](#onfreezeevents)|Chiamato quando gli eventi del controllo vengono bloccati o non è bloccati.|  
|[COleControl::OnGetColorSet](#ongetcolorset)|Notifica al controllo che `IOleObject::GetColorSet` è stato chiamato.|  
|[COleControl::OnGetControlInfo](#ongetcontrolinfo)|Vengono fornite informazioni di tasti di scelta rapida per il contenitore.|  
|[COleControl::OnGetDisplayString](#ongetdisplaystring)|Chiamato per ottenere una stringa per rappresentare un valore della proprietà.|  
|[COleControl::OnGetInPlaceMenu](#ongetinplacemenu)|Richiede l'handle del menu del controllo che verrà unita con il contenitore.|  
|[COleControl::OnGetNaturalExtent](#ongetnaturalextent)|Eseguire l'override per recuperare la dimensione di visualizzazione del controllo più vicina alla modalità di dimensioni e la misura proposta.|  
|[COleControl::OnGetPredefinedStrings](#ongetpredefinedstrings)|Restituisce le stringhe che rappresentano i valori possibili per una proprietà.|  
|[COleControl::OnGetPredefinedValue](#ongetpredefinedvalue)|Restituisce il valore corrispondente a una stringa predefinita.|  
|[COleControl::OnGetViewExtent](#ongetviewextent)|Eseguire l'override per recuperare la dimensione delle aree di visualizzazione del controllo (può essere utilizzato per abilitare il disegno in due passaggi).|  
|[COleControl::OnGetViewRect](#ongetviewrect)|Eseguire l'override per convertire le dimensioni del controllo in un rettangolo a partire da una posizione specifica.|  
|[COleControl::OnGetViewStatus](#ongetviewstatus)|Eseguire l'override per recuperare lo stato di visualizzazione del controllo.|  
|[COleControl::OnHideToolBars](#onhidetoolbars)|Chiamato dal contenitore quando il controllo è disattivata l'interfaccia utente.|  
|[COleControl::OnInactiveMouseMove](#oninactivemousemove)|Sostituzione per il contenitore per il controllo inattivo in invio del puntatore del mouse `WM_MOUSEMOVE` messaggi al controllo.|  
|[COleControl::OnInactiveSetCursor](#oninactivesetcursor)|Sostituzione per il contenitore per il controllo inattivo in invio del puntatore del mouse `WM_SETCURSOR` messaggi al controllo.|  
|[COleControl::OnKeyDownEvent](#onkeydownevent)|Chiamato dopo che è stata attivata l'evento KeyDown predefinito.|  
|[COleControl::OnKeyPressEvent](#onkeypressevent)|Chiamato dopo che è stata attivata l'evento KeyPress predefinito.|  
|[COleControl::OnKeyUpEvent](#onkeyupevent)|Chiamato dopo che è stata attivata l'evento KeyUp azionario.|  
|[COleControl::OnMapPropertyToPage](#onmappropertytopage)|Indica quale pagina delle proprietà da utilizzare per modificare una proprietà.|  
|[COleControl::OnMnemonic](#onmnemonic)|Chiamato quando viene premuto un tasto mnemonico del controllo.|  
|[COleControl::OnProperties](#onproperties)|Chiamato quando è stato richiamato verbo "Proprietà" del controllo.|  
|[COleControl::OnQueryHitPoint](#onqueryhitpoint)|Se la visualizzazione del controllo si sovrappone a un determinato punto, eseguire l'override di query.|  
|[COleControl::OnQueryHitRect](#onqueryhitrect)|Eseguire l'override di query se la visualizzazione del controllo si sovrappone a qualsiasi punto in un rettangolo specificato.|  
|[COleControl::OnRenderData](#onrenderdata)|Chiamato dal framework per recuperare i dati nel formato specificato.|  
|[COleControl::OnRenderFileData](#onrenderfiledata)|Chiamato dal framework per recuperare dati da un file nel formato specificato.|  
|[COleControl::OnRenderGlobalData](#onrenderglobaldata)|Chiamato dal framework per recuperare i dati dalla memoria globale nel formato specificato.|  
|[OnResetState](#onresetstate)|Reimposta le proprietà del controllo per i valori predefiniti.|  
|[COleControl:: OnSetClientSite](#onsetclientsite)|Notifica al controllo che `IOleControl::SetClientSite` è stato chiamato.|  
|[COleControl::OnSetData](#onsetdata)|Sostituisce i dati del controllo con un altro valore.|  
|[COleControl::OnSetExtent](#onsetextent)|Chiamato dopo che l'estensione del controllo è stato modificato.|  
|[COleControl::OnSetObjectRects](#onsetobjectrects)|Chiamato dopo che sono state modificate le dimensioni del controllo.|  
|[COleControl::OnShowToolBars](#onshowtoolbars)|Chiamato quando il controllo è stata attivata l'interfaccia utente.|  
|[COleControl::OnTextChanged](#ontextchanged)|Chiamato quando viene modificata la riserva testo o della proprietà Caption.|  
|[COleControl::OnWindowlessMessage](#onwindowlessmessage)|Elabora i messaggi di finestra (eccetto i messaggi di tastiera e mouse) per i controlli privi di finestra.|  
|[COleControl::ParentToClient](#parenttoclient)|Converte un punto relativo all'origine del contenitore a un punto relativo all'origine del controllo.|  
|[COleControl::PostModalDialog](#postmodaldialog)|Notifica al contenitore che è stata chiusa una finestra di dialogo modale.|  
|[COleControl::PreModalDialog](#premodaldialog)|Notifica al contenitore che verrà visualizzata una finestra di dialogo modale.|  
|[COleControl::RecreateControlWindow](#recreatecontrolwindow)|Elimina e ricrea la finestra del controllo.|  
|[COleControl::Refresh](#refresh)|Impone un aggiornamento dell'aspetto del controllo.|  
|[COleControl::ReleaseCapture](#releasecapture)|Rilascia il mouse capture.|  
|[COleControl::ReleaseDC](#releasedc)|Rilascia il contesto di dispositivo di visualizzazione di un contenitore di un controllo senza finestra.|  
|[COleControl::ReparentControlWindow](#reparentcontrolwindow)|Reimposta l'elemento padre della finestra del controllo.|  
|[COleControl::ResetStockProps](#resetstockprops)|Inizializza `COleControl` stock proprietà sui rispettivi valori predefiniti.|  
|[COleControl::ResetVersion](#resetversion)|Inizializza il numero di versione in un determinato valore.|  
|[COleControl::ScrollWindow](#scrollwindow)|Consente a un controllo senza finestra scorrere un'area all'interno di immagine attivo sul posto sullo schermo.|  
|[COleControl::SelectFontObject](#selectfontobject)|Seleziona una proprietà di tipo di carattere personalizzata in un contesto di dispositivo.|  
|[COleControl:: SelectStockFont](#selectstockfont)|Seleziona la proprietà predefinita in un contesto di dispositivo.|  
|[COleControl::SerializeExtent](#serializeextent)|Serializza o Inizializza lo spazio di visualizzazione per il controllo.|  
|[COleControl::SerializeStockProps](#serializestockprops)|Serializza o Inizializza il `COleControl` proprietà predefinite.|  
|[COleControl::SerializeVersion](#serializeversion)|Serializza o Inizializza le informazioni sulla versione del controllo.|  
|[COleControl::SetAppearance](#setappearance)|Imposta il valore della proprietà Appearance azionario.|  
|[COleControl::SetBackColor](#setbackcolor)|Imposta il valore della proprietà BackColor azionario.|  
|[COleControl::SetBorderStyle](#setborderstyle)|Imposta il valore della proprietà BorderStyle azionario.|  
|[COleControl::SetCapture](#setcapture)|Fa sì che la finestra del controllo contenitore di prendere possesso dell'acquisizione del mouse per conto del controllo.|  
|[COleControl::SetControlSize](#setcontrolsize)|Imposta la posizione e dimensioni del controllo OLE.|  
|[COleControl::SetEnabled](#setenabled)|Imposta il valore della proprietà Enabled di scorte.|  
|[COleControl::SetFocus](#setfocus)|Fa sì che la finestra del controllo contenitore richiedere che possiede lo stato attivo per conto del controllo.|  
|[COleControl::SetFont](#setfont)|Imposta il valore della proprietà del carattere predefinite.|  
|[COleControl::SetForeColor](#setforecolor)|Imposta il valore della proprietà ForeColor predefinite.|  
|[COleControl::SetInitialSize](#setinitialsize)|Imposta le dimensioni di un controllo OLE alla prima visualizzazione in un contenitore.|  
|[COleControl::SetModifiedFlag](#setmodifiedflag)|Modifica lo stato modificato di un controllo.|  
|[COleControl::SetNotPermitted](#setnotpermitted)|Indica che una richiesta di modifica non è riuscito.|  
|[COleControl:: SetNotSupported](#setnotsupported)|Impedisce la modifica al valore della proprietà del controllo dall'utente.|  
|[COleControl::SetRectInContainer](#setrectincontainer)|Imposta il rettangolo del controllo rispetto al relativo contenitore.|  
|[COleControl::SetText](#settext)|Imposta il valore della proprietà di testo o didascalia predefinite.|  
|[COleControl:: ThrowError](#throwerror)|Segnala che si è verificato un errore in un controllo OLE.|  
|[COleControl::TransformCoords](#transformcoords)|Trasformazioni di valori tra un contenitore e il controllo delle coordinate.|  
|[COleControl::TranslateColor](#translatecolor)|Converte un **OLE_COLOR** valore a un **COLORREF** valore.|  
|[COleControl::WillAmbientsBeValidDuringLoad](#willambientsbevalidduringload)|Determina se le proprietà di ambiente sarà disponibile al successivo caricamento il controllo.|  
|[COleControl::WindowProc](#windowproc)|Fornisce una procedura di Windows per un `COleControl` oggetto.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControl::DrawContent](#drawcontent)|Chiamato dal framework quando l'aspetto del controllo deve essere aggiornato.|  
|[COleControl::DrawMetafile](#drawmetafile)|Chiamato dal framework quando viene utilizzato il contesto di dispositivo metafile.|  
|[COleControl::IsInvokeAllowed](#isinvokeallowed)|Consente di chiamata al metodo di automazione.|  
|[COleControl::SetInitialDataFormats](#setinitialdataformats)|Chiamato dal framework per inizializzare l'elenco dei formati di dati supportati dal controllo.|  
  
## <a name="remarks"></a>Note  
 Derivata da `CWnd`, questa classe eredita tutte le funzionalità di un oggetto finestra Windows oltre a funzionalità aggiuntive specifiche di OLE, ad esempio di generazione dell'evento e la possibilità di supportare i metodi e proprietà.  
  
 OLE (controlli) possono essere inseriti nelle applicazioni contenitore OLE e comunicano con il contenitore utilizzando un sistema bidirezionale di generazione dell'evento ed espongono metodi e proprietà per il contenitore. Si noti che i contenitori OLE standard supportano solo la funzionalità di base di un controllo OLE. Non sono in grado di supportare funzionalità estese di un controllo OLE. Generazione dell'evento si verifica quando gli eventi vengono inviati al contenitore in seguito a determinate azioni che avvengono nel controllo. A sua volta, il contenitore comunica con il controllo mediante un set di metodi e proprietà analoga alle funzioni membro esposto e membri dati di una classe C++. Questo approccio consente allo sviluppatore di controllare l'aspetto del controllo e notificare al contenitore il verificarsi di determinate azioni.  
  
## <a name="windowless-controls"></a>Controlli privi di finestra  
 Controlli OLE possono essere utilizzato attivo sul posto senza una finestra. Controlli privi di finestra presentano vantaggi significativi:  
  
-   Controlli privi di finestra possono essere trasparente e non rettangolari  
  
-   Controlli privi di finestra ridurre i tempi di creazione e la dimensione di istanza dell'oggetto  
  
 Controlli che non richiedono una finestra. Servizi che offre una finestra possono essere facilmente forniti tramite una singola finestra condivisa (in genere del contenitore) e un po' di codice di invio. La presenza di una finestra è principalmente una complicazione non necessari per l'oggetto.  
  
 Quando si utilizza l'attivazione senza finestra, il contenitore (che dispone di una finestra) è responsabile di fornire servizi che sarebbero altrimenti forniti dalla finestra del controllo. Ad esempio, se il controllo deve eseguire query lo stato attivo, eseguire una query all'input del mouse o ottenere un contesto di dispositivo, queste operazioni vengono gestite dal contenitore. Il `COleControl` [funzioni membro privi di finestra operazione](http://msdn.microsoft.com/en-us/e9e28f79-9a70-4ae4-a5aa-b3e92f1904df) richiamare queste operazioni sul contenitore.  
  
 Quando l'attivazione è abilitata, i delegati di contenitore messaggi per il controllo di input `IOleInPlaceObjectWindowless` interfaccia (un'estensione di [IOleInPlaceObject](http://msdn.microsoft.com/library/windows/desktop/ms692646) per il supporto privi di finestra). `COleControl`dell'implementazione di questa interfaccia invierà messaggi tramite mappa messaggi del controllo, dopo aver modificato le coordinate del mouse in modo appropriato. È possibile elaborare questi messaggi come comuni messaggi di finestra, aggiungendo le voci corrispondenti alla mappa messaggi.  
  
 In un controllo senza finestra, è necessario utilizzare sempre il `COleControl` funzioni membro anziché il corrispondente `CWnd` le funzioni membro o le funzioni API Windows correlate.  
  
 Gli oggetti di controllo OLE possono anche creare una finestra solo quando diventano attivi, ma aumenta la quantità di lavoro necessario per la transizione non attivo-attivo e la velocità della transizione diventa inattivo. Vi sono alcuni casi si tratta di un problema: ad esempio, si consideri una griglia di caselle di testo. Quando il cursore su e giù intelligente attraverso la colonna, ogni controllo deve essere posto attivato e quindi disattivato. La velocità della transizione non attivo/attivo influirà direttamente la velocità di scorrimento.  
  
 Per ulteriori informazioni sullo sviluppo di un'infrastruttura di controllo OLE, vedere gli articoli [controlli ActiveX MFC](../../mfc/mfc-activex-controls.md) e [Cenni preliminari: creazione di un programma di controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md). Per informazioni sull'ottimizzazione OLE (controlli), inclusi i controlli privi di finestra e sfarfallio, vedere [controlli ActiveX MFC: ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `COleControl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxctl. h  
  
##  <a name="a-nameambientbackcolora--colecontrolambientbackcolor"></a><a name="ambientbackcolor"></a>COleControl::AmbientBackColor  
 Restituisce il valore della proprietà BackColor di ambiente.  
  
```  
OLE_COLOR AmbientBackColor();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore corrente di proprietà BackColor di ambiente del contenitore, se presente. Se la proprietà non è supportata, questa funzione restituisce il colore di sfondo definito dal sistema Windows.  
  
### <a name="remarks"></a>Note  
 La proprietà BackColor di ambiente è disponibile per tutti i controlli e viene definita dal contenitore. Si noti che il contenitore non è necessaria per supportare questa proprietà.  
  
##  <a name="a-nameambientdisplaynamea--colecontrolambientdisplayname"></a><a name="ambientdisplayname"></a>COleControl::AmbientDisplayName  
 Il nome del che contenitore è assegnato al controllo può essere utilizzato nei messaggi di errore visualizzati all'utente.  
  
```  
CString AmbientDisplayName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome del controllo OLE. Il valore predefinito è una stringa di lunghezza zero.  
  
### <a name="remarks"></a>Note  
 Si noti che il contenitore non è necessaria per supportare questa proprietà.  
  
##  <a name="a-nameambientfonta--colecontrolambientfont"></a><a name="ambientfont"></a>COleControl::AmbientFont  
 Restituisce il valore della proprietà di tipo di carattere ambiente.  
  
```  
LPFONTDISP AmbientFont();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a interfaccia dispatch del carattere di ambiente del contenitore. Il valore predefinito è **NULL**. Se il valore restituito non è uguale a **NULL**, è responsabile del rilascio del tipo di carattere chiamando il relativo [IUnknown:: Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) funzione membro.  
  
### <a name="remarks"></a>Note  
 La proprietà di tipo di carattere ambiente è definito dal contenitore e disponibile a tutti i controlli. Si noti che il contenitore non è necessaria per supportare questa proprietà.  
  
##  <a name="a-nameambientforecolora--colecontrolambientforecolor"></a><a name="ambientforecolor"></a>COleControl::AmbientForeColor  
 Restituisce il valore della proprietà ForeColor di ambiente.  
  
```  
OLE_COLOR AmbientForeColor();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore corrente di proprietà ForeColor di ambiente del contenitore, se presente. Se non è supportata, questa funzione restituisce il colore del testo definito dal sistema Windows.  
  
### <a name="remarks"></a>Note  
 La proprietà ForeColor di ambiente è disponibile per tutti i controlli e viene definita dal contenitore. Si noti che il contenitore non è necessaria per supportare questa proprietà.  
  
##  <a name="a-nameambientlocaleida--colecontrolambientlocaleid"></a><a name="ambientlocaleid"></a>COleControl:: AmbientLocaleID  
 Restituisce l'ID impostazioni locali. del contenitore  
  
```  
LCID AmbientLocaleID();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore della proprietà LocaleID del contenitore, se presente. Se questa proprietà non è supportata, questa funzione restituisce 0.  
  
### <a name="remarks"></a>Note  
 Il controllo può utilizzare LocaleID per adattare l'interfaccia utente per specifiche impostazioni locali. Si noti che il contenitore non è necessaria per supportare questa proprietà.  
  
##  <a name="a-nameambientappearancea--colecontrolambientappearance"></a><a name="ambientappearance"></a>COleControl::AmbientAppearance  
 Recupera l'impostazione di aspetto corrente per l'oggetto controllo.  
  
```  
short AmbientAppearance();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'aspetto del controllo:  
  
- **0** flat aspetto  
  
- **1** aspetto 3D  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare il valore corrente di **DISPID_AMBIENT_APPEARANCE** proprietà per il controllo.  
  
##  <a name="a-nameambientscaleunitsa--colecontrolambientscaleunits"></a><a name="ambientscaleunits"></a>COleControl::AmbientScaleUnits  
 Restituisce il tipo di unità usate dal contenitore.  
  
```  
CString AmbientScaleUnits();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa contenente la proprietà ScaleUnits ambiente del contenitore. Se questa proprietà non è supportata, questa funzione restituisce una stringa di lunghezza zero.  
  
### <a name="remarks"></a>Note  
 Proprietà ScaleUnits ambiente del contenitore può essere utilizzata per visualizzare le posizioni o dimensioni, contrassegnate con l'unità scelto, ad esempio twip o centimetri. Si noti che il contenitore non è necessaria per supportare questa proprietà.  
  
##  <a name="a-nameambientshowgrabhandlesa--colecontrolambientshowgrabhandles"></a><a name="ambientshowgrabhandles"></a>COleControl::AmbientShowGrabHandles  
 Determina se il contenitore consente il controllo da visualizzare quadratini di ridimensionamento per se stesso quando sono attive.  
  
```  
BOOL AmbientShowGrabHandles();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se devono essere visualizzati quadratini di ridimensionamento. in caso contrario 0. Se questa proprietà non è supportata, questa funzione restituisce zero.  
  
### <a name="remarks"></a>Note  
 Si noti che il contenitore non è necessaria per supportare questa proprietà.  
  
##  <a name="a-nameambientshowhatchinga--colecontrolambientshowhatching"></a><a name="ambientshowhatching"></a>COleControl::AmbientShowHatching  
 Determina se il contenitore consente il controllo verrà visualizzato con un bordo tratteggiato modello quando attivo dell'interfaccia utente.  
  
```  
BOOL AmbientShowHatching();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il modello tratteggiato deve essere visualizzato; in caso contrario 0. Se questa proprietà non è supportata, questa funzione restituisce zero.  
  
### <a name="remarks"></a>Note  
 Si noti che il contenitore non è necessaria per supportare questa proprietà.  
  
##  <a name="a-nameambienttextaligna--colecontrolambienttextalign"></a><a name="ambienttextalign"></a>COleControl::AmbientTextAlign  
 Determina l'allineamento del testo dell'ambiente preferito dal contenitore del controllo.  
  
```  
short AmbientTextAlign();
```  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato della proprietà TextAlign ambiente del contenitore. Se questa proprietà non è supportata, questa funzione restituisce 0.  
  
 Di seguito è riportato un elenco di valori restituiti validi:  
  
|Valore restituito|Significato|  
|------------------|-------------|  
|0|Allineamento generale (numeri per il testo a destra, a sinistra).|  
|1|Giustificato a sinistra|  
|2|Al centro|  
|3|Allinea a destra|  
  
### <a name="remarks"></a>Note  
 Questa proprietà è disponibile per tutti i controlli incorporati e viene definita dal contenitore. Si noti che il contenitore non è necessaria per supportare questa proprietà.  
  
##  <a name="a-nameambientuideada--colecontrolambientuidead"></a><a name="ambientuidead"></a>COleControl::AmbientUIDead  
 Determina se il contenitore richieda il controllo di rispondere alle azioni dell'interfaccia utente.  
  
```  
BOOL AmbientUIDead();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo deve rispondere alle azioni dell'interfaccia utente; in caso contrario 0. Se questa proprietà non è supportata, questa funzione restituisce 0.  
  
### <a name="remarks"></a>Note  
 Ad esempio, un contenitore potrebbe impostare **TRUE** in modalità progettazione.  
  
##  <a name="a-nameambientusermodea--colecontrolambientusermode"></a><a name="ambientusermode"></a>COleControl::AmbientUserMode  
 Determina se il contenitore è in modalità progettazione o in modalità utente.  
  
```  
BOOL AmbientUserMode();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il contenitore è in modalità utente. in caso contrario 0 (in modalità progettazione). Se questa proprietà non è supportata, questa funzione restituisce TRUE.  
  
### <a name="remarks"></a>Note  
 Ad esempio, un contenitore potrebbe impostare **FALSE** in modalità progettazione.  
  
##  <a name="a-nameboundpropertychangeda--colecontrolboundpropertychanged"></a><a name="boundpropertychanged"></a>COleControl::BoundPropertyChanged  
 Segnala che è stato modificato il valore della proprietà associata.  
  
```  
void BoundPropertyChanged(DISPID dispid);
```  
  
### <a name="parameters"></a>Parametri  
 `dispid`  
 L'ID di invio di una proprietà del controllo associata.  
  
### <a name="remarks"></a>Note  
 Deve essere chiamato ogni volta che il valore della proprietà cambia, anche nei casi in cui la modifica non è stata eseguita tramite la proprietà metodo Set. Essere approfondire la conoscenza delle proprietà associate che vengono mappate a variabili membro. Ogni volta che un membro variabile modifiche, `BoundPropertyChanged` deve essere chiamato.  
  
##  <a name="a-nameboundpropertyrequestedita--colecontrolboundpropertyrequestedit"></a><a name="boundpropertyrequestedit"></a>COleControl::BoundPropertyRequestEdit  
 Le richieste di autorizzazione da parte di `IPropertyNotifySink` interfaccia per modificare un valore della proprietà associata fornito dal controllo.  
  
```  
BOOL BoundPropertyRequestEdit(DISPID dispid);
```  
  
### <a name="parameters"></a>Parametri  
 `dispid`  
 L'ID di invio di una proprietà del controllo associata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è consentita la modifica; in caso contrario 0. Il valore predefinito è diverso da zero.  
  
### <a name="remarks"></a>Note  
 Se viene negata l'autorizzazione, il controllo non deve consentire la modifica della proprietà il valore. Questa operazione può essere eseguita da verrà ignorato o non superati l'azione che ha tentato di cambiare il valore della proprietà.  
  
##  <a name="a-nameclienttoparenta--colecontrolclienttoparent"></a><a name="clienttoparent"></a>COleControl::ClientToParent  
 Converte le coordinate di `pPoint` nelle coordinate padre.  
  
```  
virtual void ClientToParent(
    LPCRECT lprcBounds, 
    LPPOINT pPoint) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lprcBounds`  
 Puntatore ai limiti del controllo OLE all'interno del contenitore. L'area del controllo intera, compresi i bordi e le barre di scorrimento, ma non l'area client.  
  
 `pPoint`  
 Puntatore al punto area client di OLE per essere convertito in coordinate del padre (contenitore).  
  
### <a name="remarks"></a>Note  
 Input `pPoint` è correlato all'origine dell'area client del controllo OLE (angolo superiore sinistro dell'area client del controllo). Nell'output `pPoint` è correlato all'origine dell'elemento padre (angolo superiore sinistro del contenitore).  
  
##  <a name="a-nameclipcaretrecta--colecontrolclipcaretrect"></a><a name="clipcaretrect"></a>COleControl::ClipCaretRect  
 Modifica un rettangolo di punto di inserimento se completamente o parzialmente coperto da oggetti sovrapposti, opachi.  
  
```  
BOOL ClipCaretRect(LPRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 In input, un puntatore a un [RECT](../../mfc/reference/rect-structure1.md) struttura che contiene l'area del punto di inserimento per essere modificata. Nell'output, l'area di accento circonflesso rettificato, o **NULL** se il rettangolo di cursore è completamente coperta.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un punto di inserimento è una riga, blocco o bitmap che indica in genere in cui verrà inserita il testo o grafica lampeggiante.  
  
 Un oggetto privi di finestra non è possibile visualizzare in modo sicuro un accento circonflesso senza prima verificare se il punto di inserimento è totalmente o parzialmente nascosto da oggetti sovrapposti. Per assicurarsi che possibili, è possibile utilizzare un oggetto `ClipCaretRect` per ottenere il punto di inserimento regolato (ridotta) per verificare nell'area di visualizzazione.  
  
 Creazione di un punto di inserimento di oggetti devono presentare il rettangolo del punto di inserimento `ClipCaretRect` e utilizzare il rettangolo adeguato per il punto di inserimento. Se il punto di inserimento è completamente nascosto, questo metodo restituirà **FALSE** e il punto di inserimento non deve essere visualizzato affatto in questo caso.  
  
##  <a name="a-namecolecontrola--colecontrolcolecontrol"></a><a name="colecontrol"></a>COleControl::COleControl  
 Costruisce un oggetto `COleControl`.  
  
```  
COleControl();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione in genere non viene chiamata direttamente. Il controllo OLE in genere viene invece creato da factory relativa classe.  
  
##  <a name="a-namecontrolinfochangeda--colecontrolcontrolinfochanged"></a><a name="controlinfochanged"></a>COleControl::ControlInfoChanged  
 Chiamare questa funzione quando viene modificato il set di tasti di scelta supportate dal controllo.  
  
```  
void ControlInfoChanged();
```  
  
### <a name="remarks"></a>Note  
 Dopo aver ricevuto la notifica, il contenitore del controllo ottiene il nuovo set di tasti di scelta mediante una chiamata a [IOleControl::GetControlInfo](http://msdn.microsoft.com/library/windows/desktop/ms693730). Si noti che il contenitore non è necessario per rispondere a questa notifica.  
  
##  <a name="a-namedisplayerrora--colecontroldisplayerror"></a><a name="displayerror"></a>COleControl::DisplayError  
 Chiamato dal framework dopo l'evento di errore predefinita è stato gestito (a meno che il gestore dell'evento sia disattivata la visualizzazione dell'errore).  
  
```  
virtual void DisplayError(
    SCODE scode,  
    LPCTSTR lpszDescription,  
    LPCTSTR lpszSource,  
    LPCTSTR lpszHelpFile,  
    UINT nHelpID);
```  
  
### <a name="parameters"></a>Parametri  
 *SCODE*  
 Il valore del codice di stato da segnalare. Per un elenco completo dei possibili codici, vedere l'articolo [controlli ActiveX: argomenti avanzati](../../mfc/mfc-activex-controls-advanced-topics.md).  
  
 `lpszDescription`  
 La descrizione dell'errore viene segnalato.  
  
 *lpszSource*  
 Il nome del modulo di generazione dell'errore (in genere, il nome del modulo di controllo OLE).  
  
 `lpszHelpFile`  
 Il nome del file della Guida contenente una descrizione dell'errore.  
  
 `nHelpID`  
 ID di contesto della Guida dell'errore viene segnalato.  
  
### <a name="remarks"></a>Note  
 Il comportamento predefinito consente di visualizzare una finestra di messaggio contenente la descrizione dell'errore, contenuto in `lpszDescription`.  
  
 Eseguire l'override di questa funzione per personalizzare la modalità di visualizzazione degli errori.  
  
##  <a name="a-namedoclicka--colecontroldoclick"></a><a name="doclick"></a>COleControl::DoClick  
 Simula un mouse fare clic su azione sul controllo.  
  
```  
void DoClick();
```  
  
### <a name="remarks"></a>Note  
 Possibile eseguire l'override `COleControl::OnClick` verrà chiamata la funzione membro e un Click evento viene generato, se supportata dal controllo.  
  
 Questa funzione è supportata per la `COleControl` classe di base come un metodo predefinito, denominato DoClick. Per ulteriori informazioni, vedere l'articolo [controlli ActiveX: metodi](../../mfc/mfc-activex-controls-methods.md).  
  
##  <a name="a-namedopropexchangea--colecontroldopropexchange"></a><a name="dopropexchange"></a>DoPropExchange  
 Chiamato dal framework durante il caricamento o l'archiviazione di un controllo da una rappresentazione di un archivio permanente, ad esempio un set di proprietà o di flusso.  
  
```  
virtual void DoPropExchange(CPropExchange* pPX);
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Un puntatore a un `CPropExchange` oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio di proprietà, inclusa la relativa direzione.  
  
### <a name="remarks"></a>Note  
 Questa funzione esegue in genere chiamate per il **px** famiglia di funzioni per caricare o archiviare le proprietà specifiche definite dall'utente di un controllo OLE.  
  
 Se Creazione guidata controllo è stato utilizzato per creare il progetto di controllo OLE, la versione sottoposta a override di questa funzione verrà serializzare le proprietà predefinite supportate da `COleControl` con una chiamata alla funzione di classe di base, `COleControl::DoPropExchange`. Quando si aggiungono le proprietà definite dall'utente per il controllo OLE è necessario modificare questa funzione per serializzare la nuova proprietà. Per ulteriori informazioni sulla serializzazione, vedere l'articolo [controlli ActiveX: serializzazione](../../mfc/mfc-activex-controls-serializing.md).  
  
##  <a name="a-namedosuperclasspainta--colecontroldosuperclasspaint"></a><a name="dosuperclasspaint"></a>COleControl::DoSuperclassPaint  
 Ridisegna un controllo OLE che è stato sottoclassato da un controllo di Windows.  
  
```  
void DoSuperclassPaint(
    CDC* pDC,  
    const CRect& rcBounds);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore al contesto di dispositivo del contenitore del controllo.  
  
 `rcBounds`  
 L'area in cui il controllo da disegnare.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per gestire correttamente il disegno di un controllo OLE non attivo. Questa funzione deve essere utilizzata solo se OLE controlla sottoclassi di un controllo di Windows e deve essere chiamato nel `OnDraw` funzione del controllo.  
  
 Per ulteriori informazioni su questa funzione e una sottoclasse di un controllo Windows, vedere l'articolo [controlli ActiveX: creazione di sottoclassi di un controllo Windows](../../mfc/mfc-activex-controls-subclassing-a-windows-control.md).  
  
##  <a name="a-namedrawcontenta--colecontroldrawcontent"></a><a name="drawcontent"></a>COleControl::DrawContent  
 Chiamato dal framework quando l'aspetto del controllo deve essere aggiornato.  
  
```  
void DrawContent(
    CDC* pDC,  
    CRect& rc);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore al contesto di dispositivo.  
  
 `rc`  
 Area rettangolare da disegnare in.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama direttamente l'override `OnDraw` (funzione).  
  
##  <a name="a-namedrawmetafilea--colecontroldrawmetafile"></a><a name="drawmetafile"></a>COleControl::DrawMetafile  
 Chiamato dal framework quando viene utilizzato il contesto di dispositivo metafile.  
  
```  
void DrawMetafile(
    CDC* pDC,  
    CRect& rc);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore al contesto di dispositivo metafile.  
  
 `rc`  
 Area rettangolare da disegnare in.  
  
##  <a name="a-nameenablesimpleframea--colecontrolenablesimpleframe"></a><a name="enablesimpleframe"></a>COleControl::EnableSimpleFrame  
 Abilita la caratteristica di frame semplice per un controllo OLE.  
  
```  
void EnableSimpleFrame();
```  
  
### <a name="remarks"></a>Note  
 Questa caratteristica consente a un controllo supportare il contenimento visivo di altri controlli, ma non true contenimento OLE. Un esempio potrebbe essere una casella di gruppo con più controlli all'interno. Questi controlli non sono OLE contenuti, ma che si trovano nella stessa casella di gruppo.  
  
##  <a name="a-nameexchangeextenta--colecontrolexchangeextent"></a><a name="exchangeextent"></a>COleControl::ExchangeExtent  
 Serializza o Inizializza lo stato dell'estensione del controllo (le dimensioni in **HIMETRIC** unità).  
  
```  
BOOL ExchangeExtent(CPropExchange* pPX);
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Un puntatore a un [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio di proprietà, inclusa la relativa direzione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene in genere chiamata dall'implementazione predefinita di `COleControl::DoPropExchange`.  
  
##  <a name="a-nameexchangestockpropsa--colecontrolexchangestockprops"></a><a name="exchangestockprops"></a>COleControl::ExchangeStockProps  
 Serializza o Inizializza lo stato delle proprietà predefinite del controllo.  
  
```  
void ExchangeStockProps(CPropExchange* pPX);
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Un puntatore a un [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio di proprietà, inclusa la relativa direzione.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene in genere chiamata dall'implementazione predefinita di `COleControl::DoPropExchange`.  
  
##  <a name="a-nameexchangeversiona--colecontrolexchangeversion"></a><a name="exchangeversion"></a>COleControl:: ExchangeVersion  
 Serializza o Inizializza lo stato delle informazioni sulla versione del controllo.  
  
```  
BOOL ExchangeVersion(
    CPropExchange* pPX,  
    DWORD dwVersionDefault,  
    BOOL bConvert = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Un puntatore a un `CPropExchange` oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio di proprietà, inclusa la relativa direzione.  
  
 `dwVersionDefault`  
 Il numero di versione corrente del controllo.  
  
 `bConvert`  
 Indica se i dati persistenti devono essere convertiti nel formato più recente quando salvate o mantenuto nello stesso formato che è stato caricato.  
  
### <a name="return-value"></a>Valore restituito  
 NonZero della funzione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 In genere, questa sarà la prima funzione chiamata da un override del metodo `COleControl::DoPropExchange`. Durante il caricamento, questa funzione legge il numero di versione dei dati persistenti e imposta l'attributo della versione di [CPropExchange](../../mfc/reference/cpropexchange-class.md) conseguenza dell'oggetto. Durante il salvataggio, questa funzione scrive il numero di versione dei dati persistenti.  
  
 Per ulteriori informazioni sulla persistenza e il controllo delle versioni, vedere l'articolo [controlli ActiveX: serializzazione](../../mfc/mfc-activex-controls-serializing.md).  
  
##  <a name="a-namefireclicka--colecontrolfireclick"></a><a name="fireclick"></a>COleControl::FireClick  
 Chiamato dal framework quando viene fatto clic su un controllo attivo.  
  
```  
void FireClick();
```  
  
### <a name="remarks"></a>Note  
 Se questo evento viene definito come un evento personalizzato, determinano quando viene generato l'evento.  
  
 Per la generazione automatica di un evento Click, mappa di eventi del controllo deve avere un Click evento definito.  
  
##  <a name="a-namefiredblclicka--colecontrolfiredblclick"></a><a name="firedblclick"></a>COleControl::FireDblClick  
 Chiamato dal framework quando il puntatore del mouse si fa doppio clic su un controllo attivo.  
  
```  
void FireDblClick();
```  
  
### <a name="remarks"></a>Note  
 Se questo evento viene definito come un evento personalizzato, determinano quando viene generato l'evento.  
  
 Per la generazione automatica di un evento DblClick, mappa eventi del controllo deve disporre di un evento DblClick predefinito definito.  
  
##  <a name="a-namefireerrora--colecontrolfireerror"></a><a name="fireerror"></a>COleControl:: FireError  
 Genera l'evento di errore predefinita.  
  
```  
void FireError(
    SCODE scode,  
    LPCTSTR lpszDescription,  
    UINT nHelpID = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *SCODE*  
 Il valore del codice di stato da segnalare. Per un elenco completo dei possibili codici, vedere l'articolo [controlli ActiveX: argomenti avanzati](../../mfc/mfc-activex-controls-advanced-topics.md).  
  
 `lpszDescription`  
 La descrizione dell'errore viene segnalato.  
  
 `nHelpID`  
 ID della Guida dell'errore viene segnalato.  
  
### <a name="remarks"></a>Note  
 Questo evento fornisce un modo di segnalazione in posizioni appropriate nel codice, che si è verificato un errore all'interno del controllo. A differenza di altri eventi predefiniti, ad esempio MouseMove, o fare clic su errore mai viene generato dal framework.  
  
 Per segnalare un errore che si verifica durante una funzione get di proprietà, funzione di set di proprietà o metodo di automazione, chiamare [COleControl:: ThrowError](#throwerror).  
  
 L'implementazione del controllo OLE Stock errore evento utilizza un `SCODE` valore. Se il controllo utilizza questo evento e deve essere utilizzata in Visual Basic 4.0, si riceveranno messaggi di errore perché il `SCODE` valore non è supportato in Visual Basic.  
  
 Per risolvere questo problema, modificare manualmente il `SCODE` parametro del controllo. File ODL un **lungo**. Inoltre, qualsiasi evento personalizzato, proprietà o metodo che utilizza un `SCODE` parametro comporta inoltre lo stesso problema.  
  
##  <a name="a-namefireeventa--colecontrolfireevent"></a><a name="fireevent"></a>COleControl:: FireEvent  
 Viene generato un evento definito dall'utente dal controllo con un numero qualsiasi di argomenti facoltativi.  
  
```  
void AFX_CDECL FireEvent(
    DISPID dispid,  
    BYTE* pbParams,  
 ...);
```  
  
### <a name="parameters"></a>Parametri  
 `dispid`  
 L'ID di invio dell'evento da generare.  
  
 `pbParams`  
 Un descrittore per tipi di parametro dell'evento.  
  
### <a name="remarks"></a>Note  
 In genere questa funzione non deve essere chiamata direttamente. Al contrario si chiamerà le funzioni che generano eventi nella sezione della dichiarazione di classe del controllo mappa eventi.  
  
 Il `pbParams` argomento è un elenco separato da spazi di **VTS _**. Uno o più di questi valori, separati da spazi (non virgole), specificano l'elenco dei parametri della funzione. I valori possibili sono i seguenti:  
  
|Simbolo|Tipo parametro|  
|------------|--------------------|  
|**VTS_COLOR**|**OLE_COLOR**|  
|**VTS_FONT**|**IFontDisp\***|  
|**VTS_HANDLE**|`HWND`|  
|**VTS_PICTURE**|**IPictureDisp\***|  
|**VTS_OPTEXCLUSIVE**|**OLE_OPTEXCLUSIVE\***|  
|**VTS_TRISTATE**|**OLE_TRISTATE**|  
|**VTS_XPOS_HIMETRIC**|**OLE_XPOS_HIMETRIC**|  
|**VTS_YPOS_HIMETRIC**|**OLE_YPOS_HIMETRIC**|  
|**VTS_XPOS_PIXELS**|**OLE_XPOS_PIXELS**|  
|**VTS_YPOS_PIXELS**|**OLE_YPOS_PIXELS**|  
|**VTS_XSIZE_PIXELS**|**OLE_XSIZE_PIXELS**|  
|**VTS_YSIZE_PIXELS**|**OLE_XSIZE_PIXELS**|  
|**VTS_XSIZE_HIMETRIC**|**OLE_XSIZE_HIMETRIC**|  
|**VTS_YSIZE_HIMETRIC**|**OLE_XSIZE_HIMETRIC**|  
  
> [!NOTE]
>  Costanti di tipo variante aggiuntive sono state definite per tutti i tipi varianti, ad eccezione di **VTS_FONT** e **VTS_PICTURE**, che forniscono un puntatore con la costante di dati variant. Queste costanti vengono denominate usando il **VTS_P** `constantname` convenzione. Ad esempio, **VTS_PCOLOR** è un puntatore a un **VTS_COLOR** costante.  
  
##  <a name="a-namefirekeydowna--colecontrolfirekeydown"></a><a name="firekeydown"></a>COleControl::FireKeyDown  
 Chiamato dal framework quando si preme un tasto mentre il controllo attivo dell'interfaccia utente.  
  
```  
void FireKeyDown(
    USHORT* pnChar,  
    short nShiftState);
```  
  
### <a name="parameters"></a>Parametri  
 `pnChar`  
 Puntatore al valore di codice chiave virtuale del tasto premuto. Per un elenco di standard codici di tasti virtuali, vedere winuser. h  
  
 `nShiftState`  
 Contiene una combinazione dei flag seguenti:  
  
- **SHIFT_MASK** durante l'azione è stato premuto il tasto MAIUSC.  
  
- **CTRL_MASK** il CTRL era premuto durante l'azione.  
  
- **ALT_MASK** ALT il tasto è stato premuto durante l'azione.  
  
### <a name="remarks"></a>Note  
 Se questo evento viene definito come un evento personalizzato, determinano quando viene generato l'evento.  
  
 Per la generazione automatica di un evento KeyDown, mappa eventi del controllo deve disporre di un evento KeyDown predefinito definito.  
  
##  <a name="a-namefirekeypressa--colecontrolfirekeypress"></a><a name="firekeypress"></a>COleControl::FireKeyPress  
 Chiamato dal framework quando un tasto viene premuto e rilasciato mentre il controllo personalizzato è attivo dell'interfaccia utente all'interno del contenitore.  
  
```  
void FireKeyPress(USHORT* pnChar);
```  
  
### <a name="parameters"></a>Parametri  
 `pnChar`  
 Un puntatore al valore di carattere del tasto premuto.  
  
### <a name="remarks"></a>Note  
 Se questo evento viene definito come un evento personalizzato, determinano quando viene generato l'evento.  
  
 Può modificare il destinatario dell'evento `pnChar`, ad esempio, convertire tutti i caratteri minuscoli in maiuscolo. Se si desidera esaminare il carattere modificato, eseguire l'override `OnKeyPressEvent`.  
  
 Per la generazione automatica di un evento KeyPress, mappa eventi del controllo deve disporre di un evento KeyPress predefinito definito.  
  
##  <a name="a-namefirekeyupa--colecontrolfirekeyup"></a><a name="firekeyup"></a>COleControl::FireKeyUp  
 Chiamato dal framework quando si rilascia un tasto mentre il controllo personalizzato è attivo dell'interfaccia utente all'interno del contenitore.  
  
```  
void FireKeyUp(
    USHORT* pnChar,  
    short nShiftState);
```  
  
### <a name="parameters"></a>Parametri  
 `pnChar`  
 Puntatore al valore della chiave rilasciato codice chiave virtuale. Per un elenco di standard codici di tasti virtuali, vedere winuser. h  
  
 `nShiftState`  
 Contiene una combinazione dei flag seguenti:  
  
- **SHIFT_MASK** durante l'azione è stato premuto il tasto MAIUSC.  
  
- **CTRL_MASK** il CTRL era premuto durante l'azione.  
  
- **ALT_MASK** ALT il tasto è stato premuto durante l'azione.  
  
### <a name="remarks"></a>Note  
 Se questo evento viene definito come un evento personalizzato, determinano quando viene generato l'evento.  
  
 Per la generazione automatica di un evento KeyUp, mappa eventi del controllo deve disporre di un evento KeyUp predefinito definito.  
  
##  <a name="a-namefiremousedowna--colecontrolfiremousedown"></a><a name="firemousedown"></a>COleControl::FireMouseDown  
 Chiamato dal framework quando viene premuto un pulsante del mouse su un controllo personalizzato attivo.  
  
```  
void FireMouseDown(
    short nButton,  
    short nShiftState,  
    OLE_XPOS_PIXELS x,  
    OLE_YPOS_PIXELS y);
```  
  
### <a name="parameters"></a>Parametri  
 `nButton`  
 Il valore numerico del pulsante del mouse è premuto. Può contenere uno dei valori seguenti:  
  
- **LEFT_BUTTON** è stato premuto il pulsante sinistro del mouse.  
  
- **MIDDLE_BUTTON** è stato premuto il pulsante centrale del mouse.  
  
- **RIGHT_BUTTON** è stato premuto il pulsante destro del mouse.  
  
 `nShiftState`  
 Contiene una combinazione dei flag seguenti:  
  
- **SHIFT_MASK** durante l'azione è stato premuto il tasto MAIUSC.  
  
- **CTRL_MASK** il CTRL era premuto durante l'azione.  
  
- **ALT_MASK** ALT il tasto è stato premuto durante l'azione.  
  
 *x*  
 Coordinata x del cursore quando è stato premuto un pulsante del mouse. La coordinata è rispetto all'angolo superiore sinistro della finestra del controllo.  
  
 *y*  
 Coordinata y del cursore quando è stato premuto un pulsante del mouse. La coordinata è rispetto all'angolo superiore sinistro della finestra del controllo.  
  
### <a name="remarks"></a>Note  
 Se questo evento viene definito come un evento personalizzato, determinano quando viene generato l'evento.  
  
 Per la generazione automatica di un evento MouseDown, mappa eventi del controllo deve disporre di un evento MouseDown predefinito definito.  
  
##  <a name="a-namefiremousemovea--colecontrolfiremousemove"></a><a name="firemousemove"></a>COleControl::FireMouseMove  
 Chiamato dal framework quando il cursore viene spostato su un controllo personalizzato attivo.  
  
```  
void FireMouseMove(
    short nButton,  
    short nShiftState,  
    OLE_XPOS_PIXELS x,  
    OLE_YPOS_PIXELS y);
```  
  
### <a name="parameters"></a>Parametri  
 `nButton`  
 Il valore numerico dei pulsanti del mouse è premuto. Contiene una combinazione dei valori seguenti:  
  
- **LEFT_BUTTON** è stato premuto il pulsante sinistro del mouse durante l'azione.  
  
- **MIDDLE_BUTTON** è stato premuto il pulsante centrale del mouse verso il basso durante l'azione.  
  
- **RIGHT_BUTTON** durante l'azione è stato premuto il pulsante destro del mouse verso il basso.  
  
 `nShiftState`  
 Contiene una combinazione dei flag seguenti:  
  
- **SHIFT_MASK** durante l'azione è stato premuto il tasto MAIUSC.  
  
- **CTRL_MASK** il CTRL era premuto durante l'azione.  
  
- **ALT_MASK** ALT il tasto è stato premuto durante l'azione.  
  
 *x*  
 Coordinata x del cursore. La coordinata è rispetto all'angolo superiore sinistro della finestra del controllo.  
  
 *y*  
 Coordinata y del cursore. La coordinata è rispetto all'angolo superiore sinistro della finestra del controllo.  
  
### <a name="remarks"></a>Note  
 Se questo evento viene definito come un evento personalizzato, determinano quando viene generato l'evento.  
  
 Per la generazione automatica di un evento MouseMove, mappa eventi del controllo deve disporre di un evento MouseMove predefinito definito.  
  
##  <a name="a-namefiremouseupa--colecontrolfiremouseup"></a><a name="firemouseup"></a>COleControl::FireMouseUp  
 Chiamato dal framework quando viene rilasciato un pulsante del mouse su un controllo personalizzato attivo.  
  
```  
void FireMouseUp(
    short nButton,  
    short nShiftState,  
    OLE_XPOS_PIXELS x,  
    OLE_YPOS_PIXELS y);
```  
  
### <a name="parameters"></a>Parametri  
 `nButton`  
 Il valore numerico del pulsante del mouse rilasciato. Può avere uno dei valori seguenti:  
  
- **LEFT_BUTTON** è stato rilasciato il pulsante sinistro del mouse.  
  
- **MIDDLE_BUTTON** è stato rilasciato il pulsante centrale del mouse.  
  
- **RIGHT_BUTTON** è stato rilasciato il pulsante destro del mouse.  
  
 `nShiftState`  
 Contiene una combinazione dei flag seguenti:  
  
- **SHIFT_MASK** durante l'azione è stato premuto il tasto MAIUSC.  
  
- **CTRL_MASK** il CTRL era premuto durante l'azione.  
  
- **ALT_MASK** ALT il tasto è stato premuto durante l'azione.  
  
 *x*  
 Coordinata x del cursore quando è stato rilasciato un pulsante del mouse. La coordinata è rispetto all'angolo superiore sinistro della finestra del controllo.  
  
 *y*  
 Coordinata y di un cursore quando è stato rilasciato un pulsante del mouse. La coordinata è rispetto all'angolo superiore sinistro della finestra del controllo.  
  
### <a name="remarks"></a>Note  
 Se questo evento viene definito come un evento personalizzato, determinano quando viene generato l'evento.  
  
 Per la generazione automatica di un evento MouseUp, mappa eventi del controllo deve disporre di un evento MouseUp predefinito definito.  
  
##  <a name="a-namefirereadystatechangea--colecontrolfirereadystatechange"></a><a name="firereadystatechange"></a>COleControl::FireReadyStateChange  
 Viene generato un evento con il valore corrente dello stato del controllo.  
  
```  
void FireReadyStateChange();
```  
  
### <a name="remarks"></a>Note  
 Lo stato può essere uno dei valori seguenti:  
  
 **READYSTATE_UNINITIALIZED**  
 Stato di inizializzazione predefinito  
  
 **READYSTATE_LOADING**  
 Controllo sta caricando le relative proprietà  
  
 **READYSTATE_LOADED**  
 Controllo è stato inizializzato  
  
 **READYSTATE_INTERACTIVE**  
 Controllo dispone di sufficienti dati interattivi, ma non sempre asincrono dei dati sono stata ancora caricati  
  
 `READYSTATE_COMPLETE`  
 Controllo dispone di tutti i relativi dati  
  
 Utilizzare [GetReadyState](#getreadystate) per determinare la conformità corrente del controllo.  
  
 [InternalSetReadyState](#internalsetreadystate) modifica lo stato pronto per il valore specificato, quindi chiama `FireReadyStateChange`.  
  
##  <a name="a-namegetactivationpolicya--colecontrolgetactivationpolicy"></a><a name="getactivationpolicy"></a>COleControl:: GetActivationPolicy  
 Modifica il comportamento di attivazione predefinito di un controllo che supporta il `IPointerInactive` interfaccia.  
  
```  
virtual DWORD GetActivationPolicy();
```  
  
### <a name="return-value"></a>Valore restituito  
 Una combinazione di flag dal **POINTERINACTIVE** enumerazione. Flag possibili sono:  
  
 **POINTERINACTIVE_ACTIVATEONENTRY**  
 L'oggetto deve essere attivato quando il mouse viene spostato durante un'operazione di spostamento del mouse sul posto.  
  
 **POINTERINACTIVE_DEACTIVATEONLEAVE**  
 L'oggetto deve essere disattivato quando il mouse lascia l'oggetto durante un'operazione di spostamento del mouse.  
  
 **POINTERINACTIVE_ACTIVATEONDRAG**  
 L'oggetto deve essere attivato quando il puntatore del mouse viene trascinato su di esso durante un trascinamento sul posto e operazione di trascinamento.  
  
### <a name="remarks"></a>Note  
 Quando il `IPointerInactive` interfaccia è abilitata, il contenitore delegherà `WM_SETCURSOR` e `WM_MOUSEMOVE` dei messaggi. `COleControl`dell'implementazione di questa interfaccia invierà messaggi tramite mappa messaggi del controllo, dopo aver modificato le coordinate del mouse in modo appropriato.  
  
 Ogni volta che il contenitore riceve un `WM_SETCURSOR` o `WM_MOUSEMOVE` messaggio con il puntatore del mouse su un oggetto inattivo che supporta `IPointerInactive`, deve chiamare `GetActivationPolicy` alle flag restituito dall'interfaccia di **POINTERINACTIVE** enumerazione.  
  
 È possibile elaborare questi messaggi come comuni messaggi di finestra, aggiungendo le voci corrispondenti alla mappa messaggi. Nei gestori, evitare di utilizzare il `m_hWnd` variabile membro (o tutte le funzioni membro che lo utilizza) senza prima verificare che il relativo valore è diverso da **NULL**.  
  
 Qualsiasi oggetto destinato a più di impostare il cursore del mouse e/o generare un evento di spostamento del mouse, ad esempio come fornire indicazioni visive speciali, deve restituire il **POINTERINACTIVE_ACTIVATEONENTRY** flag e disegnare il feedback solo quando è attivo. Se l'oggetto viene restituito questo flag, il contenitore deve attivarlo sul posto immediatamente e quindi trasmette il messaggio stesso che ha attivato la chiamata a `GetActivationPolicy`.  
  
 Se entrambi i **POINTERINACTIVE_ACTIVATEONENTRY** e **POINTERINACTIVE_DEACTIVATEONLEAVE** vengono restituiti i flag, quindi l'oggetto verrà attivata solo quando il puntatore del mouse sull'oggetto. Se solo il **POINTERINACTIVE_ACTIVATEONENTRY** flag viene restituito, quindi l'oggetto verrà attivata solo una volta quando il mouse viene posizionato prima l'oggetto.  
  
 È anche un controllo inattivo come destinazione di un trascinamento OLE e operazione di trascinamento. Questa operazione richiede l'attivazione del controllo nel momento in cui che l'utente trascina un oggetto su di esso, in modo che la finestra del controllo può essere registrata come destinazione di trascinamento. Per causare l'attivazione si verificano durante il trascinamento, restituire il **POINTERINACTIVE_ACTIVATEONDRAG** flag:  
  
 [!code-cpp[NVC_MFCAxCtl n.&1;](../../mfc/reference/codesnippet/cpp/colecontrol-class_1.cpp)]  
  
 Le informazioni comunicate da `GetActivationPolicy` non deve essere memorizzato nella cache da un contenitore. Al contrario, questo metodo deve essere chiamato ogni volta che il mouse viene spostato su un oggetto inattivo.  
  
 Se un oggetto inattivo non richiedono di essere attivato quando si sposta il mouse sul posto, il contenitore deve inviare le successive `WM_SETCURSOR` messaggi a questo oggetto chiamando [OnInactiveSetCursor](#oninactivesetcursor) fino a quando il puntatore del mouse rimane sopra l'oggetto.  
  
 Abilitazione di `IPointerInactive` interfaccia indica in genere che si desidera che il controllo sia in grado di elaborare i messaggi del mouse in qualsiasi momento. Per ottenere questo comportamento in un contenitore che non supporta il `IPointerInactive` interfaccia, è necessario disporre sempre attivo quando visibile, ovvero il controllo deve avere il **OLEMISC_ACTIVATEWHENVISIBLE** flag tra i vari flag. Tuttavia, per evitare questo flag hanno effetto in un contenitore che supporta `IPointerInactive`, è inoltre possibile specificare il **OLEMISC_IGNOREACTIVATEWHENVISIBLE** flag:  
  
 [!code-cpp[NVC_MFCAxCtl&#10;](../../mfc/reference/codesnippet/cpp/colecontrol-class_2.cpp)]  
  
##  <a name="a-namegetambientpropertya--colecontrolgetambientproperty"></a><a name="getambientproperty"></a>COleControl:: getAmbientProperty  
 Ottiene il valore di una proprietà di ambiente del contenitore.  
  
```  
BOOL GetAmbientProperty(
    DISPID dispid,  
    VARTYPE vtProp,  
    void* pvProp);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispid*  
 ID dispatch della proprietà di ambiente desiderata.  
  
 `vtProp`  
 Un tag di tipo variant che specifica il tipo del valore da restituire in `pvProp`.  
  
 `pvProp`  
 Un puntatore all'indirizzo della variabile che riceverà il valore della proprietà o valore restituito. Il tipo effettivo del puntatore ' this ' deve corrispondere al tipo specificato da `vtProp`.  
  
|vtProp|Tipo di pvProp|  
|------------|--------------------|  
|`VT_BOOL`|**BOOL\***|  
|`VT_BSTR`|**CString\***|  
|`VT_I2`|**breve\***|  
|`VT_I4`|**Long\***|  
|`VT_R4`|**float\***|  
|`VT_R8`|**Double\***|  
|`VT_CY`|**CY\***|  
|**VT_COLOR**|**OLE_COLOR\***|  
|**VT_DISPATCH**|**LPDISPATCH\***|  
|**VT_FONT**|**LPFONTDISP\***|  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la proprietà di ambiente è supportata; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se si utilizza `GetAmbientProperty` per recuperare le proprietà DisplayName e ScaleUnits ambiente, impostare `vtProp` a `VT_BSTR` e `pvProp` a **CString\***. Se si desidera recuperare la proprietà di tipo di carattere ambiente, impostare `vtProp` a **VT_FONT** e `pvProp` a **LPFONTDISP\***.  
  
 Si noti che le funzioni già fornite per le proprietà di ambiente comuni, ad esempio [AmbientBackColor](#ambientbackcolor) e [AmbientFont](#ambientfont).  
  
##  <a name="a-namegetappearancea--colecontrolgetappearance"></a><a name="getappearance"></a>COleControl::GetAppearance  
 Implementa la funzione Get di proprietà di aspetto predefinite del controllo.  
  
```  
short GetAppearance ();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito specifica l'impostazione corrente di aspetto come un **breve** ( `VT_I2`) il valore, se ha esito positivo. Questo valore è zero se l'aspetto del controllo è semplice e 1 se l'aspetto del controllo 3D.  
  
##  <a name="a-namegetbackcolora--colecontrolgetbackcolor"></a><a name="getbackcolor"></a>COleControl::GetBackColor  
 Implementa la funzione Get di proprietà BackColor predefinite del controllo.  
  
```  
OLE_COLOR GetBackColor();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito specifica il colore di sfondo corrente come un **OLE_COLOR** valore, se ha esito positivo. Questo valore può essere convertito in un **COLORREF** valore con una chiamata a `TranslateColor`.  
  
##  <a name="a-namegetborderstylea--colecontrolgetborderstyle"></a><a name="getborderstyle"></a>COleControl::GetBorderStyle  
 Implementa la funzione Get della proprietà BorderStyle predefinite del controllo.  
  
```  
short GetBorderStyle();
```  
  
### <a name="return-value"></a>Valore restituito  
 1 se il controllo ha un bordo normale. 0 se il controllo non ha bordi.  
  
##  <a name="a-namegetcapturea--colecontrolgetcapture"></a><a name="getcapture"></a>COleControl::GetCapture  
 Determina se il `COleControl` oggetto lo stato mouse capture.  
  
```  
CWnd* GetCapture();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il controllo è attivato e privi di finestra, restituisce **questo** se il controllo attualmente lo stato mouse capture (come determinato dal contenitore del controllo), o **NULL** se non è l'acquisizione.  
  
 In caso contrario, restituisce il `CWnd` oggetto che lo stato mouse capture (uguale a `CWnd::GetCapture`).  
  
### <a name="remarks"></a>Note  
 Un controllo senza finestra attivato riceve il puntatore del mouse capture quando [SetCapture](#setcapture) viene chiamato.  
  
##  <a name="a-namegetclassida--colecontrolgetclassid"></a><a name="getclassid"></a>COleControl::GetClassID  
 Chiamato dal framework per recuperare l'ID della classe del controllo OLE.  
  
```  
virtual HRESULT GetClassID(LPCLSID pclsid) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 *pclsid*  
 Puntatore alla posizione dell'ID di classe.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la chiamata non è stata completata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 In genere realizzato tramite il [IMPLEMENT_OLECREATE_EX](class-factories-and-licensing.md#implement_olecreate_ex).  
  
##  <a name="a-namegetclientoffseta--colecontrolgetclientoffset"></a><a name="getclientoffset"></a>COleControl::GetClientOffset  
 Recupera la differenza tra l'angolo superiore sinistro dell'area rettangolare del controllo e nell'angolo superiore sinistro della relativa area client.  
  
```  
virtual void GetClientOffset(long* pdxOffset, long* pdyOffset) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *pdxOffset*  
 Puntatore all'offset orizzontale dell'area client del controllo OLE.  
  
 *pdyOffset*  
 Puntatore all'offset verticale dell'area client del controllo OLE.  
  
### <a name="remarks"></a>Note  
 Il controllo OLE presenta un'area rettangolare all'interno del contenitore. L'area client del controllo è l'area di controllo ad eccezione di bordi e le barre di scorrimento. L'offset recuperati da `GetClientOffset` è la differenza tra l'angolo superiore sinistro dell'area rettangolare del controllo e nell'angolo superiore sinistro della relativa area client. Se il controllo contiene gli elementi non client diversi dai bordi standard e le barre di scorrimento, eseguire l'override di questa funzione membro per specificare l'offset.  
  
##  <a name="a-namegetclientrecta--colecontrolgetclientrect"></a><a name="getclientrect"></a>COleControl::GetClientRect  
 Recupera le dimensioni dell'area client del controllo.  
  
```  
virtual void GetClientRect(LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Puntatore a un `RECT` struttura contenente le dimensioni dell'area client del controllo senza finestra, vale a dire le dimensioni del controllo meno bordi della finestra, frame, le barre di scorrimento e così via. Il `lpRect` parametro indica le dimensioni del rettangolo client del controllo, non la posizione.  
  
##  <a name="a-namegetclientsitea--colecontrolgetclientsite"></a><a name="getclientsite"></a>COleControl::GetClientSite  
 Query su un oggetto per il puntatore al relativo sito client corrente all'interno del contenitore.  
  
```  
LPOLECLIENTSITE GetClientSite();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al sito client corrente del controllo nel relativo contenitore.  
  
### <a name="remarks"></a>Note  
 Il puntatore restituito punta a un'istanza di `IOleClientSite`. Il `IOleClientSite` interfaccia implementata da contenitori, è la visualizzazione dell'oggetto di contesto: in cui è ancorato nel documento, in cui Ottiene lo spazio di archiviazione, l'interfaccia utente e altre risorse.  
  
##  <a name="a-namegetcontrolflagsa--colecontrolgetcontrolflags"></a><a name="getcontrolflags"></a>COleControl:: GetControlFlags  
 Recupera le impostazioni del flag di controllo.  
  
```  
virtual DWORD GetControlFlags();
```  
  
### <a name="return-value"></a>Valore restituito  
 Una collegati dall'operatore OR combinazione dei flag dell'enumerazione ControlFlags:  
  
 `enum ControlFlags {`  
  
 `fastBeginPaint = 0x0001,`  
  
 `clipPaintDC = 0x0002,`  
  
 `pointerInactive = 0x0004,`  
  
 `noFlickerActivate = 0x0008,`  
  
 `windowlessActivate = 0x0010,`  
  
 `canOptimizeDraw = 0x0020,`  
  
 `};`  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `GetControlFlags` restituisce `fastBeginPaint | clipPaintDC`.  
  
 `fastBeginPaint`  
 Se impostato, viene utilizzato un pennello begin funzione personalizzate per OLE (controlli) anziché il [BeginPaint](http://msdn.microsoft.com/library/windows/desktop/dd183362) API (impostazione predefinita).  
  
 `clipPaintDC`  
 Se non è impostato, disattiva la chiamata a `IntersectClipRect` effettuate da `COleControl` e garantisce una maggiore velocità. Se si utilizza l'attivazione senza finestra, il flag non ha alcun effetto.  
  
 `pointerInactive`  
 Se impostata, gestisce l'interazione del mouse mentre il controllo è inattivo abilitando `COleControl`dell'implementazione del `IPointerInactive` interfaccia, che è disabilitato per impostazione predefinita.  
  
 `noFlickerActivate`  
 Se impostata, Elimina le operazioni di disegno aggiuntivi e lo sfarfallio. Utilizzarlo quando il controllo disegnato in modo identico nello stato inattivo e attivo. Se si utilizza l'attivazione senza finestra, il flag non ha alcun effetto.  
  
 `windowlessActivate`  
 Se impostato, indica che il controllo utilizza l'attivazione senza finestra.  
  
 `canOptimizeDraw`  
 Se impostato, indica che il controllo eseguirà il disegno ottimizzato, se il contenitore supporta.  
  
 Per ulteriori informazioni su `GetControlFlags` e altre ottimizzazioni di controlli OLE, vedere [controlli ActiveX: ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).  
  
##  <a name="a-namegetcontrolsizea--colecontrolgetcontrolsize"></a><a name="getcontrolsize"></a>COleControl::GetControlSize  
 Recupera le dimensioni della finestra del controllo OLE.  
  
```  
void GetControlSize(
    int* pcx,  
    int* pcy);
```  
  
### <a name="parameters"></a>Parametri  
 *PCX*  
 Specifica la larghezza del controllo in pixel.  
  
 *pcy*  
 Specifica l'altezza del controllo in pixel.  
  
### <a name="remarks"></a>Note  
 Si noti che tutte le coordinate per finestre di controllo rispetto all'angolo superiore sinistro del controllo.  
  
##  <a name="a-namegetdca--colecontrolgetdc"></a><a name="getdc"></a>COleControl::GetDC  
 Fornisce per un oggetto privi di finestra per il contesto di dispositivo get una schermata (o compatibile) dal relativo contenitore.  
  
```  
CDC* GetDC(
    LPCRECT lprcRect = NULL,
    DWORD dwFlags = OLEDC_PAINTBKGND);
```  
  
### <a name="parameters"></a>Parametri  
 *lprcRect*  
 Un puntatore al rettangolo del controllo senza finestra deve essere ridisegnata, nelle coordinate client del controllo. **NULL** significa extent dell'oggetto completo.  
  
 `dwFlags`  
 Gli attributi del contesto del dispositivo di disegno. Opzioni disponibili sono:  
  
- **OLEDC_NODRAW** indica che l'oggetto non utilizza il contesto di dispositivo per eseguire qualsiasi disegno ma semplicemente per ottenere informazioni sul dispositivo di visualizzazione. Il contenitore deve semplicemente passare controller di dominio della finestra senza ulteriore elaborazione.  
  
- **OLEDC_PAINTBKGND** richiede che il contenitore di disegnare lo sfondo prima di restituire il controller di dominio. Un oggetto deve utilizzare questo flag se sta richiedendo un controller di dominio per il disegno di un'area con sfondo trasparente.  
  
- **OLEDC_OFFSCREEN** indica il contenitore in cui l'oggetto sarà possibile eseguire il rendering in una bitmap fuori schermo deve quindi essere copiata alla schermata. Un oggetto deve utilizzare questo flag quando sta per eseguire l'operazione di disegno vengono generate molte lo sfarfallio. Il contenitore è libero di rispettare questa richiesta o non. Tuttavia, se questo flag non è impostato, il contenitore deve passare nuovamente sullo schermo controller di dominio. In questo modo gli oggetti eseguire operazioni dirette schermata, ad esempio che mostra una selezione (tramite un **XOR** operazione).  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al contesto di dispositivo di visualizzazione per il contenitore `CWnd` area client se ha esito positivo; in caso contrario, il valore restituito è **NULL**. Il contesto di dispositivo di visualizzazione utilizzabili in funzioni GDI successive per disegnare l'area client della finestra del contenitore.  
  
### <a name="remarks"></a>Note  
 Il [ReleaseDC](#releasedc) funzione membro deve essere chiamata per rilasciare il contesto dopo il disegno. Quando si chiama `GetDC`, gli oggetti passano il rettangolo che desiderano inserire nel propria coordinate del client. `GetDC`Converte le coordinate dell'area client di contenitore. L'oggetto non deve richiedere un rettangolo desiderato maggiore di un proprio rettangolo area client, le cui dimensioni possono essere recuperate con [GetClientRect](#getclientrect). In questo modo si impedisce che gli oggetti inavvertitamente disegno in cui non sono tenuti a.  
  
##  <a name="a-namegetenableda--colecontrolgetenabled"></a><a name="getenabled"></a>COleControl::GetEnabled  
 Implementa la funzione di recupero di scorte del controllo proprietà Enabled.  
  
```  
BOOL GetEnabled();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo è abilitato; in caso contrario 0.  
  
##  <a name="a-namegetextendedcontrola--colecontrolgetextendedcontrol"></a><a name="getextendedcontrol"></a>COleControl::GetExtendedControl  
 Ottiene un puntatore a un oggetto gestito dal contenitore che rappresenta il controllo con un set di proprietà estese.  
  
```  
LPDISPATCH GetExtendedControl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al contenitore dell'esteso oggetto controllo. Se non è disponibile alcun oggetto, il valore è **NULL**.  
  
 Questo oggetto può essere modificato tramite il relativo `IDispatch` interfaccia. È inoltre possibile utilizzare `QueryInterface` per ottenere altre interfacce disponibili fornite dall'oggetto. Tuttavia, l'oggetto non è necessario per supportare un set specifico di interfacce. Si noti che affidarsi a funzionalità specifiche dell'oggetto controllo esteso del contenitore limita la portabilità del controllo per altri contenitori arbitrari.  
  
### <a name="remarks"></a>Note  
 La funzione che chiama questa funzione è responsabile del rilascio il puntatore del mouse dopo aver terminato con l'oggetto. Si noti che il contenitore non è necessaria per supportare questo oggetto.  
  
##  <a name="a-namegetfocusa--colecontrolgetfocus"></a><a name="getfocus"></a>COleControl::GetFocus  
 Determina se il `COleControl` oggetto ha lo stato attivo.  
  
```  
CWnd* GetFocus();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il controllo è attivato e privi di finestra, restituisce **questo** se il controllo ha lo stato attivo (come determinato dal contenitore del controllo), o **NULL** se non è lo stato attivo.  
  
 In caso contrario, restituisce il `CWnd` oggetto con lo stato attivo (come `CWnd::GetFocus`).  
  
### <a name="remarks"></a>Note  
 Un controllo senza finestra attivato riceve lo stato attivo quando [SetFocus](#setfocus) viene chiamato.  
  
##  <a name="a-namegetfonta--colecontrolgetfont"></a><a name="getfont"></a>COleControl::GetFont  
 Implementa la funzione Get della proprietà del carattere predefinite.  
  
```  
LPFONTDISP GetFont();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'interfaccia dispatch del carattere della proprietà Font predefinita del controllo.  
  
### <a name="remarks"></a>Note  
 Si noti che il chiamante deve rilasciare l'oggetto al termine. All'interno dell'implementazione del controllo, utilizzare `InternalGetFont` per accedere all'oggetto Font predefinita del controllo. Per ulteriori informazioni sull'utilizzo di tipi di carattere nel controllo, vedere l'articolo [controlli ActiveX: utilizzo di caratteri in un controllo ActiveX](../../mfc/mfc-activex-controls-using-fonts.md).  
  
##  <a name="a-namegetfonttextmetricsa--colecontrolgetfonttextmetrics"></a><a name="getfonttextmetrics"></a>COleControl::GetFontTextMetrics  
 Consente di misurare le metriche di testo per qualsiasi `CFontHolder` oggetto di proprietà dal controllo.  
  
```  
void GetFontTextMetrics(
    LPTEXTMETRIC lptm,  
    CFontHolder& fontHolder);
```  
  
### <a name="parameters"></a>Parametri  
 `lptm`  
 Puntatore a un [TEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd145132) struttura.  
  
 `fontHolder`  
 Fare riferimento a un [CFontHolder](../../mfc/reference/cfontholder-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 È possibile selezionare un tipo di carattere con il [COleControl::SelectFontObject](#selectfontobject) (funzione). `GetFontTextMetrics`Consente di inizializzare il `TEXTMETRIC` struttura a cui puntava `lptm` con le informazioni delle metriche valido `fontHolder`del tipo di carattere se ha esito positivo oppure compilare la struttura degli zeri in caso di esito negativo. È consigliabile utilizzare questa funzione invece di [GetTextMetrics](http://msdn.microsoft.com/library/windows/desktop/dd144941) quando disegno del controllo perché i controlli, come qualsiasi incorporato oggetto OLE, possono essere necessari per il rendering in un metafile.  
  
 Il `TEXTMETRIC` struttura per il tipo di carattere predefinito viene aggiornato quando il [SelectFontObject](#selectfontobject) viene chiamata la funzione. È necessario chiamare `GetFontTextMetrics` solo dopo che selezionando la proprietà predefinita per assicurare che tali informazioni è valido.  
  
##  <a name="a-namegetforecolora--colecontrolgetforecolor"></a><a name="getforecolor"></a>COleControl::GetForeColor  
 Implementa la funzione Get della proprietà ForeColor predefinite.  
  
```  
OLE_COLOR GetForeColor();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito specifica il colore di primo piano corrente come un **OLE_COLOR** valore, se ha esito positivo. Questo valore può essere convertito in un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore con una chiamata a `TranslateColor`.  
  
##  <a name="a-namegethwnda--colecontrolgethwnd"></a><a name="gethwnd"></a>COleControl::GetHwnd  
 Implementa la funzione Get della proprietà hWnd azionario.  
  
```  
OLE_HANDLE GetHwnd();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle della finestra del controllo OLE, se presenti. in caso contrario **NULL**.  
  
##  <a name="a-namegetmessagestringa--colecontrolgetmessagestring"></a><a name="getmessagestring"></a>COleControl::GetMessageString  
 Chiamato dal framework per ottenere una stringa breve che descrive lo scopo della voce di menu identificato da `nID`.  
  
```  
virtual void GetMessageString(
    UINT nID,  
    CString& rMessage) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Un ID di elemento menu.  
  
 `rMessage`  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) tramite cui verrà restituita una stringa.  
  
### <a name="remarks"></a>Note  
 Utilizzabile per ottenere un messaggio per la visualizzazione in una barra di stato mentre la voce di menu è evidenziata. L'implementazione predefinita tenta di caricare una risorsa di stringa identificata da `nID`.  
  
##  <a name="a-namegetnotsupporteda--colecontrolgetnotsupported"></a><a name="getnotsupported"></a>COleControl::GetNotSupported  
 Impedisce l'accesso al valore della proprietà del controllo dall'utente.  
  
```  
void GetNotSupported();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione anziché la funzione di recupero di qualsiasi proprietà che non supportano il recupero della proprietà dall'utente del controllo. Un esempio potrebbe essere una proprietà di sola scrittura.  
  
##  <a name="a-namegetreadystatea--colecontrolgetreadystate"></a><a name="getreadystate"></a>COleControl::GetReadyState  
 Restituisce lo stato di conformità del controllo.  
  
```  
long GetReadyState();
```  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato di conformità del controllo, uno dei valori seguenti:  
  
 **READYSTATE_UNINITIALIZED**  
 Stato di inizializzazione predefinito  
  
 **READYSTATE_LOADING**  
 Controllo sta caricando le relative proprietà  
  
 **READYSTATE_LOADED**  
 Controllo è stato inizializzato  
  
 **READYSTATE_INTERACTIVE**  
 Controllo dispone di sufficienti dati interattivi, ma non sempre asincrono dei dati sono stata ancora caricati  
  
 `READYSTATE_COMPLETE`  
 Controllo dispone di tutti i relativi dati  
  
### <a name="remarks"></a>Note  
 La maggior parte dei controlli semplici mai la necessità di distinguere tra **LOADED** e `INTERACTIVE`. Tuttavia, i controlli che supportano le proprietà del percorso dati non possono essere pronti per essere interattive fino alla ricezione di almeno alcuni dati in modo asincrono. Un controllo deve tentare di diventare interattivo appena possibile.  
  
##  <a name="a-namegetrectincontainera--colecontrolgetrectincontainer"></a><a name="getrectincontainer"></a>COleControl::GetRectInContainer  
 Ottiene le coordinate del rettangolo del controllo relativo contenitore, espressa in unità di dispositivo.  
  
```  
BOOL GetRectInContainer(LPRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Puntatore alla struttura del rettangolo in cui verranno copiate coordinate del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo è attivo sul posto; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il rettangolo è valido solo se il controllo è attivo sul posto.  
  
##  <a name="a-namegetstocktextmetricsa--colecontrolgetstocktextmetrics"></a><a name="getstocktextmetrics"></a>COleControl::GetStockTextMetrics  
 Consente di misurare la metrica di testo per le proprietà del carattere predefinite del controllo, che può essere selezionata con il [SelectStockFont](#selectstockfont) (funzione).  
  
```  
void GetStockTextMetrics(LPTEXTMETRIC lptm);
```  
  
### <a name="parameters"></a>Parametri  
 `lptm`  
 Un puntatore a un [TEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd145132) struttura.  
  
### <a name="remarks"></a>Note  
 Il `GetStockTextMetrics` funzione consente di inizializzare il `TEXTMETRIC` struttura a cui puntava `lptm` con informazioni metriche valido se ha esito positivo o riempimento la struttura degli zeri in caso di esito negativo. Utilizzare questa funzione invece di [GetTextMetrics](http://msdn.microsoft.com/library/windows/desktop/dd144941) quando disegno del controllo perché i controlli, come qualsiasi incorporato oggetto OLE, possono essere necessari per il rendering in un metafile.  
  
 Il `TEXTMETRIC` struttura per il tipo di carattere predefinito viene aggiornato quando il `SelectStockFont` viene chiamata la funzione. È necessario chiamare questa funzione solo dopo che il tipo di carattere predefinito per assicurare che le informazioni che fornisce la selezione è valida.  
  
##  <a name="a-namegettexta--colecontrolgettext"></a><a name="gettext"></a>COleControl::GetText  
 Implementa la funzione Get della proprietà di testo o didascalia predefinite.  
  
```  
BSTR GetText();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore corrente di una stringa di lunghezza zero se non è presente alcuna stringa o la stringa di testo del controllo.  
  
> [!NOTE]
>  Per ulteriori informazioni sui `BSTR` del tipo di dati, vedere [tipi di dati](../../mfc/reference/data-types-mfc.md) nella sezione macro e funzioni globali.  
  
### <a name="remarks"></a>Note  
 Si noti che il chiamante di questa funzione deve chiamare `SysFreeString` la stringa restituita per libera la risorsa. All'interno dell'implementazione del controllo, utilizzare `InternalGetText` per accedere alle proprietà di testo o didascalia predefinita del controllo.  
  
##  <a name="a-namegetwindowlessdroptargeta--colecontrolgetwindowlessdroptarget"></a><a name="getwindowlessdroptarget"></a>COleControl:: GetWindowlessDropTarget  
 Eseguire l'override `GetWindowlessDropTarget` quando si desidera un controllo senza finestra deve essere la destinazione OLE trascinamento della selezione operazione.  
  
```  
virtual IDropTarget* GetWindowlessDropTarget();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto `IDropTarget` interfaccia. Poiché non dispone di una finestra, un oggetto privi di finestra non può registrare un `IDropTarget` interfaccia. Tuttavia, per partecipare alla funzionalità di trascinamento, un oggetto privi di finestra può comunque implementare l'interfaccia e restituirla nel `GetWindowlessDropTarget`.  
  
### <a name="remarks"></a>Note  
 In genere, ciò richiede che la finestra del controllo sia stata registrata come obiettivo di rilascio. Ma poiché il controllo non ha una finestra propria, il contenitore utilizzerà la propria finestra come destinazione di trascinamento. Il controllo deve semplicemente fornire un'implementazione del `IDropTarget` interfaccia a cui il contenitore può delegare le chiamate al momento opportuno. Ad esempio:  
  
 [!code-cpp[NVC_MFCAxCtl n.&2;](../../mfc/reference/codesnippet/cpp/colecontrol-class_3.cpp)]  
  
##  <a name="a-nameinitializeiidsa--colecontrolinitializeiids"></a><a name="initializeiids"></a>COleControl::InitializeIIDs  
 Indica la classe base degli IID verrà utilizzato il controllo.  
  
```  
void InitializeIIDs(
    const IID* piidPrimary,
    const IID* piidEvents);
```  
  
### <a name="parameters"></a>Parametri  
 *piidPrimary*  
 Puntatore all'ID di interfaccia dell'interfaccia dispatch principale del controllo.  
  
 *piidEvents*  
 Puntatore all'ID di interfaccia dell'interfaccia di eventi del controllo.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione nel costruttore del controllo per informare la classe di base dell'interfaccia ID verrà utilizzato il controllo.  
  
##  <a name="a-nameinternalgetfonta--colecontrolinternalgetfont"></a><a name="internalgetfont"></a>COleControl::InternalGetFont  
 Accede la proprietà predefinita del controllo  
  
```  
CFontHolder& InternalGetFont();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a un [CFontHolder](../../mfc/reference/cfontholder-class.md) oggetto che contiene l'oggetto tipo di carattere azionario.  
  
##  <a name="a-nameinternalgettexta--colecontrolinternalgettext"></a><a name="internalgettext"></a>COleControl::InternalGetText  
 Accede alla proprietà di testo o didascalia predefinita del controllo.  
  
```  
const CString& InternalGetText();
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento per la stringa di testo del controllo.  
  
##  <a name="a-nameinternalsetreadystatea--colecontrolinternalsetreadystate"></a><a name="internalsetreadystate"></a>COleControl:: InternalSetReadyState  
 Imposta lo stato di conformità del controllo.  
  
```  
void InternalSetReadyState(long lNewReadyState);
```  
  
### <a name="parameters"></a>Parametri  
 *lNewReadyState*  
 Lo stato di conformità da impostare per il controllo, uno dei valori seguenti:  
  
 **READYSTATE_UNINITIALIZED**  
 Stato di inizializzazione predefinito  
  
 **READYSTATE_LOADING**  
 Controllo sta caricando le relative proprietà  
  
 **READYSTATE_LOADED**  
 Controllo è stato inizializzato  
  
 **READYSTATE_INTERACTIVE**  
 Controllo dispone di sufficienti dati interattivi, ma non sempre asincrono dei dati sono stata ancora caricati  
  
 `READYSTATE_COMPLETE`  
 Controllo dispone di tutti i relativi dati  
  
### <a name="remarks"></a>Note  
 La maggior parte dei controlli semplici mai la necessità di distinguere tra **LOADED** e `INTERACTIVE`. Tuttavia, i controlli che supportano le proprietà del percorso dati non possono essere pronti per essere interattive fino alla ricezione di almeno alcuni dati in modo asincrono. Un controllo deve tentare di diventare interattivo appena possibile.  
  
##  <a name="a-nameinvalidatecontrola--colecontrolinvalidatecontrol"></a><a name="invalidatecontrol"></a>COleControl::InvalidateControl  
 Forza il controllo venga ricreato.  
  
```  
void InvalidateControl(
    LPCRECT lpRect = NULL,  
    BOOL bErase = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Puntatore all'area del controllo da essere invalidati.  
  
 `bErase`  
 Specifica se lo sfondo all'interno dell'area di aggiornamento devono essere cancellati quando viene elaborata la regione di aggiornamento.  
  
### <a name="remarks"></a>Note  
 Se `lpRect` ha un **NULL** valore, verrà ridisegnato l'intero controllo. Se `lpRect` non **NULL**, ciò indica la parte del rettangolo del controllo che deve essere invalidato. Nei casi in cui il controllo non ha una finestra o non è attualmente attivo, il rettangolo viene ignorato e viene effettuata una chiamata per il sito del client [IAdviseSink::OnViewChange](http://msdn.microsoft.com/library/windows/desktop/ms694337) funzione membro. Utilizzare questa funzione invece di `CWnd::InvalidateRect` o `InvalidateRect`.  
  
##  <a name="a-nameinvalidatergna--colecontrolinvalidatergn"></a><a name="invalidatergn"></a>COleControl::InvalidateRgn  
 Invalida l'area client della finestra contenitore all'interno dell'area specificata.  
  
```  
void InvalidateRgn(CRgn* pRgn, BOOL bErase = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pRgn`  
 Un puntatore a un [CRgn](../../mfc/reference/crgn-class.md) oggetto che identifica l'area di visualizzazione dell'oggetto OLE da invalidare, nelle coordinate client della finestra contenitore. Se questo parametro è **NULL**, l'extent è l'intero oggetto.  
  
 `bErase`  
 Specifica se lo sfondo all'interno dell'area invalidata da cancellare. Se **TRUE**, lo sfondo viene cancellato. Se **FALSE**, lo sfondo rimane invariato.  
  
### <a name="remarks"></a>Note  
 Può essere utilizzato per ridisegnare controlli privi di finestra all'interno del contenitore. L'area invalidato, insieme a tutte le altre aree nell'area di aggiornamento, è contrassegnata per il disegno quando la successiva [WM_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213) messaggio viene inviato.  
  
 Se `bErase` è **TRUE** per qualsiasi parte della regione di aggiornamento, viene cancellato l'intera area, non solo in parte specificata, lo sfondo.  
  
##  <a name="a-nameisconvertingvbxa--colecontrolisconvertingvbx"></a><a name="isconvertingvbx"></a>COleControl::IsConvertingVBX  
 Consente di caricare specializzati di un controllo OLE.  
  
```  
BOOL IsConvertingVBX();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo esegue la conversione; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se la conversione di un form che utilizza VBX controlli a uno che utilizza OLE (controlli), il codice di caricamento speciale per i controlli OLE potrebbe essere necessario. Ad esempio, se si sta caricando un'istanza del controllo OLE, potrebbe essere una chiamata a [PX_Font](persistence-of-ole-controls.md#px_font) nel `DoPropExchange`:  
  
 [!code-cpp[NVC_MFCAxCtl n.&3;](../../mfc/reference/codesnippet/cpp/colecontrol-class_4.cpp)]  
  
 Tuttavia, controlli VBX non conteneva un oggetto tipo di carattere. ogni proprietà di tipo di carattere è stato salvato singolarmente. In questo caso, utilizzare `IsConvertingVBX` per distinguere tra questi due casi:  
  
 [!code-cpp[NVC_MFCAxCtl n.&4;](../../mfc/reference/codesnippet/cpp/colecontrol-class_5.cpp)]  
  
 Un altro caso sarebbe se il controllo VBX salvato proprietari dati binari (nella relativa **VBM_SAVEPROPERTY** gestore di messaggi), e il controllo OLE Salva i dati binari in un formato diverso. Se si desidera che il controllo OLE per essere compatibile con il controllo VBX, è possibile leggere sia i vecchi e nuovi formati utilizzando il `IsConvertingVBX` funzione distinguendo se il controllo VBX o del controllo OLE è stato caricato.  
  
 Il controllo `DoPropExchange` funzione, è possibile verificare questa condizione e se è true, eseguire carico codice specifico per la conversione (ad esempio, negli esempi precedenti). Se il controllo non verrà convertito, è possibile eseguire codice carico normale. Questa possibilità è disponibile solo per la conversione da controparti VBX controlli.  
  
##  <a name="a-nameisinvokealloweda--colecontrolisinvokeallowed"></a><a name="isinvokeallowed"></a>COleControl::IsInvokeAllowed  
 Consente di chiamata al metodo di automazione.  
  
```  
BOOL IsInvokeAllowed(DISPID dispid);
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo è stato inizializzato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Implementazione del framework **IDispatch:: Invoke** chiamate **IsInvokeAllowed** per determinare se una determinata funzione (identificato da `dispid`) può essere richiamato. Il comportamento predefinito per un controllo OLE è consentire di metodi di automazione di essere richiamato solo se il controllo è stato inizializzato; Tuttavia, **IsInvokeAllowed** è una funzione virtuale e può essere sostituito se necessario (ad esempio, quando il controllo viene utilizzato come server di automazione). Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q166472, "procedura: utilizzare un controllo OLE come Server di automazione." Articoli della Knowledge Base sono disponibili nella documentazione di Visual Studio di MSDN Library o al [http://support.microsoft.com](http://support.microsoft.com/).  
  
##  <a name="a-nameismodifieda--colecontrolismodified"></a><a name="ismodified"></a>COleControl::IsModified  
 Determina se è stato modificato lo stato del controllo.  
  
```  
BOOL IsModified();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo stato del controllo è stato modificato dopo l'ultimo salvataggio; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Lo stato di un controllo viene modificato quando un valore della proprietà.  
  
##  <a name="a-nameisoptimizeddrawa--colecontrolisoptimizeddraw"></a><a name="isoptimizeddraw"></a>COleControl:: IsOptimizedDraw  
 Determina se il contenitore supporta disegno ottimizzato per l'operazione di disegno corrente.  
  
```  
BOOL IsOptimizedDraw();
```  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se il contenitore supporta ottimizzati per l'operazione di disegno corrente; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Se disegno ottimizzato è supportata, il controllo necessario non selezionare gli oggetti meno recenti (penne, pennelli, tipi di carattere e così via) nel contesto di dispositivo al termine di disegno.  
  
##  <a name="a-nameissubclassedcontrola--colecontrolissubclassedcontrol"></a><a name="issubclassedcontrol"></a>COleControl::IsSubclassedControl  
 Chiamato dal framework per determinare se il controllo è una sottoclasse una finestra di controllano.  
  
```  
virtual BOOL IsSubclassedControl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo è una sottoclasse; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È necessario eseguire l'override di questa funzione e restituire **TRUE** se OLE controllo sottoclassi di un controllo di Windows.  
  
##  <a name="a-nameloada--colecontrolload"></a><a name="load"></a>COleControl::Load  
 Reimposta i precedenti dati caricati in modo asincrono e avvia un nuovo caricamento della proprietà asincrona del controllo.  
  
```  
void Load(LPCTSTR strNewPath, CDataPathProperty& prop);
```  
  
### <a name="parameters"></a>Parametri  
 *strNewPath*  
 Un puntatore a una stringa contenente il percorso che fa riferimento al percorso assoluto della proprietà del controllo asincrono.  
  
 *prop*  
 Oggetto [CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md) oggetto che implementa una proprietà di controllo asincrono.  
  
##  <a name="a-namelockinplaceactivea--colecontrollockinplaceactive"></a><a name="lockinplaceactive"></a>COleControl::LockInPlaceActive  
 Impedisce la disattivazione del controllo contenitore.  
  
```  
BOOL LockInPlaceActive(BOOL bLock);
```  
  
### <a name="parameters"></a>Parametri  
 `bLock`  
 **TRUE** se lo stato attivo sul posto del controllo deve essere bloccato. **FALSE** se deve essere sbloccata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il blocco è stato completato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si noti che ogni blocco del controllo deve essere associato un sblocco del controllo al termine. È solo necessario bloccare il controllo per brevi periodi, ad esempio durante la generazione di un evento.  
  
##  <a name="a-nameonambientpropertychangea--colecontrolonambientpropertychange"></a><a name="onambientpropertychange"></a>COleControl::OnAmbientPropertyChange  
 Chiamato dal framework quando una proprietà di ambiente del contenitore è stato modificato valore.  
  
```  
virtual void OnAmbientPropertyChange(DISPID dispid);
```  
  
### <a name="parameters"></a>Parametri  
 *dispID*  
 ID dispatch della proprietà di ambiente che è stato modificato, o **DISPID_UNKNOWN** se più proprietà sono state modificate.  
  
##  <a name="a-nameonappearancechangeda--colecontrolonappearancechanged"></a><a name="onappearancechanged"></a>COleControl::OnAppearanceChanged  
 Chiamato dal framework quando è stato modificato il valore della proprietà aspetto azionario.  
  
```  
virtual void OnAppearanceChanged ();
```  
  
### <a name="remarks"></a>Note  
 Se si desidera notifica dopo questa proprietà viene modificata l'override della funzione. L'implementazione predefinita chiama `InvalidateControl`.  
  
##  <a name="a-nameonbackcolorchangeda--colecontrolonbackcolorchanged"></a><a name="onbackcolorchanged"></a>COleControl::OnBackColorChanged  
 Chiamato dal framework quando è stato modificato il valore della proprietà BackColor azionario.  
  
```  
virtual void OnBackColorChanged();
```  
  
### <a name="remarks"></a>Note  
 Se si desidera notifica dopo questa proprietà viene modificata l'override della funzione. L'implementazione predefinita chiama `InvalidateControl`.  
  
##  <a name="a-nameonborderstylechangeda--colecontrolonborderstylechanged"></a><a name="onborderstylechanged"></a>COleControl::OnBorderStyleChanged  
 Chiamato dal framework quando è stato modificato il valore della proprietà BorderStyle azionario.  
  
```  
virtual void OnBorderStyleChanged();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama `InvalidateControl`.  
  
 Se si desidera notifica dopo questa proprietà viene modificata l'override della funzione.  
  
##  <a name="a-nameonclicka--colecontrolonclick"></a><a name="onclick"></a>COleControl::OnClick  
 Chiamato dal framework quando ha fatto clic su un pulsante del mouse o è stato richiamato il metodo predefinito DoClick.  
  
```  
virtual void OnClick(USHORT iButton);
```  
  
### <a name="parameters"></a>Parametri  
 *iButton*  
 Indice di un pulsante del mouse. Può avere uno dei valori seguenti:  
  
- **LEFT_BUTTON** è stato fatto clic sul pulsante sinistro del mouse.  
  
- **MIDDLE_BUTTON** è stato fatto clic sul pulsante centrale del mouse.  
  
- **RIGHT_BUTTON** è stato scelto il pulsante destro del mouse.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama `COleControl::FireClick`.  
  
 Eseguire l'override di questa funzione membro per modificare o estendere la gestione predefinita.  
  
##  <a name="a-nameonclosea--colecontrolonclose"></a><a name="onclose"></a>COleControl::OnClose  
 Chiamato dal framework quando il contenitore è chiamato il controllo **IOleControl:: Close** (funzione).  
  
```  
virtual void OnClose(DWORD dwSaveOption);
```  
  
### <a name="parameters"></a>Parametri  
 `dwSaveOption`  
 Flag che indica se l'oggetto deve essere salvato prima del caricamento. I valori validi sono:  
  
- `OLECLOSE_SAVEIFDIRTY`  
  
- `OLECLOSE_NOSAVE`  
  
- `OLECLOSE_PROMPTSAVE`  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `OnClose` Salva l'oggetto di controllo se è stato modificato e `dwSaveOption` è `OLECLOSE_SAVEIFDIRTY` o `OLECLOSE_PROMPTSAVE`.  
  
##  <a name="a-nameondoverba--colecontrolondoverb"></a><a name="ondoverb"></a>COleControl::OnDoVerb  
 Chiamato dal framework quando il contenitore chiama il **IOleObject:: DoVerb** funzione membro.  
  
```  
virtual BOOL OnDoVerb(
    LONG iVerb,  
    LPMSG lpMsg,  
    HWND hWndParent,  
    LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `iVerb`  
 L'indice del verbo di controllo da richiamare.  
  
 `lpMsg`  
 Puntatore al messaggio di Windows che ha causato il verbo da richiamare.  
  
 `hWndParent`  
 L'handle della finestra padre del controllo. Se l'esecuzione del verbo crea una finestra (o windows), `hWndParent` deve essere utilizzato come elemento padre.  
  
 `lpRect`  
 Un puntatore a una struttura RECT in cui verranno copiate le coordinate del controllo, relative al contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se chiamata ha avuto esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita utilizza la `ON_OLEVERB` e `ON_STDOLEVERB` per determinare la funzione appropriata per richiamare voci della mappa messaggi.  
  
 Eseguire l'override di questa funzione per modificare la gestione predefinita del verbo.  
  
##  <a name="a-nameondrawa--colecontrolondraw"></a><a name="ondraw"></a>COleControl:: OnDraw  
 Chiamato dal framework per disegnare il controllo OLE nel rettangolo di delimitazione specificato utilizzando il contesto di dispositivo specificato.  
  
```  
virtual void OnDraw(
    CDC* pDC,  
    const CRect& rcBounds,  
    const CRect& rcInvalid);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Il contesto di dispositivo in cui si verifica il disegno.  
  
 `rcBounds`  
 L'area rettangolare del controllo, inclusi il bordo.  
  
 `rcInvalid`  
 L'area rettangolare del controllo che non è valido.  
  
### <a name="remarks"></a>Note  
 `OnDraw`in genere viene chiamato per la visualizzazione su schermo, passando un contesto di dispositivo dello schermo come `pDC`. Il `rcBounds` parametro identifica il rettangolo nel contesto di dispositivo di destinazione (relativo alla modalità di mapping di corrente). Il `rcInvalid` parametro è il rettangolo effettivo che non è valido. In alcuni casi si tratterà di un'area più piccola `rcBounds`.  
  
##  <a name="a-nameondrawmetafilea--colecontrolondrawmetafile"></a><a name="ondrawmetafile"></a>COleControl:: OnDrawMetafile  
 Chiamato dal framework per disegnare il controllo OLE nel rettangolo di delimitazione specificato utilizzando il contesto di dispositivo metafile specificato.  
  
```  
virtual void OnDrawMetafile(
    CDC* pDC,  
    const CRect& rcBounds);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Il contesto di dispositivo in cui si verifica il disegno.  
  
 `rcBounds`  
 L'area rettangolare del controllo, inclusi il bordo.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama la [OnDraw](#ondraw) (funzione).  
  
##  <a name="a-nameonedita--colecontrolonedit"></a><a name="onedit"></a>COleControl::OnEdit  
 Fa sì che il controllo dell'interfaccia utente attivata.  
  
```  
virtual BOOL OnEdit(
    LPMSG lpMsg,  
    HWND hWndParent,  
    LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMsg`  
 Puntatore al messaggio di Windows richiamato dal verbo.  
  
 `hWndParent`  
 Handle della finestra padre del controllo.  
  
 `lpRect`  
 Un puntatore al rettangolo utilizzato dal controllo nel contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la chiamata ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Ciò equivale a richiamare il controllo `OLEIVERB_UIACTIVATE` verbo.  
  
 Questa funzione viene in genere utilizzata come funzione del gestore per un `ON_OLEVERB` voce della mappa del messaggio. In questo modo un verbo "Edit" disponibile nel menu "Oggetto" del controllo. Ad esempio:  
  
 [!code-cpp[NVC_MFCAxCtl n.&5;](../../mfc/reference/codesnippet/cpp/colecontrol-class_6.cpp)]  
  
##  <a name="a-nameonenabledchangeda--colecontrolonenabledchanged"></a><a name="onenabledchanged"></a>COleControl::OnEnabledChanged  
 Chiamato dal framework quando sono stato modificato il valore della proprietà Enabled di scorte.  
  
```  
virtual void OnEnabledChanged();
```  
  
### <a name="remarks"></a>Note  
 Se si desidera notifica dopo questa proprietà viene modificata l'override della funzione. L'implementazione predefinita chiama [InvalidateControl](#invalidatecontrol).  
  
##  <a name="a-nameonenumverbsa--colecontrolonenumverbs"></a><a name="onenumverbs"></a>COleControl::OnEnumVerbs  
 Chiamato dal framework quando il contenitore chiama il **IOleObject:: EnumVerbs** funzione membro.  
  
```  
virtual BOOL OnEnumVerbs(LPENUMOLEVERB* ppenumOleVerb);
```  
  
### <a name="parameters"></a>Parametri  
 `ppenumOleVerb`  
 Un puntatore per il **IEnumOLEVERB** che enumera i verbi del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i verbi sono disponibili. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Enumera l'implementazione predefinita di `ON_OLEVERB` voci nella mappa messaggi.  
  
 Eseguire l'override di questa funzione per modificare la modalità predefinita di enumerazione dei verbi.  
  
##  <a name="a-nameoneventadvisea--colecontroloneventadvise"></a><a name="oneventadvise"></a>COleControl::OnEventAdvise  
 Chiamato dal framework quando un gestore eventi è connesso o disconnesso da un controllo OLE.  
  
```  
virtual void OnEventAdvise(BOOL bAdvise);
```  
  
### <a name="parameters"></a>Parametri  
 `bAdvise`  
 **TRUE** indica che un gestore eventi è stato collegato al controllo. **FALSE** indica che un gestore eventi è stato disconnesso dal controllo.  
  
##  <a name="a-nameonfontchangeda--colecontrolonfontchanged"></a><a name="onfontchanged"></a>COleControl::OnFontChanged  
 Chiamato dal framework quando è stato modificato il valore della proprietà del carattere predefinito.  
  
```  
virtual void OnFontChanged();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama `COleControl::InvalidateControl`. Se il controllo è una sottoclasse di un controllo Windows, l'implementazione predefinita invia anche un **WM_SETFONT** messaggio nella finestra del controllo.  
  
 Se si desidera notifica dopo questa proprietà viene modificata l'override della funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[6 NVC_MFCAxCtl](../../mfc/reference/codesnippet/cpp/colecontrol-class_7.cpp)]  
  
##  <a name="a-nameonforecolorchangeda--colecontrolonforecolorchanged"></a><a name="onforecolorchanged"></a>COleControl::OnForeColorChanged  
 Chiamato dal framework quando è stato modificato il valore della proprietà ForeColor predefinito.  
  
```  
virtual void OnForeColorChanged();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama `InvalidateControl`.  
  
 Se si desidera notifica dopo questa proprietà viene modificata l'override della funzione.  
  
##  <a name="a-nameonfreezeeventsa--colecontrolonfreezeevents"></a><a name="onfreezeevents"></a>COleControl::OnFreezeEvents  
 Chiamato dal framework dopo le chiamate di contenitore **IOleControl:: FreezeEvents**.  
  
```  
virtual void OnFreezeEvents(BOOL bFreeze);
```  
  
### <a name="parameters"></a>Parametri  
 `bFreeze`  
 **TRUE** se il controllo della gestione degli eventi è bloccata; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione.  
  
 Eseguire l'override di questa funzione se si desidera comportamenti aggiuntivi quando la gestione degli eventi è bloccato o sbloccato.  
  
##  <a name="a-nameongetcolorseta--colecontrolongetcolorset"></a><a name="ongetcolorset"></a>COleControl::OnGetColorSet  
 Chiamato dal framework quando il contenitore chiama il **IViewObject::GetColorSet** funzione membro.  
  
```  
virtual BOOL OnGetColorSet(
    DVTARGETDEVICE* ptd,  
    HDC hicTargetDev,  
    LPLOGPALETTE* ppColorSet);
```  
  
### <a name="parameters"></a>Parametri  
 `ptd`  
 Punta al dispositivo di destinazione per il quale è necessario eseguire il rendering dell'immagine. Se questo valore è **NULL**, l'immagine deve essere eseguito il rendering per un dispositivo di destinazione predefinito, in genere un dispositivo di visualizzazione.  
  
 `hicTargetDev`  
 Specifica il contesto di informazioni sul dispositivo di destinazione indicato dal `ptd`. Questo parametro può essere un contesto di dispositivo, ma non è necessariamente. If `ptd` is **NULL**, `hicTargetDev` should also be **NULL**.  
  
 *ppColorSet*  
 Puntatore alla posizione in cui deve essere copiato il set di colori da utilizzare. Se la funzione non restituisce il set di colori **NULL** viene restituito.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se viene restituito un set di colore validi. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il contenitore chiama questa funzione per ottenere tutti i colori necessari per disegnare il controllo OLE. Il contenitore può utilizzare set di colori ottenuto in combinazione con i colori, che è necessario impostare la tavolozza dei colori complessiva. L'implementazione predefinita restituisce **FALSE**.  
  
 Eseguire l'override di questa funzione per eseguire qualsiasi elaborazione speciale della richiesta.  
  
##  <a name="a-nameongetcontrolinfoa--colecontrolongetcontrolinfo"></a><a name="ongetcontrolinfo"></a>COleControl::OnGetControlInfo  
 Chiamato dal framework quando il contenitore del controllo richiede informazioni sul controllo.  
  
```  
virtual void OnGetControlInfo(LPCONTROLINFO pControlInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `pControlInfo`  
 Puntatore a un [CONTROLINFO](http://msdn.microsoft.com/library/windows/desktop/ms680734) struttura deve essere compilato.  
  
### <a name="remarks"></a>Note  
 Queste informazioni è costituito principalmente da una descrizione dei tasti di scelta rapida del controllo. Compila l'implementazione predefinita `pControlInfo` con le informazioni predefinite.  
  
 Eseguire l'override di questa funzione se il controllo deve elaborare tasti di scelta.  
  
##  <a name="a-nameongetdisplaystringa--colecontrolongetdisplaystring"></a><a name="ongetdisplaystring"></a>COleControl::OnGetDisplayString  
 Chiamato dal framework per ottenere una stringa che rappresenta il valore corrente della proprietà identificata da `dispid`.  
  
```  
virtual BOOL OnGetDisplayString(
    DISPID dispid,  
    CString& strValue);
```  
  
### <a name="parameters"></a>Parametri  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 `strValue`  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) tramite cui verrà restituita una stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stata restituita una stringa *strValue;* in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se il controllo dispone di una proprietà il cui valore non può essere convertito direttamente in una stringa e il valore della proprietà da visualizzare in un visualizzatore proprietà fornito dal contenitore.  
  
##  <a name="a-nameongetinplacemenua--colecontrolongetinplacemenu"></a><a name="ongetinplacemenu"></a>COleControl::OnGetInPlaceMenu  
 Chiamato dal framework quando il controllo dell'interfaccia utente attivata per ottenere il menu da unire in menu esistenti del contenitore.  
  
```  
virtual HMENU OnGetInPlaceMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del menu del controllo, o **NULL** se il controllo è none. L'implementazione predefinita restituisce **NULL**.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sull'unione di risorse OLE, vedere l'articolo [menu e risorse (OLE)](../../mfc/menus-and-resources-ole.md).  
  
##  <a name="a-nameongetnaturalextenta--colecontrolongetnaturalextent"></a><a name="ongetnaturalextent"></a>COleControl::OnGetNaturalExtent  
 Chiamato dal framework in risposta a un contenitore **IViewObjectEx::GetNaturalExtent** richiesta.  
  
```  
virtual BOOL OnGetNaturalExtent(
    DWORD dwAspect,
    LONG lindex,
    DVTARGETDEVICE* ptd,
    HDC hicTargetDev,
    DVEXTENTINFO* pExtentInfo,
    LPSIZEL psizel);
```  
  
### <a name="parameters"></a>Parametri  
 `dwAspect`  
 Specifica la modalità con cui l'oggetto deve essere rappresentato. Rappresentazioni di includono il contenuto, un'icona, un'immagine di anteprima o un documento stampato. I valori validi sono ricavati dall'enumerazione [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318) o **DVASPECT2**.  
  
 *lindex*  
 La parte dell'oggetto che riveste interesse. Attualmente solo -1 è valido.  
  
 `ptd`  
 Indichi il [DVTARGETDEVICE](http://msdn.microsoft.com/library/windows/desktop/ms686613) struttura che definisce il dispositivo di destinazione per cui le dimensioni dell'oggetto devono essere restituita.  
  
 `hicTargetDev`  
 Specifica il contesto di informazioni per il dispositivo di destinazione indicato dal `ptd` parametro dal quale l'oggetto può estrarre la metrica del dispositivo e testare le funzionalità del dispositivo. Se `ptd` è **NULL**, l'oggetto deve ignorare il valore di `hicTargetDev` parametro.  
  
 *pExtentInfo*  
 Indichi il **DVEXTENTINFO** struttura che specifica i dati di ridimensionamento. Il **DVEXTENTINFO** struttura è:  
  
 `typedef struct  tagExtentInfo`  
  
 `{`  
  
 `UINT cb;`  
  
 `DWORD dwExtentMode;`  
  
 `SIZEL sizelProposed;`  
  
 `}   DVEXTENTINFO;`  
  
 Il membro della struttura `dwExtentMode` può assumere uno dei due valori:  
  
- **DVEXTENT_CONTENT** verificare qual è il controllo deve essere esattamente al contenuto (snap-in-size)  
  
- **DVEXTENT_INTEGRAL** durante il ridimensionamento, dimensioni proposta di passare al controllo  
  
 `psizel`  
 Punta al ridimensionamento dei dati restituiti dal controllo. I dati di ridimensionamento restituito sono impostati su -1 per qualsiasi dimensione che non è stato modificato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se correttamente restituisce o consente di regolare le dimensioni. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per restituire più vicina alla modalità di dimensioni e la misura proposta in dimensioni di visualizzazione dell'oggetto di **DVEXTENTINFO** struttura. L'implementazione predefinita restituisce **FALSE** ed non effettua alcuna modifica alle dimensioni.  
  
##  <a name="a-nameongetpredefinedstringsa--colecontrolongetpredefinedstrings"></a><a name="ongetpredefinedstrings"></a>COleControl::OnGetPredefinedStrings  
 Chiamato dal framework per ottenere un set di stringhe predefiniti che rappresentano i valori possibili per una proprietà.  
  
```  
virtual BOOL OnGetPredefinedStrings(
    DISPID dispid,  
    CStringArray* pStringArray,  
    CDWordArray* pCookieArray);
```  
  
### <a name="parameters"></a>Parametri  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 `pStringArray`  
 Una matrice di stringhe da riempire con i valori restituiti.  
  
 `pCookieArray`  
 Oggetto `DWORD` matrice da riempire con i valori restituiti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se sono stati aggiunti elementi al `pStringArray` e `pCookieArray`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se il controllo dispone di una proprietà con un set di valori possibili che possono essere rappresentati da stringhe. Per ogni elemento aggiunto alla `pStringArray`, è necessario aggiungere un elemento "cookie" corrispondente a *pCookieArray.* Questi valori "cookie" in un secondo momento possono essere passati dal framework per il `COleControl::OnGetPredefinedValue` (funzione).  
  
##  <a name="a-nameongetpredefinedvaluea--colecontrolongetpredefinedvalue"></a><a name="ongetpredefinedvalue"></a>COleControl::OnGetPredefinedValue  
 Chiamato dal framework per ottenere il valore corrispondente a una delle stringhe predefinite precedentemente restituite da un override di `COleControl::OnGetPredefinedStrings`.  
  
```  
virtual BOOL OnGetPredefinedValue(
    DISPID dispid,  
    DWORD dwCookie,  
    VARIANT* lpvarOut);
```  
  
### <a name="parameters"></a>Parametri  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 `dwCookie`  
 Il valore di un cookie precedentemente restituito da un override di `COleControl::OnGetPredefinedStrings`.  
  
 `lpvarOut`  
 Puntatore a un **VARIANT** struttura tramite cui verrà restituito un valore della proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stato restituito un valore `lpvarOut`; in caso contrario, 0.  
  
##  <a name="a-nameongetviewextenta--colecontrolongetviewextent"></a><a name="ongetviewextent"></a>COleControl::OnGetViewExtent  
 Chiamato dal framework in risposta a un contenitore [IViewObject2::GetExtent](http://msdn.microsoft.com/library/windows/desktop/ms684032) richiesta.  
  
```  
virtual BOOL OnGetViewExtent(
    DWORD dwDrawAspect,
    LONG lindex,
    DVTARGETDEVICE* ptd,
    LPSIZEL lpsizel);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDrawAspect*  
 `DWORD`descrive quale form o aspetto, di un oggetto viene visualizzato. I valori validi sono ricavati dall'enumerazione [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318) o **DVASPECT2**.  
  
 *lindex*  
 La parte dell'oggetto che riveste interesse. Attualmente solo -1 è valido.  
  
 `ptd`  
 Indichi il [DVTARGETDEVICE](http://msdn.microsoft.com/library/windows/desktop/ms686613) struttura che definisce il dispositivo di destinazione per cui le dimensioni dell'oggetto devono essere restituita.  
  
 *lpsizel*  
 Punta alla posizione in cui le dimensioni dell'oggetto viene restituita.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le informazioni di extent viene restituite correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se il controllo utilizza disegno a due passaggi e le parti trasparenti e opache hanno dimensioni diverse.  
  
##  <a name="a-nameongetviewrecta--colecontrolongetviewrect"></a><a name="ongetviewrect"></a>COleControl::OnGetViewRect  
 Chiamato dal framework in risposta a un contenitore **IViewObjectEx::GetRect** richiesta.  
  
```  
virtual BOOL OnGetViewRect(DWORD dwAspect, LPRECTL pRect);
```  
  
### <a name="parameters"></a>Parametri  
 `dwAspect`  
 `DWORD`descrive quale form o aspetto, di un oggetto viene visualizzato. I valori validi sono ricavati dall'enumerazione [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318) o **DVASPECT2**:  
  
- `DVASPECT_CONTENT`Rettangolo di delimitazione dell'intero oggetto. Nell'angolo superiore sinistro dell'oggetto origine e dimensioni uguali per quanto restituito da **GetViewExtent***.*  
  
- **DVASPECT_OPAQUE** oggetti con un'area rettangolare opaco restituire il rettangolo. Altri esito negativo.  
  
- **DVASPECT_TRANSPARENT** rettangolo che copre tutte le parti irregolare o trasparente.  
  
 `pRect`  
 Indichi il [RECTL](http://msdn.microsoft.com/library/windows/desktop/dd162907) struttura che specifica il rettangolo in cui l'oggetto deve essere disegnato. Questo parametro controlla il posizionamento e l'adattamento dell'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il rettangolo di ridimensionamento per l'oggetto viene restituito correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Le dimensioni dell'oggetto viene convertita da `OnGetViewRect` in un rettangolo a partire da una posizione specifica (il valore predefinito è l'angolo superiore sinistro dello schermo). Eseguire l'override di questa funzione se il controllo utilizza disegno a due passaggi e le parti trasparenti e opache hanno dimensioni diverse.  
  
##  <a name="a-nameongetviewstatusa--colecontrolongetviewstatus"></a><a name="ongetviewstatus"></a>COleControl::OnGetViewStatus  
 Chiamato dal framework in risposta a un contenitore **IViewObjectEx::GetViewStatus** richiesta.  
  
```  
virtual DWORD OnGetViewStatus();
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di **VIEWSTATUS** enumerazione se l'esito positivo; in caso contrario 0. I valori possibili sono qualsiasi combinazione delle operazioni seguenti:  
  
 **VIEWSTATUS_OPAQUE**  
 Oggetto è completamente opaco. Se questo bit non è impostato, l'oggetto contiene parti trasparenti. Questo bit si applica solo a sugli aspetti relativi al contenuto e non a `DVASPECT_ICON` o `DVASPECT_DOCPRINT`.  
  
 **VIEWSTATUS_SOLIDBKGND**  
 Oggetto presenta uno sfondo a tinta unita (composta da un colore a tinta unita, non un pattern pennello). Questo bit è significativo solo se **VIEWSTATUS_OPAQUE** è impostata e si applica solo agli aspetti relativi al contenuto e non a `DVASPECT_ICON` o `DVASPECT_DOCPRINT`.  
  
 **VIEWSTATUS_DVASPECTOPAQUE**  
 Oggetto supporta **DVASPECT_OPAQUE**. Tutti **IViewObjectEx** i metodi che accettano una caratteristica di disegno come un parametro può essere chiamato con questo aspetto.  
  
 **VIEWSTATUS_DVASPECTTRANSPARENT**  
 Oggetto supporta **DVASPECT_TRANSPARENT**. Tutti **IViewObjectEx** i metodi che accettano una caratteristica di disegno come un parametro può essere chiamato con questo aspetto.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se il controllo utilizza disegno a due passaggi. L'implementazione predefinita restituisce **VIEWSTATUS_OPAQUE**.  
  
##  <a name="a-nameonhidetoolbarsa--colecontrolonhidetoolbars"></a><a name="onhidetoolbars"></a>COleControl::OnHideToolBars  
 Chiamato dal framework quando il controllo è disattivata l'interfaccia utente.  
  
```  
virtual void OnHideToolBars();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione deve nascondere tutte le barre degli strumenti visualizzate da `OnShowToolbars`.  
  
##  <a name="a-nameoninactivemousemovea--colecontroloninactivemousemove"></a><a name="oninactivemousemove"></a>COleControl::OnInactiveMouseMove  
 Chiamato dal contenitore per l'oggetto inattivo sotto il puntatore del mouse al momento della ricezione di un `WM_MOUSEMOVE` messaggio.  
  
```  
virtual void OnInactiveMouseMove(
    LPCRECT lprcBounds,
    long x,
    long y,
    DWORD dwKeyState);
```  
  
### <a name="parameters"></a>Parametri  
 `lprcBounds`  
 L'oggetto di delimitazione rettangolo, nelle coordinate client della finestra contenitore. Indica la posizione esatta e le dimensioni dell'oggetto sullo schermo quando il `WM_MOUSEMOVE` messaggio è stato ricevuto.  
  
 *x*  
 Coordinata x della posizione del mouse nelle coordinate client della finestra contenitore.  
  
 *y*  
 Coordinata y della posizione del mouse nelle coordinate client della finestra contenitore.  
  
 `dwKeyState`  
 Identifica lo stato corrente dei tasti di modifica della tastiera sulla tastiera. Valori validi possono essere una combinazione di uno o più flag **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_BUTTON**, **MK_LBUTTON**, **MK_MBUTTON**, e **MK_RBUTTON**.  
  
### <a name="remarks"></a>Note  
 Si noti che coordinate client della finestra (in pixel) vengono utilizzate per passare la posizione del cursore del mouse. Ciò è reso possibile anche passando il rettangolo di delimitazione dell'oggetto nel sistema di coordinate stesso.  
  
##  <a name="a-nameoninactivesetcursora--colecontroloninactivesetcursor"></a><a name="oninactivesetcursor"></a>COleControl::OnInactiveSetCursor  
 Chiamato dal contenitore per l'oggetto inattivo sotto il puntatore del mouse al momento della ricezione di un `WM_SETCURSOR` messaggio.  
  
```  
virtual BOOL OnInactiveSetCursor(
    LPCRECT lprcBounds,
    long x,
    long y,
    DWORD dwMouseMsg,
    BOOL bSetAlways);
```  
  
### <a name="parameters"></a>Parametri  
 `lprcBounds`  
 L'oggetto di delimitazione rettangolo, nelle coordinate client della finestra contenitore. Indica la posizione esatta e le dimensioni dell'oggetto sullo schermo quando il `WM_SETCURSOR` messaggio è stato ricevuto.  
  
 *x*  
 Coordinata x della posizione del mouse nelle coordinate client della finestra contenitore.  
  
 *y*  
 Coordinata y della posizione del mouse nelle coordinate client della finestra contenitore.  
  
 *dwMouseMsg*  
 L'identificatore del messaggio del mouse per il quale un `WM_SETCURSOR` si è verificato.  
  
 *bSetAlways*  
 Specifica se l'oggetto è necessario impostare il cursore. Se **TRUE**, l'oggetto è necessario impostare il cursore; se **FALSE**, il cursore non è tenuto a impostare il cursore e deve restituire **S_FALSE** in questo caso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si noti che coordinate client della finestra (in pixel) vengono utilizzate per passare la posizione del cursore del mouse. Ciò è reso possibile anche passando il rettangolo di delimitazione dell'oggetto nel sistema di coordinate stesso.  
  
##  <a name="a-nameonkeydowneventa--colecontrolonkeydownevent"></a><a name="onkeydownevent"></a>COleControl::OnKeyDownEvent  
 Chiamato dal framework dopo l'elaborazione di un evento KeyDown predefinito.  
  
```  
virtual void OnKeyDownEvent(
    USHORT nChar,  
    USHORT nShiftState);
```  
  
### <a name="parameters"></a>Parametri  
 `nChar`  
 Il valore del codice chiave virtuale del tasto premuto. Per un elenco dei codici di tasti virtuali standard, vedere winuser. h  
  
 `nShiftState`  
 Contiene una combinazione dei flag seguenti:  
  
- **SHIFT_MASK** durante l'azione è stato premuto il tasto MAIUSC.  
  
- **CTRL_MASK** il CTRL era premuto durante l'azione.  
  
- **ALT_MASK** ALT il tasto è stato premuto durante l'azione.  
  
### <a name="remarks"></a>Note  
 Se il controllo deve accedere alle informazioni chiave dopo l'evento è stata attivata l'override della funzione.  
  
##  <a name="a-nameonkeypresseventa--colecontrolonkeypressevent"></a><a name="onkeypressevent"></a>COleControl::OnKeyPressEvent  
 Chiamato dal framework dopo l'azione è stata attivata l'evento KeyPress.  
  
```  
virtual void OnKeyPressEvent(USHORT nChar);
```  
  
### <a name="parameters"></a>Parametri  
 `nChar`  
 Contiene il valore del tasto premuto codice chiave virtuale. Per un elenco dei codici di tasti virtuali standard, vedere winuser. h  
  
### <a name="remarks"></a>Note  
 Si noti che il `nChar` valore potrebbe essere stato modificato dal contenitore.  
  
 Se si desidera notifica dopo che questo evento si verifica l'override della funzione.  
  
##  <a name="a-nameonkeyupeventa--colecontrolonkeyupevent"></a><a name="onkeyupevent"></a>COleControl::OnKeyUpEvent  
 Chiamato dal framework dopo l'elaborazione di un evento KeyDown predefinito.  
  
```  
virtual void OnKeyUpEvent(
    USHORT nChar,  
    USHORT nShiftState);
```  
  
### <a name="parameters"></a>Parametri  
 `nChar`  
 Il valore del codice chiave virtuale del tasto premuto. Per un elenco dei codici di tasti virtuali standard, vedere winuser. h  
  
 `nShiftState`  
 Contiene una combinazione dei flag seguenti:  
  
- **SHIFT_MASK** durante l'azione è stato premuto il tasto MAIUSC.  
  
- **CTRL_MASK** il CTRL era premuto durante l'azione.  
  
- **ALT_MASK** ALT il tasto è stato premuto durante l'azione.  
  
### <a name="remarks"></a>Note  
 Se il controllo deve accedere alle informazioni chiave dopo l'evento è stata attivata l'override della funzione.  
  
##  <a name="a-nameonmappropertytopagea--colecontrolonmappropertytopage"></a><a name="onmappropertytopage"></a>COleControl::OnMapPropertyToPage  
 Chiamato dal framework per ottenere l'ID di classe della pagina delle proprietà che implementa la modifica della proprietà specificata.  
  
```  
virtual BOOL OnMapPropertyToPage(
    DISPID dispid,  
    LPCLSID lpclsid,  
    BOOL* pbPageOptional);
```  
  
### <a name="parameters"></a>Parametri  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 `lpclsid`  
 Puntatore a un **CLSID** struttura tramite cui verrà restituito un ID di classe.  
  
 *pbPageOptional*  
 Restituisce un indicatore dell'eventuale utilizzo della pagina delle proprietà specificato è facoltativo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha restituito un ID di classe `lpclsid`; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per fornire un modo per richiamare pagine delle proprietà del controllo dal Visualizzatore di proprietà del contenitore.  
  
##  <a name="a-nameonmnemonica--colecontrolonmnemonic"></a><a name="onmnemonic"></a>COleControl::OnMnemonic  
 Chiamato dal framework quando il contenitore è stato rilevato che è stato premuto un tasto mnemonico del controllo OLE.  
  
```  
virtual void OnMnemonic(LPMSG pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 `pMsg`  
 Puntatore al messaggio di Windows generato dalla pressione di un tasto mnemonico.  
  
##  <a name="a-nameonpropertiesa--colecontrolonproperties"></a><a name="onproperties"></a>COleControl::OnProperties  
 Chiamato dal framework quando il verbo di proprietà del controllo è stato richiamato dal contenitore.  
  
```  
virtual BOOL OnProperties(
    LPMSG lpMsg,  
    HWND hWndParent,  
    LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMsg`  
 Puntatore al messaggio di Windows richiamato dal verbo.  
  
 `hWndParent`  
 Handle della finestra padre del controllo.  
  
 `lpRect`  
 Un puntatore al rettangolo utilizzato dal controllo nel contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la chiamata ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita consente di visualizzare una finestra di dialogo delle proprietà modale.  
  
 È inoltre possibile utilizzare questa funzione per causare la visualizzazione delle pagine delle proprietà del controllo. Effettuare una chiamata al `OnProperties` funzione, passando l'handle del padre del controllo di `hWndParent` parametro. In questo caso, i valori di `lpMsg` e `lpRect` i parametri vengono ignorati.  
  
##  <a name="a-nameonqueryhitpointa--colecontrolonqueryhitpoint"></a><a name="onqueryhitpoint"></a>COleControl::OnQueryHitPoint  
 Chiamato dal framework in risposta a un contenitore **IViewObjectEx::QueryHitPoint** richiesta.  
  
```  
virtual BOOL OnQueryHitPoint(
    DWORD dwAspect,
    LPCRECT pRectBounds,
    POINT ptlLoc,
    LONG lCloseHint,
    DWORD* pHitResult);
```  
  
### <a name="parameters"></a>Parametri  
 `dwAspect`  
 Specifica la modalità di rappresentazione dell'oggetto. I valori validi sono ricavati dall'enumerazione [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318) o **DVASPECT2**.  
  
 `pRectBounds`  
 Puntatore a un `RECT` struttura che specifica il rettangolo di delimitazione dell'area client di controllo OLE.  
  
 `ptlLoc`  
 Puntatore al **punto** struttura che specifica il punto da sottoporre a hit. Il punto viene specificato nelle coordinate dell'area client OLE.  
  
 `lCloseHint`  
 La distanza che definisce "Chiudi" per il punto selezionato un riscontro.  
  
 `pHitResult`  
 Puntatore al risultato della query hit test. Uno dei valori seguenti:  
  
- **HITRESULT_OUTSIDE** `ptlLoc` è di fuori di OLE dell'oggetto e non chiude.  
  
- **HITRESULT_TRANSPARENT** *ptlLoc* è all'interno dei limiti dell'oggetto OLE, ma non vicino l'immagine. Ad esempio, potrebbe essere un punto all'interno di un cerchio trasparente **HITRESULT_TRANSPARENT**.  
  
- **HITRESULT_CLOSE** `ptlLoc` interni o esterni l'oggetto OLE ma abbastanza vicino all'oggetto per essere considerati interni. Oggetti piccoli, sottili o dettagliati possono utilizzare questo valore. Anche se un punto di fuori di contenimento rettangolo di un oggetto può ancora essere Chiudi (è necessaria per raggiungere gli oggetti piccoli).  
  
- **HITRESULT_HIT** `ptlLoc` è all'interno dell'immagine dell'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se correttamente viene restituito un risultato del test. in caso contrario 0. Un tentativo di accesso è una sovrapposizione con l'area di visualizzazione del controllo OLE.  
  
### <a name="remarks"></a>Note  
 Esegue una query se il rettangolo di visualizzazione di un oggetto punto specificato è sovrapposto (raggiunge il punto). `QueryHitPoint`può essere sottoposto a override per verificare i risultati per gli oggetti non rettangolari.  
  
##  <a name="a-nameonqueryhitrecta--colecontrolonqueryhitrect"></a><a name="onqueryhitrect"></a>COleControl::OnQueryHitRect  
 Chiamato dal framework in risposta a un contenitore **IViewObjectEx::QueryHitRect** richiesta.  
  
```  
virtual BOOL OnQueryHitRect(
    DWORD dwAspect,  
    LPCRECT pRectBounds,  
    LPCRECT prcLoc,  
    LONG lCloseHint,  
    DWORD* pHitResult);
```  
  
### <a name="parameters"></a>Parametri  
 `dwAspect`  
 Specifica la modalità con cui l'oggetto deve essere rappresentato. I valori validi sono ricavati dall'enumerazione [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318) o **DVASPECT2**.  
  
 `pRectBounds`  
 Puntatore a un `RECT` struttura che specifica il rettangolo di delimitazione dell'area client di controllo OLE.  
  
 *prcLoc*  
 Puntatore al `RECT` struttura che specifica il rettangolo da sottoporre a hit (sovrapposizione con il rettangolo di oggetto), rispetto all'angolo superiore sinistro dell'oggetto.  
  
 `lCloseHint`  
 Non usato.  
  
 `pHitResult`  
 Puntatore al risultato della query hit test. Uno dei valori seguenti:  
  
- **HITRESULT_OUTSIDE** alcun punto nel rettangolo non viene raggiunto dall'oggetto OLE.  
  
- **HITRESULT_HIT** almeno un punto nel rettangolo sarebbe un riscontro sull'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se correttamente viene restituito un risultato del test. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Esegue una query se il rettangolo di visualizzazione di un oggetto si sovrappone a qualsiasi punto nel rettangolo (raggiunge il rettangolo). `QueryHitRect`può essere sottoposto a override per verificare i risultati per gli oggetti non rettangolari.  
  
##  <a name="a-nameonrenderdataa--colecontrolonrenderdata"></a><a name="onrenderdata"></a>COleControl::OnRenderData  
 Chiamato dal framework per recuperare i dati nel formato specificato.  
  
```  
virtual BOOL OnRenderData(
    LPFORMATETC lpFormatEtc,  
    LPSTGMEDIUM lpStgMedium);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Indichi il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui vengono richieste informazioni.  
  
 `lpStgMedium`  
 Punta a un [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura in cui i dati da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il formato specificato è inserito in precedenza nel controllo oggetto usando il [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) o [DelayRenderFileData](../../mfc/reference/coledatasource-class.md#delayrenderfiledata) le funzioni membro per rendering ritardati. L'implementazione predefinita di questa funzione chiama `OnRenderFileData` o `OnRenderGlobalData`, rispettivamente, se il supporto di archiviazione fornito è un file o della memoria. Se il formato richiesto è `CF_METAFILEPICT` o formato di set di proprietà persistente, l'implementazione predefinita esegue il rendering dei dati appropriati e restituisce zero. In caso contrario, restituisce 0 e non esegue alcuna operazione.  
  
 Se *lpStgMedium-> tymed* è **TYMED_NULL**, **STGMEDIUM** deve essere allocato e compilato come specificato da *lpFormatEtc-> tymed*. Se non **TYMED_NULL**, **STGMEDIUM** deve essere compilato con i dati.  
  
 Eseguire l'override di questa funzione per fornire i dati nel formato richiesto e supporto. A seconda dei dati, si desidera eseguire l'override in una delle altre versioni di questa funzione invece. Se i dati sono piccolo e ha dimensione fissa, eseguire l'override `OnRenderGlobalData`. Se i dati in un file o di dimensioni variabili, eseguire l'override `OnRenderFileData`.  
  
 Per ulteriori informazioni, vedere il **FORMATETC** e **STGMEDIUM** strutture di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonrenderfiledataa--colecontrolonrenderfiledata"></a><a name="onrenderfiledata"></a>COleControl::OnRenderFileData  
 Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione è un file.  
  
```  
virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,  
    CFile* pFile);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Indichi il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui vengono richieste informazioni.  
  
 `pFile`  
 Punta a un [CFile](../../mfc/reference/cfile-class.md) oggetto in cui i dati da sottoporre a rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il formato specificato è inserito in precedenza nel controllo oggetto usando il [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) una funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente **FALSE**.  
  
 Eseguire l'override di questa funzione per fornire i dati nel formato richiesto e supporto. A seconda dei dati, è possibile eseguire l'override in una delle altre versioni di questa funzione invece. Se si desidera gestire più supporti di archiviazione, eseguire l'override `OnRenderData`. Se i dati in un file o di dimensioni variabili, eseguire l'override `OnRenderFileData`.  
  
 Per ulteriori informazioni, vedere il **FORMATETC** nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonrenderglobaldataa--colecontrolonrenderglobaldata"></a><a name="onrenderglobaldata"></a>COleControl::OnRenderGlobalData  
 Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione specificato è la memoria globale.  
  
```  
virtual BOOL OnRenderGlobalData(
    LPFORMATETC lpFormatEtc,  
    HGLOBAL* phGlobal);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Indichi il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui vengono richieste informazioni.  
  
 `phGlobal`  
 Punta a un handle per la memoria globale in cui sono possibile restituire i dati. Se non è stata allocata memoria, questo parametro può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il formato specificato è inserito in precedenza nel controllo oggetto usando il [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) una funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente **FALSE**.  
  
 Se `phGlobal` è **NULL**, quindi un nuovo `HGLOBAL` deve essere allocata e restituiti in `phGlobal`. In caso contrario, il `HGLOBAL` specificato da `phGlobal` deve essere compilato con i dati. La quantità di dati inseriti nel `HGLOBAL` non deve superare la dimensione corrente del blocco di memoria. Inoltre, il blocco non può essere riallocato a una dimensione superiore.  
  
 Eseguire l'override di questa funzione per fornire i dati nel formato richiesto e supporto. A seconda dei dati, si desidera eseguire l'override in una delle altre versioni di questa funzione invece. Se si desidera gestire più supporti di archiviazione, eseguire l'override `OnRenderData`. Se i dati in un file o di dimensioni variabili, eseguire l'override `OnRenderFileData`.  
  
 Per ulteriori informazioni, vedere il **FORMATETC** nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonresetstatea--colecontrolonresetstate"></a><a name="onresetstate"></a>OnResetState  
 Chiamato dal framework quando le proprietà del controllo devono essere impostate sui rispettivi valori predefiniti.  
  
```  
virtual void OnResetState();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama [DoPropExchange](#dopropexchange), passando un `CPropExchange` che le proprietà da impostare i valori predefiniti.  
  
 Il writer di controllo è possibile inserire il codice di inizializzazione per il controllo OLE in questo sottoponibile a override. Questa funzione viene chiamata quando [IPersistStream:: Load](http://msdn.microsoft.com/library/windows/desktop/ms680568) o [IPersistStorage:: Load](http://msdn.microsoft.com/library/windows/desktop/ms680557) ha esito negativo, o [IPersistStreamInit::InitNew](http://msdn.microsoft.com/library/windows/desktop/ms690234) o [IPersistStorage::InitNew](http://msdn.microsoft.com/library/windows/desktop/ms687194) viene chiamato senza chiamare prima **IPersistStream:: Load** o **IPersistStorage:: Load**.  
  
##  <a name="a-nameonsetclientsitea--colecontrolonsetclientsite"></a><a name="onsetclientsite"></a>COleControl:: OnSetClientSite  
 Chiamato dal framework quando il contenitore è chiamato il controllo **IOleControl::SetClientSite** (funzione).  
  
```  
virtual void OnSetClientSite();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `OnSetClientSite` controlla se le proprietà del percorso dati vengono caricate e, in caso affermativo, chiama `DoDataPathPropExchange`.  
  
 Eseguire l'override di questa funzione per eseguire qualsiasi elaborazione speciale della notifica. In particolare, esegue l'override di questa funzione devono chiamare la classe di base.  
  
##  <a name="a-nameonsetdataa--colecontrolonsetdata"></a><a name="onsetdata"></a>COleControl::OnSetData  
 Chiamato dal framework per sostituire i dati del controllo con i dati specificati.  
  
```  
virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium,
    BOOL bRelease);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Puntatore a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato dei dati.  
  
 `lpStgMedium`  
 Puntatore a un [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura in cui si trovano i dati.  
  
 `bRelease`  
 **TRUE** se il controllo deve liberare il supporto di archiviazione; **FALSE** se il controllo non deve liberare il supporto di archiviazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se i dati sono impostati nella proprietà persistente formato, l'implementazione predefinita consente di modificare lo stato del controllo di conseguenza. In caso contrario, l'implementazione predefinita non esegue alcuna operazione. Se `bRelease` è **TRUE**, quindi una chiamata a **ReleaseStgMedium** viene effettuato; in caso contrario non.  
  
 Eseguire l'override di questa funzione per sostituire i dati del controllo con i dati specificati.  
  
 Per ulteriori informazioni, vedere il **FORMATETC** e **STGMEDIUM** strutture di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonsetextenta--colecontrolonsetextent"></a><a name="onsetextent"></a>COleControl::OnSetExtent  
 Chiamato dal framework quando l'estensione del controllo deve essere modificato, in seguito a una chiamata a [IOleObject::SetExtent](http://msdn.microsoft.com/library/windows/desktop/ms694330).  
  
```  
virtual BOOL OnSetExtent(LPSIZEL lpSizeL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpSizeL`  
 Un puntatore per il **SIZEL** struttura che utilizza valori long integer per rappresentare la larghezza e altezza del controllo, espresso in **HIMETRIC** unità.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la modifica delle dimensioni è stata accettata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita gestisce il ridimensionamento dell'estensione del controllo. Se il controllo è attivo sul posto, una chiamata al contenitore **OnPosRectChanged** viene quindi effettuata.  
  
 Eseguire l'override di questa funzione per modificare il ridimensionamento predefinito del controllo.  
  
##  <a name="a-nameonsetobjectrectsa--colecontrolonsetobjectrects"></a><a name="onsetobjectrects"></a>COleControl::OnSetObjectRects  
 Chiamato dal framework per implementare una chiamata a [IOleInPlaceObject::SetObjectRects](http://msdn.microsoft.com/library/windows/desktop/ms683767).  
  
```  
virtual BOOL OnSetObjectRects(
    LPCRECT lpRectPos,  
    LPCRECT lpRectClip);
```  
  
### <a name="parameters"></a>Parametri  
 *lpRectPos*  
 Un puntatore a una struttura RECT indicando nuova posizione e le dimensioni relative al contenitore del controllo.  
  
 `lpRectClip`  
 Un puntatore a un `RECT` struttura che indica un'area rettangolare in cui il controllo è da ritagliare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il riposizionamento è stato accettato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita restituisce e gestisce il riposizionamento e il ridimensionamento della finestra del controllo automaticamente **TRUE**.  
  
 Eseguire l'override di questa funzione per modificare il comportamento predefinito di questa funzione.  
  
##  <a name="a-nameonshowtoolbarsa--colecontrolonshowtoolbars"></a><a name="onshowtoolbars"></a>COleControl::OnShowToolBars  
 Chiamato dal framework quando il controllo è stata attivata l'interfaccia utente.  
  
```  
virtual void OnShowToolBars();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione.  
  
##  <a name="a-nameontextchangeda--colecontrolontextchanged"></a><a name="ontextchanged"></a>COleControl::OnTextChanged  
 Chiamato dal framework quando è stato modificato il valore della proprietà Caption o di testo predefinito.  
  
```  
virtual void OnTextChanged();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama `InvalidateControl`.  
  
 Se si desidera notifica dopo questa proprietà viene modificata l'override della funzione.  
  
##  <a name="a-nameonwindowlessmessagea--colecontrolonwindowlessmessage"></a><a name="onwindowlessmessage"></a>COleControl::OnWindowlessMessage  
 Chiamato dal framework in risposta a un contenitore **IOleInPlaceObjectWindowless::OnWindowMessage** richiesta.  
  
```  
virtual BOOL OnWindowlessMessage(
    UINT msg,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* plResult);
```  
  
### <a name="parameters"></a>Parametri  
 `msg`  
 Identificatore del messaggio come passato da Windows.  
  
 `wParam`  
 Valore passato da Windows. Specifica informazioni aggiuntive specifiche di messaggio. Il contenuto di questo parametro dipende dal valore di `msg` parametro.  
  
 `lParam`  
 Valore passato da Windows. Specifica informazioni aggiuntive specifiche di messaggio. Il contenuto di questo parametro dipende dal valore di `msg` parametro.  
  
 *plResult*  
 Codice restituito da Windows. Specifica il risultato dell'elaborazione del messaggio e dipende dal messaggio inviato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Elabora i messaggi di finestra per i controlli privi di finestra. `COleControl`del `OnWindowlessMessage` deve essere utilizzato per i messaggi della finestra diverso da messaggi di mouse e tastiera. `COleControl`fornisce [SetCapture](#setcapture) e [SetFocus](#setfocus) in modo specifico per ottenere lo stato attivo della tastiera e acquisizione del mouse per oggetti OLE.  
  
 Poiché gli oggetti privi di finestra non dispongono di una finestra, è necessario un meccanismo per consentire i messaggi di invio contenitore ad essi. Un oggetto OLE privi di finestra riceve i messaggi dal contenitore, tramite il `OnWindowMessage` metodo il `IOleInPlaceObjectWindowless` interfaccia (un'estensione di [IOleInPlaceObject](http://msdn.microsoft.com/library/windows/desktop/ms692646) per il supporto privi di finestra). `OnWindowMessage`non accetta un `HWND` parametro.  
  
##  <a name="a-nameparenttoclienta--colecontrolparenttoclient"></a><a name="parenttoclient"></a>COleControl::ParentToClient  
 Converte le coordinate di `pPoint` nelle coordinate client.  
  
```  
virtual UINT ParentToClient(
    LPCRECT lprcBounds,
    LPPOINT pPoint,
    BOOL bHitTest = FALSE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lprcBounds`  
 Puntatore ai limiti del controllo OLE all'interno del contenitore. L'area del controllo intera, compresi i bordi e le barre di scorrimento, ma non l'area client.  
  
 `pPoint`  
 Puntatore all'oggetto padre (contenitore) scegliere convertito in coordinate dell'area client del controllo.  
  
 `bHitTest`  
 Specifica se è o meno hit test da eseguire sul punto.  
  
### <a name="return-value"></a>Valore restituito  
 Se `bHitTest` è **FALSE**, restituisce **HTNOWHERE**. Se `bHitTest` è **TRUE**, restituisce il percorso in cui l'elemento padre (contenitore) punto atterrato nell'area client del controllo OLE ed è uno dei seguente mouse valori hit test:  
  
- **HTBORDER** sul bordo di una finestra che non dispone di un bordo di ridimensionamento.  
  
- **HTBOTTOM** sul bordo orizzontale inferiore della finestra.  
  
- **HTBOTTOMLEFT** nell'angolo in basso a sinistra del bordo della finestra.  
  
- **HTBOTTOMRIGHT** nell'angolo in basso a destra del bordo della finestra.  
  
- **HTCAPTION** In un'area della barra del titolo.  
  
- **HTCLIENT** In un'area client.  
  
- **HTERROR** sullo sfondo dello schermo o in una linea di demarcazione tra windows (come **HTNOWHERE** ad eccezione del fatto che il **DefWndProc** Windows funzione produce un segnale acustico di sistema per indicare un errore).  
  
- **HTGROWBOX** In una finestra di dimensioni.  
  
- **HTHSCROLL** nella barra di scorrimento orizzontale.  
  
- **HTLEFT** sul bordo sinistro della finestra.  
  
- **HTMAXBUTTON** pulsante In un ottimizzare.  
  
- **HTMENU** In un'area di menu.  
  
- **HTMINBUTTON** pulsante In una riduzione a icona.  
  
- **HTNOWHERE** sullo sfondo dello schermo o in una linea divisoria netta tra le finestre.  
  
- **HTREDUCE** pulsante In una riduzione a icona.  
  
- **HTRIGHT** sul bordo destro della finestra.  
  
- **HTSIZE** In una finestra di dimensioni (come **HTGROWBOX**).  
  
- **HTSYSMENU** In un menu di controllo o in un pulsante Chiudi in una finestra figlio.  
  
- **HTTOP** sul bordo orizzontale superiore della finestra.  
  
- **HTTOPLEFT** nell'angolo superiore sinistro del bordo della finestra.  
  
- **HTTOPRIGHT** nell'angolo superiore destro del bordo della finestra.  
  
- **HTTRANSPARENT** In una finestra attualmente interessata da un'altra finestra.  
  
- **HTVSCROLL** nella barra di scorrimento verticale.  
  
- **HTZOOM** pulsante In un ottimizzare.  
  
### <a name="remarks"></a>Note  
 Input `pPoint` è correlato all'origine dell'elemento padre (angolo superiore sinistro del contenitore). Nell'output `pPoint` è correlato all'origine dell'area client del controllo OLE (angolo superiore sinistro dell'area client del controllo).  
  
##  <a name="a-namepostmodaldialoga--colecontrolpostmodaldialog"></a><a name="postmodaldialog"></a>COleControl::PostModalDialog  
 Notifica al contenitore che è stata chiusa una finestra di dialogo modale.  
  
```  
void PostModalDialog(HWND hWndParent = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 Handle alla finestra padre della finestra di dialogo modale.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione dopo la visualizzazione di qualsiasi finestra di dialogo modale. È necessario chiamare questa funzione in modo che il contenitore è possibile abilitare le finestre di primo livello disabilitate per `PreModalDialog`. Questa funzione deve essere abbinata a una chiamata a `PreModalDialog`.  
  
##  <a name="a-namepremodaldialoga--colecontrolpremodaldialog"></a><a name="premodaldialog"></a>COleControl::PreModalDialog  
 Notifica al contenitore che verrà visualizzata una finestra di dialogo modale.  
  
```  
void PreModalDialog(HWND hWndParent = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 Handle alla finestra padre della finestra di dialogo modale.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione prima di visualizzare qualsiasi finestra di dialogo modale. È necessario chiamare questa funzione in modo che il contenitore è possibile disabilitare tutte le finestre di primo livello. Dopo che è stato visualizzato nella finestra di dialogo modale, è necessario chiamare `PostModalDialog`.  
  
##  <a name="a-namerecreatecontrolwindowa--colecontrolrecreatecontrolwindow"></a><a name="recreatecontrolwindow"></a>COleControl::RecreateControlWindow  
 Elimina e ricrea la finestra del controllo.  
  
```  
void RecreateControlWindow();
```  
  
### <a name="remarks"></a>Note  
 Ciò potrebbe essere necessario se si desidera modificare i bit di stile della finestra.  
  
##  <a name="a-namerefresha--colecontrolrefresh"></a><a name="refresh"></a>COleControl::Refresh  
 Impone un aggiornamento del controllo OLE.  
  
```  
void Refresh();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione è supportata per la `COleControl` classe di base come un metodo azionario, denominato aggiornamento. In questo modo gli utenti del controllo OLE ridisegnare il controllo in un momento specifico. Per ulteriori informazioni su questo metodo, vedere l'articolo [controlli ActiveX: metodi](../../mfc/mfc-activex-controls-methods.md).  
  
##  <a name="a-namereleasecapturea--colecontrolreleasecapture"></a><a name="releasecapture"></a>COleControl::ReleaseCapture  
 Rilascia il mouse capture.  
  
```  
BOOL ReleaseCapture();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se il controllo attualmente lo stato mouse capture, viene rilasciato l'acquisizione. In caso contrario, questa funzione non ha effetto.  
  
##  <a name="a-namereleasedca--colecontrolreleasedc"></a><a name="releasedc"></a>COleControl::ReleaseDC  
 Rilascia il contesto di dispositivo di visualizzazione di un contenitore di un controllo senza finestra, liberando il contesto di dispositivo per l'uso da altre applicazioni.  
  
```  
int ReleaseDC(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Identifica il contesto di dispositivo del contenitore da rilasciare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'applicazione deve chiamare `ReleaseDC` per ogni chiamata a [GetDC](#getdc).  
  
##  <a name="a-namereparentcontrolwindowa--colecontrolreparentcontrolwindow"></a><a name="reparentcontrolwindow"></a>COleControl::ReparentControlWindow  
 Imposta l'elemento padre del controllo.  
  
```  
virtual void ReparentControlWindow(
    HWND hWndOuter,  
    HWND hWndParent);
```  
  
### <a name="parameters"></a>Parametri  
 *hWndOuter*  
 Handle della finestra del controllo.  
  
 `hWndParent`  
 L'handle della nuova finestra padre.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per reimpostare l'elemento padre della finestra del controllo.  
  
##  <a name="a-nameresetstockpropsa--colecontrolresetstockprops"></a><a name="resetstockprops"></a>COleControl::ResetStockProps  
 Inizializza lo stato del `COleControl` stock proprietà sui rispettivi valori predefiniti.  
  
```  
void ResetStockProps();
```  
  
### <a name="remarks"></a>Note  
 Le proprietà sono: aspetto, BackColor, BorderStyle, didascalia, Enabled, tipo di carattere, colore di primo piano, hWnd e testo. Per una descrizione delle proprietà predefinite, vedere [controlli ActiveX: aggiunta di proprietà predefinite](../../mfc/mfc-activex-controls-adding-stock-properties.md).  
  
 Per migliorare le prestazioni di inizializzazione binaria di un controllo utilizzando `ResetStockProps` e `ResetVersion` per eseguire l'override `COleControl::OnResetState`. Vedere l'esempio seguente. Per ulteriori informazioni sull'ottimizzazione dell'inizializzazione, vedere [controlli ActiveX: ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAxCtl&#7;](../../mfc/reference/codesnippet/cpp/colecontrol-class_8.cpp)]  
  
##  <a name="a-nameresetversiona--colecontrolresetversion"></a><a name="resetversion"></a>COleControl::ResetVersion  
 Inizializza il numero di versione al valore specificato.  
  
```  
void ResetVersion(DWORD dwVersionDefault);
```  
  
### <a name="parameters"></a>Parametri  
 `dwVersionDefault`  
 Il numero di versione da assegnare al controllo.  
  
### <a name="remarks"></a>Note  
 Per migliorare le prestazioni di inizializzazione binaria di un controllo utilizzando `ResetVersion` e `ResetStockProps` per eseguire l'override `COleControl::OnResetState`. Vedere l'esempio relativo al [ResetStockProps](#resetstockprops). Per ulteriori informazioni sull'ottimizzazione dell'inizializzazione, vedere [controlli ActiveX: ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).  
  
##  <a name="a-namescrollwindowa--colecontrolscrollwindow"></a><a name="scrollwindow"></a>COleControl::ScrollWindow  
 Consente a un oggetto OLE privi di finestra scorrere un'area all'interno di immagine attivo sul posto sullo schermo.  
  
```  
void ScrollWindow(
    int xAmount,
    int yAmount,
    LPCRECT lpRect = NULL,
    LPCRECT lpClipRect = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `xAmount`  
 Specifica la quantità, in unità di dispositivo di scorrimento orizzontale. Questo parametro deve essere un valore negativo per scorrere a sinistra.  
  
 `yAmount`  
 Specifica la quantità, in unità di dispositivo di scorrimento verticale. Questo parametro deve essere un valore negativo per scorrere verso l'alto.  
  
 `lpRect`  
 Punta a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una struttura RECT che specifica la parte dell'area client dell'oggetto OLE da scorrere, nelle coordinate client della finestra contenitore. Se `lpRect` è **NULL**, si scorre l'area client dell'intero oggetto OLE.  
  
 `lpClipRect`  
 Punta a un `CRect` oggetto o `RECT` struttura che specifica il rettangolo di ritaglio per. Viene eseguito lo scorrimento solo pixel all'interno del rettangolo. BITS all'esterno del rettangolo non sono interessati anche se sono nel `lpRect` rettangolo. Se `lpClipRect` è **NULL**, non viene eseguito alcun ridimensionamento del rettangolo di scorrimento.  
  
##  <a name="a-nameselectfontobjecta--colecontrolselectfontobject"></a><a name="selectfontobject"></a>COleControl::SelectFontObject  
 Seleziona un tipo di carattere in un contesto di dispositivo.  
  
```  
CFont* SelectFontObject(
    CDC* pDC,  
    CFontHolder& fontHolder);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore a un oggetto di contesto di dispositivo.  
  
 `fontHolder`  
 Riferimento per il [CFontHolder](../../mfc/reference/cfontholder-class.md) oggetto che rappresenta il tipo di carattere da selezionare.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al tipo di carattere selezionato in precedenza. Quando il chiamante termina tutte le operazioni di disegno che utilizzano *fontHolder,* deve selezionare di nuovo il tipo di carattere selezionato in precedenza passando come parametro per [CDC::SelectObject](../../mfc/reference/cdc-class.md#selectobject).  
  
##  <a name="a-nameselectstockfonta--colecontrolselectstockfont"></a><a name="selectstockfont"></a>COleControl:: SelectStockFont  
 Seleziona la proprietà predefinita in un contesto di dispositivo.  
  
```  
CFont* SelectStockFont(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Il contesto di dispositivo in cui verrà selezionato il tipo di carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a selezionato in precedenza `CFont` oggetto. Si consiglia di utilizzare [CDC::SelectObject](../../mfc/reference/cdc-class.md#selectobject) per selezionare il tipo di carattere nel contesto di dispositivo al termine.  
  
##  <a name="a-nameserializeextenta--colecontrolserializeextent"></a><a name="serializeextent"></a>COleControl::SerializeExtent  
 Serializza o Inizializza lo stato dello spazio di visualizzazione assegnato al controllo.  
  
```  
void SerializeExtent(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 `ar`  
 Oggetto `CArchive` oggetto da serializzare a o da.  
  
### <a name="remarks"></a>Note  
 È possibile migliorare le prestazioni della persistenza binaria del controllo utilizzando `SerializeExtent`, `SerializeStockProps`, e `SerializeVersion` per eseguire l'override **COleControl::Serialize**. Vedere l'esempio seguente. Per ulteriori informazioni sull'ottimizzazione dell'inizializzazione, vedere [controlli ActiveX: ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAxCtl n.&8;](../../mfc/reference/codesnippet/cpp/colecontrol-class_9.cpp)]  
  
##  <a name="a-nameserializestockpropsa--colecontrolserializestockprops"></a><a name="serializestockprops"></a>COleControl::SerializeStockProps  
 Serializza o Inizializza lo stato della `COleControl` proprietà predefinite: aspetto, BackColor, BorderStyle, didascalia, Enabled, tipo di carattere, colore di primo piano e testo.  
  
```  
void SerializeStockProps(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 `ar`  
 Oggetto `CArchive` oggetto da serializzare a o da.  
  
### <a name="remarks"></a>Note  
 Per una descrizione delle proprietà predefinite, vedere [controlli ActiveX: aggiunta di proprietà predefinite](../../mfc/mfc-activex-controls-adding-stock-properties.md).  
  
 È possibile migliorare le prestazioni della persistenza binaria del controllo utilizzando `SerializeStockProps`, `SerializeExtent`, e `SerializeVersion` per eseguire l'override **COleControl::Serialize**. Per un esempio, vedere il codice in [SerializeExtent](#serializeextent). Per ulteriori informazioni sull'ottimizzazione dell'inizializzazione, vedere [controlli ActiveX: ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).  
  
##  <a name="a-nameserializeversiona--colecontrolserializeversion"></a><a name="serializeversion"></a>COleControl::SerializeVersion  
 Serializza o Inizializza lo stato delle informazioni sulla versione del controllo.  
  
```  
DWORD SerializeVersion(
    CArchive& ar,
    DWORD dwVersionDefault,
    BOOL bConvert = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `ar`  
 Oggetto `CArchive` oggetto da serializzare a o da.  
  
 `dwVersionDefault`  
 Il numero di versione corrente del controllo.  
  
 `bConvert`  
 Indica se i dati persistenti devono essere convertiti nel formato più recente quando è stato salvato o gestito nello stesso formato che si trovava al momento del caricamento.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di versione del controllo. Se l'archivio specificato viene caricato, `SerializeVersion` restituisce la versione caricata da tale archivio. In caso contrario, restituisce la versione attualmente caricata.  
  
### <a name="remarks"></a>Note  
 È possibile migliorare le prestazioni della persistenza binaria del controllo utilizzando `SerializeVersion`, `SerializeExtent`, e `SerializeStockProps` per eseguire l'override **COleControl::Serialize**. Per un esempio, vedere il codice in [SerializeExtent](#serializeextent). Per ulteriori informazioni sull'ottimizzazione dell'inizializzazione, vedere [controlli ActiveX: ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).  
  
##  <a name="a-namesetappearancea--colecontrolsetappearance"></a><a name="setappearance"></a>COleControl::SetAppearance  
 Imposta il valore di proprietà predefinito di aspetto del controllo.  
  
```  
void SetAppearance (short sAppearance);
```  
  
### <a name="parameters"></a>Parametri  
 *sAppearance*  
 Oggetto **breve** ( `VT_I2`) valore da utilizzare per l'aspetto del controllo. Un valore pari a zero imposta l'aspetto del controllo su flat e il valore 1 imposta l'aspetto del controllo in 3D.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sulle proprietà predefinite, vedere [controlli ActiveX: proprietà](../../mfc/mfc-activex-controls-properties.md).  
  
##  <a name="a-namesetbackcolora--colecontrolsetbackcolor"></a><a name="setbackcolor"></a>COleControl::SetBackColor  
 Imposta il valore della proprietà BackColor predefinito del controllo.  
  
```  
void SetBackColor(OLE_COLOR dwBackColor);
```  
  
### <a name="parameters"></a>Parametri  
 *dwBackColor*  
 Un **OLE_COLOR** valore da utilizzare per lo sfondo del controllo di disegno.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sull'utilizzo di questa proprietà e le proprietà correlate, vedere l'articolo [controlli ActiveX: proprietà](../../mfc/mfc-activex-controls-properties.md).  
  
##  <a name="a-namesetborderstylea--colecontrolsetborderstyle"></a><a name="setborderstyle"></a>COleControl::SetBorderStyle  
 Imposta il valore della proprietà BorderStyle predefinito del controllo.  
  
```  
void SetBorderStyle(short sBorderStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *sBorderStyle*  
 Il nuovo stile del bordo per il controllo. 0 non indica nessun bordo mentre 1 indica un bordo normale.  
  
### <a name="remarks"></a>Note  
 La finestra di controllo quindi verrà ricreata e `OnBorderStyleChanged` chiamato.  
  
##  <a name="a-namesetcapturea--colecontrolsetcapture"></a><a name="setcapture"></a>COleControl::SetCapture  
 Fa sì che la finestra del controllo contenitore di prendere possesso dell'acquisizione del mouse per conto del controllo.  
  
```  
CWnd* SetCapture();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il **CWnd** oggetto finestra che in precedenza ha ricevuto l'input del mouse.  
  
### <a name="remarks"></a>Note  
 Se il controllo è attivato e privi di finestra, questa funzione provoca la finestra del controllo contenitore di prendere possesso dell'acquisizione del mouse, per conto del controllo. In caso contrario, questa funzione, il controllo in modo da prendere possesso dell'acquisizione del mouse (come `CWnd::SetCapture`).  
  
##  <a name="a-namesetcontrolsizea--colecontrolsetcontrolsize"></a><a name="setcontrolsize"></a>COleControl::SetControlSize  
 Imposta la dimensione della finestra del controllo OLE e notifica al contenitore del sito del controllo in fase di modifica.  
  
```  
BOOL SetControlSize(int cx, int cy);
```  
  
### <a name="parameters"></a>Parametri  
 `cx`  
 Specifica la nuova larghezza del controllo in pixel.  
  
 `cy`  
 Specifica la nuova altezza del controllo in pixel.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la chiamata ha avuto esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione non deve essere utilizzata nel costruttore del controllo.  
  
 Si noti che tutte le coordinate per finestre di controllo rispetto all'angolo superiore sinistro del controllo.  
  
##  <a name="a-namesetenableda--colecontrolsetenabled"></a><a name="setenabled"></a>COleControl::SetEnabled  
 Imposta il valore della proprietà Enabled del controllo del magazzino.  
  
```  
void SetEnabled(BOOL bEnabled);
```  
  
### <a name="parameters"></a>Parametri  
 `bEnabled`  
 **TRUE** se il controllo è abilitato; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Dopo aver impostato questa proprietà, **OnEnabledChange** viene chiamato.  
  
##  <a name="a-namesetfocusa--colecontrolsetfocus"></a><a name="setfocus"></a>COleControl::SetFocus  
 Fa sì che la finestra del controllo contenitore richiedere che possiede lo stato attivo per conto del controllo.  
  
```  
CWnd* SetFocus();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al **CWnd** oggetto window che era attivo per l'input o **NULL** se è presente alcuna di tali finestre.  
  
### <a name="remarks"></a>Note  
 Se il controllo è attivato e privi di finestra, questa funzione provoca la finestra del controllo contenitore richiedere che possiede lo stato attivo, per conto del controllo. Lo stato attivo indirizza l'input da tastiera in una finestra del contenitore e il contenitore invia tutti i messaggi di tastiera successivi all'oggetto OLE che chiama `SetFocus`. Tutte le finestre che erano attivo per l'input perde.  
  
 Se il controllo non è windowless, questa funzione, il controllo in modo da richiedere che possiede lo stato attivo (come `CWnd::SetFocus`).  
  
##  <a name="a-namesetfonta--colecontrolsetfont"></a><a name="setfont"></a>COleControl::SetFont  
 Imposta la proprietà predefinita del controllo.  
  
```  
void SetFont(LPFONTDISP pFontDisp);
```  
  
### <a name="parameters"></a>Parametri  
 *pFontDisp*  
 Un puntatore a un'interfaccia di invio del carattere.  
  
##  <a name="a-namesetforecolora--colecontrolsetforecolor"></a><a name="setforecolor"></a>COleControl::SetForeColor  
 Imposta il valore della proprietà ForeColor predefinito del controllo.  
  
```  
void SetForeColor(OLE_COLOR dwForeColor);
```  
  
### <a name="parameters"></a>Parametri  
 *dwForeColor*  
 Un **OLE_COLOR** valore da utilizzare per la creazione del controllo in primo piano.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sull'utilizzo di questa proprietà e le proprietà correlate, vedere l'articolo [controlli ActiveX: proprietà](../../mfc/mfc-activex-controls-properties.md).  
  
##  <a name="a-namesetinitialdataformatsa--colecontrolsetinitialdataformats"></a><a name="setinitialdataformats"></a>COleControl::SetInitialDataFormats  
 Chiamato dal framework per inizializzare l'elenco dei formati di dati supportati dal controllo.  
  
```  
virtual void SetInitialDataFormats();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita specifica due formati: `CF_METAFILEPICT` e impostazione della proprietà persistente.  
  
##  <a name="a-namesetinitialsizea--colecontrolsetinitialsize"></a><a name="setinitialsize"></a>COleControl::SetInitialSize  
 Imposta le dimensioni di un controllo OLE alla prima visualizzazione in un contenitore.  
  
```  
void SetInitialSize(
    int cx,  
    int cy);
```  
  
### <a name="parameters"></a>Parametri  
 `cx`  
 Larghezza iniziale del controllo OLE in pixel.  
  
 `cy`  
 L'altezza iniziale del controllo OLE in pixel.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione del costruttore per impostare le dimensioni iniziali del controllo. La dimensione iniziale viene misurata in unità di dispositivo o pixel. È consigliabile che questa chiamata nel costruttore del controllo.  
  
##  <a name="a-namesetmodifiedflaga--colecontrolsetmodifiedflag"></a><a name="setmodifiedflag"></a>COleControl::SetModifiedFlag  
 Modifica lo stato modificato di un controllo.  
  
```  
void SetModifiedFlag(BOOL bModified = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bModified`  
 Il nuovo valore per il controllo modificato del flag. **TRUE** indica che è stato modificato lo stato del controllo. **FALSE** indica che è appena stato salvato lo stato del controllo.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione ogni volta che si verifica una modifica che comprometterebbe stato persistente del controllo. Ad esempio, se viene modificato il valore di una proprietà permanente, chiamare questa funzione con `bModified` **TRUE**.  
  
##  <a name="a-namesetnotpermitteda--colecontrolsetnotpermitted"></a><a name="setnotpermitted"></a>COleControl::SetNotPermitted  
 Indica che una richiesta di modifica non è riuscito.  
  
```  
void SetNotPermitted();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione quando `BoundPropertyRequestEdit` ha esito negativo. Questa funzione genera un'eccezione di tipo **COleDispScodeException** per indicare che l'operazione di impostazione non è consentito.  
  
##  <a name="a-namesetnotsupporteda--colecontrolsetnotsupported"></a><a name="setnotsupported"></a>COleControl:: SetNotSupported  
 Impedisce la modifica al valore della proprietà del controllo dall'utente.  
  
```  
void SetNotSupported();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione anziché la funzione di Set di qualsiasi proprietà in cui non è supportata la modifica del valore della proprietà dall'utente del controllo. Un esempio potrebbe essere una proprietà che è di sola lettura.  
  
##  <a name="a-namesetrectincontainera--colecontrolsetrectincontainer"></a><a name="setrectincontainer"></a>COleControl::SetRectInContainer  
 Imposta le coordinate del rettangolo del controllo relativo contenitore, espresso in unità di dispositivo.  
  
```  
BOOL SetRectInContainer(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Un puntatore a un rettangolo contenente le coordinate di nuovo del controllo relativo per il contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la chiamata ha avuto esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se il controllo è aperto, questo viene ridimensionato; in caso contrario il contenitore **OnPosRectChanged** funzione viene chiamata.  
  
##  <a name="a-namesettexta--colecontrolsettext"></a><a name="settext"></a>COleControl::SetText  
 Imposta il valore della proprietà di testo o didascalia predefinita del controllo.  
  
```  
void SetText(LPCTSTR pszText);
```  
  
### <a name="parameters"></a>Parametri  
 `pszText`  
 Un puntatore a una stringa di caratteri.  
  
### <a name="remarks"></a>Note  
 Si noti che entrambe le proprietà predefinite di titolo e testo vengono mappate sullo stesso valore. Ciò significa che tutte le modifiche apportate alla proprietà cambierà automaticamente entrambe le proprietà. In generale, un controllo deve supportare le scorte didascalia o proprietà Text, ma non entrambi.  
  
##  <a name="a-namethrowerrora--colecontrolthrowerror"></a><a name="throwerror"></a>COleControl:: ThrowError  
 Segnala l'occorrenza di un errore nel controllo.  
  
```  
void ThrowError(
    SCODE sc,  
    UINT nDescriptionID,  
    UINT nHelpID = -1);

 
void ThrowError(
    SCODE sc,  
    LPCTSTR pszDescription = NULL,  
    UINT nHelpID = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `sc`  
 Il valore del codice di stato da segnalare. Per un elenco completo dei possibili codici, vedere l'articolo [controlli ActiveX: argomenti avanzati](../../mfc/mfc-activex-controls-advanced-topics.md).  
  
 `nDescriptionID`  
 L'ID risorsa stringa dell'eccezione da segnalare.  
  
 `nHelpID`  
 L'ID della Guida in linea dell'argomento da includere nel report.  
  
 `pszDescription`  
 Stringa contenente una spiegazione dell'eccezione da segnalare.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata solo dall'interno di una funzione Get o Set per una proprietà OLE o l'implementazione di un metodo di automazione OLE. Se si desidera segnalare gli errori che si verificano in altri casi, si deve generare l'evento di errore predefinito.  
  
##  <a name="a-nametransformcoordsa--colecontroltransformcoords"></a><a name="transformcoords"></a>COleControl::TransformCoords  
 Trasformazioni di coordinano i valori tra **HIMETRIC** unità e nativa del contenitore.  
  
```  
void TransformCoords(
    POINTL* lpptlHimetric,  
    POINTF* lpptfContainer,  
    DWORD flags);
```  
  
### <a name="parameters"></a>Parametri  
 *lpptlHimetric*  
 Puntatore a un **POINTL** struttura contenente le coordinate in **HIMETRIC** unità.  
  
 *lpptfContainer*  
 Puntatore a un **POINTF** struttura contenente le coordinate in dimensioni dell'unità del contenitore.  
  
 `flags`  
 Una combinazione dei valori seguenti:  
  
- **XFORMCOORDS_POSITION** una posizione nel contenitore.  
  
- **XFORMCOORDS_SIZE** una dimensione nel contenitore.  
  
- **XFORMCOORDS_HIMETRICTOCONTAINER** trasformare **HIMETRIC** unità alle unità del contenitore.  
  
- **XFORMCOORDS_CONTAINERTOHIMETRIC** unità di misura del contenitore per trasformare **HIMETRIC** unità.  
  
### <a name="remarks"></a>Note  
 I primi due flag, **XFORMCOORDS_POSITION** e **XFORMCOORDS_SIZE**, indicare se le coordinate devono essere considerate come una posizione o dimensioni. I flag restanti due indicano la direzione della trasformazione.  
  
##  <a name="a-nametranslatecolora--colecontroltranslatecolor"></a><a name="translatecolor"></a>COleControl::TranslateColor  
 Converte un valore di colore dal **OLE_COLOR** tipo di dati di [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) tipo di dati.  
  
```  
COLORREF TranslateColor(
    OLE_COLOR clrColor,  
    HPALETTE hpal = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `clrColor`  
 Oggetto **OLE_COLOR** tipo di dati. Per ulteriori informazioni, vedere Windows [OleTranslateColor](http://msdn.microsoft.com/library/windows/desktop/ms694353) (funzione).  
  
 `hpal`  
 Un handle per una tavolozza facoltativo; può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di colore a 32 bit RGB (red, green, blue) che definisce il solido colore più simile al `clrColor` valore che può rappresentare il dispositivo.  
  
### <a name="remarks"></a>Note  
 Questa funzione è utile per tradurre le proprietà predefinite ForeColor e BackColor in **COLORREF** tipi utilizzati da [CDC](../../mfc/reference/cdc-class.md) funzioni membro.  
  
##  <a name="a-namewillambientsbevalidduringloada--colecontrolwillambientsbevalidduringload"></a><a name="willambientsbevalidduringload"></a>COleControl::WillAmbientsBeValidDuringLoad  
 Determina se il controllo deve utilizzare i valori delle proprietà di ambiente come valori predefiniti, quando viene caricato successivamente dallo stato persistente.  
  
```  
BOOL WillAmbientsBeValidDuringLoad();
```  
  
### <a name="return-value"></a>Valore restituito  
 NonZero indica che le proprietà di ambiente sarà valide. in caso contrario le proprietà di ambiente non sarà valide.  
  
### <a name="remarks"></a>Note  
 In alcuni contenitori, il controllo non abbia accesso alle proprietà di ambiente durante la chiamata iniziale per la sostituzione di `COleControl::DoPropExchange`. Ciò avviene se il contenitore chiama [IPersistStreamInit::Load](http://msdn.microsoft.com/library/windows/desktop/ms680730) o [IPersistStorage:: Load](http://msdn.microsoft.com/library/windows/desktop/ms680557) prima di chiamare [IOleObject::SetClientSite](http://msdn.microsoft.com/library/windows/desktop/ms684013) (vale a dire, se non rispetta il **OLEMISC_SETCLIENTSITEFIRST** bit di stato).  
  
##  <a name="a-namewindowproca--colecontrolwindowproc"></a><a name="windowproc"></a>COleControl::WindowProc  
 Fornisce una procedura di Windows per un `COleControl` oggetto.  
  
```  
virtual LRESULT WindowProc(
    UINT message,  
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `message`  
 Specifica il messaggio di Windows da elaborare.  
  
 `wParam`  
 Fornisce informazioni aggiuntive utilizzate nell'elaborazione del messaggio. Il valore del parametro dipende dal messaggio.  
  
 `lParam`  
 Fornisce informazioni aggiuntive utilizzate nell'elaborazione del messaggio. Il valore del parametro dipende dal messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito del messaggio inviato.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per l'invio di messaggi specifici tramite la mappa dei messaggi del controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [MFC esempio CIRC3](../../visual-cpp-samples.md)   
 [Esempio MFC TESTHELP](../../visual-cpp-samples.md)   
 [Classe COlePropertyPage](../../mfc/reference/colepropertypage-class.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CFontHolder](../../mfc/reference/cfontholder-class.md)   
 [CPictureHolder (classe)](../../mfc/reference/cpictureholder-class.md)


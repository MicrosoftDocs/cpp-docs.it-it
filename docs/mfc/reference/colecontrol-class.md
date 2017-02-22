---
title: "COleControl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleControl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleControl class"
  - "controlli [MFC], OLE"
  - "controlli [MFC], windowless"
  - "OLE (controlli), MFC"
  - "windowless controls"
  - "windowless controls, MFC"
ms.assetid: 53e95299-38e8-447b-9c5f-a381d27f5123
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# COleControl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una classe base efficace per i controlli OLE di sviluppo.  
  
## Sintassi  
  
```  
class COleControl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControl::COleControl](../Topic/COleControl::COleControl.md)|Crea un oggetto `COleControl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControl::AmbientAppearance](../Topic/COleControl::AmbientAppearance.md)|Recupera l'aspetto del controllo corrente.|  
|[COleControl::AmbientBackColor](../Topic/COleControl::AmbientBackColor.md)|Restituisce il valore della proprietà di ambiente BackColor.|  
|[COleControl::AmbientDisplayName](../Topic/COleControl::AmbientDisplayName.md)|Restituisce il nome del controllo come specificato dal contenitore.|  
|[COleControl::AmbientFont](../Topic/COleControl::AmbientFont.md)|Restituisce il valore della proprietà predefinite di ambiente.|  
|[COleControl::AmbientForeColor](../Topic/COleControl::AmbientForeColor.md)|Restituisce il valore della proprietà di ambiente ForeColor.|  
|[COleControl::AmbientLocaleID](../Topic/COleControl::AmbientLocaleID.md)|Restituisce l'id delle impostazioni locali del contenitore|  
|[COleControl::AmbientScaleUnits](../Topic/COleControl::AmbientScaleUnits.md)|Restituisce il tipo di unità utilizzate dal contenitore.|  
|[COleControl::AmbientShowGrabHandles](../Topic/COleControl::AmbientShowGrabHandles.md)|Determina se le maniglie visualizzare.|  
|[COleControl::AmbientShowHatching](../Topic/COleControl::AmbientShowHatching.md)|Determina se covare visualizzare.|  
|[COleControl::AmbientTextAlign](../Topic/COleControl::AmbientTextAlign.md)|Restituisce il tipo di allineamento del testo specificato dal contenitore.|  
|[COleControl::AmbientUIDead](../Topic/COleControl::AmbientUIDead.md)|Determina se il controllo risponde alle azioni dell'interfaccia utente.|  
|[COleControl::AmbientUserMode](../Topic/COleControl::AmbientUserMode.md)|Determina la modalità del contenitore.|  
|[COleControl::BoundPropertyChanged](../Topic/COleControl::BoundPropertyChanged.md)|Notifica al contenitore che una proprietà associata è stata modificata.|  
|[COleControl::BoundPropertyRequestEdit](../Topic/COleControl::BoundPropertyRequestEdit.md)|Richiede l'autorizzazione a modificare il valore della proprietà.|  
|[COleControl::ClientToParent](../Topic/COleControl::ClientToParent.md)|Converte un punto all'origine del controllo su un punto all'origine del contenitore.|  
|[COleControl::ClipCaretRect](../Topic/COleControl::ClipCaretRect.md)|Regola un rettangolo del cursore se è sovrapposto da un controllo.|  
|[COleControl::ControlInfoChanged](../Topic/COleControl::ControlInfoChanged.md)|Chiamare questa funzione dopo l'insieme di tasti gestiti dal controllo è stato modificato.|  
|[COleControl::DisplayError](../Topic/COleControl::DisplayError.md)|Le visualizzazioni di borsa gli eventi di errore all'utente del controllo.|  
|[COleControl::DoClick](../Topic/COleControl::DoClick.md)|Implementazione del metodo predefinito `DoClick`.|  
|[COleControl::DoPropExchange](../Topic/COleControl::DoPropExchange.md)|Serializza le proprietà di un oggetto `COleControl`.|  
|[COleControl::DoSuperclassPaint](../Topic/COleControl::DoSuperclassPaint.md)|Ridisegna un controllo OLE che è stato sottoclassato da un controllo Windows.|  
|[COleControl::EnableSimpleFrame](../Topic/COleControl::EnableSimpleFrame.md)|Attiva il supporto semplice frame a un controllo.|  
|[COleControl::ExchangeExtent](../Topic/COleControl::ExchangeExtent.md)|Serializza la larghezza e l'altezza del controllo.|  
|[COleControl::ExchangeStockProps](../Topic/COleControl::ExchangeStockProps.md)|Serializza le proprietà di azione del controllo.|  
|[COleControl::ExchangeVersion](../Topic/COleControl::ExchangeVersion.md)|Serializza il numero di versione del controllo.|  
|[COleControl::FireClick](../Topic/COleControl::FireClick.md)|Genera l'evento predefinito `Click`.|  
|[COleControl::FireDblClick](../Topic/COleControl::FireDblClick.md)|Genera l'evento predefinito `DblClick`.|  
|[COleControl::FireError](../Topic/COleControl::FireError.md)|Genera l'evento predefinito `Error`.|  
|[COleControl::FireEvent](../Topic/COleControl::FireEvent.md)|Genera un evento personalizzato.|  
|[COleControl::FireKeyDown](../Topic/COleControl::FireKeyDown.md)|Genera l'evento predefinito `KeyDown`.|  
|[COleControl::FireKeyPress](../Topic/COleControl::FireKeyPress.md)|Genera l'evento predefinito `KeyPress`.|  
|[COleControl::FireKeyUp](../Topic/COleControl::FireKeyUp.md)|Genera l'evento predefinito `KeyUp`.|  
|[COleControl::FireMouseDown](../Topic/COleControl::FireMouseDown.md)|Genera l'evento predefinito `MouseDown`.|  
|[COleControl::FireMouseMove](../Topic/COleControl::FireMouseMove.md)|Genera l'evento predefinito `MouseMove`.|  
|[COleControl::FireMouseUp](../Topic/COleControl::FireMouseUp.md)|Genera l'evento predefinito `MouseUp`.|  
|[COleControl::FireReadyStateChange](../Topic/COleControl::FireReadyStateChange.md)|Genera un evento quando lo stato viene modificato pronti del controllo.|  
|[COleControl::GetActivationPolicy](../Topic/COleControl::GetActivationPolicy.md)|Modifica il comportamento predefinito di attivazione di un controllo che supporta l'interfaccia `IPointerInactive`.|  
|[COleControl::GetAmbientProperty](../Topic/COleControl::GetAmbientProperty.md)|Restituisce il valore della proprietà di ambiente specificata.|  
|[COleControl::GetAppearance](../Topic/COleControl::GetAppearance.md)|Restituisce il valore della proprietà relative predefinita.|  
|[COleControl::GetBackColor](../Topic/COleControl::GetBackColor.md)|Restituisce il valore della proprietà predefinita di Sfondo.|  
|[COleControl::GetBorderStyle](../Topic/COleControl::GetBorderStyle.md)|Restituisce il valore della proprietà predefinita di BorderStyle.|  
|[COleControl::GetCapture](../Topic/COleControl::GetCapture.md)|Determina se un oggetto senza finestra e ha attivato il mouse capture.|  
|[COleControl::GetClassID](../Topic/COleControl::GetClassID.md)|Recupera l'id di classe OLE del controllo.|  
|[COleControl::GetClientOffset](../Topic/COleControl::GetClientOffset.md)|Recupera la differenza tra l'angolo superiore sinistro dell'area rettangolare del controllo e l'angolo superiore sinistro dell'area client.|  
|[COleControl::GetClientRect](../Topic/COleControl::GetClientRect.md)|Recupera la dimensione dell'area client del controllo.|  
|[COleControl::GetClientSite](../Topic/COleControl::GetClientSite.md)|Eseguire una query un oggetto per il puntatore al sito client corrente nel relativo contenitore.|  
|[COleControl::GetControlFlags](../Topic/COleControl::GetControlFlags.md)|Recupera le impostazioni di flag di controllo.|  
|[COleControl::GetControlSize](../Topic/COleControl::GetControlSize.md)|Restituisce la posizione e la dimensione del controllo OLE.|  
|[COleControl::GetDC](../Topic/COleControl::GetDC.md)|Fornisce i mezzi per un controllo senza finestra di ottenere un contesto di dispositivo dal contenitore.|  
|[COleControl::GetEnabled](../Topic/COleControl::GetEnabled.md)|Restituisce il valore della proprietà attivata predefinita.|  
|[COleControl::GetExtendedControl](../Topic/COleControl::GetExtendedControl.md)|Recupera un puntatore a un oggetto controllo esteso che appartiene al contenitore.|  
|[COleControl::GetFocus](../Topic/COleControl::GetFocus.md)|Determina se il controllo ha lo stato attivo.|  
|[COleControl::GetFont](../Topic/COleControl::GetFont.md)|Restituisce il valore della proprietà predefinite predefinita.|  
|[COleControl::GetFontTextMetrics](../Topic/COleControl::GetFontTextMetrics.md)|Restituisce la metrica di un oggetto `CFontHolder`.|  
|[COleControl::GetForeColor](../Topic/COleControl::GetForeColor.md)|Restituisce il valore della proprietà predefinita di ForeColor.|  
|[COleControl::GetHwnd](../Topic/COleControl::GetHwnd.md)|Restituisce il valore della proprietà predefinita di HWND.|  
|[COleControl::GetMessageString](../Topic/COleControl::GetMessageString.md)|Fornisce il testo della barra di stato per una voce di menu.|  
|[COleControl::GetNotSupported](../Topic/COleControl::GetNotSupported.md)|Impedisce l'accesso al valore della proprietà di un controllo dall'utente.|  
|[COleControl::GetReadyState](../Topic/COleControl::GetReadyState.md)|Restituisce lo stato della conformità del controllo.|  
|[COleControl::GetRectInContainer](../Topic/COleControl::GetRectInContainer.md)|Restituisce il rettangolo del controllo rispetto al relativo contenitore.|  
|[COleControl::GetStockTextMetrics](../Topic/COleControl::GetStockTextMetrics.md)|Restituisce la metrica delle proprietà predefinite predefinita.|  
|[COleControl::GetText](../Topic/COleControl::GetText.md)|Restituisce il valore della proprietà predefinita della barra del titolo o di testo.|  
|[COleControl::GetWindowlessDropTarget](../Topic/COleControl::GetWindowlessDropTarget.md)|Eseguire l'override di per consentire a un controllo senza finestra sia la destinazione delle operazioni di trascinamento.|  
|[COleControl::InitializeIIDs](../Topic/COleControl::InitializeIIDs.md)|Avvisa la classe base degli IID che il controllo utilizzerà.|  
|[COleControl::InternalGetFont](../Topic/COleControl::InternalGetFont.md)|Restituisce un oggetto `CFontHolder` per la proprietà predefinite predefinita.|  
|[COleControl::InternalGetText](../Topic/COleControl::InternalGetText.md)|Recupera la barra del titolo o la proprietà Text predefinita.|  
|[COleControl::InternalSetReadyState](../Topic/COleControl::InternalSetReadyState.md)|Imposta lo stato della conformità del controllo e genera l'evento della pronto\-stato\- modifica.|  
|[COleControl::InvalidateControl](../Topic/COleControl::InvalidateControl.md)|Invalida un'area di controllo viene visualizzata, causando lo a ridisegnarsi.|  
|[COleControl::InvalidateRgn](../Topic/COleControl::InvalidateRgn.md)|Invalida l'area client della finestra contenitore interno dell'area specificata.  Può essere utilizzato per ridisegnare i controlli privi di finestra nell'area.|  
|[COleControl::IsConvertingVBX](../Topic/COleControl::IsConvertingVBX.md)|A specializzato il caricamento di un controllo OLE.|  
|[COleControl::IsModified](../Topic/COleControl::IsModified.md)|Determina se lo stato del controllo è stato modificato.|  
|[COleControl::IsOptimizedDraw](../Topic/COleControl::IsOptimizedDraw.md)|Indica se il contenitore supportano il disegno ottimizzato per l'operazione di disegno corrente.|  
|[COleControl::IsSubclassedControl](../Topic/COleControl::IsSubclassedControl.md)|Chiamato per determinare se le sottoclassi del controllo un controllo Windows.|  
|[COleControl::Load](../Topic/COleControl::Load.md)|Reimposta tutti i dati asincroni precedenti e avvia un nuovo caricamento della proprietà del controllo.|  
|[COleControl::LockInPlaceActive](../Topic/COleControl::LockInPlaceActive.md)|Determina se il controllo può essere disabilitato dal contenitore.|  
|[COleControl::OnAmbientPropertyChange](../Topic/COleControl::OnAmbientPropertyChange.md)|Chiamato quando una proprietà di ambiente viene modificata.|  
|[COleControl::OnAppearanceChanged](../Topic/COleControl::OnAppearanceChanged.md)|Chiamato quando la proprietà relative predefinita viene modificata.|  
|[COleControl::OnBackColorChanged](../Topic/COleControl::OnBackColorChanged.md)|Chiamato quando la proprietà BackColor di azione viene modificata.|  
|[COleControl::OnBorderStyleChanged](../Topic/COleControl::OnBorderStyleChanged.md)|Chiamato quando la proprietà di BorderStyle di azione viene modificata.|  
|[COleControl::OnClick](../Topic/COleControl::OnClick.md)|Chiamato per generare l'evento Click predefinito.|  
|[COleControl::OnClose](../Topic/COleControl::OnClose.md)|Notifica al controllo che `IOleControl::Close` è stato chiamato.|  
|[COleControl::OnDoVerb](../Topic/COleControl::OnDoVerb.md)|Chiamato dopo che un verbo del controllo è stato eseguito.|  
|[COleControl::OnDraw](../Topic/COleControl::OnDraw.md)|Chiamato quando un controllo viene richiesto per ridisegnare.|  
|[COleControl::OnDrawMetafile](../Topic/COleControl::OnDrawMetafile.md)|Chiamato dal contenitore quando un controllo viene richiesto per essere ridisegnata utilizzando un contesto di dispositivo metafile.|  
|[COleControl::OnEdit](../Topic/COleControl::OnEdit.md)|Chiamato dal contenitore all'interfaccia utente attiva un controllo OLE.|  
|[COleControl::OnEnabledChanged](../Topic/COleControl::OnEnabledChanged.md)|Chiamato quando viene attivata la proprietà predefinita viene modificata.|  
|[COleControl::OnEnumVerbs](../Topic/COleControl::OnEnumVerbs.md)|Chiamato dal contenitore per enumerare i verbi di un controllo.|  
|[COleControl::OnEventAdvise](../Topic/COleControl::OnEventAdvise.md)|Chiamato quando i gestori eventi sono connessi o disconnessi da un controllo.|  
|[COleControl::OnFontChanged](../Topic/COleControl::OnFontChanged.md)|Chiamato quando la proprietà predefinite predefinita viene modificata.|  
|[COleControl::OnForeColorChanged](../Topic/COleControl::OnForeColorChanged.md)|Chiamato quando la proprietà di ForeColor di azione viene modificata.|  
|[COleControl::OnFreezeEvents](../Topic/COleControl::OnFreezeEvents.md)|Chiamato quando gli eventi di un controllo sono bloccati o scongelati.|  
|[COleControl::OnGetColorSet](../Topic/COleControl::OnGetColorSet.md)|Notifica al controllo che `IOleObject::GetColorSet` è stato chiamato.|  
|[COleControl::OnGetControlInfo](../Topic/COleControl::OnGetControlInfo.md)|Fornisce informazioni quali il contenitore.|  
|[COleControl::OnGetDisplayString](../Topic/COleControl::OnGetDisplayString.md)|Chiamato per ottenere una stringa che rappresenti un valore di proprietà.|  
|[COleControl::OnGetInPlaceMenu](../Topic/COleControl::OnGetInPlaceMenu.md)|Richiede un handle dei menu di controllo che verranno uniti al menu del contenitore.|  
|[COleControl::OnGetNaturalExtent](../Topic/COleControl::OnGetNaturalExtent.md)|Override per recuperare le dimensioni di visualizzazione del controllo più vicini a quella proposta di ambito e delle dimensioni.|  
|[COleControl::OnGetPredefinedStrings](../Topic/COleControl::OnGetPredefinedStrings.md)|Restituisce le stringhe che rappresentano i valori possibili per una proprietà.|  
|[COleControl::OnGetPredefinedValue](../Topic/COleControl::OnGetPredefinedValue.md)|Restituisce il valore corrispondente a una stringa predefinita.|  
|[COleControl::OnGetViewExtent](../Topic/COleControl::OnGetViewExtent.md)|Override per recuperare la dimensione delle aree di visualizzazione del controllo \(può essere utilizzato per attivare il disegno a due sessione\).|  
|[COleControl::OnGetViewRect](../Topic/COleControl::OnGetViewRect.md)|Override per convertire la dimensione del controllo in un rettangolo che inizia a una posizione specifica.|  
|[COleControl::OnGetViewStatus](../Topic/COleControl::OnGetViewStatus.md)|Override per recuperare lo stato di visualizzazione del controllo.|  
|[COleControl::OnHideToolBars](../Topic/COleControl::OnHideToolBars.md)|Chiamato dal contenitore quando il controllo è interfaccia utente disabilitato.|  
|[COleControl::OnInactiveMouseMove](../Topic/COleControl::OnInactiveMouseMove.md)|Override di disporre del contenitore per il controllo inattivo nei messaggi `WM_MOUSEMOVE` di invio del puntatore del mouse sul controllo.|  
|[COleControl::OnInactiveSetCursor](../Topic/COleControl::OnInactiveSetCursor.md)|Override di disporre del contenitore per il controllo inattivo nei messaggi `WM_SETCURSOR` di invio del puntatore del mouse sul controllo.|  
|[COleControl::OnKeyDownEvent](../Topic/COleControl::OnKeyDownEvent.md)|Chiamato dopo l'evento KeyDown di azione è stato generato.|  
|[COleControl::OnKeyPressEvent](../Topic/COleControl::OnKeyPressEvent.md)|Chiamato dopo l'evento di KeyPress di azione è stato generato.|  
|[COleControl::OnKeyUpEvent](../Topic/COleControl::OnKeyUpEvent.md)|Chiamato dopo l'evento KeyUp di azione è stato generato.|  
|[COleControl::OnMapPropertyToPage](../Topic/COleControl::OnMapPropertyToPage.md)|Indica quale pagina delle proprietà da utilizzare per modificare una proprietà.|  
|[COleControl::OnMnemonic](../Topic/COleControl::OnMnemonic.md)|Chiamato quando una chiave se il controllo è stato premuto.|  
|[COleControl::OnProperties](../Topic/COleControl::OnProperties.md)|Chiamato quando il verbo "proprietà" del controllo è stato richiamato.|  
|[COleControl::OnQueryHitPoint](../Topic/COleControl::OnQueryHitPoint.md)|Override da eseguire una query su se si sovrappone alla visualizzazione di un controllo un punto specificato.|  
|[COleControl::OnQueryHitRect](../Topic/COleControl::OnQueryHitRect.md)|Override da eseguire query quando la visualizzazione di un controllo si sovrappone a qualsiasi punto in un rettangolo specificato.|  
|[COleControl::OnRenderData](../Topic/COleControl::OnRenderData.md)|Chiamato dal framework per recuperare i dati nel formato specificato.|  
|[COleControl::OnRenderFileData](../Topic/COleControl::OnRenderFileData.md)|Chiamato dal framework per recuperare dati da un file nel formato specificato.|  
|[COleControl::OnRenderGlobalData](../Topic/COleControl::OnRenderGlobalData.md)|Chiamato dal framework per recuperare i dati dalla memoria globale in formato specificato.|  
|[COleControl::OnResetState](../Topic/COleControl::OnResetState.md)|Reimposta le proprietà di un controllo ai valori predefiniti.|  
|[COleControl::OnSetClientSite](../Topic/COleControl::OnSetClientSite.md)|Notifica al controllo che `IOleControl::SetClientSite` è stato chiamato.|  
|[COleControl::OnSetData](../Topic/COleControl::OnSetData.md)|Sostituisce i dati del controllo a un altro valore.|  
|[COleControl::OnSetExtent](../Topic/COleControl::OnSetExtent.md)|Chiamata dopo l'ambito del controllo è stato modificato.|  
|[COleControl::OnSetObjectRects](../Topic/COleControl::OnSetObjectRects.md)|Chiamato dopo che le dimensioni del controllo sono state modificate.|  
|[COleControl::OnShowToolBars](../Topic/COleControl::OnShowToolBars.md)|Chiamato quando il controllo è stato interfaccia utente attivata.|  
|[COleControl::OnTextChanged](../Topic/COleControl::OnTextChanged.md)|Chiamato quando la proprietà predefinita della barra del titolo o di testo viene modificata.|  
|[COleControl::OnWindowlessMessage](../Topic/COleControl::OnWindowlessMessage.md)|Messaggi della finestra processi \(eccetto i messaggi di mouse e tastiera\) per i controlli privi di finestra.|  
|[COleControl::ParentToClient](../Topic/COleControl::ParentToClient.md)|Converte un punto all'origine contenitore su un punto all'origine del controllo.|  
|[COleControl::PostModalDialog](../Topic/COleControl::PostModalDialog.md)|Notifica al contenitore che una finestra di dialogo modale è stata chiusa.|  
|[COleControl::PreModalDialog](../Topic/COleControl::PreModalDialog.md)|Notifica al contenitore che una finestra di dialogo modale sta per visualizzare.|  
|[COleControl::RecreateControlWindow](../Topic/COleControl::RecreateControlWindow.md)|Elimina e ricreata la finestra del controllo.|  
|[COleControl::Refresh](../Topic/COleControl::Refresh.md)|Forza un aggiornamento dell'aspetto di un controllo.|  
|[COleControl::ReleaseCapture](../Topic/COleControl::ReleaseCapture.md)|Rilascia il mouse capture.|  
|[COleControl::ReleaseDC](../Topic/COleControl::ReleaseDC.md)|Rilascia il contesto dello schermo di un contenitore di un controllo senza finestra.|  
|[COleControl::ReparentControlWindow](../Topic/COleControl::ReparentControlWindow.md)|Reimposta il padre della finestra di controllo.|  
|[COleControl::ResetStockProps](../Topic/COleControl::ResetStockProps.md)|Inizializza le proprietà di azione `COleControl` i valori predefiniti.|  
|[COleControl::ResetVersion](../Topic/COleControl::ResetVersion.md)|Inizializza il numero di versione con un valore specificato.|  
|[COleControl::ScrollWindow](../Topic/COleControl::ScrollWindow.md)|Consente a un controllo senza finestra scorrere un'area nella propria immagine attiva sul posto nella visualizzazione.|  
|[COleControl::SelectFontObject](../Topic/COleControl::SelectFontObject.md)|Selezionare una proprietà predefinite personalizzata in un contesto di dispositivo.|  
|[COleControl::SelectStockFont](../Topic/COleControl::SelectStockFont.md)|Selezionare la proprietà predefinite predefinita in un contesto di dispositivo.|  
|[COleControl::SerializeExtent](../Topic/COleControl::SerializeExtent.md)|Serializzazione o inizializza lo spazio di visualizzazione per il controllo.|  
|[COleControl::SerializeStockProps](../Topic/COleControl::SerializeStockProps.md)|Serializzazione o inizializza le proprietà di azione `COleControl`.|  
|[COleControl::SerializeVersion](../Topic/COleControl::SerializeVersion.md)|Serializzazione o inizializza le informazioni sulla versione del controllo.|  
|[COleControl::SetAppearance](../Topic/COleControl::SetAppearance.md)|Imposta il valore della proprietà relative predefinita.|  
|[COleControl::SetBackColor](../Topic/COleControl::SetBackColor.md)|Imposta il valore della proprietà predefinita di Sfondo.|  
|[COleControl::SetBorderStyle](../Topic/COleControl::SetBorderStyle.md)|Imposta il valore della proprietà predefinita di BorderStyle.|  
|[COleControl::SetCapture](../Topic/COleControl::SetCapture.md)|Nella finestra contenitore di controlli a ottenere il possesso del mouse capture per conto del controllo.|  
|[COleControl::SetControlSize](../Topic/COleControl::SetControlSize.md)|Imposta la posizione e la dimensione del controllo OLE.|  
|[COleControl::SetEnabled](../Topic/COleControl::SetEnabled.md)|Imposta il valore della proprietà attivata predefinita.|  
|[COleControl::SetFocus](../Topic/COleControl::SetFocus.md)|Nella finestra contenitore di controlli a ottenere il possesso dello stato attivo per l'input da parte del controllo.|  
|[COleControl::SetFont](../Topic/COleControl::SetFont.md)|Imposta il valore della proprietà predefinite predefinita.|  
|[COleControl::SetForeColor](../Topic/COleControl::SetForeColor.md)|Imposta il valore della proprietà predefinita di ForeColor.|  
|[COleControl::SetInitialSize](../Topic/COleControl::SetInitialSize.md)|Imposta la dimensione di un controllo OLE una volta innanzitutto visualizzarla in un contenitore.|  
|[COleControl::SetModifiedFlag](../Topic/COleControl::SetModifiedFlag.md)|Modifica lo stato modificato in un controllo.|  
|[COleControl::SetNotPermitted](../Topic/COleControl::SetNotPermitted.md)|Indica che una richiesta modifiche non è riuscita.|  
|[COleControl::SetNotSupported](../Topic/COleControl::SetNotSupported.md)|Impedisce la modifica il valore della proprietà di un controllo dall'utente.|  
|[COleControl::SetRectInContainer](../Topic/COleControl::SetRectInContainer.md)|Imposta il rettangolo del controllo rispetto al relativo contenitore.|  
|[COleControl::SetText](../Topic/COleControl::SetText.md)|Imposta il valore della proprietà predefinita della barra del titolo o di testo.|  
|[COleControl::ThrowError](../Topic/COleControl::ThrowError.md)|Segnala un errore che si è verificato in un controllo OLE.|  
|[COleControl::TransformCoords](../Topic/COleControl::TransformCoords.md)|Le trasformazioni coordinamento i valori tra un contenitore e.|  
|[COleControl::TranslateColor](../Topic/COleControl::TranslateColor.md)|Converte un valore **OLE\_COLOR** a un valore **COLORREF**.|  
|[COleControl::WillAmbientsBeValidDuringLoad](../Topic/COleControl::WillAmbientsBeValidDuringLoad.md)|Determina se le proprietà di ambiente risulteranno disponibili alla successiva apertura del controllo verrà caricata.|  
|[COleControl::WindowProc](../Topic/COleControl::WindowProc.md)|Fornisce una routine di Windows per un oggetto `COleControl`.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControl::DrawContent](../Topic/COleControl::DrawContent.md)|Chiamato dal framework quando l'aspetto del controllo deve essere aggiornato.|  
|[COleControl::DrawMetafile](../Topic/COleControl::DrawMetafile.md)|Chiamato dal framework quando il contesto di dispositivo metafile in uso.|  
|[COleControl::IsInvokeAllowed](../Topic/COleControl::IsInvokeAllowed.md)|Consente la chiamata di metodo di automazione.|  
|[COleControl::SetInitialDataFormats](../Topic/COleControl::SetInitialDataFormats.md)|Chiamato dal framework per inizializzare l'elenco dei formati dati supportate dal controllo.|  
  
## Note  
 Derivato da `CWnd`, questa classe eredita tutte le funzionalità di un oggetto finestra di Windows più funzionalità aggiuntiva specifica OLE, ad esempio consentono di evento e la possibilità di supportare i metodi e le proprietà.  
  
 I controlli OLE possono essere inseriti nelle applicazioni del contenitore OLE e comunicare con il contenitore tramite un sistema bidirezionale di consentono di evento ed esponendo i metodi e le proprietà del contenitore.  Si noti che i contenitori OLE standard supportano solo la funzionalità di base di un controllo OLE.  Non è in grado di supportare funzionalità estese di un controllo OLE.  Che consentono di evento si verifica quando gli eventi vengono inviati al contenitore come risultato delle azioni che si verificano nel controllo.  A sua volta, il contenitore comunica con il controllo utilizzando un insieme di esporre metodi e le proprietà analoghe alle funzioni membro e i membri dati C\+\+ classe.  Questo approccio consente agli sviluppatori di controllare l'aspetto del controllo e segnalare al contenitore di alcune azioni si verificano.  
  
## Controlli privi di finestra  
 I controlli OLE possono essere attivo sul posto utilizzato senza una finestra.  I controlli privi di finestra presentano vantaggi significativi:  
  
-   I controlli privi di finestra possono essere trasparenti e non rettangolari  
  
-   I controlli privi di finestra ridurre la dimensione dell'istanza e l'ora di creazione dell'oggetto  
  
 I controlli non necessitano di una finestra.  I servizi che una finestra offre possono essere forniti da sola finestra condivisa \(in genere il contenitore\) e bit di inviare il codice.  Disporre di una finestra è principalmente una complicazione all'oggetto.  
  
 Quando l'attivazione senza finestra viene utilizzata, il contenitore \(con una finestra\) è responsabile di fornire servizi che sarebbero altrimenti forniti da una finestra del controllo.  Ad esempio, se il controllo deve di eseguire una query sullo stato attivo, di interrogare il mouse capture, o di ottenere un contesto di dispositivo, queste operazioni vengono gestite dal contenitore.  Il richiamo `COleControl`[funzioni membro di un'operazione senza input](http://msdn.microsoft.com/it-it/e9e28f79-9a70-4ae4-a5aa-b3e92f1904df) queste operazioni nel contenitore.  
  
 Quando l'attivazione senza finestra è abilitata, i messaggi inviati delegati contenitore su `IOleInPlaceObjectWindowless` del controllo collegamento \(un'estensione [IOleInPlaceObject](http://msdn.microsoft.com/library/windows/desktop/ms692646) di supporto senza finestra.  l'implementazione di `COleControl` di questa interfaccia invierà questi messaggi tramite la mappa messaggi del controllo, dopo avere modificato le coordinate del mouse in modo appropriato.  È possibile elaborare i messaggi quali messaggi comuni della finestra, aggiungendo voci corrispondenti alla mappa messaggi.  
  
 In un controllo senza finestra, è sempre opportuno utilizzare le funzioni membro `COleControl` anziché le funzioni membro corrispondente `CWnd` o delle funzioni correlate di Windows.  
  
 Gli oggetti di controllo OLE possono inoltre creare una finestra solo quando diventano attivi, ma la quantità di lavoro necessaria per la transizione di inattivo\- attivo passa su e la velocità della transizione si sposta verso il basso.  In alcuni casi questo è un problema: ad esempio, si consideri una griglia delle caselle di testo.  In cursoring l'alto e verso il basso fino alla colonna, ogni controllo deve essere attivato sul posto e quindi disabilitato.  La velocità transizione inattiva\/attiva direttamente sulla velocità di scorrimento.  
  
 Per ulteriori informazioni sullo sviluppo di un framework del controllo OLE, vedere gli articoli [Controlli ActiveX MFC](../../mfc/mfc-activex-controls.md) e [cenni preliminari: Creare un programma di controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md).  Per informazioni su come ottimizzare i controlli OLE, inclusi i controlli privi di finestra e senza sfarfallio, vedere [Controlli ActiveX MFC: ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `COleControl`  
  
## Requisiti  
 **Header:** afxctl.h  
  
## Vedere anche  
 [Esempi relativi a MFC CIRC3](../../top/visual-cpp-samples.md)   
 [Esempio TESTHELP MFC](../../top/visual-cpp-samples.md)   
 [COlePropertyPage Class](../../mfc/reference/colepropertypage-class.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFontHolder Class](../../mfc/reference/cfontholder-class.md)   
 [CPictureHolder Class](../../mfc/reference/cpictureholder-class.md)
---
title: "CHtmlEditCtrlBase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CHtmlEditCtrlBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHtmlEditCtrlBase class"
ms.assetid: e0cc74b4-8320-4570-b673-16c03d2ae266
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CHtmlEditCtrlBase Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una parte di modifica HTML.  
  
## Sintassi  
  
```  
  
template < class   
T  
 > class CHtmlEditCtrlBase  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHtmlEditCtrlBase::AddToGlyphTable](../Topic/CHtmlEditCtrlBase::AddToGlyphTable.md)|Aggiunge una voce alla tabella del glifo, che specifica le immagini da visualizzare per i tag specifici in modalità progettazione.|  
|[CHtmlEditCtrlBase::Bold](../Topic/CHtmlEditCtrlBase::Bold.md)|Attiva\/disattiva lo stato grassetto del testo selezionato.|  
|[CHtmlEditCtrlBase::Button](../Topic/CHtmlEditCtrlBase::Button.md)|Sostituisce un pulsante della selezione corrente.|  
|[CHtmlEditCtrlBase::CheckBox](../Topic/CHtmlEditCtrlBase::CheckBox.md)|Sostituisce un controllo casella di controllo nella selezione corrente.|  
|[CHtmlEditCtrlBase::ClearSelection](../Topic/CHtmlEditCtrlBase::ClearSelection.md)|Cancella la selezione corrente|  
|[CHtmlEditCtrlBase::Copy](../Topic/CHtmlEditCtrlBase::Copy.md)|Copiare la selezione corrente negli Appunti.|  
|[CHtmlEditCtrlBase::Cut](../Topic/CHtmlEditCtrlBase::Cut.md)|Copiare la selezione corrente negli Appunti e viene quindi eliminato.|  
|[CHtmlEditCtrlBase::Delete](../Topic/CHtmlEditCtrlBase::Delete.md)|Elimina la selezione corrente.|  
|[CHtmlEditCtrlBase::DropDownBox](../Topic/CHtmlEditCtrlBase::DropDownBox.md)|Sostituisce un controllo di selezione a discesa della selezione corrente.|  
|[CHtmlEditCtrlBase::EmptyGlyphTable](../Topic/CHtmlEditCtrlBase::EmptyGlyphTable.md)|Rimuove tutte le voci della tabella del glifo, che nasconde tutte le immagini visualizzate per i tag in modalità progettazione.|  
|[CHtmlEditCtrlBase::ExecCommand](../Topic/CHtmlEditCtrlBase::ExecCommand.md)|Esegue un comando.|  
|[CHtmlEditCtrlBase::Font](../Topic/CHtmlEditCtrlBase::Font.md)|Aprire una finestra di dialogo carattere per consentire all'utente di modificare il colore del testo, il tipo di carattere e la dimensione del carattere della selezione corrente.|  
|[CHtmlEditCtrlBase::GetAbsolutePosition](../Topic/CHtmlEditCtrlBase::GetAbsolutePosition.md)|Restituisce se la proprietà della posizione di un elemento è "assoluto."|  
|[CHtmlEditCtrlBase::GetBackColor](../Topic/CHtmlEditCtrlBase::GetBackColor.md)|Recupera il colore di sfondo della selezione corrente.|  
|[CHtmlEditCtrlBase::GetBlockFormat](../Topic/CHtmlEditCtrlBase::GetBlockFormat.md)|Recupera il tag corrente di formato di blocco.|  
|[CHtmlEditCtrlBase::GetBlockFormatNames](../Topic/CHtmlEditCtrlBase::GetBlockFormatNames.md)|Recupera le stringhe che corrispondono ai tag disponibili di formato di blocco.|  
|[CHtmlEditCtrlBase::GetBookMark](../Topic/CHtmlEditCtrlBase::GetBookMark.md)|Recupera il nome di un ancoraggio del segnalibro.|  
|[CHtmlEditCtrlBase::GetDocument](../Topic/CHtmlEditCtrlBase::GetDocument.md)|Recupera l'oggetto documento.|  
|[CHtmlEditCtrlBase::GetDocumentHTML](../Topic/CHtmlEditCtrlBase::GetDocumentHTML.md)|Recupera il codice HTML del documento corrente.|  
|[CHtmlEditCtrlBase::GetDocumentTitle](../Topic/CHtmlEditCtrlBase::GetDocumentTitle.md)|Recupera il titolo del documento.|  
|[CHtmlEditCtrlBase::GetEvent](../Topic/CHtmlEditCtrlBase::GetEvent.md)|Recupera un puntatore a interfaccia all'oggetto evento contenente le informazioni relative alla maggior parte degli eventi più recenti.|  
|[CHtmlEditCtrlBase::GetEventSrcElement](../Topic/CHtmlEditCtrlBase::GetEventSrcElement.md)|Recupera l'oggetto che ha generato l'evento.|  
|[CHtmlEditCtrlBase::GetFontFace](../Topic/CHtmlEditCtrlBase::GetFontFace.md)|Recupera il nome del tipo di carattere per la selezione corrente.|  
|[CHtmlEditCtrlBase::GetFontSize](../Topic/CHtmlEditCtrlBase::GetFontSize.md)|Recupera la dimensione del carattere per la selezione corrente.|  
|[CHtmlEditCtrlBase::GetForeColor](../Topic/CHtmlEditCtrlBase::GetForeColor.md)|Recupera il colore di primo piano \(testo\) della selezione corrente.|  
|[CHtmlEditCtrlBase::GetFrameZone](../Topic/CHtmlEditCtrlBase::GetFrameZone.md)|Restituisce l'area di sicurezza della pagina corrente nel browser.|  
|[CHtmlEditCtrlBase::GetIsDirty](../Topic/CHtmlEditCtrlBase::GetIsDirty.md)|Indica se il documento HTML modificato.|  
|[CHtmlEditCtrlBase::GetShowAlignedSiteTags](../Topic/CHtmlEditCtrlBase::GetShowAlignedSiteTags.md)|Restituisce se viene visualizzata un'icona per tutti gli elementi che dispongono di una proprietà **styleFloat**.|  
|[CHtmlEditCtrlBase::GetShowAllTags](../Topic/CHtmlEditCtrlBase::GetShowAllTags.md)|Restituisce se il WebBrowser visualizzare le icone per indicare la posizione di tutti i tag in un documento.|  
|[CHtmlEditCtrlBase::GetShowAreaTags](../Topic/CHtmlEditCtrlBase::GetShowAreaTags.md)|Recupera se il WebBrowser viene visualizzata un'icona per i tag dell'area.|  
|[CHtmlEditCtrlBase::GetShowBRTags](../Topic/CHtmlEditCtrlBase::GetShowBRTags.md)|Recupera se il WebBrowser viene visualizzata un'icona per i tag del Br.|  
|[CHtmlEditCtrlBase::GetShowCommentTags](../Topic/CHtmlEditCtrlBase::GetShowCommentTags.md)|Recupera se il WebBrowser viene visualizzata un'icona per i tag di commento.|  
|[CHtmlEditCtrlBase::GetShowMiscTags](../Topic/CHtmlEditCtrlBase::GetShowMiscTags.md)|Recupera se il WebBrowser visualizzare tutti i tag visualizzati in Microsoft Internet Explorer 4,0.|  
|[CHtmlEditCtrlBase::GetShowScriptTags](../Topic/CHtmlEditCtrlBase::GetShowScriptTags.md)|Recupera se il WebBrowser viene visualizzata un'icona per tutti i tag script.|  
|[CHtmlEditCtrlBase::GetShowStyleTags](../Topic/CHtmlEditCtrlBase::GetShowStyleTags.md)|Recupera se il WebBrowser viene visualizzata un'icona per tutti i tag di stile.|  
|[CHtmlEditCtrlBase::GetShowUnknownTags](../Topic/CHtmlEditCtrlBase::GetShowUnknownTags.md)|Recupera se il WebBrowser viene visualizzata un'icona per tutti i tag sconosciuti.|  
|[CHtmlEditCtrlBase::HorizontalLine](../Topic/CHtmlEditCtrlBase::HorizontalLine.md)|Sostituisce una linea orizzontale nella selezione corrente.|  
|[CHtmlEditCtrlBase::HyperLink](../Topic/CHtmlEditCtrlBase::HyperLink.md)|Inserisce un collegamento ipertestuale alla selezione corrente.|  
|[CHtmlEditCtrlBase::IE50Paste](../Topic/CHtmlEditCtrlBase::IE50Paste.md)|Esegue un'operazione Incolla compatibile con Microsoft Internet Explorer 5.|  
|[CHtmlEditCtrlBase::Iframe](../Topic/CHtmlEditCtrlBase::Iframe.md)|Sostituisce un frame inline nella selezione corrente.|  
|[CHtmlEditCtrlBase::Image](../Topic/CHtmlEditCtrlBase::Image.md)|Sovrascrive un'immagine nella selezione corrente.|  
|[CHtmlEditCtrlBase::Indent](../Topic/CHtmlEditCtrlBase::Indent.md)|Aumenta il rientro di testo selezionato da un incremento di rientro.|  
|[CHtmlEditCtrlBase::InsFieldSet](../Topic/CHtmlEditCtrlBase::InsFieldSet.md)|Sostituisce una casella della selezione corrente.|  
|[CHtmlEditCtrlBase::InsInputButton](../Topic/CHtmlEditCtrlBase::InsInputButton.md)|Sostituisce un pulsante della selezione corrente.|  
|[CHtmlEditCtrlBase::InsInputHidden](../Topic/CHtmlEditCtrlBase::InsInputHidden.md)|Inserisce un controllo nascosto nella selezione corrente.|  
|[CHtmlEditCtrlBase::InsInputImage](../Topic/CHtmlEditCtrlBase::InsInputImage.md)|Sostituisce un controllo immagine nella selezione corrente.|  
|[CHtmlEditCtrlBase::InsInputPassword](../Topic/CHtmlEditCtrlBase::InsInputPassword.md)|Sostituisce un controllo di password della selezione corrente.|  
|[CHtmlEditCtrlBase::InsInputReset](../Topic/CHtmlEditCtrlBase::InsInputReset.md)|Sostituisce un controllo di reimpostazione della selezione corrente.|  
|[CHtmlEditCtrlBase::InsInputSubmit](../Topic/CHtmlEditCtrlBase::InsInputSubmit.md)|Sostituisce un controllo di inviare la selezione corrente.|  
|[CHtmlEditCtrlBase::InsInputUpload](../Topic/CHtmlEditCtrlBase::InsInputUpload.md)|Sostituisce un controllo per il caricamento di file nella selezione corrente.|  
|[CHtmlEditCtrlBase::Is1DElement](../Topic/CHtmlEditCtrlBase::Is1DElement.md)|Determina se un elemento è posizionato in modo statico.|  
|[CHtmlEditCtrlBase::Is2DElement](../Topic/CHtmlEditCtrlBase::Is2DElement.md)|Determina se un elemento è assolutamente inserito.|  
|[CHtmlEditCtrlBase::Italic](../Topic/CHtmlEditCtrlBase::Italic.md)|Passa la selezione corrente tra corsivo e nonitalic.|  
|[CHtmlEditCtrlBase::JustifyCenter](../Topic/CHtmlEditCtrlBase::JustifyCenter.md)|Viene analizzato il blocco di formato in cui la selezione corrente si trova.|  
|[CHtmlEditCtrlBase::JustifyLeft](../Topic/CHtmlEditCtrlBase::JustifyLeft.md)|Sinistro giustifica il blocco di formato in cui la selezione corrente si trova.|  
|[CHtmlEditCtrlBase::JustifyRight](../Topic/CHtmlEditCtrlBase::JustifyRight.md)|Diritto\- giustifica il blocco di formato in cui la selezione corrente si trova.|  
|[CHtmlEditCtrlBase::ListBox](../Topic/CHtmlEditCtrlBase::ListBox.md)|Sostituisce un controllo di selezione della casella di riepilogo della selezione corrente.|  
|[CHtmlEditCtrlBase::Marquee](../Topic/CHtmlEditCtrlBase::Marquee.md)|Sovrascrive l'insegna vuota della selezione corrente.|  
|[CHtmlEditCtrlBase::NewDocument](../Topic/CHtmlEditCtrlBase::NewDocument.md)|Crea un nuovo documento.|  
|[CHtmlEditCtrlBase::OrderList](../Topic/CHtmlEditCtrlBase::OrderList.md)|Passa la selezione corrente tra un elenco ordinato e un blocco di formato standard.|  
|[CHtmlEditCtrlBase::Outdent](../Topic/CHtmlEditCtrlBase::Outdent.md)|L'eventuale da un incremento il rientro del blocco di formato in cui la selezione corrente si trova.|  
|[CHtmlEditCtrlBase::Paragraph](../Topic/CHtmlEditCtrlBase::Paragraph.md)|Sovrascrive un'interruzione di riga nella selezione corrente.|  
|[CHtmlEditCtrlBase::Paste](../Topic/CHtmlEditCtrlBase::Paste.md)|Sostituisce il contenuto degli Appunti nella selezione corrente.|  
|[CHtmlEditCtrlBase::PrintDocument](../Topic/CHtmlEditCtrlBase::PrintDocument.md)|Stampa il documento corrente.|  
|[CHtmlEditCtrlBase::PrintPreview](../Topic/CHtmlEditCtrlBase::PrintPreview.md)|Aprire la finestra di anteprima di stampa del documento corrente utilizzando il modello predefinito di anteprima di stampa o di un modello personalizzato.|  
|[CHtmlEditCtrlBase::QueryStatus](../Topic/CHtmlEditCtrlBase::QueryStatus.md)|Chiamare questo metodo per eseguire una query sullo stato dei controlli.|  
|[CHtmlEditCtrlBase::RadioButton](../Topic/CHtmlEditCtrlBase::RadioButton.md)|Sostituisce un telecomando comunicare alla selezione corrente.|  
|[CHtmlEditCtrlBase::RefreshDocument](../Topic/CHtmlEditCtrlBase::RefreshDocument.md)|Aggiorna il documento corrente.|  
|[CHtmlEditCtrlBase::RemoveFormat](../Topic/CHtmlEditCtrlBase::RemoveFormat.md)|Rimuove i tag di formattazione dalla selezione corrente.|  
|[CHtmlEditCtrlBase::SaveAs](../Topic/CHtmlEditCtrlBase::SaveAs.md)|Salvare la pagina Web corrente in un file.|  
|[CHtmlEditCtrlBase::SelectAll](../Topic/CHtmlEditCtrlBase::SelectAll.md)|Seleziona l'intero documento.|  
|[CHtmlEditCtrlBase::Set2DPosition](../Topic/CHtmlEditCtrlBase::Set2DPosition.md)|Consente gli elementi posizionati in modo assoluto di spostare il trascinamento.|  
|[CHtmlEditCtrlBase::SetAbsolutePosition](../Topic/CHtmlEditCtrlBase::SetAbsolutePosition.md)|Impostare la proprietà "assoluto" o "statico della posizione di un elemento".|  
|[CHtmlEditCtrlBase::SetAtomicSelection](../Topic/CHtmlEditCtrlBase::SetAtomicSelection.md)|Modalità di selezione atomica stabilita.|  
|[CHtmlEditCtrlBase::SetAutoURLDetectMode](../Topic/CHtmlEditCtrlBase::SetAutoURLDetectMode.md)|Consente il rilevamento automatico di URL e chiuderlo.|  
|[CHtmlEditCtrlBase::SetBackColor](../Topic/CHtmlEditCtrlBase::SetBackColor.md)|Imposta il colore di sfondo della selezione corrente.|  
|[CHtmlEditCtrlBase::SetBlockFormat](../Topic/CHtmlEditCtrlBase::SetBlockFormat.md)|Imposta il tag corrente di formato di blocco.|  
|[CHtmlEditCtrlBase::SetBookMark](../Topic/CHtmlEditCtrlBase::SetBookMark.md)|Crea un ancoraggio del segnalibro per la selezione o del punto di inserimento corrente.|  
|[CHtmlEditCtrlBase::SetCSSEditingLevel](../Topic/CHtmlEditCtrlBase::SetCSSEditingLevel.md)|Selezionare il livello di CSS \(CSS1 o CSS2\) l'editor supporta, se presente.|  
|[CHtmlEditCtrlBase::SetDefaultComposeSettings](../Topic/CHtmlEditCtrlBase::SetDefaultComposeSettings.md)|Chiamare questo metodo per impostare l'impostazione predefinita costituiscono le impostazioni.|  
|[CHtmlEditCtrlBase::SetDesignMode](../Topic/CHtmlEditCtrlBase::SetDesignMode.md)|Impostare la modalità progettazione.|  
|[CHtmlEditCtrlBase::SetDisableEditFocusUI](../Topic/CHtmlEditCtrlBase::SetDisableEditFocusUI.md)|Disabilita il bordo e gestire covati intorno a un elemento con stato attivo di modifica.|  
|[CHtmlEditCtrlBase::SetDocumentHTML](../Topic/CHtmlEditCtrlBase::SetDocumentHTML.md)|Imposta il codice HTML del documento corrente.|  
|[CHtmlEditCtrlBase::SetFontFace](../Topic/CHtmlEditCtrlBase::SetFontFace.md)|Imposta il tipo di carattere per la selezione corrente.|  
|[CHtmlEditCtrlBase::SetFontSize](../Topic/CHtmlEditCtrlBase::SetFontSize.md)|Imposta la dimensione del carattere per la selezione corrente.|  
|[CHtmlEditCtrlBase::SetForeColor](../Topic/CHtmlEditCtrlBase::SetForeColor.md)|Imposta il colore di primo piano \(testo\) della selezione corrente.|  
|[CHtmlEditCtrlBase::SetIE5PasteMode](../Topic/CHtmlEditCtrlBase::SetIE5PasteMode.md)|Imposta l'operazione Incolla per essere compatibile con Microsoft Internet Explorer 5.|  
|[CHtmlEditCtrlBase::SetLiveResize](../Topic/CHtmlEditCtrlBase::SetLiveResize.md)|La WebBrowser di aggiornare l'aspetto di un elemento in modo continuo durante un ridimensionamento o un'operazione spostamento.|  
|[CHtmlEditCtrlBase::SetMultiSelect](../Topic/CHtmlEditCtrlBase::SetMultiSelect.md)|Consente la selezione multipla.|  
|[CHtmlEditCtrlBase::SetOverrideCursor](../Topic/CHtmlEditCtrlBase::SetOverrideCursor.md)|Non ordina mai il WebBrowser per modificare il puntatore del mouse.|  
|[CHtmlEditCtrlBase::SetOverwriteMode](../Topic/CHtmlEditCtrlBase::SetOverwriteMode.md)|Passa la modalità di inserimento testo tra inserimento e sovrascrivono.|  
|[CHtmlEditCtrlBase::SetRespectVisInDesign](../Topic/CHtmlEditCtrlBase::SetRespectVisInDesign.md)|Nasconde elementi invisibili in modalità progettazione.|  
|[CHtmlEditCtrlBase::SetShowAlignedSiteTags](../Topic/CHtmlEditCtrlBase::SetShowAlignedSiteTags.md)|Viene visualizzato un glifo per tutti gli elementi che dispongono di una proprietà **styleFloat**.|  
|[CHtmlEditCtrlBase::SetShowAllTags](../Topic/CHtmlEditCtrlBase::SetShowAllTags.md)|Visualizzare le icone per indicare la posizione di tutti i tag in un documento.|  
|[CHtmlEditCtrlBase::SetShowAreaTags](../Topic/CHtmlEditCtrlBase::SetShowAreaTags.md)|Viene visualizzato un glifo per tutti i tag dell'area.|  
|[CHtmlEditCtrlBase::SetShowBRTags](../Topic/CHtmlEditCtrlBase::SetShowBRTags.md)|Viene visualizzato un glifo per tutti i tag del Br.|  
|[CHtmlEditCtrlBase::SetShowCommentTags](../Topic/CHtmlEditCtrlBase::SetShowCommentTags.md)|Viene visualizzato un glifo per tutti i tag di commento.|  
|[CHtmlEditCtrlBase::SetShowMiscTags](../Topic/CHtmlEditCtrlBase::SetShowMiscTags.md)|Visualizzare tutti i tag visualizzati in Microsoft Internet Explorer 4,0.|  
|[CHtmlEditCtrlBase::SetShowScriptTags](../Topic/CHtmlEditCtrlBase::SetShowScriptTags.md)|Viene visualizzato un glifo per tutti i tag script.|  
|[CHtmlEditCtrlBase::SetShowStyleTags](../Topic/CHtmlEditCtrlBase::SetShowStyleTags.md)|Viene visualizzato un glifo per tutti i tag di stile.|  
|[CHtmlEditCtrlBase::SetShowUnknownTags](../Topic/CHtmlEditCtrlBase::SetShowUnknownTags.md)|Viene visualizzato un glifo per tutti i tag sconosciuti.|  
|[CHtmlEditCtrlBase::TextArea](../Topic/CHtmlEditCtrlBase::TextArea.md)|Sostituisce un controllo multilinea di immissione testo alla selezione corrente.|  
|[CHtmlEditCtrlBase::TextBox](../Topic/CHtmlEditCtrlBase::TextBox.md)|Sostituisce un controllo di testo alla selezione corrente.|  
|[CHtmlEditCtrlBase::UnBookmark](../Topic/CHtmlEditCtrlBase::UnBookmark.md)|Rimuove tutti i segnalibri dalla selezione corrente.|  
|[CHtmlEditCtrlBase::Underline](../Topic/CHtmlEditCtrlBase::Underline.md)|Passa la selezione corrente tra sottolineato e non sottolineato.|  
|[CHtmlEditCtrlBase::Unlink](../Topic/CHtmlEditCtrlBase::Unlink.md)|Rimuove qualsiasi collegamento ipertestuale dalla selezione corrente.|  
|[CHtmlEditCtrlBase::UnorderList](../Topic/CHtmlEditCtrlBase::UnorderList.md)|Passa la selezione corrente tra un elenco ordinato e un blocco di formato standard.|  
  
#### Parametri  
 `T`  
 Il nome della classe derivata.  
  
## Note  
 **CHtmlEditCtrlBase** fornisce funzioni membro per i controlli di modifica HTML WebBrowser, come [grassetto](../Topic/CHtmlEditCtrlBase::Bold.md).  \(In alternativa, è possibile chiamare [ExecCommand](../Topic/CHtmlEditCtrlBase::ExecCommand.md) per eseguire il comando **IDM\_BOLD** \).  
  
 **CHtmlEditCtrlBase** non è destinato a essere in esecuzione.  È progettato per essere una classe base per le classi derivate che espongono funzionalità di modifica HTML WebBrowser \(vedere [CHtmlEditCtrl](../../mfc/reference/chtmleditctrl-class.md) e [CHtmlEditView](../../mfc/reference/chtmleditview-class.md)\).  
  
## Gerarchia di ereditarietà  
 `CHtmlEditCtrlBase`  
  
## Requisiti  
 **Header:** afxhtml.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Esempio HTMLEdit](../../top/visual-cpp-samples.md)
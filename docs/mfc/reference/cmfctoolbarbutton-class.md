---
title: "CMFCToolBarButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolBarButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarButton class"
ms.assetid: 8a6ecffb-86b0-4f5c-8211-a9146b463efd
caps.latest.revision: 34
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 36
---
# CMFCToolBarButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità del pulsante le barre degli strumenti.  
  
## Sintassi  
  
```  
class CMFCToolBarButton : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarButton::CMFCToolBarButton](../Topic/CMFCToolBarButton::CMFCToolBarButton.md)|Costrutti e inizializza un oggetto `CMFCToolBarButton`.|  
|`CMFCToolBarButton::~CMFCToolBarButton`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarButton::CanBeDropped](../Topic/CMFCToolBarButton::CanBeDropped.md)|Specifica se un utente può inserire un pulsante di una barra degli strumenti o il menu durante la personalizzazione.|  
|[CMFCToolBarButton::CanBeStored](../Topic/CMFCToolBarButton::CanBeStored.md)|Specifica se il pulsante può essere archiviato.|  
|[CMFCToolBarButton::CanBeStretched](../Topic/CMFCToolBarButton::CanBeStretched.md)|Specifica se un utente può contenere il pulsante durante la personalizzazione.|  
|[CMFCToolBarButton::CompareWith](../Topic/CMFCToolBarButton::CompareWith.md)|Confronta questa istanza di con l'oggetto specificato `CMFCToolBarButton`.|  
|[CMFCToolBarButton::CopyFrom](../Topic/CMFCToolBarButton::CopyFrom.md)|Copiare le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente.|  
|[CMFCToolBarButton::CreateFromOleData](../Topic/CMFCToolBarButton::CreateFromOleData.md)|Crea un oggetto `CMFCToolBarButton` dall'oggetto fornito `COleDataObject`.|  
|`CMFCToolBarButton::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CMFCToolBarButton::EnableWindow](../Topic/CMFCToolBarButton::EnableWindow.md)|Abilita o disabilita il mouse e l'input della tastiera.|  
|[CMFCToolBarButton::ExportToMenuButton](../Topic/CMFCToolBarButton::ExportToMenuButton.md)|Le copie il testo del pulsante della barra degli strumenti a un menu.|  
|[CMFCToolBarButton::GetClipboardFormat](../Topic/CMFCToolBarButton::GetClipboardFormat.md)|Recupera il formato degli Appunti globale per l'applicazione.|  
|[CMFCToolBarButton::GetHwnd](../Topic/CMFCToolBarButton::GetHwnd.md)|Recupera l'handle della finestra associata al pulsante della barra degli strumenti.|  
|[CMFCToolBarButton::GetImage](../Topic/CMFCToolBarButton::GetImage.md)|Recupera l'indice di immagine del pulsante.|  
|[CMFCToolBarButton::GetInvalidateRect](../Topic/CMFCToolBarButton::GetInvalidateRect.md)|Recupera l'area dell'area client del pulsante da ridisegnare.|  
|[CMFCToolBarButton::GetParentWnd](../Topic/CMFCToolBarButton::GetParentWnd.md)|Recupera la finestra padre del pulsante.|  
|[CMFCToolBarButton::GetProtectedCommands](../Topic/CMFCToolBarButton::GetProtectedCommands.md)|Recupera l'elenco dei controlli che l'utente non può personalizzare.|  
|[CMFCToolBarButton::GetTextSize](../Topic/CMFCToolBarButton::GetTextSize.md)|Recupera la dimensione del testo del pulsante.|  
|[CMFCToolBarButton::HasFocus](../Topic/CMFCToolBarButton::HasFocus.md)|Determina se il pulsante presenta lo stato attivo per l'input corrente.|  
|[CMFCToolBarButton::HaveHotBorder](../Topic/CMFCToolBarButton::HaveHotBorder.md)|Determina se un bordo del pulsante viene visualizzato quando un utente seleziona il pulsante.|  
|[CMFCToolBarButton::IsDrawImage](../Topic/CMFCToolBarButton::IsDrawImage.md)|Determina se un'immagine viene visualizzato sul pulsante.|  
|[CMFCToolBarButton::IsDrawText](../Topic/CMFCToolBarButton::IsDrawText.md)|Determina se un'etichetta di testo viene visualizzato sul pulsante.|  
|[CMFCToolBarButton::IsDroppedDown](../Topic/CMFCToolBarButton::IsDroppedDown.md)|Determina se il pulsante viene visualizzato un sottomenu.|  
|[CMFCToolBarButton::IsEditable](../Topic/CMFCToolBarButton::IsEditable.md)|Determina se il pulsante può essere personalizzato.|  
|[CMFCToolBarButton::IsExtraSize](../Topic/CMFCToolBarButton::IsExtraSize.md)|Determina se il pulsante può essere visualizzata con un bordo esteso.|  
|[CMFCToolBarButton::IsFirstInGroup](../Topic/CMFCToolBarButton::IsFirstInGroup.md)|Determina se il pulsante nella prima posizione nel gruppo di pulsanti.|  
|[CMFCToolBarButton::IsHidden](../Topic/CMFCToolBarButton::IsHidden.md)|Determina se il pulsante è nascosto.|  
|[CMFCToolBarButton::IsHorizontal](../Topic/CMFCToolBarButton::IsHorizontal.md)|Determina se il pulsante si trova in una barra degli strumenti orizzontale.|  
|[CMFCToolBarButton::IsLastInGroup](../Topic/CMFCToolBarButton::IsLastInGroup.md)|Specifica se il pulsante è nell'ultima posizione nel gruppo di pulsanti.|  
|[CMFCToolBarButton::IsLocked](../Topic/CMFCToolBarButton::IsLocked.md)|Determina se il pulsante in una barra degli strumenti personalizzabile \(non\) bloccata.|  
|[CMFCToolBarButton::IsOwnerOf](../Topic/CMFCToolBarButton::IsOwnerOf.md)|Determina se il pulsante è il proprietario di handle della finestra fornito.|  
|[CMFCToolBarButton::IsVisible](../Topic/CMFCToolBarButton::IsVisible.md)|Determina se il pulsante nella barra degli strumenti è visibile.|  
|[CMFCToolBarButton::IsWindowVisible](../Topic/CMFCToolBarButton::IsWindowVisible.md)|Determina se l'handle della finestra sottostanti del pulsante sono visibili.|  
|[CMFCToolBarButton::NotifyCommand](../Topic/CMFCToolBarButton::NotifyCommand.md)|Specifica se il pulsante elabora il messaggio [WM\_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591).|  
|[CMFCToolBarButton::OnAddToCustomizePage](../Topic/CMFCToolBarButton::OnAddToCustomizePage.md)|Chiamato dal framework quando il pulsante viene aggiunto a una finestra di dialogo **Personalizza**.|  
|[CMFCToolBarButton::OnBeforeDrag](../Topic/CMFCToolBarButton::OnBeforeDrag.md)|Specifica se il pulsante è possibile trascinare.|  
|[CMFCToolBarButton::OnBeforeDrop](../Topic/CMFCToolBarButton::OnBeforeDrop.md)|Specifica se un utente può rilasciare il pulsante della barra degli strumenti di destinazione.|  
|[CMFCToolBarButton::OnCalculateSize](../Topic/CMFCToolBarButton::OnCalculateSize.md)|Chiamato dal framework per calcolare la dimensione del pulsante per lo stato specificato di ancoraggio e di contesto di dispositivo.|  
|[CMFCToolBarButton::OnCancelMode](../Topic/CMFCToolBarButton::OnCancelMode.md)|Chiamato dal framework per gestire il messaggio [WM\_CANCELMODE](http://msdn.microsoft.com/library/windows/desktop/ms632615).|  
|[CMFCToolBarButton::OnChangeParentWnd](../Topic/CMFCToolBarButton::OnChangeParentWnd.md)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.|  
|[CMFCToolBarButton::OnClick](../Topic/CMFCToolBarButton::OnClick.md)|Chiamato dal framework quando l'utente fa clic sul pulsante del mouse.|  
|[CMFCToolBarButton::OnClickUp](../Topic/CMFCToolBarButton::OnClickUp.md)|Chiamato dal framework quando l'utente rilascia il pulsante del mouse.|  
|[CMFCToolBarButton::OnContextHelp](../Topic/CMFCToolBarButton::OnContextHelp.md)|Chiamato dal framework quando la barra degli strumenti padre gestisce un messaggio `WM_HELPHITTEST`.|  
|[CMFCToolBarButton::OnCtlColor](../Topic/CMFCToolBarButton::OnCtlColor.md)|Chiamato dal framework quando la barra degli strumenti padre gestisce un messaggio `WM_CTLCOLOR`.|  
|[CMFCToolBarButton::OnCustomizeMenu](../Topic/CMFCToolBarButton::OnCustomizeMenu.md)|Consente del pulsante modificare il menu fornito quando l'applicazione visualizza un menu di scelta rapida nella barra degli strumenti padre.|  
|[CMFCToolBarButton::OnDblClk](../Topic/CMFCToolBarButton::OnDblClk.md)|Chiamato dal framework quando la barra degli strumenti padre gestisce un messaggio [WM\_LBUTTONDBLCLK](http://msdn.microsoft.com/library/windows/desktop/ms645606).|  
|[CMFCToolBarButton::OnDraw](../Topic/CMFCToolBarButton::OnDraw.md)|Chiamato dal framework per disegnare il pulsante utilizzando gli stili e le opzioni specificate.|  
|[CMFCToolBarButton::OnDrawOnCustomizeList](../Topic/CMFCToolBarButton::OnDrawOnCustomizeList.md)|Chiamato dal framework per disegnare il pulsante nel riquadro **Comandi** la finestra di dialogo **Personalizza**.|  
|[CMFCToolBarButton::OnGetCustomToolTipText](../Topic/CMFCToolBarButton::OnGetCustomToolTipText.md)|Chiamato dal framework per recuperare il testo personalizzato di descrizione comando per il pulsante.|  
|[CMFCToolBarButton::OnGlobalFontsChanged](../Topic/CMFCToolBarButton::OnGlobalFontsChanged.md)|Chiamato dal framework quando il tipo globale è stato modificato.|  
|[CMFCToolBarButton::OnMove](../Topic/CMFCToolBarButton::OnMove.md)|Chiamato dal framework quando la barra degli strumenti padre viene spostato.|  
|[CMFCToolBarButton::OnShow](../Topic/CMFCToolBarButton::OnShow.md)|Chiamato dal framework quando il pulsante diventa visibile o invisibile.|  
|[CMFCToolBarButton::OnSize](../Topic/CMFCToolBarButton::OnSize.md)|Chiamato dal framework quando la barra degli strumenti padre viene modificato la dimensione o la posizione e questa modifica richiede il pulsante di modificare le dimensioni.|  
|[CMFCToolBarButton::OnToolHitTest](../Topic/CMFCToolBarButton::OnToolHitTest.md)|Chiamato dal framework quando la barra degli strumenti padre deve determinare se un punto si trova nel rettangolo di delimitazione del pulsante.|  
|[CMFCToolBarButton::OnUpdateToolTip](../Topic/CMFCToolBarButton::OnUpdateToolTip.md)|Chiamato dal framework quando la barra degli strumenti padre aggiorna il testo di descrizione comando.|  
|[CMFCToolBarButton::PrepareDrag](../Topic/CMFCToolBarButton::PrepareDrag.md)|Chiamato dal framework quando il pulsante sta per eseguire un'operazione di trascinamento.|  
|[CMFCToolBarButton::Rect](../Topic/CMFCToolBarButton::Rect.md)|Recupera il rettangolo di delimitazione del pulsante.|  
|[CMFCToolBarButton::ResetImageToDefault](../Topic/CMFCToolBarButton::ResetImageToDefault.md)|Imposta il valore predefinito l'immagine associata al pulsante.|  
|[CMFCToolBarButton::SaveBarState](../Topic/CMFCToolBarButton::SaveBarState.md)|Salvare lo stato del pulsante della barra degli strumenti.|  
|[CMFCToolBarButton::Serialize](../Topic/CMFCToolBarButton::Serialize.md)|Legge l'oggetto da un archivio o scritto in un archivio.  \(Override [CObject::Serialize](../Topic/CObject::Serialize.md)\).|  
|[CMFCToolBarButton::SetACCData](../Topic/CMFCToolBarButton::SetACCData.md)|Popola l'oggetto fornito `CAccessibilityData` con i dati di accessibilità il pulsante della barra degli strumenti.|  
|[CMFCToolBarButton::SetClipboardFormatName](../Topic/CMFCToolBarButton::SetClipboardFormatName.md)|Rinomina il formato degli Appunti globale.|  
|[CMFCToolBarButton::SetImage](../Topic/CMFCToolBarButton::SetImage.md)|Imposta l'indice di immagine del pulsante.|  
|[CMFCToolBarButton::SetProtectedCommands](../Topic/CMFCToolBarButton::SetProtectedCommands.md)|Imposta l'elenco di controlli che l'utente non può personalizzare.|  
|[CMFCToolBarButton::SetRadio](../Topic/CMFCToolBarButton::SetRadio.md)|Chiamato dal framework quando un pulsante cambia lo stato di selezione.|  
|[CMFCToolBarButton::SetRect](../Topic/CMFCToolBarButton::SetRect.md)|Imposta il rettangolo di delimitazione del pulsante.|  
|[CMFCToolBarButton::SetStyle](../Topic/CMFCToolBarButton::SetStyle.md)|Imposta lo stile del pulsante.|  
|[CMFCToolBarButton::SetVisible](../Topic/CMFCToolBarButton::SetVisible.md)|Specifica se il pulsante è visibile.|  
|[CMFCToolBarButton::Show](../Topic/CMFCToolBarButton::Show.md)|Mostra o nasconde il pulsante.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarButton::m\_bImage](../Topic/CMFCToolBarButton::m_bImage.md)|Specifica se un'immagine viene visualizzato sul pulsante.|  
|[CMFCToolBarButton::m\_bText](../Topic/CMFCToolBarButton::m_bText.md)|Specifica se un'etichetta di testo viene visualizzato sul pulsante.|  
|[CMFCToolBarButton::m\_bTextBelow](../Topic/CMFCToolBarButton::m_bTextBelow.md)|Specifica se l'etichetta di testo visualizzato al di sotto dell'immagine sul pulsante.|  
|[CMFCToolBarButton::m\_bUserButton](../Topic/CMFCToolBarButton::m_bUserButton.md)|Specifica se il pulsante è un'immagine definita dall'utente.|  
|[CMFCToolBarButton::m\_bWholeText](../Topic/CMFCToolBarButton::m_bWholeText.md)|Specifica se il pulsante visualizza un'etichetta full\-text anche se non rientra nel rettangolo di delimitazione.|  
|[CMFCToolBarButton::m\_bWrap](../Topic/CMFCToolBarButton::m_bWrap.md)|Specifica se il pulsante accanto a un separatore verrà inserito nella riga successiva.|  
|[CMFCToolBarButton::m\_bWrapText](../Topic/CMFCToolBarButton::m_bWrapText.md)|Specifica se le etichette di testo su più righe sono abilitate.|  
|[CMFCToolBarButton::m\_nID](../Topic/CMFCToolBarButton::m_nID.md)|L'id di comando del pulsante.|  
|[CMFCToolBarButton::m\_nStyle](../Topic/CMFCToolBarButton::m_nStyle.md)|Lo stile del pulsante.|  
|[CMFCToolBarButton::m\_strText](../Topic/CMFCToolBarButton::m_strText.md)|L'etichetta di testo del pulsante.|  
  
## Note  
 Un oggetto `CMFCToolbarButton` è un controllo che si trova in una barra degli strumenti.  Il comportamento simile a quello di un pulsante.  È possibile assegnare un'immagine e un'etichetta di testo a questo oggetto.  Un pulsante della barra degli strumenti può essere un ID di comando  Quando l'utente fa clic sul pulsante della barra degli strumenti, il framework esegue il comando che questo ID specifica.  
  
 In genere, i pulsanti della barra degli strumenti possono essere personalizzati: l'utente può trascinare i pulsanti di una barra degli strumenti a un'altra e copia, incolla, eliminare e modificare le etichette di testo e le immagini.  Per impedire all'utente di personalizzare la barra degli strumenti, è possibile bloccare la barra degli strumenti in due modi.  O imposta il flag `bLocked` a `TRUE` quando si chiama [CMFCToolBar::LoadToolBar](../Topic/CMFCToolBar::LoadToolBar.md), o aggiungere l'id di comando di un pulsante all'elenco globale dei controlli protetti tramite il metodo [CMFCToolBarButton::SetProtectedCommands](../Topic/CMFCToolBarButton::SetProtectedCommands.md).  
  
 `CMFCToolBarButton` oggetti e le immagini dalle raccolte globali di immagini della barra degli strumenti nell'applicazione.  Queste raccolte vengono gestite dalla barra degli strumenti padre, [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md).  Per ulteriori informazioni, vedere [CMFCToolBarImages Class](../../mfc/reference/cmfctoolbarimages-class.md).  
  
 Quando l'utente fa clic su un pulsante della barra degli strumenti, la barra degli strumenti padre elabora il messaggio del mouse e passa le azioni appropriate al pulsante.  Se il pulsante è un ID di comando valido, la barra degli strumenti padre invia il messaggio `WM_COMMAND` al frame padre.  
  
 La classe `CMFCToolBarButton` è la classe base per altre classi del pulsante della barra degli strumenti, come [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md), [CMFCToolBarEditBoxButton Class](../../mfc/reference/cmfctoolbareditboxbutton-class.md)e [CMFCToolBarComboBoxButton Class](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come configurare un oggetto `CMFCToolBarButton` utilizzando i diversi metodi nella classe `CMFCToolBarButton`.  Nell'esempio viene illustrato come abilitare il mouse e l'input della tastiera, impostare il contenuto di immagine del pulsante, impostare il rettangolo di delimitazione del pulsante e rendere visibile il pulsante.  Questo frammento di codice fa parte [Esempio di controllo tab](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_TabControl#1](../../mfc/reference/codesnippet/CPP/cmfctoolbarbutton-class_1.cpp)]  
[!code-cpp[NVC_MFC_TabControl#2](../../mfc/reference/codesnippet/CPP/cmfctoolbarbutton-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
## Requisiti  
 **intestazione:** afxtoolbarbutton.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBarImages Class](../../mfc/reference/cmfctoolbarimages-class.md)   
 [CMFCToolBarButton::OnClick](../Topic/CMFCToolBarButton::OnClick.md)   
 [CMFCToolBarButton::NotifyCommand](../Topic/CMFCToolBarButton::NotifyCommand.md)
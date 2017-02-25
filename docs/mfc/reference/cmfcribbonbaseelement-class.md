---
title: "CMFCRibbonBaseElement Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonBaseElement"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonBaseElement class"
ms.assetid: 419ea91b-5062-44cc-b0a3-f87d29566f62
caps.latest.revision: 34
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 36
---
# CMFCRibbonBaseElement Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCRibbonBaseElement` è la classe base per tutti gli elementi che è possibile aggiungere a [barra della barra multifunzione](../../mfc/reference/cmfcribbonbar-class.md).  Esempi di elementi della barra multifunzione sono pulsanti della barra multifunzione, caselle di controllo della barra multifunzione e caselle combinate della barra multifunzione.  
  
## Sintassi  
  
```  
class CMFCRibbonBaseElement : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonBaseElement`|Costruisce un oggetto `CMFCRibbonBaseElement`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonBaseElement::AddToKeyList](../Topic/CMFCRibbonBaseElement::AddToKeyList.md)|Aggiunge un keytip per l'elemento barra multifunzione in una matrice dei suggerimenti tasti.|  
|[CMFCRibbonBaseElement::AddToListBox](../Topic/CMFCRibbonBaseElement::AddToListBox.md)|Aggiunge un elemento barra multifunzione alla casella di riepilogo specificata controlli barra multifunzione.|  
|[CMFCRibbonBaseElement::CanBeAddedToQuickAccessToolBar](../Topic/CMFCRibbonBaseElement::CanBeAddedToQuickAccessToolBar.md)|Indica se l'elemento barra multifunzione può essere aggiunto alla barra degli strumenti di accesso rapido.|  
|[CMFCRibbonBaseElement::CanBeCompacted](../Topic/CMFCRibbonBaseElement::CanBeCompacted.md)|Indica se la dimensione dell'elemento barra multifunzione può essere compressa.|  
|[CMFCRibbonBaseElement::CanBeStretched](../Topic/CMFCRibbonBaseElement::CanBeStretched.md)|Indica se l'altezza dell'elemento barra multifunzione può aumentare in verticale all'altezza di una riga della barra multifunzione.|  
|[CMFCRibbonBaseElement::CanBeStretchedHorizontally](../Topic/CMFCRibbonBaseElement::CanBeStretchedHorizontally.md)|Indica se la larghezza dell'elemento barra multifunzione può cambiare.|  
|[CMFCRibbonBaseElement::CleanUpSizes](../Topic/CMFCRibbonBaseElement::CleanUpSizes.md)|Pulisce le impostazioni di dimensioni per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::ClosePopupMenu](../Topic/CMFCRibbonBaseElement::ClosePopupMenu.md)|Chiude il menu di scelta rapida per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::CopyFrom](../Topic/CMFCRibbonBaseElement::CopyFrom.md)|Copiare lo stato `CMFCRibbonBaseElement` specificato all'oggetto corrente.|  
|[CMFCRibbonBaseElement::DestroyCtrl](../Topic/CMFCRibbonBaseElement::DestroyCtrl.md)|Elimina l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::DrawImage](../Topic/CMFCRibbonBaseElement::DrawImage.md)|L'immagine viene disegnata per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::Find](../Topic/CMFCRibbonBaseElement::Find.md)|Restituisce il puntatore specificato all'elemento barra multifunzione indica se l'oggetto corrente.|  
|[CMFCRibbonBaseElement::FindByData](../Topic/CMFCRibbonBaseElement::FindByData.md)|Recupera un puntatore all'elemento barra multifunzione se contiene i dati specificati.|  
|[CMFCRibbonBaseElement::FindByID](../Topic/CMFCRibbonBaseElement::FindByID.md)|Recupera un puntatore all'elemento barra multifunzione se tale elemento è identificato dall'ID di comando|  
|[CMFCRibbonBaseElement::FindByOriginal](../Topic/CMFCRibbonBaseElement::FindByOriginal.md)|Recupera un puntatore all'elemento barra multifunzione se il relativo elemento originale della barra multifunzione corrisponde all'elemento specificato della barra multifunzione.|  
|[CMFCRibbonBaseElement::GetCompactSize](../Topic/CMFCRibbonBaseElement::GetCompactSize.md)|Restituisce la dimensione compressa dell'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetData](../Topic/CMFCRibbonBaseElement::GetData.md)|Recupera dati definiti dall'utente associati all'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetDescription](../Topic/CMFCRibbonBaseElement::GetDescription.md)|Restituisce la descrizione dell'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetDroppedDown](../Topic/CMFCRibbonBaseElement::GetDroppedDown.md)|Recupera un puntatore all'elemento barra multifunzione se il menu di scelta rapida viene rilasciato verso il basso.|  
|[CMFCRibbonBaseElement::GetElements](../Topic/CMFCRibbonBaseElement::GetElements.md)|Aggiunge l'elemento della barra multifunzione corrente nella matrice specificata.|  
|[CMFCRibbonBaseElement::GetElementsByID](../Topic/CMFCRibbonBaseElement::GetElementsByID.md)|Aggiunge l'elemento della barra multifunzione corrente nella matrice specificata se l'elemento corrente della barra multifunzione contiene l'ID di comando|  
|[CMFCRibbonBaseElement::GetHighlighted](../Topic/CMFCRibbonBaseElement::GetHighlighted.md)|Recupera un puntatore all'elemento barra multifunzione se è evidenziato.|  
|[CMFCRibbonBaseElement::GetID](../Topic/CMFCRibbonBaseElement::GetID.md)|Restituisce l'id di comando dell'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetImageSize](../Topic/CMFCRibbonBaseElement::GetImageSize.md)|Restituisce le dimensioni dell'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetIntermediateSize](../Topic/CMFCRibbonBaseElement::GetIntermediateSize.md)|Restituisce la dimensione elemento della barra multifunzione nello stato temporaneo.|  
|[CMFCRibbonBaseElement::GetKeys](../Topic/CMFCRibbonBaseElement::GetKeys.md)|Restituisce il keytip associato all'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetKeyTipRect](../Topic/CMFCRibbonBaseElement::GetKeyTipRect.md)|Recupera il limite del rettangolo keytip per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetKeyTipSize](../Topic/CMFCRibbonBaseElement::GetKeyTipSize.md)|Recupera la dimensione del testo del keytip.|  
|[CMFCRibbonBaseElement::GetLocationInGroup](../Topic/CMFCRibbonBaseElement::GetLocationInGroup.md)|Indica la posizione dell'elemento barra multifunzione in un gruppo della barra multifunzione.|  
|[CMFCRibbonBaseElement::GetMenuKeys](../Topic/CMFCRibbonBaseElement::GetMenuKeys.md)|Restituisce i suggerimenti tasti associati a un pulsante.|  
|[CMFCRibbonBaseElement::GetNotifyID](../Topic/CMFCRibbonBaseElement::GetNotifyID.md)|Recupera l'id di comando di notifica per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetOriginal](../Topic/CMFCRibbonBaseElement::GetOriginal.md)|Recupera l'elemento originale della barra multifunzione.|  
|[CMFCRibbonBaseElement::GetParentCategory](../Topic/CMFCRibbonBaseElement::GetParentCategory.md)|Recupera la categoria della barra multifunzione per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetParentPanel](../Topic/CMFCRibbonBaseElement::GetParentPanel.md)|Recupera il pannello della barra multifunzione contenente l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetParentRibbonBar](../Topic/CMFCRibbonBaseElement::GetParentRibbonBar.md)|Recupera la barra padre della barra multifunzione per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetParentWnd](../Topic/CMFCRibbonBaseElement::GetParentWnd.md)|Recupera la finestra padre per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetPressed](../Topic/CMFCRibbonBaseElement::GetPressed.md)|Recupera un puntatore all'elemento barra multifunzione se l'utente attualmente lo premere.|  
|[CMFCRibbonBaseElement::GetQuickAccessToolBarID](../Topic/CMFCRibbonBaseElement::GetQuickAccessToolBarID.md)|Recupera l'id di comando dell'elemento barra multifunzione quando si trova nella barra degli strumenti di accesso rapido.|  
|[CMFCRibbonBaseElement::GetRect](../Topic/CMFCRibbonBaseElement::GetRect.md)|Restituisce il rettangolo di delimitazione dell'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetRegularSize](../Topic/CMFCRibbonBaseElement::GetRegularSize.md)|Restituisce la dimensione normale dell'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetSize](../Topic/CMFCRibbonBaseElement::GetSize.md)|Restituisce le dimensioni correnti dell'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetText](../Topic/CMFCRibbonBaseElement::GetText.md)|Restituisce il testo associata con l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetToolTipText](../Topic/CMFCRibbonBaseElement::GetToolTipText.md)|Testo di descrizione comandi viene restituito dell'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::GetTopLevelRibbonBar](../Topic/CMFCRibbonBaseElement::GetTopLevelRibbonBar.md)|Recupera la barra multifunzione di livello superiore per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::HasCompactMode](../Topic/CMFCRibbonBaseElement::HasCompactMode.md)|Specifica se l'elemento barra multifunzione presenta una modalità compressa.|  
|[CMFCRibbonBaseElement::HasFocus](../Topic/CMFCRibbonBaseElement::HasFocus.md)|Indica se l'elemento padre ha lo stato attivo.|  
|[CMFCRibbonBaseElement::HasIntermediateMode](../Topic/CMFCRibbonBaseElement::HasIntermediateMode.md)|Specifica se l'elemento barra multifunzione presenta una modalità intermedia.|  
|[CMFCRibbonBaseElement::HasLargeMode](../Topic/CMFCRibbonBaseElement::HasLargeMode.md)|Specifica se l'elemento barra multifunzione presenta un modo efficace.|  
|[CMFCRibbonBaseElement::HasMenu](../Topic/CMFCRibbonBaseElement::HasMenu.md)|Indica se l'elemento barra multifunzione presenta un menu.|  
|[CMFCRibbonBaseElement::HitTest](../Topic/CMFCRibbonBaseElement::HitTest.md)|Recupera un puntatore all'elemento barra multifunzione se il punto specificato si trova in.|  
|[CMFCRibbonBaseElement::IsAlignByColumn](../Topic/CMFCRibbonBaseElement::IsAlignByColumn.md)|Indica se l'elemento barra multifunzione viene allineato verticalmente con altri elementi della barra multifunzione.|  
|[CMFCRibbonBaseElement::IsAlwaysLargeImage](../Topic/CMFCRibbonBaseElement::IsAlwaysLargeImage.md)|Indica se la dimensione dell'elemento barra multifunzione è sempre grande.|  
|[CMFCRibbonBaseElement::IsAutoRepeatMode](../Topic/CMFCRibbonBaseElement::IsAutoRepeatMode.md)|Indica se l'elemento barra multifunzione in modalità automatica di ripetizione.|  
|[CMFCRibbonBaseElement::IsChecked](../Topic/CMFCRibbonBaseElement::IsChecked.md)|Specifica se l'elemento barra multifunzione viene controllato.|  
|[CMFCRibbonBaseElement::IsCompactMode](../Topic/CMFCRibbonBaseElement::IsCompactMode.md)|Specifica se l'elemento barra multifunzione è in modalità compressa.|  
|[CMFCRibbonBaseElement::IsDefaultMenuLook](../Topic/CMFCRibbonBaseElement::IsDefaultMenuLook.md)||  
|[CMFCRibbonBaseElement::IsDisabled](../Topic/CMFCRibbonBaseElement::IsDisabled.md)|Specifica se l'elemento barra multifunzione è disabilitato.|  
|[CMFCRibbonBaseElement::IsDroppedDown](../Topic/CMFCRibbonBaseElement::IsDroppedDown.md)|Determina se l'elemento barra multifunzione visualizzare un menu di scelta rapida e viene rilasciato verso il basso.|  
|[CMFCRibbonBaseElement::IsFocused](../Topic/CMFCRibbonBaseElement::IsFocused.md)|Specifica se l'elemento barra multifunzione presenta lo stato attivo.|  
|[CMFCRibbonBaseElement::IsGalleryIcon](../Topic/CMFCRibbonBaseElement::IsGalleryIcon.md)|Indica se l'elemento barra multifunzione è contenuto in una raccolta di barre multifunzione.|  
|[CMFCRibbonBaseElement::IsHighlighted](../Topic/CMFCRibbonBaseElement::IsHighlighted.md)|Specifica se l'elemento barra multifunzione è evidenziato.|  
|[CMFCRibbonBaseElement::IsIntermediateMode](../Topic/CMFCRibbonBaseElement::IsIntermediateMode.md)|Indica se l'immagine corrente per l'elemento barra multifunzione è dimensione intermedia.|  
|[CMFCRibbonBaseElement::IsLargeMode](../Topic/CMFCRibbonBaseElement::IsLargeMode.md)|Indica se l'immagine corrente per l'elemento barra multifunzione è grande.|  
|[CMFCRibbonBaseElement::IsMenuMode](../Topic/CMFCRibbonBaseElement::IsMenuMode.md)|Indica se l'elemento barra multifunzione è contenuto in un menu.|  
|[CMFCRibbonBaseElement::IsPressed](../Topic/CMFCRibbonBaseElement::IsPressed.md)|Indica se l'utente ha fatto clic l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::IsQATMode](../Topic/CMFCRibbonBaseElement::IsQATMode.md)|Indica se l'elemento barra multifunzione è contenuto nella barra degli strumenti di accesso rapido.|  
|[CMFCRibbonBaseElement::IsSeparator](../Topic/CMFCRibbonBaseElement::IsSeparator.md)|Indica se l'elemento barra multifunzione è un separatore visualizzato.|  
|[CMFCRibbonBaseElement::IsShowGroupBorder](../Topic/CMFCRibbonBaseElement::IsShowGroupBorder.md)|Indica se l'elemento barra multifunzione è contenuto in un gruppo visualizzato un bordo comune.|  
|[CMFCRibbonBaseElement::IsShowTooltipOnBottom](../Topic/CMFCRibbonBaseElement::IsShowTooltipOnBottom.md)|Indica se la descrizione comandi viene visualizzata sotto l'elemento della barra multifunzione.|  
|[CMFCRibbonBaseElement::IsTabStop](../Topic/CMFCRibbonBaseElement::IsTabStop.md)|Indica se l'elemento barra multifunzione può essere selezionato dalla tastiera.|  
|[CMFCRibbonBaseElement::IsTextAlwaysOnRight](../Topic/CMFCRibbonBaseElement::IsTextAlwaysOnRight.md)|Indica se il testo per l'elemento barra multifunzione visualizzate a destra.|  
|[CMFCRibbonBaseElement::IsVisible](../Topic/CMFCRibbonBaseElement::IsVisible.md)|Indica se l'elemento barra multifunzione attualmente visualizzate.|  
|[CMFCRibbonBaseElement::IsWholeRowHeight](../Topic/CMFCRibbonBaseElement::IsWholeRowHeight.md)|Indica se il heigth visualizzato dell'elemento barra multifunzione è identico all'altezza del pannello della barra multifunzione che la contiene.|  
|[CMFCRibbonBaseElement::NotifyCommand](../Topic/CMFCRibbonBaseElement::NotifyCommand.md)|Invia una notifica di comando alla finestra padre dell'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::NotifyHighlightListItem](../Topic/CMFCRibbonBaseElement::NotifyHighlightListItem.md)|Indica alla finestra padre della barra multifunzione quando un utente evidenzia un elemento barra multifunzione che si trova in un elenco.|  
|[CMFCRibbonBaseElement::OnAddToQAToolbar](../Topic/CMFCRibbonBaseElement::OnAddToQAToolbar.md)|Aggiunge l'elemento barra multifunzione alla barra degli strumenti specificata di accesso rapido.|  
|[CMFCRibbonBaseElement::OnAfterChangeRect](../Topic/CMFCRibbonBaseElement::OnAfterChangeRect.md)|Aggiorna la descrizione comando per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::OnAutoRepeat](../Topic/CMFCRibbonBaseElement::OnAutoRepeat.md)|Aggiorna l'elemento barra multifunzione in risposta all'input continuo.|  
|[CMFCRibbonBaseElement::OnCalcTextSize](../Topic/CMFCRibbonBaseElement::OnCalcTextSize.md)|Calcola la dimensione del testo per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::OnChangeMenuHighlight](../Topic/CMFCRibbonBaseElement::OnChangeMenuHighlight.md)|Chiamato dal framework quando le modifiche di evidenziazione in un elemento barra multifunzione che si trova in un menu.|  
|[CMFCRibbonBaseElement::OnDraw](../Topic/CMFCRibbonBaseElement::OnDraw.md)|Chiamato dal framework per disegnare l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::OnDrawKeyTip](../Topic/CMFCRibbonBaseElement::OnDrawKeyTip.md)|Chiamato dal framework per disegnare il keytip per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::OnDrawMenuImage](../Topic/CMFCRibbonBaseElement::OnDrawMenuImage.md)|Chiamato dal framework quando l'immagine del menu per l'elemento barra multifunzione viene disegnata.|  
|[CMFCRibbonBaseElement::OnDrawOnList](../Topic/CMFCRibbonBaseElement::OnDrawOnList.md)|Chiamato dal framework per disegnare l'elemento barra multifunzione in una casella di riepilogo dei controlli.|  
|[CMFCRibbonBaseElement::OnKey](../Topic/CMFCRibbonBaseElement::OnKey.md)|Chiamato dal framework quando l'utente preme un keytip e l'elemento barra multifunzione presenta lo stato attivo.|  
|[CMFCRibbonBaseElement::OnMenuKey](../Topic/CMFCRibbonBaseElement::OnMenuKey.md)||  
|[CMFCRibbonBaseElement::OnRTLChanged](../Topic/CMFCRibbonBaseElement::OnRTLChanged.md)|Chiamato dal framework quando il layout modifica la direzione.|  
|[CMFCRibbonBaseElement::OnShow](../Topic/CMFCRibbonBaseElement::OnShow.md)|Chiamato dal framework per visualizzare o nascondere l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::OnShowPopupMenu](../Topic/CMFCRibbonBaseElement::OnShowPopupMenu.md)|Chiamato dal framework quando l'elemento barra multifunzione viene utilizzata per visualizzare un menu di scelta rapida.|  
|[CMFCRibbonBaseElement::PostMenuCommand](../Topic/CMFCRibbonBaseElement::PostMenuCommand.md)||  
|[CMFCRibbonBaseElement::Redraw](../Topic/CMFCRibbonBaseElement::Redraw.md)|Aggiorna la visualizzazione per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetACCData](../Topic/CMFCRibbonBaseElement::SetACCData.md)|Imposta i dati di accessibilità per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetCompactMode](../Topic/CMFCRibbonBaseElement::SetCompactMode.md)|Impostare le dimensioni di visualizzazione per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetData](../Topic/CMFCRibbonBaseElement::SetData.md)|Associa un elemento dati con l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetDefaultMenuLook](../Topic/CMFCRibbonBaseElement::SetDefaultMenuLook.md)||  
|[CMFCRibbonBaseElement::SetDescription](../Topic/CMFCRibbonBaseElement::SetDescription.md)|Imposta la descrizione per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetID](../Topic/CMFCRibbonBaseElement::SetID.md)|Impostare l'id di comando dell'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetInitialMode](../Topic/CMFCRibbonBaseElement::SetInitialMode.md)|Impostare le dimensioni di visualizzazione iniziali per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetKeys](../Topic/CMFCRibbonBaseElement::SetKeys.md)|Imposta un keytip per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetOriginal](../Topic/CMFCRibbonBaseElement::SetOriginal.md)|Imposta l'elemento originale della barra multifunzione per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetParentCategory](../Topic/CMFCRibbonBaseElement::SetParentCategory.md)|Imposta la categoria padre per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetParentMenu](../Topic/CMFCRibbonBaseElement::SetParentMenu.md)|Imposta il contenitore padre del menu per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetParentRibbonBar](../Topic/CMFCRibbonBaseElement::SetParentRibbonBar.md)|Imposta la barra padre della barra multifunzione per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetRect](../Topic/CMFCRibbonBaseElement::SetRect.md)|Imposta le dimensioni visualizzare fot che il rettangolo per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetText](../Topic/CMFCRibbonBaseElement::SetText.md)|Imposta il testo per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetTextAlwaysOnRight](../Topic/CMFCRibbonBaseElement::SetTextAlwaysOnRight.md)|Imposta il testo per l'elemento barra multifunzione visualizzate a destra.|  
|[CMFCRibbonBaseElement::SetToolTipText](../Topic/CMFCRibbonBaseElement::SetToolTipText.md)|Imposta il testo di descrizione comando per l'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::SetVisible](../Topic/CMFCRibbonBaseElement::SetVisible.md)|Imposta lo stato di visibilità dell'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::StretchHorizontally](../Topic/CMFCRibbonBaseElement::StretchHorizontally.md)|Corretta la larghezza dell'elemento barra multifunzione.|  
|[CMFCRibbonBaseElement::StretchToWholeRow](../Topic/CMFCRibbonBaseElement::StretchToWholeRow.md)|Modificare l'altezza dell'elemento barra multifunzione all'altezza della riga specificata.|  
|[CMFCRibbonBaseElement::UpdateTooltipInfo](../Topic/CMFCRibbonBaseElement::UpdateTooltipInfo.md)|Aggiorna il testo di descrizione comandi utilizzando la risorsa di comando per l'elemento barra multifunzione.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonBaseElement::OnProcessKey](../Topic/CMFCRibbonBaseElement::OnProcessKey.md)|Chiamato dal framework quando l'utente preme un tasto di scelta rapida.|  
|[CMFCRibbonBaseElement::OnSetFocus](../Topic/CMFCRibbonBaseElement::OnSetFocus.md)|Chiamato dal framework quando un elemento barra multifunzione riceve o perde lo stato attivo per l'input.|  
  
## Note  
 La classe `CMFCRibbonBaseElement` definisce le proprietà comuni a tutti gli elementi della barra multifunzione che includono l'id di comando, l'etichetta di testo, il testo di descrizione comando, la descrizione dell'elemento e lo stato \(che può essere incentrato, evidenziato, premuto, disabilitato, selezionare, o essere rilasciati giù\).  
  
 La dimensione dell'immagine di un elemento barra multifunzione viene definita dal membro `RibbonImageType`, che può essere uno dei seguenti valori:  
  
-   `RibbonImageLarge`  
  
-   `RibbonImageSmall`  
  
 A seconda della dimensione, un elemento barra multifunzione viene visualizzata una piccola o immagine grande.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCRibbonBaseElement`.  L'esempio mostra come ottenere l'oggetto `CMFCRibbonBaseElement` da una classe `CMFCRibbonStatusBar`, impostare la descrizione per l'elemento barra multifunzione, impostare il testo, impostare un keytip e impostare il testo di descrizione comando per l'elemento barra multifunzione.  Questo frammento di codice fa parte [Esempio client di disegno](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#8](../../mfc/reference/codesnippet/CPP/cmfcribbonbaseelement-class_1.cpp)]  
[!code-cpp[NVC_MFC_DrawClient#9](../../mfc/reference/codesnippet/CPP/cmfcribbonbaseelement-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
## Requisiti  
 **intestazione:** afxbaseribbonelement.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)
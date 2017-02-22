---
title: "CMFCRibbonGallery Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonGallery"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonGallery class"
ms.assetid: 9734c9c9-981c-4b3f-8c59-264fd41811b4
caps.latest.revision: 28
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 30
---
# CMFCRibbonGallery Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Librerie della barra multifunzione di stile di Office 2007 di risorse.  
  
## Sintassi  
  
```  
class CMFCRibbonGallery : public CMFCRibbonButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonGallery::CMFCRibbonGallery](../Topic/CMFCRibbonGallery::CMFCRibbonGallery.md)|Costrutti e inizializza un oggetto `CMFCRibbonGallery`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonGallery::AddGroup](../Topic/CMFCRibbonGallery::AddGroup.md)|Aggiungere un nuovo gruppo alla raccolta.|  
|[CMFCRibbonGallery::AddSubItem](../Topic/CMFCRibbonGallery::AddSubItem.md)|Aggiunge una nuova voce al menu a discesa.|  
|[CMFCRibbonGallery::Clear](../Topic/CMFCRibbonGallery::Clear.md)|Cancellare il contenuto della raccolta.|  
|[CMFCRibbonGallery::EnableMenuResize](../Topic/CMFCRibbonGallery::EnableMenuResize.md)|Abilita o disabilita il ridimensionamento del riquadro del menu.|  
|[CMFCRibbonGallery::EnableMenuSideBar](../Topic/CMFCRibbonGallery::EnableMenuSideBar.md)|Abilita o disabilita la barra laterale sinistra del menu di scelta rapida.|  
|[CMFCRibbonGallery::GetCompactSize](../Topic/CMFCRibbonGallery::GetCompactSize.md)|\(Override [CMFCRibbonButton::GetCompactSize](../Topic/CMFCRibbonButton::GetCompactSize.md)\).|  
|[CMFCRibbonGallery::GetDroppedDown](../Topic/CMFCRibbonGallery::GetDroppedDown.md)|\(Override [CMFCRibbonBaseElement::GetDroppedDown](../Topic/CMFCRibbonBaseElement::GetDroppedDown.md)\).|  
|[CMFCRibbonGallery::GetGroupName](../Topic/CMFCRibbonGallery::GetGroupName.md)|Restituisce il nome del gruppo che si trova all'indice specificato.|  
|[CMFCRibbonGallery::GetGroupOffset](../Topic/CMFCRibbonGallery::GetGroupOffset.md)||  
|[CMFCRibbonGallery::GetIconsInRow](../Topic/CMFCRibbonGallery::GetIconsInRow.md)|Restituisce il numero di elementi in una riga della raccolta della barra multifunzione.|  
|[CMFCRibbonGallery::GetItemToolTip](../Topic/CMFCRibbonGallery::GetItemToolTip.md)|Restituisce il testo di descrizione comando associato a un elemento nella raccolta.|  
|[CMFCRibbonGallery::GetLastSelectedItem](../Topic/CMFCRibbonGallery::GetLastSelectedItem.md)|Restituisce l'indice dell'ultimo elemento della raccolta che l'utente ha selezionato.|  
|[CMFCRibbonGallery::GetPaletteID](../Topic/CMFCRibbonGallery::GetPaletteID.md)|Restituisce l'id di comando della raccolta corrente.|  
|[CMFCRibbonGallery::GetRegularSize](../Topic/CMFCRibbonGallery::GetRegularSize.md)|\(Override [CMFCRibbonButton::GetRegularSize](../Topic/CMFCRibbonButton::GetRegularSize.md)\).|  
|[CMFCRibbonGallery::GetSelectedItem](../Topic/CMFCRibbonGallery::GetSelectedItem.md)||  
|[CMFCRibbonGallery::HasMenu](../Topic/CMFCRibbonGallery::HasMenu.md)|\(Override [CMFCRibbonButton::HasMenu](../Topic/CMFCRibbonButton::HasMenu.md)\).|  
|[CMFCRibbonGallery::IsButtonMode](../Topic/CMFCRibbonGallery::IsButtonMode.md)|Specifica se la raccolta è contenuta in un pulsante della raccolta.|  
|[CMFCRibbonGallery::IsMenuResizeEnabled](../Topic/CMFCRibbonGallery::IsMenuResizeEnabled.md)|Specifica se il ridimensionamento di menu è abilitato o disabilitato.|  
|[CMFCRibbonGallery::IsMenuResizeVertical](../Topic/CMFCRibbonGallery::IsMenuResizeVertical.md)||  
|[CMFCRibbonGallery::IsMenuSideBar](../Topic/CMFCRibbonGallery::IsMenuSideBar.md)|Specifica se la barra laterale è abilitata o disabilitata.|  
|[CMFCRibbonGallery::OnAfterChangeRect](../Topic/CMFCRibbonGallery::OnAfterChangeRect.md)|\(Override `CMFCRibbonButton::OnAfterChangeRect`\).|  
|[CMFCRibbonGallery::OnDraw](../Topic/CMFCRibbonGallery::OnDraw.md)|\(Override [CMFCRibbonButton::OnDraw](../Topic/CMFCRibbonButton::OnDraw.md)\).|  
|[CMFCRibbonGallery::OnEnable](../Topic/CMFCRibbonGallery::OnEnable.md)|\(Override `CMFCRibbonBaseElement::OnEnable`\).|  
|[CMFCRibbonGallery::OnRTLChanged](../Topic/CMFCRibbonGallery::OnRTLChanged.md)|\(Override [CMFCRibbonBaseElement::OnRTLChanged](../Topic/CMFCRibbonBaseElement::OnRTLChanged.md)\).|  
|[CMFCRibbonGallery::RedrawIcons](../Topic/CMFCRibbonGallery::RedrawIcons.md)|Ridisegna la raccolta.|  
|[CMFCRibbonGallery::RemoveItemToolTips](../Topic/CMFCRibbonGallery::RemoveItemToolTips.md)|Rimuove le descrizioni comandi per tutti gli elementi nella raccolta.|  
|[CMFCRibbonGallery::SelectItem](../Topic/CMFCRibbonGallery::SelectItem.md)||  
|[CMFCRibbonGallery::SetACCData](../Topic/CMFCRibbonGallery::SetACCData.md)|\(Override [CMFCRibbonButton::SetACCData](../Topic/CMFCRibbonButton::SetACCData.md)\).|  
|[CMFCRibbonGallery::SetButtonMode](../Topic/CMFCRibbonGallery::SetButtonMode.md)|Specifica se visualizzare la raccolta di barre multifunzione come pulsante a discesa o come tavolozza direttamente sulla barra multifunzione.|  
|[CMFCRibbonGallery::SetGroupName](../Topic/CMFCRibbonGallery::SetGroupName.md)|Impostare il nome di un gruppo.|  
|[CMFCRibbonGallery::SetIconsInRow](../Topic/CMFCRibbonGallery::SetIconsInRow.md)|Definisce il numero di elementi per riga nella raccolta.|  
|[CMFCRibbonGallery::SetItemToolTip](../Topic/CMFCRibbonGallery::SetItemToolTip.md)|Imposta il testo di descrizione per un elemento della raccolta.|  
|[CMFCRibbonGallery::SetPalette](../Topic/CMFCRibbonGallery::SetPalette.md)|Aggiunge una tavolozza a una raccolta di barre multifunzione.|  
|[CMFCRibbonGallery::SetPaletteID](../Topic/CMFCRibbonGallery::SetPaletteID.md)|Definisce l'id di comando che è stato introdotto il messaggio `WM_COMMAND` quando un elemento della raccolta è stato selezionato.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonGallery::OnDrawPaletteIcon](../Topic/CMFCRibbonGallery::OnDrawPaletteIcon.md)|Chiamato dal framework quando un'icona della raccolta viene disegnata.|  
  
## Note  
 Un pulsante della raccolta si comporta come un pulsante standard di menu con la differenza che visualizza una raccolta quando un utente viene aperto.  Quando si seleziona un elemento in una raccolta, il framework invia il messaggio `WM_COMMAND` insieme all'ID di comando pulsante.  Quando si gestisce il messaggio, è necessario chiamare [CMFCRibbonGallery::GetLastSelectedItem](../Topic/CMFCRibbonGallery::GetLastSelectedItem.md) per determinare quale elemento selezionato dalla raccolta.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCRibbonGallery` per configurare un oggetto `CMFCRibbonGallery`.  Nell'esempio viene illustrato come specificare il numero di elementi per riga nella raccolta, attivare il ridimensionamento del riquadro di menu, abilitare la barra laterale sinistra del menu di scelta rapida e visualizzare la raccolta della barra multifunzione come tavolozza direttamente sulla barra della barra multifunzione.  Questo frammento di codice fa parte [Esempio client di disegno](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#6](../../mfc/reference/codesnippet/CPP/cmfcribbongallery-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md) [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md) [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)  
  
## Requisiti  
 **intestazione:** afxRibbonPaletteGallery.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)   
 [CMFCRibbonGalleryMenuButton Class](../../mfc/reference/cmfcribbongallerymenubutton-class.md)
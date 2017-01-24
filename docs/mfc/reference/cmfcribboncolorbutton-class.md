---
title: "Classe CMFCRibbonColorButton | Microsoft Docs"
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
  - "CMFCRibbonColorButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Classe CMFCRibbonColorButton"
ms.assetid: 6b4b4ee3-8cc0-41b4-a4eb-93e8847008e1
caps.latest.revision: 36
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CMFCRibbonColorButton
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCRibbonColorButton` implementa un pulsante colore che è possibile aggiungere a una barra multifunzione. Il pulsante colore della barra multifunzione visualizza un menu a discesa contenente una o più tavolozze dei colori.  
  
## Sintassi  
  
```  
class CMFCRibbonColorButton : public CMFCRibbonGallery  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonColorButton::CMFCRibbonColorButton](../Topic/CMFCRibbonColorButton::CMFCRibbonColorButton.md)||  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonColorButton::AddColorsGroup](../Topic/CMFCRibbonColorButton::AddColorsGroup.md)|Aggiunge un gruppo di colori nell'area dei colori normali.|  
|[CMFCRibbonColorButton::EnableAutomaticButton](../Topic/CMFCRibbonColorButton::EnableAutomaticButton.md)|Specifica se il pulsante **Automatico** è abilitato.|  
|[CMFCRibbonColorButton::EnableOtherButton](../Topic/CMFCRibbonColorButton::EnableOtherButton.md)|Abilita il pulsante **Altro**.|  
|[CMFCRibbonColorButton::GetAutomaticColor](../Topic/CMFCRibbonColorButton::GetAutomaticColor.md)||  
|[CMFCRibbonColorButton::GetColor](../Topic/CMFCRibbonColorButton::GetColor.md)|Restituisce il colore attualmente selezionato.|  
|[CMFCRibbonColorButton::GetColorBoxSize](../Topic/CMFCRibbonColorButton::GetColorBoxSize.md)|Restituisce le dimensioni degli elementi di colore visualizzati nella barra dei colori.|  
|[CMFCRibbonColorButton::GetColumns](../Topic/CMFCRibbonColorButton::GetColumns.md)||  
|[CMFCRibbonColorButton::GetHighlightedColor](../Topic/CMFCRibbonColorButton::GetHighlightedColor.md)|Restituisce il colore dell'elemento attualmente selezionato nella tavolozza dei colori popup.|  
|[CMFCRibbonColorButton::RemoveAllColorGroups](../Topic/CMFCRibbonColorButton::RemoveAllColorGroups.md)|Rimuove tutti i gruppi di colore dall'area dei colori normali.|  
|[CMFCRibbonColorButton::SetColor](../Topic/CMFCRibbonColorButton::SetColor.md)|Seleziona un colore dall'area dei colori normali.|  
|[CMFCRibbonColorButton::SetColorBoxSize](../Topic/CMFCRibbonColorButton::SetColorBoxSize.md)|Imposta le dimensioni di tutti gli elementi di colore visualizzati nella barra dei colori.|  
|[CMFCRibbonColorButton::SetColorName](../Topic/CMFCRibbonColorButton::SetColorName.md)||  
|[CMFCRibbonColorButton::SetColumns](../Topic/CMFCRibbonColorButton::SetColumns.md)||  
|[CMFCRibbonColorButton::SetDocumentColors](../Topic/CMFCRibbonColorButton::SetDocumentColors.md)|Specifica un elenco di valori RGB da visualizzare nell'area dei colori del documento.|  
|[CMFCRibbonColorButton::SetPalette](../Topic/CMFCRibbonColorButton::SetPalette.md)||  
|[CMFCRibbonColorButton::UpdateColor](../Topic/CMFCRibbonColorButton::UpdateColor.md)||  
  
## Note  
 Se selezionato, il pulsante colore della barra multifunzione visualizza una barra dei colori. Per impostazione predefinita, la barra dei colori contiene una tavolozza denominata area dei colori normali. Facoltativamente, la barra dei colori può visualizzare un pulsante **Automatico** che consente all'utente di selezionare un colore predefinito e un pulsante **Altro** che visualizza una tavolozza dei colori popup contenente altri colori.  
  
## Esempio  
 L'esempio seguente illustra come usare i vari metodi nella classe `CMFCRibbonColorButton`. L'esempio illustra come costruire un oggetto `CMFCRibbonColorButton`, impostare l'immagine di grandi dimensioni, abilitare il pulsante **Automatico**, abilitare il pulsante **Altro**, impostare il numero di colonne, impostare le dimensioni di tutti gli elementi di colore visualizzati nella barra dei colori, aggiungere un gruppo di colori nell'area dei colori normali e specificare un elenco di valori RGB da visualizzare nell'area dei colori del documento. Questo frammento di codice fa parte dell'[esempio Draw Client](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#3](../../mfc/reference/codesnippet/CPP/cmfcribboncolorbutton-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)  
  
 [CMFCRibbonColorButton](../../mfc/reference/cmfcribboncolorbutton-class.md)  
  
## Requisiti  
 **Intestazione:** afxribboncolorbutton.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonGallery Class](../../mfc/reference/cmfcribbongallery-class.md)
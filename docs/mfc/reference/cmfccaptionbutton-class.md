---
title: "CMFCCaptionButton Class | Microsoft Docs"
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
  - "CMFCCaptionButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCCaptionButton class"
ms.assetid: c5774b38-c0dd-414a-9ede-3b2f78f233ec
caps.latest.revision: 28
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCCaptionButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCCaptionButton` implementa un pulsante visualizzato nella barra del titolo relativo a un riquadro ancorato o una finestra cornice piccola.  In genere, il framework crea pulsanti della barra del titolo automaticamente.  
  
## Sintassi  
  
```  
class CMFCCaptionButton : public CObject  
```  
  
## Membri  
  
### Costruttori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionButton::CMFCCaptionButton](../Topic/CMFCCaptionButton::CMFCCaptionButton.md)|Costruisce un oggetto di CMFCCaptionButton.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionButton::GetHit](../Topic/CMFCCaptionButton::GetHit.md)|Restituisce il comando rappresentata dal pulsante.|  
|[CMFCCaptionButton::GetIconID](../Topic/CMFCCaptionButton::GetIconID.md)|Restituisce l'id l'immagine associata al pulsante.|  
|[CMFCCaptionButton::GetRect](../Topic/CMFCCaptionButton::GetRect.md)|Restituisce il rettangolo occupato dal pulsante.|  
|[CMFCCaptionButton::GetSize](../Topic/CMFCCaptionButton::GetSize.md)|Restituisce la larghezza e l'altezza del pulsante.|  
|[CMFCCaptionButton::IsMiniFrameButton](../Topic/CMFCCaptionButton::IsMiniFrameButton.md)|Indica se l'altezza della barra del titolo è impostata su mini dimensione.|  
|[CMFCCaptionButton::Move](../Topic/CMFCCaptionButton::Move.md)|Imposta la posizione di disegno del pulsante e lo stato di visualizzazione della finestra.|  
|[CMFCCaptionButton::OnDraw](../Topic/CMFCCaptionButton::OnDraw.md)|Estrae il pulsante della barra del titolo.|  
|[CMFCCaptionButton::SetMiniFrameButton](../Topic/CMFCCaptionButton::SetMiniFrameButton.md)|Imposta la dimensione mini barra del titolo.|  
  
## Note  
 È possibile derivare la classe da [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md) e utilizzare il metodo protetto, `AddButton`, per aggiungere pulsanti della barra del titolo a una mini finestra cornice.  
  
 CPaneFrameWnd.h definisce gli ID di comando per due tipi di pulsanti della barra del titolo:  
  
-   `AFX_CAPTION_BTN_PIN`, che visualizza un pulsante del blocco quando il riquadro ancorato supporta la modalità nascondi automaticamente.  
  
-   `AFX_CAPTION_BTN_CLOSE`, che visualizza un pulsante **Chiudi** quando il riquadro può essere chiuso o nascosto.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto `CMFCCaptionButton` e impostare la dimensione mini barra del titolo.  
  
 [!code-cpp[NVC_MFC_RibbonApp#43](../../mfc/reference/codesnippet/CPP/cmfccaptionbutton-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCCaptionButton](../../mfc/reference/cmfccaptionbutton-class.md)  
  
## Requisiti  
 **intestazione:** afxcaptionbutton.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)
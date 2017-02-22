---
title: "Classe CMFCMenuButton | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCMenuButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCMenuButton (classe)"
ms.assetid: 53d3d459-1e5a-47c5-8b7f-2e61f6af5187
caps.latest.revision: 32
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 34
---
# Classe CMFCMenuButton
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un pulsante che consente di visualizzare un menu di scelta rapida e rapporti alle selezioni dei menu dell'utente.  
  
## Sintassi  
  
```  
class CMFCMenuButton : public CMFCButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCMenuButton::CMFCMenuButton](../Topic/CMFCMenuButton::CMFCMenuButton.md)|Costruisce un oggetto `CMFCMenuButton`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCMenuButton::PreTranslateMessage](../Topic/CMFCMenuButton::PreTranslateMessage.md)|Chiamato dal framework per convertire i messaggi della finestra prima che vengano inviati.  \(Override `CMFCButton::PreTranslateMessage`\).|  
|[CMFCMenuButton::SizeToContent](../Topic/CMFCMenuButton::SizeToContent.md)|Modificare le dimensioni del pulsante mediante il testo e le dimensioni delle immagini.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCMenuButton::m\_bOSMenu](../Topic/CMFCMenuButton::m_bOSMenu.md)|Specifica se visualizzare il menu di scelta rapida predefinito del sistema o utilizzare [CContextMenuManager::TrackPopupMenu](../Topic/CContextMenuManager::TrackPopupMenu.md).|  
|[CMFCMenuButton::m\_bRightArrow](../Topic/CMFCMenuButton::m_bRightArrow.md)|Specifica di se il menu di scelta rapida verrà visualizzato sotto o a destra del pulsante.|  
|[CMFCMenuButton::m\_bStayPressed](../Topic/CMFCMenuButton::m_bStayPressed.md)|Specifica se il pulsante del menu modifica il relativo stato dopo le versioni dell'utente il pulsante.|  
|[CMFCMenuButton::m\_hMenu](../Topic/CMFCMenuButton::m_hMenu.md)|Un handle di finestra associata.|  
|[CMFCMenuButton::m\_nMenuResult](../Topic/CMFCMenuButton::m_nMenuResult.md)|Un identificatore che indica quale elemento l'utente ha selezionato dal menu di scelta rapida.|  
  
## Note  
 La classe di `CMFCMenuButton` è derivata da [CMFCButton Class](../../mfc/reference/cmfcbutton-class.md) che, a sua volta, viene derivata da [CButton Class](../../mfc/reference/cbutton-class.md).  Pertanto, è possibile utilizzare `CMFCMenuButton` nel codice se si trattasse `CButton`.  
  
 Quando si crea `CMFCMenuButton`, è necessario passare l'handle al menu di scelta rapida collegato.  Successivamente, chiamare la funzione `CMFCMenuButton::SizeToContent`.  controlli di`CMFCMenuButton::SizeToContent` che la dimensione del pulsante è sufficiente per importare una freccia che indica la posizione in cui la finestra popup verrà visualizzato \(cioé, al di sotto di o a destra del pulsante.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come impostare l'handle del menu associato al pulsante, ridimensiona il pulsante mediante il testo e le immagini e imposta il menu di scelta rapida che viene visualizzato dal framework.  Questo frammento di codice fa parte di [Nuovo esempio di controlli](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#38](../../mfc/reference/codesnippet/CPP/cmfcmenubutton-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#39](../../mfc/reference/codesnippet/CPP/cmfcmenubutton-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCButton](../../mfc/reference/cmfcbutton-class.md)  
  
 [CMFCMenuButton](../../mfc/reference/cmfcmenubutton-class.md)  
  
## Requisiti  
 **Intestazione:** afxmenubutton.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCButton Class](../../mfc/reference/cmfcbutton-class.md)
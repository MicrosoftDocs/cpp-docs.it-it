---
title: "CMFCColorMenuButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCColorMenuButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCColorMenuButton class"
ms.assetid: 42685704-e994-4f7b-9553-62283c27b754
caps.latest.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 31
---
# CMFCColorMenuButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCColorMenuButton` supporta un comando di menu o un pulsante della barra degli strumenti che avvia una finestra di dialogo di selezione colori.  
  
## Sintassi  
  
```  
class CMFCColorMenuButton : public CMFCToolBarMenuButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorMenuButton::CMFCColorMenuButton](../Topic/CMFCColorMenuButton::CMFCColorMenuButton.md)|Costruisce un oggetto `CMFCColorMenuButton`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorMenuButton::EnableAutomaticButton](../Topic/CMFCColorMenuButton::EnableAutomaticButton.md)|Abilita e disabilita un pulsante "automatico" collocato sui pulsanti standard di colore.  \(Il pulsante automatico del sistema standard è contrassegnato **Automatico**\).|  
|[CMFCColorMenuButton::EnableDocumentColors](../Topic/CMFCColorMenuButton::EnableDocumentColors.md)|Consente la visualizzazione dei colori un documento specifico anziché i colori di sistema.|  
|[CMFCColorMenuButton::EnableOtherButton](../Topic/CMFCColorMenuButton::EnableOtherButton.md)|Abilita e disabilita "un altro" pulsante posto sotto i pulsanti standard di colore.  \(Il sistema standard "l'altro" pulsante è contrassegnato **Altri coloriÉ**\).|  
|[CMFCColorMenuButton::EnableTearOff](../Topic/CMFCColorMenuButton::EnableTearOff.md)|Consente di lacerare un riquadro di colore.|  
|[CMFCColorMenuButton::GetAutomaticColor](../Topic/CMFCColorMenuButton::GetAutomaticColor.md)|Recupera il colore automatico corrente.|  
|[CMFCColorMenuButton::GetColor](../Topic/CMFCColorMenuButton::GetColor.md)|Recupera il colore corrente del pulsante.|  
|[CMFCColorMenuButton::GetColorByCmdID](../Topic/CMFCColorMenuButton::GetColorByCmdID.md)|Recupera il colore corrispondente a un ID di comando|  
|[CMFCColorMenuButton::OnChangeParentWnd](../Topic/CMFCColorMenuButton::OnChangeParentWnd.md)|Chiamato dal framework quando la finestra padre.|  
|[CMFCColorMenuButton::OpenColorDialog](../Topic/CMFCColorMenuButton::OpenColorDialog.md)|Aprire una finestra di dialogo di selezione di colori.|  
|[CMFCColorMenuButton::SetColor](../Topic/CMFCColorMenuButton::SetColor.md)|Imposta il colore del pulsante corrente di colore.|  
|[CMFCColorMenuButton::SetColorByCmdID](../Topic/CMFCColorMenuButton::SetColorByCmdID.md)|Imposta il colore del pulsante tavolozza colori specificato.|  
|[CMFCColorMenuButton::SetColorName](../Topic/CMFCColorMenuButton::SetColorName.md)|Imposta un nuovo nome per il colore specificato.|  
|[CMFCColorMenuButton::SetColumnsNumber](../Topic/CMFCColorMenuButton::SetColumnsNumber.md)|Imposta il numero di colonne visualizzate da un oggetto `CMFCColorBar`.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorMenuButton::CopyFrom](../Topic/CMFCColorMenuButton::CopyFrom.md)|Copia un altro pulsante della barra degli strumenti al pulsante corrente.|  
|[CMFCColorMenuButton::CreatePopupMenu](../Topic/CMFCColorMenuButton::CreatePopupMenu.md)|Crea una finestra di dialogo di selezione colori.|  
|[CMFCColorMenuButton::IsEmptyMenuAllowed](../Topic/CMFCColorMenuButton::IsEmptyMenuAllowed.md)|Indica se i menu vuoti sono supportati.|  
|[CMFCColorMenuButton::OnDraw](../Topic/CMFCColorMenuButton::OnDraw.md)|Chiamato dal framework per visualizzare un'immagine in un pulsante.|  
|[CMFCColorMenuButton::OnDrawOnCustomizeList](../Topic/CMFCColorMenuButton::OnDrawOnCustomizeList.md)|Chiamato dal framework prima che un oggetto `CMFCColorMenuButton` visualizzato nell'elenco di una finestra di dialogo per la personalizzazione della barra degli strumenti.|  
  
## Note  
 Per sostituire il comando di menu o un pulsante della barra degli strumenti originale con un oggetto `CMFCColorMenuButton`, creare l'oggetto `CMFCColorMenuButton`, impostare gli stili appropriati qualsiasi [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md) quindi chiamare il metodo `ReplaceButton` della classe [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md).  Se si personalizza la barra degli strumenti, chiamare il metodo [CMFCToolBarsCustomizeDialog::ReplaceButton](../Topic/CMFCToolBarsCustomizeDialog::ReplaceButton.md).  
  
 La finestra di dialogo di selezione colori viene creata durante l'elaborazione del gestore eventi [CMFCColorMenuButton::CreatePopupMenu](../Topic/CMFCColorMenuButton::CreatePopupMenu.md).  Il gestore eventi notifica il frame padre con un messaggio `WM_COMMAND`.  L'oggetto `CMFCColorMenuButton` invia l'id del controllo assegnato al comando di menu o sul pulsante della barra degli strumenti originale.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come creare e configurare un pulsante tavolozza colori utilizzando i diversi metodi nella classe `CMFCColorMenuButton`.  Nell'esempio, un oggetto `CPalette` innanzitutto viene creato e quindi utilizzato per costruire un oggetto con la classe `CMFCColorMenuButton`.  L'oggetto `CMFCColorMenuButton` quindi configurato ai pulsanti automatici e altri e impostando il colore e il numero di colonne.  Questo codice fa parte [Esempio di cuscinetto di Word](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#5](../../mfc/reference/codesnippet/CPP/cmfccolormenubutton-class_1.h)]  
[!code-cpp[NVC_MFC_WordPad#6](../../mfc/reference/codesnippet/CPP/cmfccolormenubutton-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)  
  
 [CMFCColorMenuButton](../../mfc/reference/cmfccolormenubutton-class.md)  
  
## Requisiti  
 **intestazione:** afxcolormenubutton.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBarsCustomizeDialog Class](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)   
 [CMFCColorButton Class](../../mfc/reference/cmfccolorbutton-class.md)
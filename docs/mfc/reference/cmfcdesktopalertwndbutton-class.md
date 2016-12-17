---
title: "CMFCDesktopAlertWndButton Class | Microsoft Docs"
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
  - "CMFCDesktopAlertWndButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDesktopAlertWndButton class"
ms.assetid: df39a0c8-0c39-4ab0-8c64-78c5b2c4ecaf
caps.latest.revision: 23
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCDesktopAlertWndButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente i pulsanti da aggiungere a una finestra di dialogo di avviso del desktop.  
  
## Sintassi  
  
```  
class CMFCDesktopAlertWndButton : public CMFCButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCDesktopAlertWndButton::CMFCDesktopAlertWndButton`|Costruttore predefinito.|  
|`CMFCDesktopAlertWndButton::~CMFCDesktopAlertWndButton`|Distruttore|  
  
### Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCDesktopAlertWndButton::IsCaptionButton](../Topic/CMFCDesktopAlertWndButton::IsCaptionButton.md)|Determina se il pulsante viene visualizzato nell'area della barra del titolo della finestra di avviso.|  
|[CMFCDesktopAlertWndButton::IsCloseButton](../Topic/CMFCDesktopAlertWndButton::IsCloseButton.md)|Determina se il pulsante chiudere la finestra di avviso.|  
  
### Membri di dati  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCDesktopAlertWndButton::m_bIsCaptionButton`|Valore booleano che specifica se il pulsante viene visualizzato nell'area della barra del titolo della finestra di avviso.|  
|`CMFCDesktopAlertWndButton::m_bIsCloseButton`|Valore booleano che specifica se il pulsante chiudere la finestra di avviso.|  
  
### Note  
 Per impostazione predefinita, il costruttore imposta i membri dati `m_bIsCloseButton` e `m_bIsCaptionButton` a `FALSE`.  L'oggetto `CMFCDesktopAlertDialog` padre imposta `m_bIsCaptionButton` a `TRUE` se il pulsante è posizionato nell'area della barra del titolo della finestra di avviso.  La classe `CMFCDesktopAlertDialog` crea un oggetto `CMFCDesktopAlertWndButton` che funge da pulsante che consente di chiudere la finestra di avviso e imposta `m_bIsCloseButton` a `TRUE`.  
  
 Aggiungere gli oggetti `CMFCDesktopAlertWndButton` a un oggetto `CMFCDesktopAlertDialog` come aggiungere qualsiasi pulsante.  Per ulteriori informazioni su `CMFCDesktopAlertDialog`, vedere [CMFCDesktopAlertDialog Class](../../mfc/reference/cmfcdesktopalertdialog-class.md).  
  
## Esempio  
 Il seguente esempio viene illustrato come utilizzare il metodo `SetImage` nella classe `CMFCDesktopAlertWndButton`.  Questo frammento di codice fa parte [Esempio di demo del desktop](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo#4](../../mfc/reference/codesnippet/CPP/cmfcdesktopalertwndbutton-class_1.h)]  
[!code-cpp[NVC_MFC_DesktopAlertDemo#5](../../mfc/reference/codesnippet/CPP/cmfcdesktopalertwndbutton-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCButton](../../mfc/reference/cmfcbutton-class.md)  
  
 [CMFCDesktopAlertWndButton](../../mfc/reference/cmfcdesktopalertwndbutton-class.md)  
  
## Requisiti  
 **intestazione:** afxdesktopalertwnd.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCDesktopAlertDialog Class](../../mfc/reference/cmfcdesktopalertdialog-class.md)
---
title: "CMFCDesktopAlertWndInfo Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCDesktopAlertWndInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDesktopAlertWndInfo class"
ms.assetid: 5c9bb84e-6c96-4748-8e74-6951b6ae8e84
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 28
---
# CMFCDesktopAlertWndInfo Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCDesktopAlertWndInfo` viene utilizzata con la classe [CMFCDesktopAlertWnd Class](../../mfc/reference/cmfcdesktopalertwnd-class.md).  Specifica i comandi da visualizzare se viene visualizzato nella finestra di avviso.  
  
## Sintassi  
  
```  
class CMFCDesktopAlertWndInfo  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCDesktopAlertWndInfo::~CMFCDesktopAlertWndInfo`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDesktopAlertWndInfo::operator\=](../Topic/CMFCDesktopAlertWndInfo::operator=.md)||  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDesktopAlertWndInfo::m\_hIcon](../Topic/CMFCDesktopAlertWndInfo::m_hIcon.md)|Handle all'icona da visualizzare.|  
|[CMFCDesktopAlertWndInfo::m\_nURLCmdID](../Topic/CMFCDesktopAlertWndInfo::m_nURLCmdID.md)|L'id di comando associato a un collegamento nella finestra di avviso.|  
|[CMFCDesktopAlertWndInfo::m\_strText](../Topic/CMFCDesktopAlertWndInfo::m_strText.md)|Il testo visualizzato nella finestra di avviso.|  
|[CMFCDesktopAlertWndInfo::m\_strURL](../Topic/CMFCDesktopAlertWndInfo::m_strURL.md)|Il collegamento visualizzato nella finestra di avviso.|  
  
## Note  
 La classe `CMFCDesktopAlertWndInfo` viene passata al metodo [CMFCDesktopAlertWnd::Create](../Topic/CMFCDesktopAlertWnd::Create.md) per specificare gli elementi visualizzati nella finestra di dialogo predefinita della finestra di avviso.  La finestra di dialogo predefinita può contenere tre elementi:  
  
-   Un'icona, impostata chiamando [CMFCDesktopAlertWndInfo::m\_hIcon](../Topic/CMFCDesktopAlertWndInfo::m_hIcon.md).  
  
-   Un'etichetta, o messaggio di testo, che viene impostato chiamando [CMFCDesktopAlertWndInfo::m\_strText](../Topic/CMFCDesktopAlertWndInfo::m_strText.md).  
  
-   Un collegamento, che viene impostato chiamando [CMFCDesktopAlertWndInfo::m\_strURL](../Topic/CMFCDesktopAlertWndInfo::m_strURL.md).  Per impostare il comando che viene eseguito quando si fa clic sul collegamento, chiamare [CMFCDesktopAlertWndInfo::m\_nURLCmdID](../Topic/CMFCDesktopAlertWndInfo::m_nURLCmdID.md).  
  
 Se la finestra di dialogo predefinita non è sufficiente, è possibile creare una finestra di dialogo personalizzata e passarlo al metodo [CMFCDesktopAlertWnd::Create](../Topic/CMFCDesktopAlertWnd::Create.md) anziché utilizzare questa classe.  Per ulteriori informazioni, vedere [CMFCDesktopAlertDialog Class](../../mfc/reference/cmfcdesktopalertdialog-class.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i diversi membri della classe `CMFCDesktopAlertWndInfo`.  Nell'esempio viene illustrato come impostare l'handleicona visualizzata, il testo visualizzato nella finestra di avviso, sul collegamento visualizzato nella finestra di avviso e sull'ID di comando associato a un collegamento nella finestra di avviso.  Questo esempio fa parte [Esempio di demo del desktop](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo#3](../../mfc/reference/codesnippet/CPP/cmfcdesktopalertwndinfo-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CMFCDesktopAlertWndInfo](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)  
  
## Requisiti  
 **intestazione:** afxDesktopAlertDialog.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCDesktopAlertWnd Class](../../mfc/reference/cmfcdesktopalertwnd-class.md)   
 [CMFCDesktopAlertWnd::Create](../Topic/CMFCDesktopAlertWnd::Create.md)   
 [CMFCDesktopAlertDialog Class](../../mfc/reference/cmfcdesktopalertdialog-class.md)
---
title: "CMFCWindowsManagerDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCWindowsManagerDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCWindowsManagerDialog class"
ms.assetid: 35b4b0db-33c4-4b22-94d8-5e3396341340
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# CMFCWindowsManagerDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'oggetto `CMFCWindowsManagerDialog` consente di gestire le finestre figlio MDI in un'applicazione MDI.  
  
## Sintassi  
  
```  
class CMFCWindowsManagerDialog : public CDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCWindowsManagerDialog::CMFCWindowsManagerDialog](../Topic/CMFCWindowsManagerDialog::CMFCWindowsManagerDialog.md)|Costruisce un oggetto `CMFCWindowsManagerDialog`.|  
  
## Note  
 `CMFCWindowsManagerDialog` contiene un elenco di finestre figlio MDI che sono attualmente aperto nell'applicazione.  L'utente può manualmente controllare lo stato delle finestre figlio MDI utilizzando la finestra di dialogo.  
  
 `CMFCWindowsManagerDialog` è incorporato in [Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md).  `CMFCWindowsManagerDialog` non è una classe che è necessario creare manualmente.  Invece, chiamare la funzione [CMDIFrameWndEx::ShowWindowsDialog](../Topic/CMDIFrameWndEx::ShowWindowsDialog.md)di creare e visualizzare un oggetto `CMFCWindowsManagerDialog`.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto `CMFCWindowsManagerDialog` chiamando `CMDIFrameWndEx::ShowWindowsDialog`.  Questo frammento di codice fa parte [Esempio demo di Visual Studio](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#18](../../mfc/codesnippet/CPP/cmfcwindowsmanagerdialog-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md)  
  
## Requisiti  
 **intestazione:** afxWindowsManagerDialog.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)   
 [CMDIFrameWndEx::ShowWindowsDialog](../Topic/CMDIFrameWndEx::ShowWindowsDialog.md)
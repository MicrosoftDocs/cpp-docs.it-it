---
title: "CMFCDesktopAlertDialog Class | Microsoft Docs"
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
  - "CMFCDesktopAlertDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDesktopAlertDialog class"
ms.assetid: a53c60aa-9607-485b-b826-ec64962075f6
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCDesktopAlertDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCDesktopAlertDialog` viene usata insieme alla [CMFCDesktopAlertWnd Class](../../mfc/reference/cmfcdesktopalertwnd-class.md) per visualizzare una finestra di dialogo personalizzata in una finestra popup.  
  
## Sintassi  
  
```  
class CMFCDesktopAlertDialog : public CDialogEx  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDesktopAlertDialog::CreateFromParams](../Topic/CMFCDesktopAlertDialog::CreateFromParams.md)||  
|[CMFCDesktopAlertDialog::GetDlgSize](../Topic/CMFCDesktopAlertDialog::GetDlgSize.md)||  
|[CMFCDesktopAlertDialog::HasFocus](../Topic/CMFCDesktopAlertDialog::HasFocus.md)||  
|[CMFCDesktopAlertDialog::PreTranslateMessage](../Topic/CMFCDesktopAlertDialog::PreTranslateMessage.md)|Esegue l'override di `CDialogEx::PreTranslateMessage`.|  
  
### Note  
 Eseguire i passaggi seguenti per visualizzare una finestra di dialogo personalizzata in una finestra popup:  
  
1.  Derivare una classe da `CMFCDesktopAlertDialog`.  
  
2.  Creare un modello di finestra di dialogo figlio nelle risorse del progetto.  
  
3.  Chiamare [CMFCDesktopAlertWnd::Create](../Topic/CMFCDesktopAlertWnd::Create.md) con l'ID di risorsa del modello di finestra di dialogo e un puntatore alle informazioni della classe di runtime della classe derivata come parametri.  
  
4.  Programmare la finestra di dialogo personalizzata per gestire tutte le notifiche provenienti dai controlli ospitati oppure programmare i controlli ospitati per gestire direttamente queste notifiche.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
 [CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)  
  
## Requisiti  
 **Intestazione:** afxDesktopAlertDialog.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCDesktopAlertWnd Class](../../mfc/reference/cmfcdesktopalertwnd-class.md)   
 [CMFCDesktopAlertWndInfo Class](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)   
 [CDialogEx Class](../../mfc/reference/cdialogex-class.md)
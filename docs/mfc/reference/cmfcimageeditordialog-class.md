---
title: "CMFCImageEditorDialog Class | Microsoft Docs"
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
  - "CMFCImageEditorDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCImageEditorDialog class"
ms.assetid: 6a7d08f3-1ec2-4062-9b79-a0c2776b58d1
caps.latest.revision: 24
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCImageEditorDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCImageEditorDialog` supporta una finestra di dialogo dell'editor di immagini.  
  
## Sintassi  
  
```  
class CMFCImageEditorDialog : public CDialogEx  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCImageEditorDialog::CMFCImageEditorDialog](../Topic/CMFCImageEditorDialog::CMFCImageEditorDialog.md)|Costruisce un oggetto `CMFCImageEditorDialog`.|  
  
## Note  
 La classe `CMFCImageEditorDialog` fornisce una finestra di dialogo che include:  
  
-   Un'area racchiuso da utilizzare per modificare i singoli pixel in un'immagine.  
  
-   Strumenti di disegno per modificare i pixel nell'area racchiuso.  
  
-   Una tavolozza di colori per specificare il colore utilizzato dagli strumenti di disegno.  
  
-   Un'area di anteprima visualizzato l'effetto della modifica.  
  
 Nella figura seguente viene illustrata una finestra di dialogo dell'editor di immagini.  
  
 ![Finestra di dialogo di CMFCImageEditorDialog](../../mfc/reference/media/imageedit.png "ImageEdit")  
  
 Una modalità per utilizzare un oggetto `CMFCImageEditorDialog` viene dichiarato di un'immagine `CBitmap` da modificare.  Non creare un'immagine di grandi dimensioni perché l'area di modifica delle immagini ha una dimensione limitata e la dimensione in pixel logici viene modificata per soddisfare l'area.  Chiamare il metodo `DoModal` per avviare una finestra di dialogo modale.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
 [CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)  
  
## Requisiti  
 **intestazione:** afximageeditordialog.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)
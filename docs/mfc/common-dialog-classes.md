---
title: "Classi di finestre di dialogo comuni | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre di dialogo comuni [C++]"
  - "finestre di dialogo comuni [C++], classi di finestre di dialogo comuni"
  - "classi di finestre di dialogo comuni [C++]"
  - "finestre di dialogo [C++], finestre di dialogo comuni di Windows"
  - "classi della finestra di dialogo [C++]"
  - "classi della finestra di dialogo [C++], comune"
  - "MFC (finestre di dialogo), finestre di dialogo comuni di Windows"
  - "finestre di dialogo comuni di Windows [C++]"
ms.assetid: 5c4f6443-896c-4b05-a7df-8169fdadc71d
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi di finestre di dialogo comuni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Oltre a classe [CDialog](../mfc/reference/cdialog-class.md), MFC fornisce diverse classi derivate da `CDialog` che incapsulano le finestre di dialogo di uso comune, come illustrato nella tabella seguente.  Le finestre di dialogo vengono incapsulati chiamate "finestre di dialogo comuni" e fa parte della libreria della finestra di dialogo di windows \(COMMDLG.DLL\).  Le risorse e il codice del dialogo\- modello per queste classi vengono illustrati nelle finestre di dialogo comuni di windows nelle versioni di Windows 3,1 e successive.  
  
### Classi comuni della finestra di dialogo  
  
|Classe derivata della finestra di dialogo|Scopo|  
|-----------------------------------------------|-----------|  
|[CColorDialog](../mfc/reference/ccolordialog-class.md)|Consente ai colori selezionare utente.|  
|[CFileDialog](../mfc/reference/cfiledialog-class.md)|Consente all'utente di selezionare un nome di file per aprirlo o salvarlo.|  
|[CFindReplaceDialog](../mfc/reference/cfindreplacedialog-class.md)|Consente all'utente di avviare un'operazione cerca o di sostituzione in un file di testo.|  
|[CFontDialog](../mfc/reference/cfontdialog-class.md)|Consente di specificare un tipo di carattere.|  
|[CPrintDialog](../mfc/reference/cprintdialog-class.md)|Consente di specificare le informazioni per un processo di stampa.|  
|[CPrintDialogEx](../mfc/reference/cprintdialogex-class.md)|Finestra delle proprietà di stampa di Windows 2000.|  
  
 Per ulteriori informazioni sulle classi comuni della finestra di dialogo, vedere individual nomi della classe in *Riferimento MFC*.  MFC fornisce inoltre una serie di classi standard della finestra di dialogo utilizzate per OLE.  Per informazioni su queste classi, vedere la classe base, [COleDialog](../mfc/reference/coledialog-class.md) nel *Riferimento MFC*.  
  
 Altre tre classi in MFC hanno caratteristiche del tipo di dialogo.  Per informazioni sulle classi [CFormView](../mfc/reference/cformview-class.md), [CRecordView](../mfc/reference/crecordview-class.md) e [CDaoRecordView](../mfc/reference/cdaorecordview-class.md), vedere le classi in *Riferimento MFC*.  Per informazioni sulla classe [CDialogBar](../mfc/reference/cdialogbar-class.md), vedere [Barre di finestra di dialogo](../mfc/dialog-bars.md).  
  
## Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [Finestre di dialogo in OLE](../mfc/dialog-boxes-in-ole.md)
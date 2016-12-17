---
title: "Classi di finestre di dialogo comuni OLE | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi ActiveX [C++]"
  - "classi di finestre di dialogo comuni"
  - "classi della finestra di dialogo [C++], OLE"
  - "classi di finestre di dialogo comuni OLE [C++]"
ms.assetid: 706526ae-f94f-4909-a0f8-6b5fe954fd97
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi di finestre di dialogo comuni OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste classi gestiscono le attività comuni OLE implementando una serie di finestre di dialogo OLE standard.  Forniscono un'interfaccia utente coerente per funzionalità OLE.  
  
 [COleDialog](../mfc/reference/coledialog-class.md)  
 Utilizzato dal framework per contenere le implementazioni comuni a tutte le finestre di dialogo OLE.  Tutte le classi di finestre di dialogo della categoria dell'interfaccia utente sono derivate da questa classe base.  `COleDialog` non può essere utilizzato direttamente.  
  
 [COleInsertDialog](../mfc/reference/coleinsertdialog-class.md)  
 Visualizzare la finestra di dialogo insert new object, l'interfaccia utente standard per l'inserimento degli elementi collegati o incorporati nuovi OLE.  
  
 [COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md)  
 Visualizzare la finestra di dialogo edit paste special, l'interfaccia utente standard per implementare il comando edit paste special di modifica.  
  
 [COleLinksDialog](../mfc/reference/colelinksdialog-class.md)  
 Visualizzare la finestra di dialogo modifica dei collegamenti, l'interfaccia utente standard per modificare le informazioni sugli elementi collegati.  
  
 [COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md)  
 Visualizzare la finestra di dialogo modifica dell'icona, l'interfaccia utente standard per modificare l'icona associata a un OLE incorporato o l'elemento collegato.  
  
 [COleConvertDialog](../mfc/reference/coleconvertdialog-class.md)  
 Viene visualizzata la finestra di dialogo converti, l'interfaccia utente standard per la conversione degli elementi OLE da un tipo a un altro.  
  
 [COlePropertiesDialog](../mfc/reference/colepropertiesdialog-class.md)  
 Incapsula la finestra di dialogo OLE comune delle proprietà di windows.  Le finestre di dialogo comuni OLE proprietà consentono di visualizzare e modificare le proprietà di un elemento OLE di documento in modo coerente con gli standard di windows.  
  
 [COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md)  
 Visualizzare la finestra di dialogo di aggiornamento, l'interfaccia utente standard per aggiornare tutti i collegamenti in un documento.  La finestra di dialogo contenente un indicatore di stato per indicare la fine la procedura di aggiornamento viene completata.  
  
 [COleChangeSourceDialog](../mfc/reference/colechangesourcedialog-class.md)  
 Visualizzare la finestra di dialogo origine di modifica, l'interfaccia utente standard per modificare la destinazione oppure l'origine di un collegamento.  
  
 [COleBusyDialog](../mfc/reference/colebusydialog-class.md)  
 Visualizzazione delle finestre di dialogo di risposta occupate e server, l'interfaccia utente standard per gestire le chiamate alle applicazioni occupate.  In genere visualizzata automaticamente dall'implementazione di `COleMessageFilter`.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)
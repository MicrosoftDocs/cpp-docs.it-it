---
title: "File della Guida (HTML) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi di file [C++], file della Guida HTML"
ms.assetid: d30a1b1b-318f-4a78-8b60-93da53a224a8
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# File della Guida (HTML)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I file riportati di seguito vengono creati quando all'applicazione viene aggiunto il supporto per la Guida di tipo HTML selezionando la casella di controllo **Guida sensibile al contesto** e quindi **Formato HTML** nella schermata [Funzionalità avanzate](../mfc/reference/advanced-features-mfc-application-wizard.md) della Creazione guidata applicazione MFC.  
  
|Nome file|Directory|Esplora soluzioni|Descrizione|  
|---------------|---------------|-----------------------|-----------------|  
|*Projname*.hhp|*Projname*\\hlp|File della Guida HTML|File di progetto della Guida,  contenente i dati necessari per la compilazione dei file della Guida in un file hxs o chm.|  
|*Projname*.hhk|*Projname*\\hlp|File della Guida HTML|Contiene un indice degli argomenti della Guida.|  
|*Projname*.hhc|*Projname*\\hlp|File della Guida HTML|Comprende il contenuto del progetto della Guida.|  
|Makehtmlhelp.bat|*Projname*|File di origine|Viene utilizzato dal sistema per compilare il progetto della Guida al momento della compilazione del progetto.|  
|Afxcore.htm|*Projname*\\hlp|Argomenti della Guida HTML|Contiene gli argomenti standard della Guida per gli oggetti visualizzati sullo schermo e i comandi MFC standard.  Al file possono essere aggiunti argomenti della Guida personalizzati.|  
|Afxprint.htm|*Projname*\\hlp|Argomenti della Guida HTML|Contiene gli argomenti della Guida per i comandi di stampa.|  
|\*.jpg; \*.gif|*Projname*\\hlp\\Images|File di risorse|Contengono immagini per i diversi argomenti dei file della Guida generati.|  
  
## Vedere anche  
 [Tipi di file creati per i progetti di Visual C\+\+](../ide/file-types-created-for-visual-cpp-projects.md)
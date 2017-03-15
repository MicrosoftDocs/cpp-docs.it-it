---
title: "File della Guida (WinHelp) | Microsoft Docs"
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
  - "tipi di file [C++], file WinHelp"
ms.assetid: 4fdcbd66-66b0-4866-894a-fd7b4c2557e4
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# File della Guida (WinHelp)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I file riportati di seguito vengono creati quando all'applicazione viene aggiunto il supporto per la Guida di tipo WinHelp selezionando la casella di controllo **Guida sensibile al contesto** e quindi **Formato WinHelp** nella schermata [Funzionalità avanzate](../mfc/reference/advanced-features-mfc-application-wizard.md) della Creazione guidata applicazione MFC.  
  
|Nome file|Directory|Esplora soluzioni|Descrizione|  
|---------------|---------------|-----------------------|-----------------|  
|*Projname*.hpj|*Projname*\\hlp|File di origine|File di progetto della Guida utilizzato dall'apposito compilatore per creare il file della Guida del controllo o del programma.|  
|*Projname*.rtf|*Projname*\\hlp|File della Guida|Contiene modelli di argomenti modificabili e informazioni sulla personalizzazione del file HPJ.|  
|*Projname*.cnt|*Projname*\\hlp|File della Guida|Fornisce la struttura per la finestra **Sommario** della Guida di Windows.|  
|Makehelp.bat|*Projname*|File di origine|Viene utilizzato dal sistema per compilare il progetto della Guida al momento della compilazione del progetto.|  
|Print.rtf|*Projname*\\hlp|File della Guida|Viene creato se il progetto include il supporto di stampa \(impostazione predefinita\).  Descrive le finestre di dialogo e i comandi di stampa.|  
|BMP|*Projname*\\hlp|File di risorse|Contengono immagini per i diversi argomenti dei file della Guida generati.|  
  
 È possibile aggiungere il supporto per WinHelp a un progetto di controllo ActiveX MFC selezionando **Genera file della Guida** nella scheda [Impostazioni applicazione](../mfc/reference/application-settings-mfc-activex-control-wizard.md) della Creazione guidata controllo ActiveX MFC.  I file riportati di seguito vengono aggiunti al progetto quando si aggiunge il supporto per la Guida a un controllo ActiveX MFC.  
  
|Nome file|Directory|Esplora soluzioni|Descrizione|  
|---------------|---------------|-----------------------|-----------------|  
|*Projname*.hpj|*Projname*\\hlp|File di origine|File di progetto utilizzato dal compilatore della Guida per creare il file della Guida del controllo o del programma.|  
|*Projname*.rtf|*Projname*\\hlp|Project|Contiene modelli di argomenti modificabili e informazioni sulla personalizzazione del file HPJ.|  
|Makehelp.bat|*Projname*|File di origine|Viene utilizzato dal sistema per compilare il progetto della Guida al momento della compilazione del progetto.|  
|Bullet.bmp|*Projname*|File di risorse|Viene utilizzato dagli argomenti dei file della Guida standard per rappresentare gli elenchi puntati.|  
  
## Vedere anche  
 [Tipi di file creati per i progetti di Visual C\+\+](../ide/file-types-created-for-visual-cpp-projects.md)
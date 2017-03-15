---
title: "Defining Member Variables for Dialog Controls | Microsoft Docs"
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
  - "member variables, defining for controls"
  - "variables, dialog box control member variables"
  - "controls [C++], member variables"
  - "Dialog editor, defining member variables for controls"
ms.assetid: 84347c63-c33c-4b04-91f5-6d008c45ba58
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Defining Member Variables for Dialog Controls
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per definire una variabile membro per qualsiasi controllo della finestra di dialogo ad eccezione dei pulsanti, è possibile usare il metodo seguente.  
  
> [!NOTE]
>  Questo articolo è valido solo per i controlli di finestra di dialogo in un progetto MFC.  I progetti ATL devono usare la finestra di dialogo **Nuovi messaggi e gestori eventi di Windows**.  
  
### Per definire una variabile membro per il controllo di una finestra di dialogo \(non pulsante\)  
  
1.  Nell'[Editor finestre](../mfc/dialog-editor.md), selezionare un controllo.  
  
2.  Mentre si tiene premuto il tasto **CTRL**, fare doppio clic sul controllo della finestra di dialogo.  
  
     Viene visualizzata l'[Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md).  
  
3.  Digitare le informazioni appropriate nell'**Aggiunta guidata variabile membro**.  Per altre informazioni, vedere [DDX \(Dialog Data Exchange\)](../mfc/dialog-data-exchange.md).  
  
4.  Fare clic su **OK** per tornare all'Editor finestre.  
  
    > [!TIP]
    >  Per passare da un controllo della finestra di dialogo al gestore esistente, fare doppio clic sul controllo.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 È anche possibile usare la scheda **Variabili membro** nella **Creazione guidata classe MFC** per aggiungere nuove variabili membro per una classe specificata e visualizzare quelle già definite.  
  
 Requisiti  
  
 MFC  
  
## Vedere anche  
 [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Creazione guidata classe MFC](../mfc/reference/mfc-class-wizard.md)   
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)   
 [Override di una funzione virtual](../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)
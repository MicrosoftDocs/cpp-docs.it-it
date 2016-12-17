---
title: "Operazioni di progettazione di una procedura guidata | Microsoft Docs"
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
  - "creazioni guidate personalizzate, progettazione"
ms.assetid: dc22746b-99e3-4569-a8b4-b3d7cbabf8f2
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operazioni di progettazione di una procedura guidata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare una procedura guidata per creare e configurare i file iniziali di progetto più comuni.  Come in qualsiasi progetto, per la creazione di una procedura guidata è necessaria una certa pianificazione.  Nei passaggi descritti di seguito viene illustrata una procedura che consente di acquisire una certa familiarità con la Creazione guidata personalizzata di Visual C\+\+ e viene spiegato come applicarla ai propri progetti.  
  
1.  Esaminare gli [esempi di creazione guidata personalizzata](http://msdn.microsoft.com/it-it/6afa2143-062c-4a68-81ca-66cbf4b95261) inclusi in Visual Studio.  
  
2.  Impostare la base del tipo di progetto che si desidera creare con la procedura guidata.  Come accade per la creazione di tutte le applicazioni, è possibile che a questo processo prendano parte più persone e che venga sottoposto a diverse iterazioni.  
  
3.  Creare il progetto con la [Creazione guidata personalizzata](../ide/creating-a-custom-wizard.md) di Visual C\+\+ specificando le opzioni per l'interfaccia utente e per i numeri di pagina.  
  
    > [!NOTE]
    >  Se non si indica alcuna interfaccia utente, ovvero si deseleziona **Interfaccia utente** in [Impostazioni applicazione, Creazione guidata applicazione](../ide/application-settings-custom-wizard.md), verrà impostato il parametro personalizzato WIZARD\_UI\=**FALSE** e i file di modello del progetto verranno creati senza input dell'utente e senza file HTM.  Di conseguenza, i numeri di pagina non verranno specificati.  Per ulteriori informazioni, vedere [Il file VSZ \(Controllo progetto\)](../ide/dot-vsz-file-project-control.md).  
  
4.  [Esaminare il progetto di base](../ide/examining-the-basic-wizard-project.md) creato nella Creazione guidata personalizzata.  
  
5.  Se un'interfaccia utente è stata inserita nella procedura guidata, eseguire quest'ultima per [ulteriori informazioni sui meccanismi della creazione guidata personalizzata](../ide/examining-the-mechanics-of-a-wizard.md).  
  
6.  [Personalizzare la procedura guidata di base](../ide/customizing-your-wizard.md).  
  
7.  [Aggiungere la guida sensibile al contesto](../ide/providing-context-sensitive-help.md)  
  
8.  [Includere la funzione di gestione degli errori](../ide/handling-errors-in-wizards.md) per il codice JScript e HTML.  
  
9. Compilare ed eseguire il test della procedura guidata.  
  
10. Eseguire il debug della procedura guidata.  Per ulteriori informazioni, vedere [Debug di script e applicazioni Web](../Topic/Debugging%20Web%20Applications%20and%20Script.md).  
  
    > [!NOTE]
    >  In caso di debug di codice JScript, non è possibile eseguire il debug in modalità mista con codice nativo.  
  
## Vedere anche  
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)
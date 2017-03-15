---
title: "Implementing Property Pages | Microsoft Docs"
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
  - "IPropertyPage class"
  - "IPropertyPage2 class"
  - "proprietà (pagine), implementazione"
ms.assetid: 62f29440-33a7-40eb-a1ef-3634c95f640c
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Implementing Property Pages
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le pagine delle proprietà sono oggetti COM che implementano `IPropertyPage` o un'interfaccia **IPropertyPage2**.  ATL fornisce il supporto per implementare le pagine delle proprietà con [Procedura guidata della pagina delle proprietà ATL](../atl/reference/atl-property-page-wizard.md) in [Aggiungere la finestra di dialogo della classe](../ide/add-class-dialog-box.md).  
  
 Per creare una pagina delle proprietà utilizzando ATL:  
  
-   Creare o aprire un progetto server \(DLL\) la libreria a collegamento dinamico ATL.  
  
-   Aprire [Aggiungere la finestra di dialogo della classe](../ide/add-class-dialog-box.md) e selezionare **Pagina delle proprietà ATL**.  
  
-   Assicurarsi che la pagina delle proprietà sia apartment multithreading \(poiché prevede un'interfaccia utente\).  
  
-   Impostare il titolo, la descrizione \(stringa doc\) e il file della Guida da associare alla pagina.  
  
-   Aggiungere i controlli alla risorsa finestra di dialogo generata per fungere da interfaccia utente della pagina delle proprietà.  
  
-   Rispondere alle modifiche nell'interfaccia utente della pagina per eseguire la convalida, aggiornare il sito della pagina, o per aggiornare gli oggetti associati alla pagina.  In particolare, chiamata [IPropertyPageImpl::SetDirty](../Topic/IPropertyPageImpl::SetDirty.md) quando l'utente apporta modifiche alla pagina delle proprietà.  
  
-   Facoltativamente eseguire l'override dei metodi `IPropertyPageImpl` utilizzando le linee guida riportate di seguito.  
  
    |Metodo di IPropertyPageImpl|Override quando…|Note|  
    |---------------------------------|----------------------|----------|  
    |[SetObjects](../Topic/IPropertyPageImpl::SetObjects.md)|Eseguire controlli di base del settore sanitario di base per il numero di oggetti passati alla pagina e le interfacce che supportano.|Eseguire il codice prima di chiamare l'implementazione della classe base.  Se gli oggetti impostati conformi alle aspettative, è necessario avere esito negativo la chiamata il prima possibile.|  
    |[Attiva](../Topic/IPropertyPageImpl::Activate.md)|Inizializzare l'interfaccia utente della pagina \(ad esempio, impostare i controlli della finestra di dialogo con i valori delle proprietà correnti dagli oggetti, creare i controlli dinamicamente, o eseguire altre inizializzazioni\).|Chiamare l'implementazione della classe base prima del codice in modo dalla classe base ha la possibilità di creare la finestra di dialogo e tutti i controlli prima di tentare di aggiornarli.|  
    |[Apply](../Topic/IPropertyPageImpl::Apply.md)|Convalidare le impostazioni delle proprietà e aggiornare gli oggetti.|Non è necessario chiamare l'implementazione della classe base poiché non si limita oltre all'analisi la chiamata.|  
    |[Disattivare](../Topic/IPropertyPageImpl::Deactivate.md)|Pulisce gli elementi relativi alle finestre.|L'implementazione della classe base elimina la finestra di dialogo che rappresenta la pagina delle proprietà.  Per pulire prima che la finestra di dialogo venga eliminato, è necessario aggiungere il codice prima di chiamare la classe base.|  
  
 Per un esempio di implementazione della pagina delle proprietà, vedere [esempio: Implementare una pagina delle proprietà](../atl/example-implementing-a-property-page.md).  
  
> [!NOTE]
>  Se si desidera ospitare controlli ActiveX nella pagina delle proprietà, sarà necessario modificare la derivazione della classe generata mediante procedura guidata.  **CDialogImpl\<CYourClass\>** di sostituzione con **CAxDialogImpl\<CYourClass\>** nell'elenco di classi base.  
  
## Vedere anche  
 [Pagine delle proprietà](../atl/atl-com-property-pages.md)   
 [Esempio ATLPages](../top/visual-cpp-samples.md)
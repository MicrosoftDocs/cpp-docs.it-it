---
title: "Personalizzazione della procedura guidata | Microsoft Docs"
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
  - "creazioni guidate personalizzate"
  - "creazioni guidate personalizzate, creazione nei progetti di Visual C++"
ms.assetid: a3ff1c81-3eef-41e7-a6bc-2f98e4bf423f
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Personalizzazione della procedura guidata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Durante la personalizzazione della procedura guidata creata con la [Creazione guidata personalizzata](../ide/application-settings-custom-wizard.md) è necessario tenere conto di una serie di attività frequenti indicate di seguito.  
  
-   Nel file VSZ specificare tutti i parametri personalizzati che garantiscono il funzionamento della procedura guidata.  Per ulteriori informazioni, vedere [Il file VSZ \(Controllo progetto\)](../ide/dot-vsz-file-project-control.md) e [Simboli della creazione guidata personalizzata predefiniti](../ide/custom-parameters-in-the-wizard-dot-vsz-file.md).  
  
     Se la procedura guidata viene localizzata in diverse lingue, aggiungere i parametri delle lingue in questione al file VSZ.  Per ulteriori informazioni, vedere [Localizzazione di una procedura guidata in più lingue](../ide/localizing-a-wizard-to-multiple-languages.md).  
  
-   Personalizzare i [file modello](../ide/template-files.md) \(e [Templates.inf](../ide/templates-inf-file.md)\) per specificare le direttive relative alle selezioni dell'utente.  
  
-   Personalizzare il [file Default.js](../ide/jscript-file.md) per specificare una gestione speciale aggiuntiva della procedura guidata.  È possibile scrivere funzioni personalizzate e utilizzare le funzioni fornite in [Common.js](../ide/customizing-cpp-wizards-with-common-jscript-functions.md).  
  
-   Progettare icone e altre immagini che verranno utilizzate nell'interfaccia utente HTML.  
  
-   Progettare l'interfaccia utente HTML.  
  
-   Aggiungere alla tabella dei simboli HTML i simboli da associare ai pulsanti, ai controlli, alle caselle di testo e ad altri elementi utilizzati dalla procedura guidata.  
  
     Di seguito è riportata una porzione di codice HTML generato nella Creazione guidata personalizzata:  
  
    ```  
    <SYMBOL NAME="WIZARD_DIALOG_TITLE" TYPE=text VALUE="MyCustomWiz">  
          </SYMBOL>  
    <SYMBOL NAME="SAMPLE_CHECKBOX" TYPE=checkbox VALUE=true>  
          </SYMBOL>  
    ```  
  
     Con questa procedura guidata, dal titolo MyCustomWiz, viene visualizzata una casella di controllo selezionata per impostazione predefinita.  
  
-   Nella sezione contrassegnata come `<SCRIPT LANGUAGE="JSCRIPT">` nei file HTML, aggiungere le chiamate di funzione JScript e accedere al Modello a oggetti di Visual Studio per personalizzare il funzionamento della procedura guidata.  È necessario chiamare queste funzioni utilizzando `window.external`, come illustrato di seguito.  
  
    ```  
    window.external.AddSymbol("MAIN_FRAME_DEFAULT_STYLES", true);  
    window.external.AddSymbol("MAIN_FRAME_STYLE_FLAGS", "");  
    ```  
  
    > [!NOTE]
    >  I metodi, le proprietà e gli eventi esposti tramite [Automazione ed Extensibility in Visual Studio](../Topic/Automation%20and%20Extensibility%20for%20Visual%20Studio.md), [Modello di codice Visual C\+\+](http://msdn.microsoft.com/it-it/dd6452c2-1054-44a1-b0eb-639a94a1216b), [Modello di progetto](http://msdn.microsoft.com/it-it/06c1bbd9-4c79-4f97-ad6d-2b1dea8ecd1f) e [Modello di procedura guidata](http://msdn.microsoft.com/it-it/159395ac-33c7-47bf-ad42-4e1435ddc758) consentono di gestire a livello di codice tutti gli aspetti del progetto di procedura guidata, dalla creazione fino alla compilazione, nei file JScript e nei file HTM.  
  
-   Se necessario, personalizzare il [file VSDIR](../Topic/Adding%20Wizards%20to%20the%20Add%20Item%20and%20New%20Project%20Dialog%20Boxes%20by%20Using%20.Vsdir%20Files.md), facendo sì che le informazioni relative al file VSZ e a tutti gli altri modelli vengano comprese dalla shell.  Indicare, ad esempio, gli ID di risorsa dell'icona, i flag, i nomi localizzati e così via.  
  
-   Creare file HTM e file modello in tutte le lingue in cui la procedura guidata sarà localizzata.  Aggiungere tali file alle directory di progetto appropriate.  
  
-   [Fornire la guida sensibile al contesto](../ide/providing-context-sensitive-help.md) relativa alla procedura guidata.  
  
## Vedere anche  
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Operazioni di progettazione di una procedura guidata](../ide/steps-to-designing-a-wizard.md)   
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [Inserimento della guida sensibile al contesto](../ide/providing-context-sensitive-help.md)   
 [Gestione degli errori nelle procedure guidate](../ide/handling-errors-in-wizards.md)
---
title: "Analisi dei meccanismi di una procedura guidata | Microsoft Docs"
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
  - "creazioni guidate personalizzate, progetti di procedura guidata"
ms.assetid: 79917075-a843-40f6-abf8-64d98e5f6bdc
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Analisi dei meccanismi di una procedura guidata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Non è necessario compilare un progetto di procedura guidata per poterlo utilizzare immediatamente.  Quando sono stati creati gli elementi necessari, tramite VSDIR nella finestra di dialogo `New Project` viene visualizzata l'icona della procedura guidata e nella finestra di dialogo `Add New Item` viene visualizzato il nome della procedura guidata nel menu di scelta rapida.  Sarà possibile avviare la procedura guidata immediatamente, semplicemente selezionandola.  
  
 Quando l'utente avvia la procedura guidata, nella shell dell'ambiente viene cocreato il modulo di gestione e viene eseguita la ricerca di <xref:EnvDTE.IDTWizard>.  Viene quindi chiamato <xref:EnvDTE.IDTWizard.Execute%2A> per avviare la procedura guidata.  
  
> [!NOTE]
>  Se la procedura guidata non è dotata di interfaccia, il progetto verrà creato con le impostazioni predefinite fornite e sarà visualizzato in Esplora risorse, con la struttura di nodo fornita nel file VSZ.  Nella restante parte di questo argomento si presupporrà che la procedura guidata disponga di un'interfaccia utente.  
  
 Se è disponibile un'interfaccia utente, l'utente potrà accettare o modificare le impostazioni predefinite di ciascun controllo nell'interfaccia basata sul codice HTML della procedura guidata.  Mentre l'utente passa da una pagina all'altra della procedura guidata apportando modifiche, nella sezione Script del codice HTML vengono chiamate funzioni quali <xref:Microsoft.VisualStudio.VsWizard.VCWizCtlClass.Navigate%2A> e <xref:Microsoft.VisualStudio.VsWizard.VCWizCtlClass.Next%2A>.  
  
 Ogni volta che vengono selezionate diverse opzioni all'interno della procedura guidata, le selezioni vengono acquisite nella tabella dei simboli nel controllo della procedura guidata.  Nella tabella dei simboli viene operata un'associazione agli ID dei controlli nella pagina HTML della procedura guidata, in modo da garantire una corrispondenza univoca tra le selezioni dell'utente e la tabella dei simboli.  
  
 Quando l'utente sceglie **Fine** nell'interfaccia utente della procedura guidata, viene chiamata la funzione Jscript **OnFinish** dallo script HTML.  
  
> [!NOTE]
>  È possibile personalizzare **OnFinish** in Default.js per eseguire le eventuali attività aggiuntive necessarie.  
  
 Nel modulo di gestione della procedura guidata vengono esaminati i file modello, analizzandoli ed eseguendone il rendering in base alle scelte dell'utente.  I file di cui è stato eseguito il rendering vengono copiati nella directory del progetto e aggiunti al progetto.  Il progetto appena creato viene caricato nell'ambiente di Visual Studio e i nodi e i file del progetto vengono visualizzati in Esplora soluzioni.  
  
## Vedere anche  
 <xref:Microsoft.VisualStudio.VsWizard.VCWizCtl>   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Operazioni di progettazione di una procedura guidata](../ide/steps-to-designing-a-wizard.md)   
 [Personalizzazione della procedura guidata](../ide/customizing-your-wizard.md)
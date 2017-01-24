---
title: "Analisi del progetto della procedura guidata di base | Microsoft Docs"
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
  - "creazioni guidate personalizzate, file creati"
  - "creazioni guidate personalizzate, progetti di procedura guidata"
ms.assetid: c6423e3c-ddb0-43e0-b8e5-9e3a98a7908c
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Analisi del progetto della procedura guidata di base
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dopo aver utilizzato la [Creazione guidata personalizzata](../ide/creating-a-custom-wizard.md) per creare il progetto di base, esaminare i file creati automaticamente.  
  
1.  In **Esplora soluzioni** espandere il progetto ed esaminare [i file](../ide/files-created-for-your-wizard.md) creati nella procedura guidata per il progetto.  
  
2.  Fare doppio clic su Default.js per aprire il [file JScript](../ide/jscript-file.md) del progetto nell'editor di codice.  Questo file contiene le funzioni JScript che consentono di creare il progetto quando l'utente sceglie **Fine** nella procedura guidata.  Esaminare le funzioni e i commenti TODO in questo file.  
  
3.  Se il progetto prevede un'interfaccia utente, osservare il contenuto della cartella denominata [file HTML](../ide/html-files.md). Si noterà che in essa sono presenti tutti i file HTM specificati nella schermata [Impostazioni applicazione](../ide/application-settings-custom-wizard.md) della Creazione guidata personalizzata.  Fare doppio clic su Default.htm per aprire la pagina HTML principale del progetto nella [finestra di progettazione HTML](../Topic/HTML%20Designer.md).  È possibile visualizzare il codice HTML in [Design View](../Topic/Design%20View1.md) oppure in visualizzazione HTML, come [markup HTML](http://msdn.microsoft.com/it-it/7bb90672-b36a-4cf9-9bbc-677c9b956318).  Passare alla visualizzazione Markup HTML ed esaminare la markup HTML.  Fare clic sul pulsante **Visualizzazione Solo script** \(nell'angolo superiore destro della finestra di modifica Visualizzazione HTML, accanto all'elenco a discesa **Eventi**\) ed esaminare il codice JScript nel file HTM.  Per impostazione predefinita il file contiene le funzioni JScript che consentono l'inizializzazione e il caricamento della procedura guidata e in cui è specificato il funzionamento predefinito dell'interfaccia **IVCWizCtrlUI**.  Per ulteriori informazioni, vedere l'oggetto <xref:Microsoft.VisualStudio.VsWizard.VCWizCtl> di coclasse.  
  
4.  Salvare e chiudere il progetto generato nella procedura guidata.  
  
5.  Aprire la finestra di dialogo **Nuovo progetto** di Visual Studio e cercare l'icona della procedura guidata.  Fare doppio clic sull'icona per visualizzare la procedura guidata.  È possibile esaminare le schermate di base della procedura guidata create nella Creazione guidata personalizzata.  La prima schermata contiene alcuni controlli HTML di esempio e i pulsanti standard **Fine**, **Annulla** e **?**.  
  
6.  Fare clic su **Fine** per compilare un nuovo progetto con la procedura guidata.  Per impostazione predefinita, nella procedura guidata vengono creati due file di testo: ReadMe.txt e Sample.txt.  Questi file descrivono il progetto creato dalla procedura guidata.  Chiudere il progetto e riaprire il progetto della procedura guidata.  
  
7.  Vedere [Analisi dei meccanismi di una procedura guidata](../ide/examining-the-mechanics-of-a-wizard.md) per avere una visione più chiara delle modalità con cui, a livello dell'ambiente di Visual Studio e del modulo di gestione della procedura guidata di Visual C\+\+, è stato realizzato il progetto tramite la procedura guidata.  
  
 Sarà quindi possibile iniziare la [Personalizzazione della procedura guidata](../ide/customizing-your-wizard.md).  
  
## Vedere anche  
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Operazioni di progettazione di una procedura guidata](../ide/steps-to-designing-a-wizard.md)   
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [Inserimento della guida sensibile al contesto](../ide/providing-context-sensitive-help.md)   
 [Personalizzazione della procedura guidata](../ide/customizing-your-wizard.md)
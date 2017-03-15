---
title: "File JScript | Microsoft Docs"
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
  - "AddConfig (metodo)"
  - "AddFilesToCustomProj (metodo)"
  - "AddFilters (metodo)"
  - "Common.js (file)"
  - "CreateCustomInfFile (metodo)"
  - "CreateCustomProject (metodo)"
  - "creazioni guidate personalizzate, accesso a modello a oggetti procedura guidata"
  - "creazioni guidate personalizzate, file JScript"
  - "debug [JScript], abilitazione del debug di script"
  - "debug [JScript], file JScript"
  - "debug di script"
  - "debug di script, abilitazione del debug di script"
  - "Default.js (file)"
  - "DelFile (metodo)"
  - "file [C++], creati tramite una creazione guidata personalizzata"
  - "GetTargetName (metodo)"
  - "file JScript"
  - "OnFinish (metodo)"
  - "PchSettings (metodo)"
ms.assetid: 7841a09e-2dd2-4f1a-a13a-39ac53f24315
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# File JScript
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Durante la [Creazione guidata personalizzata](../ide/custom-wizard.md) viene effettuato l'accesso a un modulo di gestione di script e viene creato un file Jscript, Default.js, per ciascun progetto.  Nella Procedura guidata personalizzata è inoltre incluso il file [Common.js](../ide/customizing-cpp-wizards-with-common-jscript-functions.md).  In questi file sono inserite le funzioni JScript che consentono di accedere ai modelli a oggetti di Visual Studio e Visual C\+\+ per personalizzare una procedura guidata.  Per l'elenco di questi modelli, vedere [Progettazione di una procedura guidata](../ide/designing-a-wizard.md). È possibile aggiungere funzioni personalizzate al file Default.js del progetto della procedura guidata.  Per accedere a proprietà e metodi del modello a oggetti della procedura guidata o del modello dell'ambiente da un file Jscript, anteporre rispettivamente"wizard." e "dte." all'elemento modello a oggetti.  
  
 Di seguito è riportato un esempio:  
  
```  
function CreateCustomProject(strProjectName, strProjectPath)  
{  
   try  
   {  
      var strProjTemplatePath = wizard.FindSymbol('PROJECT_TEMPLATE_PATH');  
var strProjTemplate = '';  
      strProjTemplate = strProjTemplatePath + '\\default.vcproj';  
  
      var Solution = dte.Solution;  
      var strSolutionName = "";  
      if (wizard.FindSymbol("CLOSE_SOLUTION"))  
...  
```  
  
 Quando si sceglie **Fine** nella [Creazione guidata personalizzata](../ide/custom-wizard.md), il file Default.js viene caricato nella cartella File di script in Esplora soluzioni.  Con questo file Jscript vengono creati progetti e viene eseguito il rendering dei modelli, che vengono quindi aggiunti alla soluzione quando l'utente fa clic su **Fine** nella procedura guidata.  
  
 Per impostazione predefinita il file Default.js del progetto include le seguenti funzioni:  
  
|Nome funzione|Descrizione|  
|-------------------|-----------------|  
|**AddConfig**|Aggiunge le configurazioni del progetto.  È possibile fornire le impostazioni del compilatore e del linker.|  
|**AddFilesToCustomProj**|Quando si sceglie **Fine**, aggiunge al progetto i file specificati.|  
|**AddFilters**|Quando si sceglie **Fine**, aggiunge al progetto i filtri d'origine specificati.|  
|**CreateCustomProject**|Quando si sceglie **Fine**, crea il progetto nella posizione specificata.|  
|**CreateCustomInfFile**|Crea il [file Templates.inf](../ide/templates-inf-file.md) del progetto.|  
|**DelFile**|Elimina il file specificato.|  
|**GetTargetName**|Ottiene il nome del file specificato.|  
|**OnFinish**|Chiamata nella procedura guidata quando si fa clic su **Fine** per creare il progetto, aggiunge file e filtri, esegue il rendering dei modelli e imposta la configurazione.|  
|**PchSettings**|Definisce le impostazioni dell'intestazione precompilata.  Per ulteriori informazioni, vedere [SetCommonPchSettings](../ide/setcommonpchsettings.md) nel riferimento Common.js.|  
  
 A ciascuna procedura guidata è associato un file Default.js univoco che include commenti TODO che consentono di identificare i punti in cui è necessario personalizzare il file.  
  
 In Visual C\+\+ è inoltre incluso [Common.js](../ide/customizing-cpp-wizards-with-common-jscript-functions.md), un file condiviso tra tutte le procedure guidate e incluso nel progetto della procedura guidata.  È possibile utilizzare le funzioni di Common.js.  
  
> [!NOTE]
>  Common.js contiene descrizioni di ogni funzione e dei relativi parametri.  Per ulteriori informazioni, vedere i commenti in Common.js.  
  
 Se si dispone di funzioni che si desidera condividere tra i progetti delle procedure guidate, è possibile aggiungerle al file Common.js.  Creare una versione personalizzata di Common.js e salvarla in un percorso comune, quindi impostare SCRIPT\_COMMON\_PATH su questo percorso nel [file con estensione vsz](../ide/dot-vsz-file-project-control.md).  
  
> [!NOTE]
>  Le procedure guidate incluse in Visual C\+\+ utilizzano le funzioni JScript in Common.js,  la cui modifica può provocare comportamenti imprevisti nelle procedure guidate di Visual C\+\+.  
  
 Per ulteriori informazioni su JScript, vedere [Writing, Compiling, and Debugging JScript Code](http://msdn.microsoft.com/it-it/13e57e7d-4867-4555-b9e4-fc24aa75e628).  
  
## Debug di script  
 Per effettuare il debug degli script nei file HTML delle procedure guidate, è necessario attivare tale tipo di debug.  
  
#### Per attivare il debug di script  
  
1.  In Internet Explorer, scegliere **Opzioni Internet** dal menu **Strumenti**.  
  
2.  Fare clic sulla scheda **Avanzate**.  
  
3.  Nella categoria **Esplorazione** deselezionare la casella di controllo **Disabilita debug degli script**.  
  
 In questo modo verrà inoltre consentita la visualizzazione di common.js e default.js nella finestra **Documenti aperti** quando si fa clic sul pulsante Fine della procedura guidata.  
  
## Vedere anche  
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)
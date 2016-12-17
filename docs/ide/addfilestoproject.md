---
title: "AddFilesToProject | Microsoft Docs"
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
  - "AddFilesToProject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddFilesToProject (metodo)"
ms.assetid: 3ff11406-bb4a-4eb7-a8df-c655b964ff76
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# AddFilesToProject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di aggiungere al progetto tutti i file elencati in Templates.inf.  
  
## Sintassi  
  
```  
  
      function AddFilesToProject(   
   oProj,   
   strProjectName,   
   InfFile    
);  
```  
  
#### Parametri  
 `oProj`  
 Progetto selezionato.  
  
 `strProjectName`  
 Nome del progetto.  
  
 *InfFile*  
 Oggetto file Templates.inf.  Il file contiene un elenco dei nomi di file creati al completamento della procedura guidata.  
  
## Note  
 Chiamare questa funzione per aggiungere al progetto tutti i file elencati in Templates.inf.  Tramite questa funzione è possibile aggiungere file modello, di risorse o della Guida.  
  
## Esempio  
  
```  
// Assign the project path and project name.  
var strProjectPath = wizard.FindSymbol("PROJECT_PATH");  
var strProjectName = wizard.FindSymbol("PROJECT_NAME");  
  
// Create the Visual C++ project and call it "MyProj"  
selProj = CreateProject(strProjectName, strProjectPath);  
selProj.Object.Keyword = "MyProj";  
  
// Add common and specific configurations to the project.  
AddCommonConfig(selProj, strProjectName);  
AddSpecificConfig(selProj, strProjectName);  
  
// Set the project filters  
SetFilters(selProj);  
  
// Create the project's Templates.inf file   
var InfFile = CreateInfFile();  
  
// Add the files in Templates.inf to the project.  
AddFilesToProject(selProj, strProjectName, InfFile);  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [CreateInfFile](../ide/createinffile.md)   
 [SetCommonPchSettings](../ide/setcommonpchsettings.md)
---
title: "CreateProject | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CreateProject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateProject (metodo)"
ms.assetid: b5598b46-fe29-4ad0-8bfe-a4dc789aeebd
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# CreateProject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un progetto C\+\+.  
  
## Sintassi  
  
```  
  
      function CreateProject(   
   strProjectName,   
   strProjectPath    
);  
```  
  
#### Parametri  
 `strProjectName`  
 Stringa contenente il nome del progetto.  
  
 *strProjectPath*  
 Stringa contenente il percorso del progetto.  
  
## Valore restituito  
 L'oggetto progetto.  
  
## Note  
 Chiamare questa funzione per creare un progetto C\+\+ che sia possibile aprire in Visual Studio.  Se il parametro di contesto della procedura guidata **WizardType** viene specificato come **vsWizardAddSubProject**, il progetto verrà aggiunto come sottoprogetto al progetto esistente.  Per ulteriori informazioni, vedere [Enumerazione ContextParams](../Topic/Context%20Parameters%20for%20Launching%20Wizards.md).  
  
## Esempio  
 Vedere [AddFilesToProject](../ide/addfilestoproject.md).  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)
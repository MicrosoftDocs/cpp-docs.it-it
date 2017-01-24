---
title: "SetFilters | Microsoft Docs"
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
  - "SetFilters"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetFilters (metodo)"
ms.assetid: ae934e1b-8ead-4c1d-a0f8-e9c80d182340
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SetFilters
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di aggiungere filtri di origine, di inclusione e di risorsa per le cartelle del progetto.  
  
## Sintassi  
  
```  
  
      function SetFilters(   
   oProj    
);  
```  
  
#### Parametri  
 `oProj`  
 Progetto selezionato.  
  
## Note  
 Chiamare la funzione per aggiungere filtri di origine, di inclusione e di risorsa per le cartelle del progetto.  Questa funzione trova i seguenti simboli nel progetto:  
  
-   SOURCE\_FILTER  
  
-   INCLUDE\_FILTER  
  
-   RESOURCE\_FILTER  
  
 Tali simboli contengono le estensioni di file utilizzate nelle operazioni di filtro.  
  
## Esempio  
  
```  
// Create and set the project name and path.  
selProj = CreateProject(strProjectName, strProjectPath);  
// Add the previously-identified configurations to the project.  
AddConfigurations(selProj, strProjectName);  
// Set filters for the project.  
SetFilters (selproj);  
// Indicate that the project is an ATL project.  
selProj.Object.keyword = "AtlProj";  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)
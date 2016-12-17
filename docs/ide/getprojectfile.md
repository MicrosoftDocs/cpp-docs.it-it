---
title: "GetProjectFile | Microsoft Docs"
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
  - "GetProjectFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetProjectFile (metodo)"
ms.assetid: e5fdc468-755a-4b4e-81bd-e63881531bed
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# GetProjectFile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di recuperare il tipo specificato del nome file.  
  
## Sintassi  
  
```  
  
      function GetProjectFile(   
   oProj,   
   strType,   
   bFullPath,   
   bMFC    
);  
```  
  
#### Parametri  
 oProj  
 Progetto selezionato.  
  
 `strType`  
 Tipo di file da recuperare, ad esempio STDAFX, RC, IDL, CPP, H, ODL o DEF.  
  
 *bFullPath*  
 Flag che indica se restituire il nome del percorso completo.  
  
 *bMFC*  
 Consente di stabilire se il progetto è basato su MFC.  Se `strType` è CPP o H, viene considerato come basato su MFC.  In caso contrario, il progetto viene considerato come basato su ATL.  
  
## Valore restituito  
 Il nome file dei tipi di file per progetto.  
  
## Note  
 Chiamare questa funzione per ottenere il nome file del tipo specificato nel progetto specificato.  
  
## Esempio  
  
```  
// The selected MFC project's CPP file is retrieved and   
// assigned to strFileName.  
var strFileName = GetProjectFile(selProj, "CPP", false, true);  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [GetProjectPath](../ide/getprojectpath.md)   
 [GetUniqueFileName](../ide/getuniquefilename.md)
---
title: "DeleteFile | Microsoft Docs"
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
  - "DeleteFile (metodo)"
ms.assetid: 0cddaedb-8fad-440e-8f18-677fdff94a63
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# DeleteFile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Elimina il file specificato.  
  
## Sintassi  
  
```  
  
      function DeleteFile(   
   oFSO,   
   strFile    
)   
```  
  
#### Parametri  
 *oFSO*  
 Oggetto file system.  
  
 `strFile`  
 Nome del file da eliminare.  
  
## Note  
 Chiamare questa funzione per eliminare il file specificato.  
  
## Esempio  
  
```  
// Declare a temporary file.  
var strFile = strTempFolder + "\\" + strTarget;  
var strClassName = strTarget.split(".");  
wizard.AddSymbol("SAFE_CLASS_NAME", strClassName[0]);  
wizard.AddSymbol("SAFE_ITEM_NAME", strClassName[0]);  
  
// Declare the template name.  
var strTemplate = strTemplatePath + "\\" + strTpl;  
  
// Render and insert the template.  
wizard.RenderTemplate(strTemplate, strFile, bCopyOnly);  
  
// Create a new project file and add the file from the template.  
var projfile = projItems.AddFromTemplate(strFile, strTarget);  
  
// Delete the temporary file from the file structure object.  
DeleteFile(fso, strFile);  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)
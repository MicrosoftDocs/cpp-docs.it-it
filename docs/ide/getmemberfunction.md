---
title: "GetMemberfunction | Microsoft Docs"
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
  - "GetMemberFunction"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetMemberfunction (metodo)"
ms.assetid: 1e610977-9bc7-4ff2-a79f-132c8e913b4d
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# GetMemberfunction
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di recuperare un oggetto funzione in base al nome dato.  
  
## Sintassi  
  
```  
  
      function GetMemberfunction(   
   oClass,   
   strFuncName,   
   oProj    
);  
```  
  
#### Parametri  
 *oClass*  
 Oggetto di classe selezionato.  
  
 `strFuncName`  
 Nome della funzione da recuperare.  
  
 `oProj`  
 Progetto selezionato.  
  
## Valore restituito  
 La funzione indicata in `strFuncName`.  
  
## Note  
 Consente di recuperare un oggetto funzione in base al nome dato.  Per ulteriori informazioni, vedere <xref:Microsoft.VisualStudio.VCCodeModel.VCCodeModel.Functions%2A> nel Modello codice di Visual C\+\+.  
  
## Esempio  
  
```  
// Gets the function ExitInstance from the class CWinApp in the   
// current project.  
var oExitInstance = GetMemberFunction(oCWinApp, "ExitInstance", oProj);  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)
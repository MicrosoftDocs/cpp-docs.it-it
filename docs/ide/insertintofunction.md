---
title: "InsertIntoFunction | Microsoft Docs"
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
  - "InsertIntoFunction"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InsertIntoFunction (metodo)"
ms.assetid: 50500c3c-bee3-4a9c-a403-7dcd752de23c
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# InsertIntoFunction
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Funzione utilizzata in [AddATLSupportToProject](../ide/addatlsupporttoproject.md) per inserire del codice in [InitInstance](../Topic/CWinApp::InitInstance.md).  
  
## Sintassi  
  
```  
  
      function InsertIntoFunction(   
   oFunction,   
   strSearchString,   
   nStartLine,   
   nEndLine,   
   bInsideIfBlock    
);  
```  
  
#### Parametri  
 *oFunction*  
 Oggetto funzione in cui viene effettuato l'inserimento.  
  
 `strSearchString`  
 Stringa da trovare per determinare il punto di inserimento.  
  
 *nStartLine*  
 Riga iniziale da passare a [GetCodeForInitInstance](../ide/getcodeforinitinstance.md).  
  
 *nEndLine*  
 Riga finale da passare a [GetCodeForInitInstance](../ide/getcodeforinitinstance.md).  
  
 *bInsideIfBlock*  
 Consente di stabilire se l'inserimento viene operato in un blocco di funzione.  
  
## Valore restituito  
 **true** se la funzione ha esito positivo, **false** in caso contrario.  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [GetMemberfunction](../ide/getmemberfunction.md)
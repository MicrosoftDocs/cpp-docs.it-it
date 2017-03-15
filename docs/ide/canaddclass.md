---
title: "CanAddClass | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CanAddClass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanAddClass (metodo)"
ms.assetid: 76739742-1e34-470c-910d-8784f0adfbf0
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# CanAddClass
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Chiamata nella procedura guidata per verificare che il progetto sia compatibile con la creazione guidata codice che si desidera eseguire.  
  
## Sintassi  
  
```  
  
      function CanAddClass(   
   oProj,   
   oObject    
);  
```  
  
#### Parametri  
 `oProj`  
 Progetto selezionato.  
  
 `oObject`  
 Oggetto selezionato.  In questo caso, il progetto corrente.  
  
## Valore restituito  
 true se è possibile aggiungere la classe, false in caso contrario.  
  
## Note  
 Durante la procedura guidata questa funzione viene chiamata quando il parametro PREPROCESS\_FUNCTION si trova nel [file vsz del controllo del progetto](../ide/dot-vsz-file-project-control.md).  
  
 Consente di verificare se l'oggetto [Modello codice di Visual C\+\+](http://msdn.microsoft.com/it-it/dd6452c2-1054-44a1-b0eb-639a94a1216b) è disponibile.  Se il modello di codice non è disponibile, la funzione segnalerà un errore e restituirà **false**.  
  
## Esempio  
  
```  
// Determine if a class can be added to the project  
if (CanAddClass(selProj, selObj))  
{  
   return true;  
}  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [CanAddMFCClass](../ide/canaddmfcclass.md)   
 [CanAddATLClass](../ide/canaddatlclass.md)   
 [IsMFCProject](../ide/ismfcproject.md)
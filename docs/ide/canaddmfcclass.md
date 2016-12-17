---
title: "CanAddMFCClass | Microsoft Docs"
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
  - "CanAddMFCClass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanAddMFCClass (metodo)"
ms.assetid: 6a97a410-b028-4aad-9b06-04c12cf481eb
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CanAddMFCClass
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Chiamata nella procedura guidata per verificare che sia possibile aggiungere una classe MFC al progetto.  
  
## Sintassi  
  
```  
  
      function CanAddMFCClass(   
   oProj,   
   oObject    
);  
```  
  
#### Parametri  
 `oProj`  
 Progetto selezionato  
  
 `oObject`  
 Oggetto selezionato.  In questo caso, il progetto corrente.  
  
## Valore restituito  
 **true** se è possibile aggiungere la classe, **false** se la funzione viene chiamata per un progetto non MFC e senza supporto MFC.  
  
## Note  
 Chiamata durante la procedura guidata per verificare se il progetto è compatibile con la Creazione guidata codice da eseguire, ovvero se è possibile utilizzare una classe MFC nel progetto.  
  
 Durante la procedura guidata questa funzione viene chiamata quando il parametro PREPROCESS\_FUNCTION si trova nel [file vsz del controllo del progetto](../ide/dot-vsz-file-project-control.md) e consente di verificare se l'oggetto [Modello codice di Visual C\+\+](http://msdn.microsoft.com/it-it/dd6452c2-1054-44a1-b0eb-639a94a1216b) è disponibile.  Se il modello di codice non è disponibile, la funzione segnalerà un errore e restituirà **false**.  
  
## Esempio  
  
```  
// Determine if an MFC class can be added to the project  
if (CanAddMFCClass(selProj, selObj))  
{  
   return true;  
}  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [CanAddClass](../ide/canaddclass.md)   
 [CanAddATLClass](../ide/canaddatlclass.md)   
 [IsMFCProject](../ide/ismfcproject.md)
---
title: "AddInterfaceFromFile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "AddInterfaceFromFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddInterfaceFromFile (metodo)"
ms.assetid: fa848690-ad98-4fb4-bbcf-dffcaad05df2
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# AddInterfaceFromFile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di eseguire il rendering e di inserire un file modello contenente un'interfaccia.  
  
## Sintassi  
  
```  
  
      function AddInterfaceFromFile(   
   oCM,   
   strInterfaceFile    
);  
```  
  
#### Parametri  
 `oCM`  
 Oggetto [Visual C\+\+ Code Model](http://msdn.microsoft.com/it-it/dd6452c2-1054-44a1-b0eb-639a94a1216b).  
  
 *strInterfaceFile*  
 Nome del file modello, escluso il percorso.  
  
## Note  
 Chiamare questa funzione per eseguire il rendering e inserire nel file IDL del progetto un file modello contenente un'interfaccia.  
  
 Se l'interfaccia non viene aggiunta correttamente, verrà visualizzato un messaggio di errore.  
  
## Esempio  
  
```  
// Render myint.idl and insert into strProject.idl  
AddInterfaceFromFile(oCM, "myint.idl");  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)
---
title: "AddCoclassFromFile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "AddCoclassFromFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddCoclassFromFile (metodo)"
ms.assetid: a8a211fd-2df3-4361-8137-9c0d999b7f88
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# AddCoclassFromFile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di eseguire il rendering e di inserire nel file IDL del progetto un file modello contenente una coclasse.  
  
## Sintassi  
  
```  
  
      function AddCoclassFromFile(   
   oCM,   
   strCoclassFile    
);  
```  
  
#### Parametri  
 `oCM`  
 Oggetto [Visual C\+\+ Code Model](http://msdn.microsoft.com/it-it/dd6452c2-1054-44a1-b0eb-639a94a1216b).  
  
 *strCoclassFile*  
 Nome del file modello, escluso il percorso.  
  
## Note  
 Chiamare questa funzione per eseguire il rendering e inserire nel file IDL del progetto un file modello contenente una coclasse.  
  
## Esempio  
  
```  
// Render myproj.idl and insert into the project's .idl.  
AddCoclassFromFile(oCM, "myproj.idl");  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)
---
title: "GetInterfaceClasses | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetInterfaceClasses"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetInterfaceClasses (metodo)"
ms.assetid: 712c112f-b4ff-43c4-ad49-c4f4c13c48bd
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# GetInterfaceClasses
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Restituisce l'oggetto `VCCodeClass` associato a un'interfaccia.  
  
## Sintassi  
  
```  
  
      function GetInterfaceClasses(   
   strInterface,   
   oProject,   
   aryClasses    
);  
```  
  
#### Parametri  
 *strInterface*  
 Nome dell'interfaccia contenente gli oggetti di classe.  
  
 *oProject*  
 Progetto selezionato.  
  
 *aryClasses*  
 \[out\] Matrice di oggetti di classe nell'interfaccia.  
  
## Valore restituito  
 L'oggetto <xref:Microsoft.VisualStudio.VCCodeModel.VCCodeClass> associato a un'interfaccia.  
  
## Note  
 Chiamare questa funzione per recuperare le classi associate a un'interfaccia.  
  
## Esempio  
  
```  
var aryClasses = new Array();  
GetInterfaceClasses(oInterface.Name, selProj, aryClasses);  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [GetInterfaceType](../ide/getinterfacetype.md)
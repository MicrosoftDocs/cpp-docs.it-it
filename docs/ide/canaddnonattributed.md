---
title: "CanAddNonAttributed | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CanAddNonAttributed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanAddNonAttributed (metodo)"
ms.assetid: a2b0143e-f84b-40f3-8f51-23a492f651f8
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# CanAddNonAttributed
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di stabilire se nel progetto ATL sono supportati gli oggetti senza attributi.  
  
## Sintassi  
  
```  
  
function CanAddNonAttributed( );  
  
```  
  
## Valore restituito  
 **true** se nel progetto sono supportati oggetti ATL con e senza attributi, **false** se sono supportati solo oggetti con attributi.  
  
## Note  
 Chiamare questa funzione per indicare se il progetto supporta oggetti con e senza attributi.  
  
## Esempio  
  
```  
// Check if attributed project using CanAddNonAttributed  
window.external.Load(document);  
if (IsAttributedProject(window.external))  
{  
   ATTRIBUTED.checked = true;  
   if (!CanAddNonAttributed())  
      ATTRIBUTED.disabled = true;  
}  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [Concepts](../windows/attributed-programming-concepts.md)   
 [CanAddClass](../ide/canaddclass.md)
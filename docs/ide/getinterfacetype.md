---
title: "GetInterfaceType | Microsoft Docs"
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
  - "GetInterfaceType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetInterfaceType (metodo)"
ms.assetid: cc6403a8-0c2b-47f7-a8f7-9db95df87d5a
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# GetInterfaceType
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di recuperare il tipo di interfaccia.  
  
## Sintassi  
  
```  
  
      function GetInterfaceType(   
   oInterface    
);  
```  
  
#### Parametri  
 *oInterface*  
 Un oggetto <xref:Microsoft.VisualStudio.VCCodeModel.VCCodeInterface>.  
  
## Valore restituito  
 Una stringa indicante il tipo di interfaccia, ad esempio personalizzata, duale, dispatch o oleautomation.  
  
## Note  
 Chiamare questa funzione per recuperare il tipo di interfaccia.  
  
## Esempio  
 Vedere [GetMaxID](../ide/getmaxid.md).  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [GetInterfaceClasses](../ide/getinterfaceclasses.md)
---
title: "OnWizFinish | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OnWizFinish"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OnWizFinish (metodo)"
ms.assetid: 5e0790c3-c5b4-43de-b9db-b18d07c19f41
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# OnWizFinish
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Chiamata dallo script HTML della procedura guidata quando l'utente sceglie **Fine**.  Questa funzione chiama a sua volta la funzione **Finish** del controllo della procedura guidata.  
  
## Sintassi  
  
```  
  
      function OnWizFinish(   
   document    
);  
```  
  
#### Parametri  
 `document`  
 Oggetto documento HTML  
  
## Note  
 La funzione viene chiamata dallo script HTML della procedura guidata quando si fa clic su **Fine**.  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)
---
title: "SetMergeProxySymbol | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SetMergeProxySymbol"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetMergeProxySymbol (metodo)"
ms.assetid: d6a9db59-2d5b-4431-98bc-785675e0eafe
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# SetMergeProxySymbol
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Funzione chiamata nella procedura guidata per aggiungere il simbolo \_MERGE\_PROXYSTUB se necessario.  
  
## Sintassi  
  
```  
  
      function SetMergeProxySymbol(   
   oProj    
);  
```  
  
#### Parametri  
 `oProj`  
 Oggetto progetto selezionato  
  
## Note  
 Funzione chiamata nella procedura guidata per aggiungere il simbolo \_MERGE\_PROXYSTUB se necessario.  
  
## Esempio  
  
```  
SetMergeProxySymbol (selproj);  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)
---
title: "GetUniqueFileName | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetUniqueFileName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetUniqueFilename (metodo)"
ms.assetid: f9760e1a-82d0-4d8b-b00a-6f4c36f6b2c6
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# GetUniqueFileName
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Restituisce un nome file univoco.  
  
## Sintassi  
  
```  
  
      function GetUniqueFileName(   
   strDirectory,   
   strFileName    
);  
```  
  
#### Parametri  
 *strDirectory*  
 Directory in cui cercare il nome file  
  
 `strFileName`  
 Nome file da verificare.  
  
## Valore restituito  
 Il nome file indicato in `strFileName`, se univoco. In caso contrario la funzione restituisce `strFileName`, cui viene associato un numero compreso tra 1 e 9999999 per renderlo univoco.  Se `strFileName` non è fornito, la funzione restituirà un nome file univoco utilizzando il [metodo GetTempName](jsmthGetTempName).  
  
## Note  
 Restituisce un nome file univoco.  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [GetProjectFile](../ide/getprojectfile.md)
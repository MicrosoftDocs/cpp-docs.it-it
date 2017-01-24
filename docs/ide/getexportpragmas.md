---
title: "GetExportPragmas | Microsoft Docs"
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
  - "GetExportPragmas"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetExportPragmas (metodo)"
ms.assetid: ef21f6a3-d83f-4e19-9323-ca28cc40c8fd
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# GetExportPragmas
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di aggiungere pragma per l'esportazione di funzioni.  
  
## Sintassi  
  
```  
  
function GetExportPragmas( );  
  
```  
  
## Valore restituito  
 Una stringa contenente i pragma di esportazione,  ad esempio uno dei seguenti:  
  
-   `#pragma comment(linker, "/EXPORT:DllCanUnloadNow=_DllCanUnloadNow@0,PRIVATE")'`  
  
-   `#pragma comment(linker, "/EXPORT:DllGetClassObject=_DllGetClassObject@12,PRIVATE")`  
  
-   `#pragma comment(linker, "/EXPORT:DllRegisterServer=_DllRegisterServer@0,PRIVATE")`  
  
-   `#pragma comment(linker, "/EXPORT:DllUnregisterServer=_DllUnregisterServer@0,PRIVATE")`  
  
## Note  
 Chiamare questa funzione per aggiungere pragma per l'esportazione delle funzioni.  
  
## Esempio  
  
```  
oDllCanUnloadNow.StartPoint.Insert(GetExportPragmas() + "\r\n");  
oCM.Synchronize();  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [comment](../preprocessor/comment-c-cpp.md)
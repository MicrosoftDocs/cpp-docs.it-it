---
title: "Chiamate di sistema | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.system"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "chiamate di sistema"
  - "Windows [C++], chiamate di sistema"
ms.assetid: 0255f2ec-a5a0-487e-8b09-9dad001d81ed
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Chiamate di sistema
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le seguenti funzioni sono chiamate di sistema di Windows.  
  
### Funzioni chiamate di sistema  
  
|Funzione|Utilizzo|Equivalente .NET Framework|  
|--------------|--------------|--------------------------------|  
|[\_findclose](../c-runtime-library/reference/findclose.md)|Rilasciare risorse da operazioni di ricerca precedenti|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Platform Invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_findfirst, \_findfirst32, \_findfirst64, \_findfirsti64, \_findfirst32i64, \_findfirst64i32, \_wfindfirst, \_wfindfirst32, \_wfindfirst64, \_wfindfirsti64, \_wfindfirst32i64, \_wfindfirst64i32](../c-runtime-library/reference/findfirst-functions.md)|Trova file con gli attributi specificati|[\<caps:sentence id\="tgt12" sentenceid\="e22cfa910fbeac637b6aba4ed3f9dc48" class\="tgtSentence"\>System::IO::DirectoryInfo::GetFiles\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.io.directoryinfo.getfiles.aspx)|  
|[\_findnext, \_findnext32, \_findnext64, \_findnexti64, \_findnext32i64, \_findnext64i32, \_wfindnext, \_wfindnext32, \_wfindnexti64, \_wfindnext64, \_wfindnexti64](../c-runtime-library/reference/findnext-functions.md)|Trova il prossimo file con gli attributi specificati|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Platform Invoke](../Topic/Platform%20Invoke%20Examples.md).|  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)   
 [Gestione di file](../c-runtime-library/file-handling.md)   
 [Controllo Directory](../c-runtime-library/directory-control.md)   
 [I\/O a basso livello](../c-runtime-library/low-level-i-o.md)
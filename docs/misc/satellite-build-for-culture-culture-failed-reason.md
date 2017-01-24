---
title: "Satellite build for culture &#39;culture&#39; failed. &lt;reason&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.satellite_build_failed"
ms.assetid: c97c589f-cf4d-4f6b-941a-7526a1091fce
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Satellite build for culture &#39;culture&#39; failed. &lt;reason&gt;
Non è stato possibile compilare un assembly satellite per impostazioni cultura specifiche.  L'errore comporterà la mancata riuscita del processo di compilazione.  
  
 L'errore può verificarsi per due motivi:  
  
1.  ALINK.EXE non è installato nel sistema.  
  
2.  In ALINK.EXE si è verificato un errore ma non sono state restituite informazioni dettagliate sull'errore.  
  
 **Per correggere l'errore**  
  
-   Reinstallare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] o solo [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)].  
  
-   Quando il \<motivo\> è segnalato come "Impossibile avviare Assembly Linker.  File esistente", svuotare la cartella Temp nella quale vengono generati i file, ad esempio C:\\Documents and Settings\\\<utente\>\\Impostazioni locali\\Temp.  
  
## Vedere anche  
 [Al.exe \(Assembly Linker\)](../Topic/Al.exe%20\(Assembly%20Linker\).md)
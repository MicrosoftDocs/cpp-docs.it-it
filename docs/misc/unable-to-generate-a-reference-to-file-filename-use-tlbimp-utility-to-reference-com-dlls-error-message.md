---
title: "Impossibile generare un riferimento al file &#39;&lt;nomefile&gt;&#39; (utilizzare l&#39;utilit&#224; TLBIMP per fare riferimento alle DLL COM): &lt;messaggio di errore&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30142"
  - "bc30142"
helpviewer_keywords: 
  - "BC30142"
ms.assetid: ee0f2c77-3714-4ec2-bddf-d098ab77722f
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile generare un riferimento al file &#39;&lt;nomefile&gt;&#39; (utilizzare l&#39;utilit&#224; TLBIMP per fare riferimento alle DLL COM): &lt;messaggio di errore&gt;
Il compilatore [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] chiama Assembly Linker \(Al.exe, definito anche Alink\) per generare un assembly con un manifesto. Il linker ha segnalato un errore durante la ricerca o la convalida di un file DLL COM\+.  
  
 **ID errore:** BC30142  
  
### Per correggere l'errore  
  
1.  Esaminare il messaggio di errore riportato e vedere l'argomento [Errori e avvisi di Al.exe](http://msdn.microsoft.com/it-it/7f125d49-0a03-47a6-9ba9-d61a679a7d4b) per spiegazioni e suggerimenti aggiuntivi.  
  
2.  Se il riferimento desiderato è a una DLL COM anziché a una DLL COM\+, usare [Tlbimp.exe \(Type Library Importer\)](../Topic/Tlbimp.exe%20\(Type%20Library%20Importer\).md) per generare il riferimento.  
  
3.  Se l'errore persiste, raccogliere informazioni sulla situazione contingente e informare il Servizio Supporto Tecnico Clienti Microsoft.  
  
## Vedere anche  
 [Al.exe \(Assembly Linker\)](../Topic/Al.exe%20\(Assembly%20Linker\).md)   
 [Errori e avvisi di Al.exe](http://msdn.microsoft.com/it-it/7f125d49-0a03-47a6-9ba9-d61a679a7d4b)   
 [Tlbimp.exe \(Type Library Importer\)](../Topic/Tlbimp.exe%20\(Type%20Library%20Importer\).md)   
 [PAVEOVER Supporto tecnico e accessibilità](http://msdn.microsoft.com/it-it/14e1d293-7b6d-40a6-bf3e-a92f8ee6c88c)
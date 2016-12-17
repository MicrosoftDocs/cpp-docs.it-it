---
title: "Le istruzioni &#39;Get&#39; non sono pi&#249; supportate | Microsoft Docs"
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
  - "vbc30829"
  - "bc30829"
helpviewer_keywords: 
  - "BC30829"
ms.assetid: 8d798357-7efb-4423-9808-8b20777b97ba
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le istruzioni &#39;Get&#39; non sono pi&#249; supportate
Le istruzioni `Get` non sono più supportate. La funzionalità di I\/O dei file è disponibile nello spazio dei nomi `Microsoft.VisualBasic`.  
  
 `Get` non è supportato per le operazioni di file e può essere usato solo nella sintassi della routine di proprietà.  
  
 **ID errore:** BC30829  
  
### Per correggere l'errore  
  
1.  Eseguire operazioni sui file usando i membri delle funzioni di runtime `System.IO`, `FileSystemObject` e [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)].  
  
## Vedere anche  
 [Processing Drives, Directories, and Files](../Topic/Processing%20Drives,%20Directories,%20and%20Files%20\(Visual%20Basic\).md)   
 [Get Statement](../Topic/Get%20Statement.md)   
 [File Access with Visual Basic](../Topic/File%20Access%20with%20Visual%20Basic.md)
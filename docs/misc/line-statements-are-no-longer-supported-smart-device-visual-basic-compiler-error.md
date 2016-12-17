---
title: "Le istruzioni &#39;Line&#39; non sono pi&#249; supportate (errore del compilatore Visual Basic/Smart Device) | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30768"
  - "bc30768"
helpviewer_keywords: 
  - "BC30768"
ms.assetid: e7a17c77-06bb-4d33-966e-addb4f51caaf
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le istruzioni &#39;Line&#39; non sono pi&#249; supportate (errore del compilatore Visual Basic/Smart Device)
L'istruzione `Line` non è più supportata. La funzionalità di I\/O dei file è in genere disponibile come <xref:Microsoft.VisualBasic.FileSystem.LineInput%2A?displayProperty=fullName>, ma non è supportata dalla versione di destinazione di .NET Compact Framework.  
  
 **ID errore:** BC30768  
  
### Per correggere l'errore  
  
-   Se si esegue l'accesso ai file, usare le funzioni definite nello spazio dei nomi <xref:System.IO>.  
  
-   Per la grafica, usare <xref:System.Drawing.Graphics.DrawLine%2A?displayProperty=fullName>.  
  
## Vedere anche  
 <xref:System.IO>   
 <xref:System.Drawing>   
 [File Access with Visual Basic](../Topic/File%20Access%20with%20Visual%20Basic.md)
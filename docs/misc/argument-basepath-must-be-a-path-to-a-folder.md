---
title: "L&#39;argomento BasePath deve essere un percorso a una cartella | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: b180ce60-ad57-41a6-a313-491d86d84cc7
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;argomento BasePath deve essere un percorso a una cartella
L'argomento `BasePath` deve essere costituito da un percorso a una cartella. È possibile che si stia analizzando la stringa in modo errato e che sia stato specificato un valore che non è riconosciuto come un percorso valido.  
  
### Per correggere l'errore  
  
-   Controllare il valore specificato per `BasePath` per assicurarsi che sia un percorso valido a una cartella.  
  
## Vedere anche  
 <xref:System.CodeDom.Compiler.TempFileCollection.BasePath%2A>   
 <xref:System.Resources.ResXResourceWriter.BasePath%2A>   
 <xref:System.Resources.ResXResourceReader.BasePath%2A>   
 [Procedura: analizzare percorsi di file](../Topic/How%20to:%20Parse%20File%20Paths%20in%20Visual%20Basic.md)
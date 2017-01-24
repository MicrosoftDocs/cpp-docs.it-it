---
title: "Impossibile trovare la classe di implementazione &#39;&lt;nomeclasse&gt;&#39; per l&#39;interfaccia &lt;nomeinterfaccia&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc31094"
  - "bc31094"
helpviewer_keywords: 
  - "BC31094"
ms.assetid: 262cb67e-2930-4a4a-a63e-bb2e201b3b93
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile trovare la classe di implementazione &#39;&lt;nomeclasse&gt;&#39; per l&#39;interfaccia &lt;nomeinterfaccia&gt;
Una classe di implementazione nell'assembly di interoperabilità non è disponibile.  
  
 **ID errore:** BC31094  
  
### Per correggere l'errore  
  
1.  Verificare che la libreria dei tipi per l'oggetto COM sia valida.  
  
2.  Usare l'utilità di importazione della libreria dei tipi \(Tlbimp.exe\) per creare manualmente un assembly di interoperabilità e quindi aggiungere un riferimento a tale assembly di interoperabilità dal progetto.  
  
## Vedere anche  
 [Implements Statement](../Topic/Implements%20Statement.md)   
 [COM Interop](../Topic/COM%20Interop%20\(Visual%20Basic\).md)   
 [Tlbimp.exe \(Type Library Importer\)](../Topic/Tlbimp.exe%20\(Type%20Library%20Importer\).md)
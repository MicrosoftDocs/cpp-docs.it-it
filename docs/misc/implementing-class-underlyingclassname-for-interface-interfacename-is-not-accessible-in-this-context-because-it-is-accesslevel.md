---
title: "La classe di implementazione &#39;&lt;nomeclassesottostante&gt;&#39; per l&#39;interfaccia &#39;&lt;nomeinterfaccia&gt;&#39; non &#232; accessibile in questo contesto perch&#233; &#232; &#39;&lt;livelloaccesso&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BC31109"
  - "vbc31109"
helpviewer_keywords: 
  - "BC31109"
ms.assetid: ab2a3bc3-b875-476f-b601-3e736ad2677e
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La classe di implementazione &#39;&lt;nomeclassesottostante&gt;&#39; per l&#39;interfaccia &#39;&lt;nomeinterfaccia&gt;&#39; non &#232; accessibile in questo contesto perch&#233; &#232; &#39;&lt;livelloaccesso&gt;&#39;
Un'interfaccia viene dichiarata con l'attributo <xref:System.Runtime.InteropServices.CoClassAttribute> che specifica una classe sottostante, ma tale classe ha un livello di accesso che impedisce al codice in uso di accedervi.  
  
 L'applicazione dell'attributo <xref:System.Runtime.InteropServices.CoClassAttribute> a un'interfaccia associa una classe sottostante all'interfaccia. Ciò consente al codice di creare un oggetto direttamente dall'interfaccia usando una clausola `New`.  
  
 Se il codice che usa la clausola `New` non ha accesso alla classe sottostante, ad esempio se la classe è `Private`, il compilatore genera questo errore.  
  
 **ID errore:** BC31109  
  
### Per correggere l'errore  
  
1.  Se si ha il controllo del codice sorgente sulla classe sottostante, modificare il livello di accesso in modo che il codice di uso possa accedervi.  
  
2.  Se per qualsiasi motivo non è possibile modificare il livello di accesso della classe sottostante, rimuovere la clausola `New`. Non è possibile creare un oggetto direttamente da questa interfaccia.  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.CoClassAttribute>   
 [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md)   
 [Access Levels in Visual Basic](../Topic/Access%20Levels%20in%20Visual%20Basic.md)
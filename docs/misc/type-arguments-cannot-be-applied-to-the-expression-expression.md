---
title: "Impossibile applicare gli argomenti di tipo all&#39;espressione &#39;&lt;espressione&gt;&#39; | Microsoft Docs"
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
  - "bc32058"
  - "vbc32058"
helpviewer_keywords: 
  - "BC32058"
ms.assetid: c6b9b49c-6fb2-47b8-a8bb-464562d3adfd
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile applicare gli argomenti di tipo all&#39;espressione &#39;&lt;espressione&gt;&#39;
Un alias di importazione viene definito con una clausola [Of](../Topic/Of%20Clause%20\(Visual%20Basic\).md) che passa gli argomenti di tipo all'alias di importazione.  
  
 Gli argomenti di tipo vengono usati per i tipi generici e solo le classi, le strutture, le interfacce, le routine e i delegati possono essere generici. Né gli spazi dei nomi né gli alias di importazione possono essere generici.  
  
 **ID errore:** BC32058  
  
### Per correggere l'errore  
  
-   Rimuovere la clausola `Of` e i relativi argomenti di tipo dall'alias di importazione.  
  
## Vedere anche  
 [Imports Statement \(.NET Namespace and Type\)](../Topic/Imports%20Statement%20\(.NET%20Namespace%20and%20Type\).md)   
 [References and the Imports Statement](../Topic/References%20and%20the%20Imports%20Statement%20\(Visual%20Basic\).md)   
 [NOTINBUILD: Risoluzione di un riferimento quando più variabili hanno lo stesso nome](http://msdn.microsoft.com/it-it/9601e39f-1911-44e1-ace5-3f6e090408b9)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)
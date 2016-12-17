---
title: "&#39;MustOverride&#39; non pu&#242; essere specificato in &#39;&lt;nomeroutine&gt;&#39; perch&#233; &#232; in un tipo parziale dichiarato &#39;NotInheritable&#39; in un&#39;altra definizione parziale | Microsoft Docs"
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
  - "vbc30927"
  - "BC30927"
helpviewer_keywords: 
  - "BC30927"
ms.assetid: 5798dfda-3d7b-4f30-9715-40cbf52d6dc4
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;MustOverride&#39; non pu&#242; essere specificato in &#39;&lt;nomeroutine&gt;&#39; perch&#233; &#232; in un tipo parziale dichiarato &#39;NotInheritable&#39; in un&#39;altra definizione parziale
Una routine o una proprietà è dichiarata come `MustOverride` all'interno di una classe definita in più dichiarazioni parziali, ma una delle definizioni parziali specifica `NotInheritable` per la classe.  
  
 Quando si divide la definizione di una classe in diverse dichiarazioni parziali, il compilatore considera la classe come l'unione di tutte le sue dichiarazioni parziali. Questo riguarda non soltanto i membri, ma anche l'implementazione, l'ereditarietà e il livello di accesso.  
  
 Per eseguire l'override di una routine o una proprietà, una classe deve ereditarla da una classe base. Per specificare `MustOverride` per una routine o una proprietà in una classe base, di conseguenza, è necessario specificare `MustInherit` per la classe. Dal momento che `MustInherit` e `NotInheritable` sono in contraddizione fra loro, non è possibile specificarli entrambi per la medesima classe.  
  
 **ID errore:** BC30927  
  
### Per correggere l'errore  
  
-   Se è necessario eseguire l'override della proprietà o della routine, rimuovere la parola chiave `NotInheritable` dalla dichiarazione parziale in cui compare.  
  
-   Se la classe deve essere `NotInheritable`, rimuovere la parola chiave `MustOverride` dalla routine o dalla proprietà. Non è possibile eseguirne l'override perché la classe non è ereditabile.  
  
## Vedere anche  
 [Partial](../Topic/Partial%20\(Visual%20Basic\).md)   
 [MustOverride](../Topic/MustOverride%20\(Visual%20Basic\).md)   
 [MustInherit](../Topic/MustInherit%20\(Visual%20Basic\).md)   
 [NotInheritable](../Topic/NotInheritable%20\(Visual%20Basic\).md)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)
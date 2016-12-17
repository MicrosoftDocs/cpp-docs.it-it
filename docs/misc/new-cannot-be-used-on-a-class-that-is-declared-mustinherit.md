---
title: "Non &#232; possibile usare &#39;New&#39; in una classe dichiarata come &#39;MustInherit&#39; | Microsoft Docs"
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
  - "vbc30569"
  - "bc30569"
helpviewer_keywords: 
  - "BC30569"
ms.assetid: 94c9e6a3-6489-4d58-b7e5-7b4203677e3b
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare &#39;New&#39; in una classe dichiarata come &#39;MustInherit&#39;
Non è possibile creare direttamente un'istanza di una classe `MustInherit` e quindi l'operatore `New` non può essere usato in una classe `MustInherit`. Anche se possono esistere variabili e valori i cui tipi in fase di compilazione sono `MustInherit`, tali variabili e valori dovranno necessariamente essere un valore Null o contenere riferimenti a istanze di classi normali derivate dai tipi `MustInherit`.  
  
 **ID errore:** BC30569  
  
### Per correggere l'errore  
  
-   Rimuovere l'operatore `New`.  
  
## Vedere anche  
 [MustInherit](../Topic/MustInherit%20\(Visual%20Basic\).md)   
 [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md)
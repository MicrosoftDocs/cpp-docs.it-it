---
title: "&#39;&lt;parolachiave&gt;&#39; non &#232; valido all&#39;interno di una struttura | Microsoft Docs"
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
  - "bc30044"
  - "vbc30044"
helpviewer_keywords: 
  - "BC30044"
ms.assetid: 252510cf-e084-47e4-9592-4aa8f94fabe4
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;parolachiave&gt;&#39; non &#232; valido all&#39;interno di una struttura
Le strutture sono tipi valore, non tipi riferimento. Una struttura non è un'istanza creata da una classe, quindi le parole chiave `Me`, `MyClass` e `MyBase` sono prive di significato in una struttura.  
  
 **ID errore:** BC30044  
  
### Per correggere l'errore  
  
-   Modificare la struttura in una classe o rimuovere la parola chiave dalla routine.  
  
## Vedere anche  
 [Me](http://msdn.microsoft.com/it-it/a65973c7-cf06-4547-9b25-9fba885525c2)   
 [MyClass \- eliminazione](http://msdn.microsoft.com/it-it/5db36f9b-f796-4b6a-ba34-cac1fde6eb62)   
 [MyBase \- eliminazione](http://msdn.microsoft.com/it-it/52491d06-6451-4f6f-9aa6-8fab59bbc2b9)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)
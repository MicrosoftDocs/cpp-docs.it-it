---
title: "Il vincolo di tipo non pu&#242; essere una classe &#39;NotInheritable&#39; | Microsoft Docs"
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
  - "vbc32060"
  - "bc32060"
helpviewer_keywords: 
  - "BC32060"
ms.assetid: f45cc0b6-7df1-462a-b3df-c526c143e16a
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il vincolo di tipo non pu&#242; essere una classe &#39;NotInheritable&#39;
Un elenco di vincoli include una classe contrassegnata come [NotInheritable](../Topic/NotInheritable%20\(Visual%20Basic\).md).  
  
 Un elenco di vincoli in un parametro di tipo può accettare al massimo una classe. Un argomento di tipo per quel parametro di tipo deve ereditare da quella classe. Di conseguenza, un parametro di tipo non può accettare come vincolo una classe *sealed* o `NotInheritable`.  
  
 **ID errore:** BC32060  
  
### Per correggere l'errore  
  
-   Se è necessario che il parametro di tipo possa ereditare da una classe ed è necessario controllare la definizione della classe, rimuovere la dichiarazione `NotInheritable` dalla classe.  
  
-   Se, invece, la classe deve rimanere `NotInheritable`, non è possibile usarla come vincolo. Rimuovere il nome della classe dall'elenco dei vincoli.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)
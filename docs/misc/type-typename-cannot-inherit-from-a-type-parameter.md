---
title: "Il tipo &#39;&lt;nometipo&gt;&#39; non pu&#242; ereditare da un parametro di tipo | Microsoft Docs"
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
  - "bc32055"
  - "vbc32055"
helpviewer_keywords: 
  - "BC32055"
ms.assetid: 97af7cad-6e40-41e3-892d-1fbcbd86356d
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo &#39;&lt;nometipo&gt;&#39; non pu&#242; ereditare da un parametro di tipo
Una classe o interfaccia include un'[Inherits Statement](../Topic/Inherits%20Statement.md) che specifica un parametro di tipo generico.  
  
 Un tipo non può ereditare da un tipo non ancora definito. L'ereditarietà presuppone la capacità di riutilizzare membri della classe base, che a sua volta richiede la definizione di questi membri. Un parametro di tipo generico è un segnaposto che dovrà essere sostituito da un tipo specifico fornito da un argomento di tipo. Di conseguenza, un tipo non può ereditare dal segnaposto.  
  
 **ID errore:** BC32055  
  
### Per correggere l'errore  
  
-   Se il tipo che eredita deve ereditare da un altro tipo, usare un tipo specifico invece di un parametro di tipo.  
  
-   Se il tipo di base deve essere rappresentato da un parametro di tipo generico, nessun altro tipo riuscirà a ereditare da esso. Rimuovere l'[Inherits Statement](../Topic/Inherits%20Statement.md).  
  
## Vedere anche  
 [NOT IN BUILD: Ereditarietà in Visual Basic](http://msdn.microsoft.com/it-it/e5e6e240-ed31-4657-820c-079b7c79313c)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)
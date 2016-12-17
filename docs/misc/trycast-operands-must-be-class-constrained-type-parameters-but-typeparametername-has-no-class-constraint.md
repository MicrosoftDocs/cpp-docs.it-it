---
title: "L&#39;operando &#39;TryCast&#39; deve essere un parametro di tipo vincolato a livello di classe. Nessun vincolo di classe &#232; tuttavia contenuto in &#39;&lt;nometipoparametro&gt;&#39; | Microsoft Docs"
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
  - "BC30793"
  - "vbc30793"
helpviewer_keywords: 
  - "BC30793"
ms.assetid: a38a1da9-4413-4a69-a2ce-0b6d51c2c4ef
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operando &#39;TryCast&#39; deve essere un parametro di tipo vincolato a livello di classe. Nessun vincolo di classe &#232; tuttavia contenuto in &#39;&lt;nometipoparametro&gt;&#39;
L'operatore [TryCast Operator](../Topic/TryCast%20Operator%20\(Visual%20Basic\).md) viene usato con un operando del parametro di tipo che potrebbe non essere un tipo riferimento.  
  
 `TryCast` opera solo sui tipi riferimento, come classi o interfacce. Quando si passa un parametro di tipo come argomento a `TryCast`, è necessario vincolare quel parametro di tipo in modo che sia un tipo riferimento. A questo scopo è necessario includere uno o più degli elementi seguenti nell'elenco dei vincoli del parametro di tipo:  
  
-   Uno o più dei nomi di interfaccia \(l'argomento di tipo deve implementarli tutti\)  
  
-   Al massimo un nome della classe \(l'argomento di tipo deve ereditare da questo\)  
  
-   Il vincolo [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md) \(è necessario che l'argomento di tipo esponga un costruttore senza parametri accessibile dal codice di creazione e quindi deve essere una classe\)  
  
-   Il vincolo [Class \(Visual Basic\)](http://msdn.microsoft.com/it-it/0777c6e6-46bc-451b-ad70-57b49d4ef4f7) \(l'argomento di tipo deve essere un tipo riferimento\)  
  
 **ID errore:** BC30793  
  
### Per correggere l'errore  
  
-   Se è necessario passare questo parametro di tipo a `TryCast`, vincolarlo con uno o più vincoli dell'elenco precedente.  
  
-   Se non si può richiedere che il parametro di tipo accetti solo un tipo riferimento, non è possibile usarlo con `TryCast`. Dovrebbe invece essere possibile usare la [Funzione CType](../Topic/CType%20Function%20\(Visual%20Basic\).md).  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)   
 [Implicit and Explicit Conversions](../Topic/Implicit%20and%20Explicit%20Conversions%20\(Visual%20Basic\).md)
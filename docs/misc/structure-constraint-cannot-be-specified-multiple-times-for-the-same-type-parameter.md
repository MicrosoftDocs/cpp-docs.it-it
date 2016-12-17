---
title: "Non &#232; possibile specificare il vincolo &#39;Structure&#39; pi&#249; volte per lo stesso parametro di tipo | Microsoft Docs"
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
  - "bc32102"
  - "vbc32102"
helpviewer_keywords: 
  - "BC32102"
ms.assetid: f4ebd416-7fb9-4a24-a8df-e9ee7ccc2c76
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile specificare il vincolo &#39;Structure&#39; pi&#249; volte per lo stesso parametro di tipo
Un elenco di vincoli include il vincolo [Structure \(Visual Basic\)](http://msdn.microsoft.com/it-it/263ce115-ac36-4c05-8cb7-0e0eead5c6d0) più volte.  
  
 Un elenco di vincoli in un parametro di tipo può specificare che l'argomento di tipo passato a tale parametro di tipo deve essere un tipo valore \(con il vincolo `Structure`\) o un tipo riferimento \(con il vincolo [Class \(Visual Basic\)](http://msdn.microsoft.com/it-it/0777c6e6-46bc-451b-ad70-57b49d4ef4f7)\). Non è possibile specificare entrambi i vincoli per lo stesso parametro di tipo e non è possibile specificare uno dei due vincoli più volte.  
  
 ID errore: BC32102  
  
### Per correggere l'errore  
  
-   Rimuovere qualsiasi parola chiave `Structure` ridondante. L'elenco di vincoli deve contenerne solo una.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)
---
title: "Impossibile combinare il vincolo &#39;Class&#39; e il vincolo &#39;Structure&#39; | Microsoft Docs"
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
  - "vbc32104"
  - "bc32104"
helpviewer_keywords: 
  - "BC32104"
ms.assetid: f41a581b-afca-4173-bc82-b35ed49caba0
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile combinare il vincolo &#39;Class&#39; e il vincolo &#39;Structure&#39;
Un elenco di vincoli include sia il vincolo [Class \(Visual Basic\)](http://msdn.microsoft.com/it-it/0777c6e6-46bc-451b-ad70-57b49d4ef4f7) che il vincolo [Structure \(Visual Basic\)](http://msdn.microsoft.com/it-it/263ce115-ac36-4c05-8cb7-0e0eead5c6d0).  
  
 Un elenco di vincoli in un parametro di tipo può specificare che l'argomento di tipo passato a tale parametro di tipo deve essere un tipo valore \(con il vincolo `Structure`\) o un tipo riferimento \(con il vincolo `Class`\). Non è possibile specificare entrambi i vincoli per lo stesso parametro di tipo e non è possibile specificare uno dei due vincoli più volte.  
  
 **ID errore:** BC32104  
  
### Per correggere l'errore  
  
1.  Decidere se richiedere un tipo valore di tipo o un tipo riferimento per l'argomento di tipo.  
  
    -   Se si vuole che l'argomento di tipo sia un tipo valore, rimuovere la parola chiave `Class` dall'elenco di vincoli.  
  
    -   Se si vuole che l'argomento di tipo sia un tipo riferimento, rimuovere la parola chiave `Structure` dall'elenco di vincoli.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)
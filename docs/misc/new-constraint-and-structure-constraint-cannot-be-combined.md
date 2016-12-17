---
title: "Non &#232; possibile combinare i vincoli &#39;New&#39; e &#39;Structure&#39; | Microsoft Docs"
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
  - "bc32103"
  - "vbc32103"
helpviewer_keywords: 
  - "BC32103"
ms.assetid: 5418b420-a014-4006-84aa-20ddac6739e6
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile combinare i vincoli &#39;New&#39; e &#39;Structure&#39;
Un elenco di vincoli include sia il vincolo [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md) che il vincolo [Structure \(Visual Basic\)](http://msdn.microsoft.com/it-it/263ce115-ac36-4c05-8cb7-0e0eead5c6d0).  
  
 Un elenco di vincoli in un parametro di tipo può specificare che l'argomento di tipo passato a tale parametro di tipo deve essere un tipo valore \(con il vincolo `Structure`\) o un tipo riferimento \(con il vincolo [Class \(Visual Basic\)](http://msdn.microsoft.com/it-it/0777c6e6-46bc-451b-ad70-57b49d4ef4f7)\). Non è possibile specificare entrambi i vincoli per lo stesso parametro di tipo e non è possibile specificare uno dei due vincoli più volte.  
  
 Il vincolo `New` specifica che l'argomento di tipo deve esporre un costruttore senza parametri al quale il codice di creazione può accedere. Tuttavia, una struttura non può avere un costruttore senza parametri non condiviso. Quindi, i vincoli `New` e `Structure` sono in conflitto.  
  
 **ID errore:** BC32103  
  
### Per correggere l'errore  
  
1.  Decidere se richiedere un tipo valore di tipo o un tipo riferimento per l'argomento di tipo.  
  
2.  Se si vuole che l'argomento di tipo sia un tipo valore, rimuovere la parola chiave `New` dall'elenco di vincoli.  
  
3.  Se si vuole che l'argomento di tipo sia un tipo riferimento, rimuovere la parola chiave `Structure` dall'elenco di vincoli.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)
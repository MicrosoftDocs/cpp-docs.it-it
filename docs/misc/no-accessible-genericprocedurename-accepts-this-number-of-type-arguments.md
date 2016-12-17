---
title: "Nessun &#39;&lt;nomeroutinegenerica&gt;&#39; accessibile accetta questo numero di argomenti di tipo | Microsoft Docs"
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
  - "bc32118"
  - "vbc32118"
helpviewer_keywords: 
  - "BC32118"
ms.assetid: 4ee942ba-0fa1-4ec1-9c2c-a0c0dc3f1b17
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Nessun &#39;&lt;nomeroutinegenerica&gt;&#39; accessibile accetta questo numero di argomenti di tipo
Un'istruzione chiama una routine generica con più versioni di overload, ma nessuna di tali versioni definisce un numero di parametri di tipo equivalente al numero di argomenti di tipo forniti nella chiamata.  
  
 In presenza di un'unica versione generica, è possibile chiamarla senza argomenti di tipo e il compilatore potrà tentare una *inferenza del tipo*. Per altre informazioni, vedere "Inferenza di tipi" in [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md). In presenza di più versioni generiche, tuttavia, il compilatore non riesce a effettuare una scelta se non vengono forniti gli argomenti di tipo. Se viene fornito un solo argomento di tipo, è necessario fornirne uno per ogni parametro di tipo definito da una delle versioni di overload.  
  
 **ID errore:** BC32118  
  
### Per correggere l'errore  
  
-   Decidere la versione di overload da chiamare e fornire il numero adeguato di argomenti di tipo.  
  
## Vedere anche  
 [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md)   
 [Procedure Overloading](../Topic/Procedure%20Overloading%20\(Visual%20Basic\).md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)
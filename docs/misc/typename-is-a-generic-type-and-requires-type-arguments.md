---
title: "&#39;&lt;nometipo&gt;&#39; &#232; un tipo generico e richiede argomenti di tipo | Microsoft Docs"
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
  - "BC32076"
  - "vbc32076"
helpviewer_keywords: 
  - "BC32076"
ms.assetid: 57f63727-c544-4012-8f03-5d77fbdd1135
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nometipo&gt;&#39; &#232; un tipo generico e richiede argomenti di tipo
Una variabile, un parametro di routine o il valore restituito da una funzione è dichiarato come avente il tipo di una classe o una struttura generica, ma la dichiarazione non fornisce alcun argomento di tipo.  
  
 Ogni classe e struttura generica è definita per sua natura con almeno un parametro di tipo. Quando si usa un tipo generico per dichiarare una classe o una struttura costruita, è necessario fornire un argomento di tipo per ogni parametro di tipo definito dal tipo generico.  
  
 **ID errore:** BC32076  
  
### Per correggere l'errore  
  
-   Aggiungere un elenco di tipi alla dichiarazione racchiudendolo fra parentesi e iniziando con la parola chiave `Of`.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Of](../Topic/Of%20Clause%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)
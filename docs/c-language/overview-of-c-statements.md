---
title: "Cenni preliminari sulle istruzioni C | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "punto e virgola"
  - "punto e virgola, istruzioni C"
  - "istruzioni, informazioni"
  - "istruzioni, C"
  - "Visual C, istruzioni"
ms.assetid: 0d49837a-5399-4881-b60c-af5f4e9720de
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cenni preliminari sulle istruzioni C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le istruzioni C sono costituite da token, espressioni e altre istruzioni.  Un'istruzione che costituisce parte di un'altra istruzione viene chiamata corpo dell'istruzione di inclusione.  In questa sezione viene illustrato ogni tipo di istruzione indicato dalla sintassi seguente.  
  
## Sintassi  
 *statement*:  
 [labeled\-statement](../c-language/goto-and-labeled-statements-c.md)  
  
 [compound\-statement](../c-language/compound-statement-c.md)  
  
 [expression\-statement](../c-language/expression-statement-c.md)  
  
 [selection\-statement](../c-language/if-statement-c.md)  
  
 [iteration\-statement](../c-language/do-while-statement-c.md)  
  
 [jump\-statement](../c-language/break-statement-c.md)  
  
 [try\-except\-statement](../c-language/try-except-statement-c.md)  
  
 \/\* Specifico Microsoft \*\/[try\-finally\-statement](../c-language/try-finally-statement-c.md) \/\* Specifico di Microsoft \*\/  
  
 Il corpo dell'istruzione è spesso un'istruzione composta costituita da altre istruzioni che possono includere parole chiave.  L'istruzione composita viene delimitata da parentesi graffe \(**{ }**\).  Tutte le altre istruzioni in linguaggio C terminano con un punto e virgola \(**;**\).  Il punto e virgola è un terminatore dell'istruzione.  
  
 L'istruzione di espressione include un'espressione C che può contenere gli operatori aritmetici o logici introdotti in [Espressioni e assegnazioni](../c-language/expressions-and-assignments.md).  L'istruzione null è un'istruzione vuota.  
  
 Qualsiasi istruzione C può iniziare con un'etichetta di identificazione costituita da un nome e da due punti.  Poiché solo l'istruzione `goto` riconosce le etichette di istruzione, queste ultime vengono discusse con `goto`.  Per ulteriori informazioni, vedere [Istruzioni goto e con etichetta](../c-language/goto-and-labeled-statements-c.md).  
  
## Vedere anche  
 [Istruzioni](../c-language/statements-c.md)
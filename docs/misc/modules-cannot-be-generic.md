---
title: "I moduli non possono essere generici | Microsoft Docs"
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
  - "BC32073"
  - "vbc32073"
helpviewer_keywords: 
  - "BC32073"
ms.assetid: 47246e2b-51d4-4a10-a3ac-bc77b44fa2ca
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I moduli non possono essere generici
Un'istruzione `Module` usa la parola chiave `Of` per introdurre parametri di tipo generico.  
  
 È possibile definire e usare classi, strutture, interfacce, routine e delegati generici. Non è possibile definire moduli generici.  
  
 **ID errore:** BC32073  
  
### Per correggere l'errore  
  
1.  Rimuovere la parola chiave `Of` dall'istruzione `Module`.  
  
2.  Se si vuole la funzionalità di un modulo generico, la migliore approssimazione è una classe generica. Usare [Class Statement](../Topic/Class%20Statement%20\(Visual%20Basic\).md) invece di un'istruzione `Module`.  
  
## Vedere anche  
 [Module Statement](../Topic/Module%20Statement.md)   
 [Of](../Topic/Of%20Clause%20\(Visual%20Basic\).md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Procedura: definire una classe in grado di fornire funzionalità identiche con tipi di dati diversi](../Topic/How%20to:%20Define%20a%20Class%20That%20Can%20Provide%20Identical%20Functionality%20on%20Different%20Data%20Types%20\(Visual%20Basic\).md)
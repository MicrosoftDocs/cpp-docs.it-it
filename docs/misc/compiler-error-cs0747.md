---
title: "Errore del compilatore CS0747 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0747"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0747"
ms.assetid: dc1b7e38-cee5-406c-b193-a60ec4faebe1
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0747
Dichiaratore di membro di inizializzatore non valido.  
  
 Un inizializzatore di oggetto viene usato per assegnare valori alle proprietà o ai campi. Qualsiasi espressione che non sia un'assegnazione a una proprietà o a un campo è un errore in fase di compilazione.  
  
### Per correggere l'errore  
  
1.  Verificare che tutte le espressioni nell'inizializzatore siano assegnazioni a proprietà o campi del tipo. Nell'esempio seguente, la seconda espressione è un errore perché il valore `1` non è assegnato a una proprietà o a un campo di `List<int>`.  
  
## Esempio  
 Il codice seguente genera l'errore CS0747:  
  
```  
// cs0747.cs using System.Collections.Generic; public class C { public static int Main() { var t = new List<int> { Capacity = 2, 1 }; // CS0747 return 1; } }  
```  
  
## Vedere anche  
 [Inizializzatori di oggetto e di raccolta](../Topic/Object%20and%20Collection%20Initializers%20\(C%23%20Programming%20Guide\).md)
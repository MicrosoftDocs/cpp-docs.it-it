---
title: "Errore del compilatore CS0820 | Microsoft Docs"
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
  - "CS0820"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0820"
ms.assetid: 38c05162-ef20-42a8-9611-02698360dec5
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0820
Impossibile assegnare l'inizializzatore di matrice a una variabile locale tipizzata in modo implicito  
  
 Una matrice tipizzata in modo implicito è una matrice il cui tipo di elemento è dedotto dal compilatore. Deve essere inizializzata mediante il modificatore `new`\[\], come mostrato nell'esempio di codice.  
  
### Per correggere l'errore  
  
-   Usare il modificatore `new`\[\] con l'inizializzatore di matrice.  
  
-   Non usare una variabile locale tipizzata in modo implicito.  
  
## Esempio  
 Il codice seguente genera l'errore CS0820 e mostra come inizializzare correttamente una matrice tipizzata in modo implicito:  
  
```  
//cs0820.cs class G { public static int Main() { var a = { 1,2,3}; //CS0820 // Try using one of the following lines instead. // var b = new[] { 1, 2, 3 }; //int[] b = {1, 2, 3}; return -1; } }  
```  
  
## Vedere anche  
 [Variabili locali tipizzate in modo implicito](../Topic/Implicitly%20Typed%20Local%20Variables%20\(C%23%20Programming%20Guide\).md)
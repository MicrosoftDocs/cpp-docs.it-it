---
title: "Errore del compilatore CS0748 | Microsoft Docs"
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
  - "CS0748"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0748"
ms.assetid: da1935af-a5ea-41f4-84ae-58559b750566
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0748
Utilizzo non coerente dei parametri lambda: i parametri devono essere tutti di tipo esplicito o implicito.  
  
 Se un'espressione lambda contiene più parametri di input, alcuni di essi non possono usare la tipizzazione implicita quando è usata da altri.  
  
### Per correggere l'errore  
  
1.  Assegnare tipi impliciti o tipi espliciti a tutti i parametri di input.  
  
## Esempio  
 Il codice seguente genera l'errore CS0748 perché solo a `alpha` è assegnato un tipo esplicito nell'espressione lambda:  
  
```  
// cs0748.cs class CS0748 { delegate double D(int x, int y); D d = (int alpha, beta) => { return beta / alpha; }; // CS0748 }  
```  
  
## Vedere anche  
 [Espressioni lambda](../Topic/Lambda%20Expressions%20\(C%23%20Programming%20Guide\).md)
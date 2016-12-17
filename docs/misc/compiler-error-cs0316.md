---
title: "Errore del compilatore CS0316 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0316"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0316"
ms.assetid: 8b70abbe-dd4f-473f-8dfe-f8309abef276
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0316
Il nome di parametro 'name' è in conflitto con un nome di parametro generato automaticamente.  
  
 Le parole riservate non possono essere usate come nomi di parametro. Nell'esempio seguente `value` è una parola riservata nel contesto di una funzione di accesso della proprietà o dell'indicizzatore predefinita.  
  
### Per correggere l'errore  
  
1.  Modificare il nome del parametro.  
  
## Esempio  
 Il codice seguente genera l'errore CS0316:  
  
```  
// cs0316.cs // Compile with: /target:library public class Test { public int this[int value] // CS0316 { get { return 1; } set { } } }  
```  
  
## Vedere anche  
 [Indicizzatori](../Topic/Indexers%20\(C%23%20Programming%20Guide\).md)   
 [Parole chiave di C\#](../Topic/C%23%20Keywords.md)
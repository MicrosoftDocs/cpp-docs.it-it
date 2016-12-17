---
title: "Errore del compilatore CS0312 | Microsoft Docs"
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
  - "CS0312"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0312"
ms.assetid: 552db0ae-2ecf-4beb-9606-bbe58e5708f6
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0312
Non è possibile usare il tipo 'type1' come parametro di tipo 'name' nel metodo o nel tipo generico 'name'. Il tipo nullable 'type1' non soddisfa il vincolo di 'type2'.  
  
 Un tipo nullable è distinto dalla controparte non nullable; nessuna conversione esplicita di un riferimento o di identificazione esiste tra di essi. Una conversione boxing nullable non soddisfa un vincolo di tipo generico. Nell'esempio riportato di seguito, il primo parametro di tipo è un `Nullable<int>` e il secondo parametro di tipo è un `System.Int32`.  
  
### Per correggere l'errore  
  
1.  Rimuovere il vincolo.  
  
2.  Nell'esempio seguente, rendere il secondo argomento di tipo `int?` o `object`.  
  
## Esempio  
 Il codice seguente genera l'errore CS0312:  
  
```  
// cs0312.cs class Program { static void MTyVar<T, U>() where T : U { } static int Main() { MTyVar<int?, int>(); // CS0312 return 1; } }  
```  
  
 Nonostante un tipo nullable sia diverso da un tipo non nullable, sono consentite vari tipi di conversioni tra valori ammette valori nullable e non nullable.  
  
## Vedere anche  
 [Tipi nullable](../Topic/Nullable%20Types%20\(C%23%20Programming%20Guide\).md)
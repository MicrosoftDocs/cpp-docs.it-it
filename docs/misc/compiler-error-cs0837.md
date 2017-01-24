---
title: "Errore del compilatore CS0837 | Microsoft Docs"
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
  - "CS0837"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0837"
ms.assetid: cbde45dc-222c-4bfe-8814-856476319d37
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0837
Il primo operando di un operatore 'is' o 'as' non può essere un'espressione lambda o un metodo anonimo.  
  
 Le espressioni lambda e i metodi anonimi non possono essere usati sul lato sinistro di [is](../Topic/is%20\(C%23%20Reference\).md) o [as](../Topic/as%20\(C%23%20Reference\).md).  
  
### Per correggere l'errore  
  
-   Se l'errore riguarda l'operatore `is`, ricordare che `is` accetta un valore e un tipo e indica se il valore può essere assegnato a quel tipo da un riferimento, una conversione boxing o una conversione unboxing. Le espressioni lambda non sono valori e non hanno riferimenti, conversioni boxing o unboxing, quindi non sono adatte per `is`.  
  
-   Se il codice usa erroneamente `as`, la correzione probabilmente è l'impostazione su un cast.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0837:  
  
```  
// cs0837.cs namespace TestNamespace { public delegate void Del(); class Test { static int Main() { bool b1 = (() => { }) is Del;   // CS0837 bool b2 = delegate() { } is Del;// CS0837 Del d1 = () => { } as Del;      // CS0837 Del d2 = delegate() { } as Del; // CS0837 return 1; } } }  
```
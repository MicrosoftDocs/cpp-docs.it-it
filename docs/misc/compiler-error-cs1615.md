---
title: "Errore del compilatore CS1615 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1615"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1615"
ms.assetid: 518bb07f-0e3a-4761-9931-66845eb5df1a
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1615
L'argomento 'number' non deve essere passato con la parola chiave 'keyword'  
  
 Una delle parole chiave `ref` o **out** usata quando la funzione non accettava un parametro `ref` o **out** per l'argomento. Per risolvere l'errore, rimuovere la parola chiave non corretta e usare la parola chiave appropriata che corrisponde alla dichiarazione di funzione, se presente.  
  
 L'esempio seguente genera l'errore CS1615:  
  
```  
// CS1615.cs class C { public void f(int i) {} public static void Main() { int i = 1; f(ref i);  // CS1615 } }  
```
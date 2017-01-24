---
title: "Avviso del compilatore (livello 1) CS1957 | Microsoft Docs"
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
  - "CS1957"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1957"
ms.assetid: a4823211-52ce-4ffa-b19b-ee874069409f
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1957
Il membro 'name' esegue l'override di 'method'. In fase di esecuzione sono disponibili più candidati per l'override. Il metodo che verrà chiamato dipende dall'implementazione.  
  
 I parametri di metodo che variano solo in base al fatto di essere `ref` o `out` non possono essere distinti in fase di esecuzione.  
  
### Per evitare questo avviso  
  
1.  Assegnare un nome diverso o un diverso numero di parametri a uno dei metodi.  
  
## Esempio  
 Il codice seguente genera l'errore CS1957:  
  
```  
// cs1957.cs class Base<T, S> { public virtual string Test(out T x) // CS1957 { x = default(T); return "Base.Test"; } public virtual void Test(ref S x) { } } class Derived : Base<int, int> { public override string Test(out int x) { x = 0; return "Derived.Test"; } static int Main() { int x; if (new Derived().Test(out x) == "Derived.Test") return 0; return 1; } }  
```
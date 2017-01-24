---
title: "Avviso del compilatore (livello 3) CS1718 | Microsoft Docs"
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
  - "CS1718"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1718"
ms.assetid: 7c1c11fd-4f91-482d-b8f7-efe2a361634e
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS1718
Confronto effettuato con la stessa variabile. Si intendeva confrontare qualcos'altro?  
  
 Per eseguire il confronto con un altro elemento, correggere l'istruzione.  
  
 Nel caso fosse necessario verificare la restituzione del valore true o false usare istruzioni come `if (a == a) (true)` o `if (a < a) (false)`. In questo caso, è preferibile scrivere `if (true)` o `if (false)`. per due motivi:  
  
-   È più semplice e conciso.  
  
-   Consente di evitare confusione: una nuova funzionalità di C\# 2.0 consiste nei tipi valore `null`, analoghi al valore null usato in T\-SQL, il linguaggio di programmazione per SQL Server. L'effetto dei tipi nullable su espressioni come `if (a == a)` potrebbe confondere gli sviluppatori esperti in T\-SQL, perché questo linguaggio si basa sulla logica ternaria. Usando la parola chiave `true` o `false`, si evitano eventuali fraintendimenti.  
  
## Esempio  
 Il codice seguente genera l'errore CS1718.  
  
```  
// CS1718.cs using System; public class Tester { public static void Main() { int i = 0; if (i == i) { // CS1718.cs //if (true) { i++; } } }  
```
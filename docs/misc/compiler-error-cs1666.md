---
title: "Errore del compilatore CS1666 | Microsoft Docs"
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
  - "CS1666"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1666"
ms.assetid: 4d62aa9c-71b9-4c6e-8141-2426d20ac243
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1666
Impossibile utilizzare buffer a dimensione fissa contenuti in espressioni unfixed. Provare a utilizzare l'istruzione fixed.  
  
 Questo errore si verifica se si usa il buffer a dimensione fissa in un'espressione che coinvolge una classe che a sua volta non è fixed. In fase di esecuzione la classe unfixed può essere spostata per ottimizzare l'accesso alla memoria, causando errori durante l'uso del buffer a dimensione fissa. Per evitare questo errore, usare la parola chiave `fixed` nell'istruzione.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1666.  
  
```  
// CS1666.cs // compile with: /unsafe /target:library unsafe struct S { public fixed int buffer[1]; } unsafe class Test { S field = new S(); private bool example1() { return (field.buffer[0] == 0);   // CS1666 error } private bool example2() { // OK fixed (S* p = &field) { return (p->buffer[0] == 0); } } private bool example3() { S local = new S(); return (local.buffer[0] == 0); } }  
```
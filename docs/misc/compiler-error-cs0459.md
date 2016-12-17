---
title: "Errore del compilatore CS0459 | Microsoft Docs"
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
  - "CS0459"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0459"
ms.assetid: 01b058dd-8d65-4e9d-9de1-d47f9488d22a
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0459
Impossibile accettare l'indirizzo di una variabile locale in sola lettura  
  
 Nel linguaggio C\# esistono tre scenari che generano variabili locali di sola lettura: `foreach`, `using` e `fixed`. In ognuno di questi casi non è consentito eseguire operazioni di scrittura nella variabile locale di sola lettura, né ottenerne l'indirizzo. Questo errore si verifica quando il compilatore rileva un tentativo di ottenere l'indirizzo di una variabile locale di sola lettura.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0459 quando si tenta di ottenere l'indirizzo di una variabile locale di sola lettura in un ciclo `foreach` e in un blocco di istruzioni `fixed`.  
  
```  
// CS0459.cs // compile with: /unsafe class A { public unsafe void M1() { int[] ints = new int[] { 1, 2, 3 }; foreach (int i in ints) { int *j = &i;  // CS0459 } fixed (int *i = &_i) { int **j = &i;  // CS0459 } } private int _i = 0; }  
```
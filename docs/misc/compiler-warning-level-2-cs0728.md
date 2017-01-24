---
title: "Avviso del compilatore (livello 2) CS0728 | Microsoft Docs"
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
  - "CS0728"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0728"
ms.assetid: ad6d860d-bac4-48f3-9eab-1efd2b6de6c0
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS0728
Probabile assegnazione non corretta a 'variable' locale, che rappresenta l'argomento di un'istruzione using o lock.  La chiamata Dispose o lo sblocco avverrà sul valore originale dell'argomento locale.  
  
 Esistono diversi scenari in cui i blocchi `using` o `lock` generano una perdita temporanea di risorse. Di seguito è riportato un esempio:  
  
 `thisType f = null;`  
  
 `using (f)`  
  
 `{`  
  
 `f = new thisType();`  
  
 `...`  
  
 `}`  
  
 In questo esempio, al termine dell'esecuzione del blocco `using` il valore originale, ovvero null, della variabile `thisType` verrà eliminato ma non l'oggetto `thisType` creato all'interno del blocco, che alla fine verrà sottoposto alla procedura di Garbage Collection.  
  
 Per risolvere l'errore, usare il seguente formato:  
  
 `using (thisType f = new thisType())`  
  
 `{`  
  
 `...`  
  
 `}`  
  
 In questo caso, il nuovo oggetto `thisType` allocato verrà eliminato.  
  
## Esempio  
 Il codice seguente genera l'errore CS0728.  
  
```  
// CS0728.cs using System; public class ValidBase : IDisposable { public void Dispose() {  } } public class Logger { public static void dummy() { ValidBase vb = null; using (vb) { vb = null;  // CS0728 } vb = null; } public static void Main() { } }  
```
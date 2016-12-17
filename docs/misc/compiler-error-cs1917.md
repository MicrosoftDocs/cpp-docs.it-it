---
title: "Errore del compilatore CS1917 | Microsoft Docs"
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
  - "CS1917"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1917"
ms.assetid: 05688706-e4b4-4273-9244-48cce1f7f9b9
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1917
Non è possibile assegnare i membri del campo di sola lettura 'name' di tipo 'struct name' con un inizializzatore di oggetto perché è di un tipo valore.  
  
 I campi di sola lettura che sono tipi valore possono essere assegnati solo in un costruttore.  
  
### Per correggere l'errore  
  
-   Modificare lo struct in un tipo di classe.  
  
-   Inizializzare lo struct con un costruttore.  
  
## Esempio  
 Il codice seguente genera l'errore CS1917:  
  
```  
// cs1917.cs class CS1917 { public struct TestStruct { public int i; } public class C { public readonly TestStruct str = new TestStruct(); public static int Main() { C c = new C { str = { i = 1 } }; // CS1917 return 0; } } }  
```
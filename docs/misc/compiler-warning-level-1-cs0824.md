---
title: "Avviso del compilatore (livello 1) CS0824 | Microsoft Docs"
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
  - "CS0824"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0824"
ms.assetid: ad643bb7-51b2-455b-a9f3-2bd4588d2c5d
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS0824
Il costruttore 'name' è contrassegnato come esterno.  
  
 Un costruttore può essere contrassegnato come esterno. Tuttavia, il compilatore non può verificare che il costruttore esista effettivamente. Quindi, viene generato l'avviso.  
  
### Per rimuovere l'avviso  
  
1.  Usare una direttiva di avviso pragma per ignorarlo.  
  
2.  Spostare il costruttore all'interno del tipo.  
  
## Esempio  
 Il codice seguente genera l'errore CS0824:  
  
```  
// cs0824.cs public class C { extern C(); // CS0824 public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [extern](../Topic/extern%20\(C%23%20Reference\).md)   
 [\#pragma warning](../Topic/%23pragma%20warning%20\(C%23%20Reference\).md)
---
title: "Errore del compilatore CS0179 | Microsoft Docs"
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
  - "CS0179"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0179"
ms.assetid: bef000ca-64d7-4809-b2a0-de6927b04b0d
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0179
'member' non può essere di tipo extern e dichiarare un corpo  
  
 Quando un membro della classe è contrassegnato come [extern](../Topic/extern%20\(C%23%20Reference\).md), significa che la definizione si trova in un altro file di definizione del membro. Quindi, un membro di classe contrassegnato come **extern** non può essere definito nella classe. Rimuovere la parola chiave `extern` o eliminare la definizione. Per altre informazioni, vedere [Metodi](../Topic/Methods%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0179:  
  
```  
// CS0179.cs public class MyClass { public extern int ExternMethod(int aa)   // CS0179 { return 0; } // try the following line instead // public extern int ExternMethod(int aa); public static void Main() { } }  
```
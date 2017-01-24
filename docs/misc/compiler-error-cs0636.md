---
title: "Errore del compilatore CS0636 | Microsoft Docs"
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
  - "CS0636"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0636"
ms.assetid: 47597f89-fbe6-4708-9493-3c86c6f0ce56
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0636
L'attributo FieldOffset può essere usato solo in membri di tipo contrassegnati con StructLayout\(LayoutKind.Explicit\)  
  
 L'attributo **StructLayout\(LayoutKind.Explicit\)** deve essere usato nella dichiarazione di struct se contiene membri contrassegnati con l'attributo **FieldOffset.**. Per altre informazioni, vedere [FieldOffset](frlrfsystemruntimeinteropservicesfieldoffsetattributeclasstopic).  
  
 L'esempio seguente genera l'errore CS0636:  
  
```  
// CS0636.cs using System; using System.Runtime.InteropServices; // To resolve the error, uncomment the following line: // [StructLayout(LayoutKind.Explicit)] struct Worksheet { [FieldOffset(4)]public int i;   // CS0636 } public class MainClass { public static void Main () { } }  
```
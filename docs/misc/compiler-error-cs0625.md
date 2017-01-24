---
title: "Errore del compilatore CS0625 | Microsoft Docs"
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
  - "CS0625"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0625"
ms.assetid: 44091813-9988-436c-b35e-e24094793782
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0625
'field': i tipi di campi dell'istanza contrassegnati con StructLayout\(LayoutKind.Explicit\) devono avere un attributo FieldOffset  
  
 Quando uno struct è contrassegnato con un attributo **StructLayout** esplicito, tutti i campi nello struct devono avere l'attributo [FieldOffset](frlrfsystemruntimeinteropservicesfieldoffsetattributeclasstopic). Per altre informazioni, vedere [Classe StructLayoutAttribute](frlrfSystemRuntimeInteropServicesStructLayoutAttributeClassTopic).  
  
 L'esempio seguente genera l'errore CS0625:  
  
```  
// CS0625.cs // compile with: /target:library using System; using System.Runtime.InteropServices; [StructLayout(LayoutKind.Explicit)] struct A { public int i;   // CS0625 not static; an instance field } // OK [StructLayout(LayoutKind.Explicit)] struct B { [FieldOffset(5)] public int i; }  
```
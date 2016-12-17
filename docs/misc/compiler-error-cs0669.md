---
title: "Errore del compilatore CS0669 | Microsoft Docs"
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
  - "CS0669"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0669"
ms.assetid: c7f81869-79d7-481f-a026-2cef0e87df4c
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0669
Una classe con l'attributo ComImport non può avere un costruttore definito dall'utente  
  
 Il livello di interoperabilità COM in Common Language Runtime fornisce il costruttore per le classi [ComImport](frlrfSystemRuntimeInteropServicesComImportAttributeClassTopic). Di conseguenza, è possibile usare un oggetto COM come oggetto gestito nel runtime.  
  
 L'esempio seguente genera l'errore CS0669:  
  
```  
// CS0669.cs using System.Runtime.InteropServices; [ComImport, Guid("00000000-0000-0000-0000-000000000001")] class TestClass { TestClass()   // CS0669, delete constructor to resolve { } public static void Main() { } }  
```
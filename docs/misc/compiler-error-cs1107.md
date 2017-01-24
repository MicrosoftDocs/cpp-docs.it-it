---
title: "Errore del compilatore CS1107 | Microsoft Docs"
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
  - "CS1107"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1107"
ms.assetid: 1b6f6790-53af-4261-a14f-bf2db9790f0b
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1107
Un parametro può avere un solo modificatore 'modifier name'.  
  
 È un errore se i modificatori di parametro, ad esempio `this`, `ref` e `out`, sono presenti più di una volta in una definizione di parametro.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1107:  
  
```  
// cs1107.cs public static class Test { // Extension methods. public static void TestMethod(this this t) {} // CS1107 // Regular Instance Method public void TestMethod(ref ref int i) {} // CS1107 }  
```
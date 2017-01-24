---
title: "Errore del compilatore CS0061 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0061"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0061"
ms.assetid: 8dfc57a9-653d-4902-a88c-92032ba64024
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0061
Accessibilità incoerente: l'interfaccia di base 'interface 1' è meno accessibile dell'interfaccia 'interface2'  
  
 Un costrutto [pubblico](../Topic/public%20\(C%23%20Reference\).md) deve restituire un oggetto accessibile pubblicamente.  
  
 L'accessibilità di un'interfaccia non può essere limitata a quella di un'interfaccia derivata. Per altre informazioni, vedere [Interfacce](../Topic/Interfaces%20\(C%23%20Programming%20Guide\).md) e [Modificatori di accesso](../Topic/Access%20Modifiers%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0061.  
  
```  
// CS0061.cs // compile with: /target:library internal interface A {} public interface AA : A {}  // CS0061 // OK public interface B {} internal interface BB : B {} internal interface C {} internal interface CC : C {}  
```
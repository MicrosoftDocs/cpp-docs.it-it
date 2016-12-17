---
title: "Errore del compilatore CS0241 | Microsoft Docs"
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
  - "CS0241"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "valori predefiniti di parametri di metodo"
  - "impostazioni predefinite, valori di parametri"
  - "impostazioni predefinite, valori di parametri di metodo"
  - "valori di parametri predefiniti"
  - "CS0241"
ms.assetid: be31b194-3de5-4aab-b23a-6cf790f940ab
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0241
Gli identificatori predefiniti dei parametri non sono consentiti  
  
 I [parametri del metodo](../Topic/Method%20Parameters%20\(C%23%20Reference\).md) non possono avere valori predefiniti. Se si vuole ottenere lo stesso effetto, usare l'overload del metodo. Per altre informazioni, vedere [Passaggio di parametri](../Topic/Passing%20Parameters%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0241. L'esempio seguente mostra anche come simulare, tramite overload, un metodo con argomenti predefiniti.  
  
```  
// CS0241.cs public class A { public void Test(int i = 9) {}   // CS0241 } public class B { public void Test() { Test(9); } public void Test(int i)  {} } public class C { public static void Main() { B x = new B(); x.Test(); } }  
```
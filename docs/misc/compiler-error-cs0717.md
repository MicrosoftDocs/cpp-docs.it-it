---
title: "Errore del compilatore CS0717 | Microsoft Docs"
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
  - "CS0717"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0717"
ms.assetid: 1976e82a-d048-4f13-a95a-a7f4e3cd7038
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0717
'static class': non si possono usare classi statiche come vincoli  
  
 Le classi statiche non possono essere estese perché contengono solo i membri statici e non i membri di istanza. Dato che non possono essere estese, non possono essere usate come parametri di tipo e vincoli, perché non può esistere alcun tipo che sia una specializzazione di una classe statica.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0717:  
  
```  
// CS0717.cs public static class SC { public static void F() { } } public class G<T> where T : SC  // CS0717 { public static void Main() { } }  
```
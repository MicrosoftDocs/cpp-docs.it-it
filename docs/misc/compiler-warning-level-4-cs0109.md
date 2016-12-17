---
title: "Avviso del compilatore (livello 4) CS0109 | Microsoft Docs"
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
  - "CS0109"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0109"
ms.assetid: 42ac72e5-5081-4e8b-b2cf-5e10c1606676
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 4) CS0109
Il membro 'member' non nasconde un membro ereditato. La parola chiave new non è obbligatoria  
  
 Una dichiarazione di classe include la parola chiave [new](../Topic/new%20\(C%23%20Reference\).md) anche se la dichiarazione non esegue l'override di una dichiarazione esistente in una classe base. È possibile eliminare la parola chiave **new**.  
  
 L'esempio seguente genera l'errore CS0109:  
  
```  
// CS0109.cs // compile with: /W:4 namespace x { public class a { public int i; } public class b : a { public new int i; public new int j;   // CS0109 public static void Main() { } } }  
```
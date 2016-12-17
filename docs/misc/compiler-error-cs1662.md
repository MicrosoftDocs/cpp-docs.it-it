---
title: "Errore del compilatore CS1662 | Microsoft Docs"
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
  - "CS1662"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1662"
ms.assetid: e61a4fc8-0ef1-4a4a-a27b-3a015c3ba38a
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1662
Non è possibile convertire il blocco di metodi anonimi nel tipo delegato 'delegate type' perché alcuni dei tipi restituiti nel blocco non sono convertibili in modo implicito nel tipo restituito del delegato  
  
 Questo errore si verifica se l'istruzione restituita del blocco di metodi anonimi ha un tipo che non è convertibile in modo implicito nel tipo restituito del delegato.  
  
 L'esempio seguente genera l'errore CS1662:  
  
```  
// CS1662.cs delegate int MyDelegate(int i); class C { public static void Main() { MyDelegate d = delegate(int i) { return 1.0; };  // CS1662 // Try this instead: // MyDelegate d = dekegate(int i) { return (int)1.0; }; } }  
```
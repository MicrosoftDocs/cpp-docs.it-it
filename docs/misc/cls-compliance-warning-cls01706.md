---
title: "Avviso di conformit&#224; a CLS CLS01706 | Microsoft Docs"
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
  - "CLS01706"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01706"
ms.assetid: b89ccbf1-7256-4842-a0af-44a803f28340
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS01706
I tipi di puntatori non gestiti non sono conformi a CLS  
  
 Una firma della funzione conforme a CLS non può contenere un tipo di puntatore non gestito.  
  
 Per altre informazioni sul controllo di conformità a CLS \(Common Language Subset\), vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS01706:  
  
```  
// CLS01706.cpp // compile with: /clr /LD // CLS01706 expected [assembly:System::CLSCompliant (true)]; [assembly:System::Reflection::AssemblyKeyFile("clscompliance.snk")]; public ref class One { public: void Method1(int* parameter) {}   // CLS01706 void Method1(One ^ parameter) {}   // OK };  
```
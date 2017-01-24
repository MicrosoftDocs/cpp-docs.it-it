---
title: "Avviso di conformit&#224; a CLS CLS01703 | Microsoft Docs"
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
  - "CLS01703"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01703"
ms.assetid: b03ae369-3c4b-4080-9b78-4c9bfba581a3
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS01703
I tipi di puntatori non gestiti non sono conformi a CLS  
  
 Un campo conforme a CLS non può contenere una dichiarazione di puntatore nativo.  
  
 Per altre informazioni sul controllo di conformità a CLS \(Common Language Subset\), vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS01703:  
  
```  
// CLS01703.cpp // compile with: /clr /LD // CLS01703 expected using namespace System; using namespace System::Reflection; [assembly:CLSCompliant (true)]; [assembly:AssemblyKeyFile("clscompliance.snk")]; public ref class MyClass { public: int* Parameter;   // CLS01703 };  
```
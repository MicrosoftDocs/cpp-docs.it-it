---
title: "Avviso di conformit&#224; a CLS CLS01714 | Microsoft Docs"
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
  - "CLS01714"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01714"
ms.assetid: 8ba94d1e-ad27-4dd2-919a-19be75119e53
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS01714
I tipi di puntatori non gestiti non sono conformi a CLS  
  
 Una firma del delegato conforme a CLS non può contenere un tipo di puntatore non gestito.  
  
 Per altre informazioni sul controllo di conformità a CLS \(Common Language Subset\), vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS01714:  
  
```  
// CLS01714.cpp // compile with: /clr /LD // CLS01714 expected using namespace System; using namespace System::Reflection; [assembly:CLSCompliant (true)]; [assembly:AssemblyKeyFile("clscompliance.snk")]; public delegate void MyDelegate1(int* Parameter);   // CLS01714  
```
---
title: "Avviso di conformit&#224; a CLS CLS01911 | Microsoft Docs"
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
  - "CLS01911"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01911"
ms.assetid: 673a701a-166b-4782-bff4-a198f70becd5
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS01911
Le interfacce conformi a CLS non definiscono i metodi o i campi statici  
  
 Un'interfaccia conforme a CLS non può contenere metodi o campi statici.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS01911:  
  
```  
// CLS01911.cpp // compile with: /clr /LD // CLS01911 expected using namespace System; using namespace System::Reflection; [assembly:CLSCompliant (true)]; [assembly:AssemblyKeyFile("clscompliance.snk")]; public interface class IOne { static void Method1() {}   // interface static method not cls compliant };  
```
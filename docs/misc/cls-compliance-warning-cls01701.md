---
title: "Avviso di conformit&#224; a CLS CLS01701 | Microsoft Docs"
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
  - "CLS01701"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01701"
ms.assetid: 6ccbe156-9017-44ea-bd4e-a838af2ec2e7
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS01701
I tipi di puntatori non gestiti non sono conformi a CLS  
  
 Un costruttore conforme a CLS non può contenere una dichiarazione di puntatore nativo.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS01701:  
  
```  
// CLS01701.cpp // compile with: /clr /LD // CLS01701 expected using namespace System; using namespace System::Reflection; [assembly:CLSCompliant (true)]; [assembly:AssemblyKeyFile("clscompliance.snk")]; public ref class One { public: One(int* Parameter) {}   // CLS01701 };  
```
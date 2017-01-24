---
title: "Avviso di conformit&#224; a CLS CLS09911 | Microsoft Docs"
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
  - "CLS09911"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS09911"
ms.assetid: 8cc0b0c0-a823-4392-9bf9-4d12242ef451
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS09911
I tipi generici non sono conformi a CLS  
  
 Un tipo conforme a CLS non può essere anche un tipo generico.  Per altre informazioni sui generics in Visual C\+\+, vedere [Supporto dei generics in C\+\+](../windows/generics-cpp-component-extensions.md).  
  
 Per altre informazioni sul controllo di conformità a CLS \(Common Language Subset\), vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS09911:  
  
```  
// CLS09911.cpp // compile with: /clr /LD using namespace System; using namespace System::Reflection; [assembly:CLSCompliant (true)]; [assembly:AssemblyKeyFile("clscompliance.snk")]; generic <class T> public ref class Five {   // CLS09911 };  
  
```
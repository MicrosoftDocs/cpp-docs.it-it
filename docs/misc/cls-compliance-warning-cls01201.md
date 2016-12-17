---
title: "Avviso di conformit&#224; a CLS CLS01201 | Microsoft Docs"
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
  - "CLS01201"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01201"
ms.assetid: 8c3e6ce4-8ea5-487a-bbed-56a36eceb024
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS01201
La visibilità e l'accessibilità di tipi e membri saranno tali che i tipi nella firma di qualsiasi membro saranno visibili e accessibili ogni volta che il membro stesso è visibile e accessibile. Ad esempio, in un costruttore pubblico che è visibile all'esterno del relativo assembly non deve essere presente un argomento il cui tipo è visibile solo nell'assembly.  
  
 I tipi nelle firme dei costruttori devono avere accessibilità maggiore o uguale a quella del costruttore.  Ad esempio, in un costruttore pubblico visibile all'esterno del relativo assembly non deve essere presente un argomento il cui tipo è visibile solo nell'assembly.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS01201:  
  
```  
/* CLS01201.cpp */ // compile with: /clr /LD // CLS01201 expected using namespace System; using namespace System::Reflection; [assembly:CLSCompliant (true)]; [assembly:AssemblyKeyFile("clscompliance.snk")]; private ref class AssemblyLevelType {}; public ref class One { public: One(AssemblyLevelType^ parameter) {}   // not cls compliant }; private value class Two { public: Two(AssemblyLevelType^ parameter) {}   // OK };  
```
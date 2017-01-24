---
title: "Avviso di conformit&#224; a CLS CLS03503 | Microsoft Docs"
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
  - "CLS03503"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS03503"
ms.assetid: 2d2e78db-5fcf-47e1-af1e-9545f28a306b
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS03503
La specifica CLS non consente i modificatori necessari visibili pubblicamente \(modreq\), ma consente i modificatori facoltativi \(modopt\) che non riconosce  
  
 La specifica CLS non consente i modificatori necessari visibili pubblicamente \(modreq\), ma consente i modificatori facoltativi \(modopt\) che non riconosce.  
  
 Verificare che i campi non contengano tipi contrassegnati con modificatori necessari visibili pubblicamente.  
  
 Per altre informazioni sul controllo di conformità a CLS \(Common Language Subset\), vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS03503:  
  
```  
// CLS03503.cpp // compile with: /clr /LD // CLS03503 expected using namespace System; using namespace System::Reflection; using namespace cli::language; [assembly:CLSCompliant (true)]; [assembly:AssemblyKeyFile("clscompliance.snk")]; public ref class MyClass { public: volatile Int32 param;   // CLS03503 Int32 param2;   // OK };  
```
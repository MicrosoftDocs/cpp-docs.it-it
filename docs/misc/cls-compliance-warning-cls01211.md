---
title: "Avviso di conformit&#224; a CLS CLS01211 | Microsoft Docs"
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
  - "CLS01211"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01211"
ms.assetid: a6df4b7a-81e8-4e77-90d1-ec1cc3a759f5
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS01211
La visibilità e l'accessibilità di tipi e membri saranno tali che i tipi nella firma di qualsiasi membro saranno visibili e accessibili ogni volta che il membro stesso è visibile e accessibile. Ad esempio, un tipo che è visibile all'esterno del relativo assembly non deve avere un tipo di base che è visibile solo nell'assembly.  
  
 Tipi e interfacce ereditate o implementate da un tipo \(A\) devono avere accessibilità maggiore o uguale a quella del tipo.  Ad esempio, in un metodo pubblico che è visibile all'esterno del relativo assembly non deve essere presente un argomento il cui tipo è visibile solo nell'assembly.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS01211:  
  
```  
// CLS01211.cpp // compile with: /clr /LD // CLS01211 expected using namespace System; using namespace System::Reflection; [assembly:CLSCompliant (true)]; [assembly:AssemblyKeyFile("clscompliance.snk")]; private interface class I {}; public interface class I2 : public I {};  
```
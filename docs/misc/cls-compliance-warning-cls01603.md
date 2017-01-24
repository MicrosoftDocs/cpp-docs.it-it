---
title: "Avviso di conformit&#224; a CLS CLS01603 | Microsoft Docs"
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
  - "CLS01603"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01603"
ms.assetid: 608ff6e6-8669-4cc7-a85f-5b6915ee38d5
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS01603
Le matrici devono includere elementi con un tipo conforme a CLS e i limiti inferiori di tutte le dimensioni della matrice devono essere pari a zero  
  
 Le matrici devono includere elementi con un tipo conforme a CLS e i limiti inferiori di tutte le dimensioni della matrice devono essere pari a zero. Solo per il fatto che un elemento sia una matrice, il tipo di elemento della matrice sarà richiesto per eseguire una distinzione tra gli overload. Quando l'overload è basato su due o più i tipi di matrice, i tipi di elemento vengono denominati tipi.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS01603:  
  
```  
// CLS01603.cpp // compile with: /clr /LD // CLS01603 expected using namespace System; using namespace System::Reflection; using namespace cli::language; [assembly:CLSCompliant (true)]; [assembly:AssemblyKeyFile("clscompliance.snk")]; [CLSCompliant(false)] public delegate void MyDelegate(Object ^ sender, EventArgs^ e); public delegate void MyDelegate2(Object ^ sender, EventArgs^ e); public ref struct One { array<MyDelegate^>^ MyArray;   // CLS01603 array<MyDelegate2^>^ MyArray2;   // OK };  
```
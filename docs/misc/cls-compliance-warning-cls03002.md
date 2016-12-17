---
title: "Avviso di conformit&#224; a CLS CLS03002 | Microsoft Docs"
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
  - "CLS03002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS03002"
ms.assetid: b3254410-e21c-430b-a2fd-d110d6f5f38a
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS03002
L'accessibilità di un evento e le relative funzioni di accesso devono essere identiche  
  
 Un evento e i relativi metodi della funzione di accesso non devono presentare differenze in termini di accessibilità.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS03002:  
  
```  
// CLS03002.cpp // compile with: /clr /LD // CLS03002 expected using namespace System; using namespace System::Reflection; [assembly:CLSCompliant (true)]; [assembly:AssemblyKeyFile("clscompliance.snk")]; public delegate void MyDelegate(int parameter); public ref class One { public: event MyDelegate^ MyEvent {   // CLS03002 public: void add(MyDelegate^ paramter) {} void remove(MyDelegate^ parameter) {} protected: void raise(int parameter)   {} } event MyDelegate^ MyEvent2 {   // OK public: void add(MyDelegate^ paramter) {} void remove(MyDelegate^ parameter) {} void raise(int parameter)   {} } };  
```
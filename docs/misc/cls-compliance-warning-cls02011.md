---
title: "Avviso di conformit&#224; a CLS CLS02011 | Microsoft Docs"
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
  - "CLS02011"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS02011"
ms.assetid: 9466be1e-9558-49e8-9ea4-5cfc54a22066
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS02011
Per le classi, i tipi valore e le interfacce conformi a CLS non è necessaria l'implementazione di interfacce non conformi a CLS  
  
 Un oggetto tipizzato contrassegnato come conforme a CLS ha uno o più tipi di base che non sono conformi a CLS.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS02011:  
  
```  
// CLS02011.cpp // compile with: /clr /LD // CLS02011 expected using namespace System; using namespace System::Reflection; [assembly:CLSCompliant (true)]; [assembly:AssemblyKeyFile("clscompliance.snk")]; [CLSCompliant(true)] public interface class CompliantInterface {}; [CLSCompliant(false)] public interface class NotCompliantInterface {}; public ref class One : public NotCompliantInterface {};   // CLS02011 public ref class Two : public CompliantInterface {};   // OK  
```
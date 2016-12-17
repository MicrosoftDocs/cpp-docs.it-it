---
title: "Avviso di conformit&#224; a CLS CLS01106 | Microsoft Docs"
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
  - "CLS01106"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01106"
ms.assetid: 0c964444-387d-4348-aed5-05f1ccc241c8
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS01106
**Tutti i tipi visualizzati in una firma devono essere conformi a CLS**  
  
 Se un tipo è conforme a CLS, tutte le funzioni nel tipo, a meno che non siano contrassegnate come non conformi a CLS, devono avere parametri di tipo conformi a CLS.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS01106:  
  
```  
// CLS01106.cpp // compile with: /clr /LD // CLS01106 expected using namespace System; using namespace System::Reflection; [assembly:CLSCompliant (true)]; [assembly:AssemblyKeyFile("clscompliance.snk")]; [CLSCompliant(true)] public ref class CompliantType {}; [CLSCompliant(false)] public ref class NotCompliantType {}; [CLSCompliant(true)] public ref class One { public: NotCompliantType^ Method1(NotCompliantType^ parameter) { return parameter; } CompliantType^ Method2(CompliantType^ parameter) {   // OK return parameter; } [CLSCompliant(false)] NotCompliantType^ Method3(NotCompliantType^ parameter) {   // OK return parameter; } };  
```
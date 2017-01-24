---
title: "Avviso di conformit&#224; a CLS CLS00500 | Microsoft Docs"
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
  - "CLS00500"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS00500"
ms.assetid: faaf377e-3738-4c0d-9a51-09db4073564e
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS00500
Tutti i nomi in un ambito conforme a CLS devono essere di tipo indipendente e distinto  
  
 Tutti i nomi introdotti in un ambito conforme a CLS devono essere di tipo indipendente e distinto, fatta eccezione per i casi in cui i nomi sono identici e vengono risolti tramite l'overload. Per fini CLS, due nomi sono considerati identici se i relativi mapping di minuscole sono uguali. È possibile eseguire l'overload solo di proprietà e funzioni. Proprietà e funzioni possono essere sottoposti a overload solo in base al numero e ai tipi dei relativi parametri, a eccezione degli operatori di conversione, che possono essere sottoposti a overload anche in base al tipo restituito. Per altre informazioni, vedere [Conversioni definite dall'utente](../dotnet/user-defined-conversions-cpp-cli.md).  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 L'esempio seguente genera l'errore CLS00500:  
  
```  
// CLS00500.cpp // compile with: /clr /LD // CLS00500 expected using namespace System; using namespace System::Reflection; [assembly:AssemblyKeyFile("clscompliance.snk")]; [assembly:System::CLSCompliant(true)]; public ref class a {}; public ref class A {};   // CLS00500  
```
---
title: "Procedura: determinare se l&#39;operazione di arresto &#232; stata avviata (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".NET Framework, chiusura della sessione"
  - "applicazioni [C++], chiusura della sessione"
  - "chiusura della sessione"
  - "chiusura"
ms.assetid: a8d39731-dea8-4f0a-96b7-2a5de09b21d7
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: determinare se l&#39;operazione di arresto &#232; stata avviata (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come determinare se è attualmente in corso l'arresto dell'applicazione o di .NET Framework.  Questa informazione è utile per l'accesso agli elementi statici in .NET Framework poiché, durante l'arresto, questi costrutti vengono finalizzati dal sistema e non possono essere utilizzati in modo affidabile.  Controllando prima la proprietà <xref:System.Environment.HasShutdownStarted%2A>, è possibile evitare potenziali malfunzionamenti causati dall'accesso a questi elementi.  
  
## Esempio  
  
```  
// check_shutdown.cpp  
// compile with: /clr  
using namespace System;  
int main()   
{  
   if (Environment::HasShutdownStarted)  
      Console::WriteLine("Shutting down.");  
   else  
      Console::WriteLine("Not shutting down.");  
   return 0;  
}  
```  
  
## Vedere anche  
 [Operazioni Windows](../dotnet/windows-operations-cpp-cli.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
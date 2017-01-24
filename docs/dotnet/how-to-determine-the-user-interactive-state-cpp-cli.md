---
title: "Procedura: determinare lo stato interattivo con l&#39;utente (C++/CLI) | Microsoft Docs"
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
  - "stato interattivo con l'utente"
  - "Visual C++, stato interattivo con l'utente"
ms.assetid: 9f52323e-38b8-4a41-9b1d-052012ad839b
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: determinare lo stato interattivo con l&#39;utente (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come determinare se il codice viene eseguito in un contesto interattivo.  Se <xref:System.Environment.UserInteractive%2A> è false, il codice viene eseguito come processo del servizio o dall'interno di un'applicazione Web, nel qual caso non dovrebbe tentare di interagire con l'utente.  
  
## Esempio  
  
```  
// user_interactive.cpp  
// compile with: /clr  
using namespace System;  
  
int main()   
{  
   if ( Environment::UserInteractive )  
      Console::WriteLine("User interactive");  
   else  
      Console::WriteLine("Noninteractive");  
   return 0;  
}  
```  
  
## Vedere anche  
 [Operazioni Windows](../dotnet/windows-operations-cpp-cli.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
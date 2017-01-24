---
title: "Procedura: recuperare il nome utente corrente (C++/CLI) | Microsoft Docs"
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
  - "nomi utente correnti"
  - "nomi utente, recupero"
  - "UserName (stringa)"
ms.assetid: 91679571-d029-41f5-b657-1460c81c608a
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: recuperare il nome utente corrente (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come recuperare il nome utente corrente, ovvero il nome dell'utente attualmente connesso a Windows.  Il nome viene memorizzato nella stringa <xref:System.Environment.UserName%2A>, definita nello spazio dei nomi <xref:System.Environment>.  
  
## Esempio  
  
```  
// username.cpp  
// compile with: /clr  
using namespace System;  
  
int main()   
{  
   Console::WriteLine("\nCurrent user: {0}", Environment::UserName);  
   return 0;  
}  
```  
  
## Vedere anche  
 [Operazioni Windows](../dotnet/windows-operations-cpp-cli.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
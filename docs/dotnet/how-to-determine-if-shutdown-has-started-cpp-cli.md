---
title: "Procedura: determinare se l'arresto è stato avviato (C + + CLI) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- .NET Framework, shutdown
- shutdown
- termination
- applications [C++], shutdown
ms.assetid: a8d39731-dea8-4f0a-96b7-2a5de09b21d7
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 7f4575f212752a43df2b130fbde9aa7264186d6f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-determine-if-shutdown-has-started-ccli"></a>Procedura: determinare se l'operazione di arresto è stata avviata (C++/CLI)
Esempio di codice seguente viene illustrato come determinare se l'applicazione o a .NET Framework è in fase di chiusura. Ciò è utile per l'accesso a elementi statici in .NET Framework, perché durante la chiusura, questi costrutti vengono finalizzati dal sistema e non possono essere utilizzati in modo affidabile. Controllando il <xref:System.Environment.HasShutdownStarted%2A> proprietà prima di tutto, per evitare potenziali problemi, l'accesso a questi elementi.  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Operazioni Windows (C + c++ /CLI)](../dotnet/windows-operations-cpp-cli.md)   
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
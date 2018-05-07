---
title: "Procedura: determinare se l'arresto è stato avviato (C + + CLI) | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- .NET Framework, shutdown
- shutdown
- termination
- applications [C++], shutdown
ms.assetid: a8d39731-dea8-4f0a-96b7-2a5de09b21d7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: bbcc2b1efa54808b25238bde4de3dcc21d2ba687
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
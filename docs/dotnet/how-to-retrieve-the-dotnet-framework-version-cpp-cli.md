---
title: 'Procedura: recuperare la versione di .NET Framework (C + + CLI) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- .NET Framework, version
- Version property, retrieving .NET Framework version
ms.assetid: fc786fbc-c915-4b15-bcad-0d68cf2c44bd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f8bc471cda452bd387478a75dd047631c0359ed1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33128771"
---
# <a name="how-to-retrieve-the-net-framework-version-ccli"></a>Procedura: recuperare la versione di .NET Framework (C++/CLI)
Esempio di codice riportato di seguito viene illustrato come determinare la versione di .NET Framework attualmente installata con il <xref:System.Environment.Version%2A> proprietà, che è un puntatore a un <xref:System.Version> oggetto che contiene le informazioni sulla versione.  
  
## <a name="example"></a>Esempio  
  
```  
// dotnet_ver.cpp  
// compile with: /clr  
using namespace System;  
int main()   
{  
   Version^ version = Environment::Version;  
   if (version)  
   {  
      int build = version->Build;  
      int major = version->Major;  
      int minor = version->Minor;  
      int revision = Environment::Version->Revision;  
      Console::Write(".NET Framework version: ");  
      Console::WriteLine("{0}.{1}.{2}.{3}",   
            build, major, minor, revision);  
   }  
   return 0;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Operazioni Windows (C + c++ /CLI)](../dotnet/windows-operations-cpp-cli.md)   
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
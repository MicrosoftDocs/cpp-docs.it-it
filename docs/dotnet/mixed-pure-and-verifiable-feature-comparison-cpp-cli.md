---
title: "Confronto tra le funzionalità mista, pura e verificabile (C + + CLI) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- safe assemblies [C++], vs. pure
- mixed assemblies [C++], vs. pure
- safe assemblies [C++], vs. mixed
- pure MSIL [C++]
- verifiable assemblies [C++]
- pure MSIL [C++], vs. safe
- pure MSIL [C++], vs. mixed
- pure MSIL [C++], compared to mixed and safe
- verifiable assemblies [C++], vs. mixed
- mixed assemblies [C++], vs. safe
- verifiable assemblies [C++], vs. pure
- pure assemblies [C++]
- safe assemblies [C++]
- mixed assemblies [C++]
ms.assetid: 3f7a82ba-0e69-4927-ba0c-fbc3160e4394
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 92c3b6b95bc1ddb51900d8274f76993c32a71ceb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="mixed-pure-and-verifiable-feature-comparison-ccli"></a>Confronto tra le modalità mista, pura e verificabile (C++/CLI)
In questo argomento vengono confrontate le funzionalità tra le diverse **/clr** le modalità di compilazione. Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).  
  
 Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
## <a name="feature-comparison"></a>Confronto delle funzionalità  
  
|Funzionalità|Misto (o clr)|Pure (o /CLR: pure)|Sicuro (o /CLR: safe)|Informazioni correlate|  
|-------------|---------------------|-------------------------|-------------------------|-------------------------|  
|Libreria CRT|È supportato|È supportato||[Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)|  
|MFC/ATL|È supportato|||[Applicazioni Desktop MFC](../mfc/mfc-desktop-applications.md) &#124; [Preliminari sulla classe](../atl/atl-class-overview.md)|  
|Funzioni non gestite|È supportato|||[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)|  
|Dati non gestiti|È supportato|È supportato||[Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)|  
|Chiamabile da funzioni non gestite|È supportato|||[Procedura: migrare a /clr: pure (C + c++ /CLI)](../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md)|  
|Supporta la chiamata di funzioni non gestite|È supportato|Solo le funzioni di tipo C|P/Invoke solo|[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)|  
|Supporta la Reflection|Solo le DLL|È supportato|È supportato|[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)|  
  
## <a name="see-also"></a>Vedere anche  
 [Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)
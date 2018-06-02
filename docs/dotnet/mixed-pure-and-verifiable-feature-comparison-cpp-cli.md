---
title: Confronto tra le funzionalità mista, pura e verificabile (C + c++ /CLI) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 8cb1b2ba71277415fd1ba5124f6120cc2f2c995d
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704711"
---
# <a name="mixed-pure-and-verifiable-feature-comparison-ccli"></a>Confronto tra le funzionalità mista, pura e verificabile (C + c++ /CLI)

In questo argomento vengono confrontate le funzionalità tra le diverse **/clr** le modalità di compilazione. Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

> [!IMPORTANT]
> Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

## <a name="feature-comparison"></a>Confronto delle funzionalità

|Funzionalità|Misto (o clr)|Pure (o /CLR: pure)|Sicuro (o /CLR: safe)|Informazioni correlate|
|-------------|---------------------|-------------------------|-------------------------|-------------------------|
|Libreria CRT|È supportato|deprecated||[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)|
|MFC/ATL|È supportato|||[Applicazioni Desktop MFC](../mfc/mfc-desktop-applications.md) &#124; [Cenni preliminari sulla classi](../atl/atl-class-overview.md)|
|Funzioni non gestite|È supportato|||[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)|
|Dati non gestiti|È supportato|deprecated||[Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)|
|Chiamabile da funzioni non gestite|È supportato||||
|Supporta la chiamata di funzioni non gestite|È supportato|deprecated|deprecated|[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)|
|Supporta la Reflection|Solo le DLL|deprecated|deprecated|[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)|

## <a name="see-also"></a>Vedere anche

- [Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)
---
title: Confronto delle funzionalità mista, pura e verificabile (C + + CLI)
ms.date: 11/04/2016
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
ms.openlocfilehash: 81fcf986ee68f5f8f64c8070bb992fa1cda1683b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50482072"
---
# <a name="mixed-pure-and-verifiable-feature-comparison-ccli"></a>Confronto delle funzionalità mista, pura e verificabile (C + + CLI)

Questo argomento mette a confronto tra le diverse **/clr** le modalità di compilazione. Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

> [!IMPORTANT]
> Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

## <a name="feature-comparison"></a>Confronto tra funzionalità

|Funzionalità|Misto (/ Common Language Runtime)|Pure (/ clr: pure)|Safe (/ /CLR: safe)|Informazioni correlate|
|-------------|---------------------|-------------------------|-------------------------|-------------------------|
|Libreria CRT|È supportato|deprecated||[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)|
|MFC/ATL|È supportato|||[Applicazioni Desktop MFC](../mfc/mfc-desktop-applications.md) &#124; [Panoramica di classi](../atl/atl-class-overview.md)|
|Funzioni non gestite|È supportato|||[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)|
|Dati non gestiti|È supportato|deprecated||[Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)|
|Richiamabili dalle funzioni non gestite|È supportato||||
|Supporta la chiamata di funzioni non gestite|È supportato|deprecated|deprecated|[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)|
|Supporta la Reflection|Solo DLL|deprecated|deprecated|[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)|

## <a name="see-also"></a>Vedere anche

- [Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)
---
description: 'Altre informazioni su: codice pure e verificabile (C++/CLI)'
title: Codice pure e verificabile (C++/CLI)
ms.date: 11/04/2016
helpviewer_keywords:
- /clr compiler option [C++], verifiable assemblies
- /clr compiler option [C++], mixed assemblies
- pure MSIL [C++]
- verifiable assemblies [C++]
- verifiably type-safe code [C++]
- /clr compiler option [C++], pure assemblies
- .NET Framework [C++], pure and verifiable code
- assemblies [C++], mixed code
- verifiable assemblies [C++], about verifiable assemblies
- mixed assemblies [C++], about mixed assemblies
- pure MSIL [C++], about pure code
- assemblies [C++], verifiable code
- mixed assemblies [C++]
- assemblies [C++], pure code
ms.assetid: 9050e110-fa11-4356-b56c-665187ff871c
ms.openlocfilehash: 64224f7f462b5e11e522648a5b64ec9d568dc53f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276764"
---
# <a name="pure-and-verifiable-code-ccli"></a>Codice pure e verificabile (C++/CLI)

Per la programmazione .NET, Visual C++ in Visual Studio 2017 supporta la creazione di assembly misti usando l'opzione del compilatore [/CLR (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md) . Le opzioni **/CLR: pure** e **CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017. Se il codice deve essere sicuro o verificabile, è consigliabile trasferirlo in C#.

## <a name="mixed-clr"></a>Misto (/CLR)

Gli assembly misti (compilati con **/CLR**) contengono sia parti non gestite che gestite, consentendo loro di usare le funzionalità .NET, ma contengono ancora codice nativo. In questo modo è possibile aggiornare le applicazioni e i componenti per usare le funzionalità di .NET senza che sia necessario riscrivere l'intero progetto. L'uso di Visual C++ per combinare codice gestito e nativo in questo modo è denominato interoperabilità C++. Per altre informazioni, vedere [assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md) e [interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md).

Le chiamate effettuate da assembly gestiti a DLL native tramite P/Invoke verranno compilate, ma potrebbero avere esito negativo in fase di esecuzione in base alle impostazioni di sicurezza.

Esiste uno scenario di codifica che passa il compilatore, ma che comporta un assembly non verificabile: chiamata di una funzione virtuale tramite un'istanza dell'oggetto usando l'operatore di risoluzione dell'ambito.  Ad esempio: `MyObj -> A::VirtualFunction();`.

## <a name="see-also"></a>Vedi anche

- [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

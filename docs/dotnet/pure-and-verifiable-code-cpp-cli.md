---
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
ms.openlocfilehash: 66f3b5a33791d20297cde6e6223ba65189a99682
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62384714"
---
# <a name="pure-and-verifiable-code-ccli"></a>Codice pure e verificabile (C++/CLI)

Per la programmazione .NET, Visual C++ in Visual Studio 2017 supporta la creazione di assembly misti usando il [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) opzione del compilatore. Il **/clr: pure** e **/CLR: safe** opzioni sono deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017. Se il codice deve essere sicuro o verificabile e quindi è consigliabile convertirlo per C#.

## <a name="mixed-clr"></a>Misto (/ Common Language Runtime)

Assembly misti (compilato con **/clr**), sia gestite che contengono e parti gestite, consentendo loro di usare le funzionalità di .NET, ma comunque contengono codice nativo. In questo modo le applicazioni e componenti da aggiornare usare le funzionalità di .NET senza la necessità di riscrivere l'intero progetto. L'utilizzo di Visual C++ per combinare codice gestito e nativo in questo modo viene chiamato l'interoperabilità C++. Per altre informazioni, vedere [assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md) e [interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md).

Le chiamate effettuate da assembly gestiti nelle DLL native tramite P/Invoke verranno compilato, ma potrebbero non riuscire in fase di esecuzione a seconda delle impostazioni di sicurezza.

È uno scenario di codifica che verrà passato al compilatore, ma che causano un assembly non verificabile: chiamare una funzione virtuale con un'istanza dell'oggetto usando l'operatore di risoluzione dell'ambito.  Ad esempio: `MyObj -> A::VirtualFunction();`.

## <a name="see-also"></a>Vedere anche

- [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

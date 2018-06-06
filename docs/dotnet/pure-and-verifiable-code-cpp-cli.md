---
title: Codice pure e verificabile (C + + CLI) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 453bb40e94c1d345adbe22f8792b59d1e584499a
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34704828"
---
# <a name="pure-and-verifiable-code-ccli"></a>Codice pure e verificabile (C + c++ /CLI)

Per la programmazione .NET, Visual C++ in Visual Studio 2017 supporta la creazione di assembly misti utilizzando il [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) l'opzione del compilatore. Il **/clr: pure** e **/CLR: safe** opzioni sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017. Se il codice deve essere verificabile o sicuri, è consigliabile convertirlo per c#.

## <a name="mixed-clr"></a>Misto (o clr)

Assembly misti (compilati con **/clr**), contengono entrambi non gestita e parti gestite, consentendo loro di utilizzare le funzionalità di .NET, ma è comunque contengono codice nativo. In questo modo, applicazioni e componenti da aggiornare utilizzare le funzionalità .NET senza la necessità di riscrivere l'intero progetto. L'utilizzo di Visual C++ per combinare codice gestito e nativo in questo modo viene definito l'interoperabilità C++. Per ulteriori informazioni, vedere [assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md) e [interoperabilità .NET e Native](../dotnet/native-and-dotnet-interoperability.md).

Le chiamate effettuate da assembly gestiti DLL native tramite P/Invoke verranno compilato, ma potrebbero non riuscire in fase di esecuzione a seconda delle impostazioni di sicurezza.

È uno scenario di codifica che verrà passato al compilatore, ma viene generato un assembly non verificabile: chiamare una funzione virtuale con un'istanza dell'oggetto utilizzando l'operatore di risoluzione dell'ambito.  Ad esempio: `MyObj -> A::VirtualFunction();`.

## <a name="see-also"></a>Vedere anche

- [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)


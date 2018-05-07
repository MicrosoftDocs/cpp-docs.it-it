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
ms.openlocfilehash: c4f4b9bd590ad873d0b241d2c095be53ad1dacb4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="pure-and-verifiable-code-ccli"></a>Codice pure e verificabile (C++/CLI)
Per la programmazione .NET, Visual C++ in Visual Studio 2017 supporta la creazione di assembly misti utilizzando il [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) l'opzione del compilatore. Il **/clr: pure** e **: safe** opzioni sono deprecate a partire da Visual Studio 2015 e verrà rimossa in una versione futura del compilatore. Se il codice deve essere verificabile, è consigliabile convertirlo in c#.
  
## <a name="mixed-clr"></a>Misto (o clr)  
 Assembly misti (compilati con **/clr**), contengono entrambi non gestita e parti gestite, consentendo loro di utilizzare le funzionalità di .NET, ma è comunque contengono codice nativo. In questo modo, applicazioni e componenti da aggiornare utilizzare le funzionalità .NET senza la necessità di riscrivere l'intero progetto. L'utilizzo di Visual C++ per combinare codice gestito e nativo in questo modo viene definito l'interoperabilità C++. Per ulteriori informazioni, vedere [assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md) e [interoperabilità .NET e Native](../dotnet/native-and-dotnet-interoperability.md).  
  
  
Le chiamate effettuate da assembly gestiti DLL native tramite P/Invoke verranno compilato, ma potrebbero non riuscire in fase di esecuzione a seconda delle impostazioni di sicurezza.  
  
È uno scenario di codifica che verrà passato al compilatore, ma viene generato un assembly non verificabile: chiamare una funzione virtuale con un'istanza dell'oggetto utilizzando l'operatore di risoluzione dell'ambito.  Ad esempio: `MyObj -> A::VirtualFunction();`.  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

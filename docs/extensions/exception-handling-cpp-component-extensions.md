---
title: Gestione delle eccezioni (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- structured exception handling [C++], managed exceptions
- Exception class, managed applications
- exception handling
- C++ exception handling
- exception handling, types of
- System::Exception class in managed applications
ms.assetid: ccb11fe8-6938-41ac-b477-a183e85865b9
ms.openlocfilehash: b477f7355ee1f4f70a0ad3df8b85c4276c07d397
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "65516576"
---
# <a name="exception-handling--ccli-and-ccx"></a>Gestione delle eccezioni (C++/CLI e C++/CX)

Le applicazioni compilate con l'opzione del compilatore `/ZW` o `/clr` usano entrambe *eccezioni* per gestire gli errori imprevisti durante l'esecuzione del programma. Negli argomenti seguenti viene illustrata la gestione delle eccezioni nelle applicazioni C++/CLI o C++/CX.

## <a name="in-this-section"></a>In questa sezione

[Concetti di base per l'uso delle eccezioni gestite](../dotnet/basic-concepts-in-using-managed-exceptions.md)<br/>
Descrive la generazione di eccezioni e l'uso di blocchi **try**/**catch**.

[Differenze nel comportamento di gestione delle eccezioni in /clr](../dotnet/differences-in-exception-handling-behavior-under-clr.md)<br/>
Vengono illustrate le differenze rispetto al comportamento standard di gestione delle eccezioni C++.

[finally](../dotnet/finally.md)<br/>
Viene illustrato come utilizzare la parola chiave finally.

[Procedura: Definire e installare un gestore eccezioni globale](../dotnet/how-to-define-and-install-a-global-exception-handler.md)<br/>
Viene illustrato come acquisire le eccezioni non gestite.

[Procedura: Rilevare eccezioni nel codice nativo generate da MSIL](../dotnet/how-to-catch-exceptions-in-native-code-thrown-from-msil.md)<br/>
Viene illustrato come rilevare le eccezioni C++ e CLR nel codice nativo.

[Procedura: Definire e installare un gestore eccezioni globale](../dotnet/how-to-define-and-install-a-global-exception-handler.md)<br/>
Viene illustrato come rilevare tutte le eccezioni non gestite.

## <a name="related-sections"></a>Sezioni correlate

[Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)<br/>
Descrive la gestione delle eccezioni in C++ standard.

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)
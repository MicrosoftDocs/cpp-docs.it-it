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
ms.openlocfilehash: 23d65bb8056672d12e3d40f9fcab1e58bab65a3d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219703"
---
# <a name="exception-handling--ccli-and-ccx"></a>Gestione delle eccezioni (C++/CLI e C++/CX)

Le applicazioni compilate con l'opzione del compilatore `/ZW` o `/clr` usano entrambe *eccezioni* per gestire gli errori imprevisti durante l'esecuzione del programma. Negli argomenti seguenti viene illustrata la gestione delle eccezioni nelle applicazioni C++/CLI o C++/CX.

## <a name="in-this-section"></a>Contenuto della sezione

[Concetti di base sull'uso di eccezioni gestite](../dotnet/basic-concepts-in-using-managed-exceptions.md)<br/>
Descrive la generazione di eccezioni e l'utilizzo di **`try`** / **`catch`** blocchi.

[Differenze nel comportamento di gestione delle eccezioni in/CLR](../dotnet/differences-in-exception-handling-behavior-under-clr.md)<br/>
Vengono illustrate le differenze rispetto al comportamento standard di gestione delle eccezioni C++.

[Infine](../dotnet/finally.md)<br/>
Viene illustrato come utilizzare la parola chiave finally.

[Procedura: definire e installare un gestore di eccezioni globale](../dotnet/how-to-define-and-install-a-global-exception-handler.md)<br/>
Viene illustrato come acquisire le eccezioni non gestite.

[Procedura: rilevare eccezioni nel codice nativo generate da MSIL](../dotnet/how-to-catch-exceptions-in-native-code-thrown-from-msil.md)<br/>
Viene illustrato come rilevare le eccezioni C++ e CLR nel codice nativo.

[Procedura: definire e installare un gestore di eccezioni globale](../dotnet/how-to-define-and-install-a-global-exception-handler.md)<br/>
Viene illustrato come rilevare tutte le eccezioni non gestite.

## <a name="related-sections"></a>Sezioni correlate

[Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)<br/>
Descrive la gestione delle eccezioni in C++ standard.

## <a name="see-also"></a>Vedere anche

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)

---
title: La gestione delle eccezioni (C + c++ /CLI e c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- structured exception handling [C++], managed exceptions
- Exception class, managed applications
- exception handling
- C++ exception handling
- exception handling, types of
- System::Exception class in managed applications
ms.assetid: ccb11fe8-6938-41ac-b477-a183e85865b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7d070cc223f90f84bd52176ee7e50dbbfa441789
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49328129"
---
# <a name="exception-handling--ccli-and-ccx"></a>La gestione delle eccezioni (C + c++ /CLI e c++ /CX)

Nelle applicazioni compilate con la `/ZW` l'opzione del compilatore oppure `/clr` entrambi usano l'opzione del compilatore *eccezioni* per gestire gli errori imprevisti durante l'esecuzione del programma. Negli argomenti seguenti viene illustrata la gestione delle eccezioni nelle applicazioni C++/CLI o C++/CX.

## <a name="in-this-section"></a>In questa sezione

[Concetti di base per l'uso delle eccezioni gestite](../dotnet/basic-concepts-in-using-managed-exceptions.md)<br/>
Descrive la generazione di eccezioni e l'utilizzo **provare**/**catch** blocchi.

[Differenze nell'eccezione comportamento di gestione in /clr](../dotnet/differences-in-exception-handling-behavior-under-clr.md)<br/>
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
Descrive gestione delle eccezioni in C++ standard.

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)
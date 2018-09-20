---
title: Eccezioni (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 2213266d281933c6a6a59775584532acaeb39d6e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412323"
---
# <a name="exception-handling--c-component-extensions"></a>Gestione delle eccezioni (Estensioni del componente C++)

Nelle applicazioni compilate con la `/ZW` l'opzione del compilatore oppure `/clr` entrambi usano l'opzione del compilatore *eccezioni* per gestire gli errori imprevisti durante l'esecuzione del programma. Negli argomenti seguenti viene illustrata la gestione delle eccezioni nelle applicazioni C++/CLI o C++/CX.

## <a name="in-this-section"></a>In questa sezione

[Concetti di base per l'uso delle eccezioni gestite](../dotnet/basic-concepts-in-using-managed-exceptions.md)<br/>
Descrive la generazione di eccezioni e l'utilizzo **provare**/**catch** blocchi.

[Differenze di comportamento in /CLR di gestione delle eccezioni](../dotnet/differences-in-exception-handling-behavior-under-clr.md)<br/>
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
Viene descritta la gestione delle eccezioni in C++.

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)
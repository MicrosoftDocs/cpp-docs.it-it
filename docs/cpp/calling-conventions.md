---
title: Convenzioni di chiamata
ms.date: 11/04/2016
helpviewer_keywords:
- calling conventions
ms.assetid: 11b1e45c-8fd1-420b-bca0-a19e294c1d85
ms.openlocfilehash: cc79a0636f900aa49e31f0dc35ee19657c3e1ccb
ms.sourcegitcommit: ff3cbe4235b6c316edcc7677f79f70c3e784ad76
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/19/2018
ms.locfileid: "53626734"
---
# <a name="calling-conventions"></a>Convenzioni di chiamata

Il compilatore Visual C/C++ fornisce numerose convenzioni per chiamare funzioni interne ed esterne. La comprensione di questi diversi approcci può facilitare il debug del programma e il collegamento del codice con le routine del linguaggio assembly.

In questo argomento vengono illustrate le differenze tra le convenzioni di chiamata, il modo in cui gli argomenti vengono passati e il modo in cui i valori vengono restituiti dalle funzioni. Vengono inoltre illustrate le chiamate di funzione naked, una funzionalità avanzata che consente di scrivere codice di epilogo e di prologo personalizzato.

Per informazioni sulle convenzioni di chiamata x64 processori, vedere [convenzioni di chiamata](../build/x64-calling-convention.md).

## <a name="topics-in-this-section"></a>Argomenti contenuti in questa sezione

- [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md) (`__cdecl`, `__stdcall`, `__fastcall`e così via)

- [Esempio di chiamata: Chiamata e prototipo di funzione](../cpp/calling-example-function-prototype-and-call.md)

- [Tramite le chiamate di funzione naked per scrivere il codice di prologo/epilogo personalizzate](../cpp/naked-function-calls.md)

- [Coprocessore a virgola mobile e convenzioni di chiamata](../cpp/floating-point-coprocessor-and-calling-conventions.md)

- [Convenzioni di chiamata obsolete](../cpp/obsolete-calling-conventions.md)

## <a name="see-also"></a>Vedere anche

[Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md)
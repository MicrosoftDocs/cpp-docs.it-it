---
title: Convenzioni di chiamata
ms.date: 11/04/2016
helpviewer_keywords:
- calling conventions
ms.assetid: 11b1e45c-8fd1-420b-bca0-a19e294c1d85
ms.openlocfilehash: d351ae064b8c9bdd0599a1d6981166371a62af58
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216609"
---
# <a name="calling-conventions"></a>Convenzioni di chiamata

Il compilatore Visual C/C++ fornisce numerose convenzioni per chiamare funzioni interne ed esterne. La comprensione di questi diversi approcci può facilitare il debug del programma e il collegamento del codice con le routine del linguaggio assembly.

In questo argomento vengono illustrate le differenze tra le convenzioni di chiamata, il modo in cui gli argomenti vengono passati e il modo in cui i valori vengono restituiti dalle funzioni. Vengono inoltre illustrate le chiamate di funzione naked, una funzionalità avanzata che consente di scrivere codice di epilogo e di prologo personalizzato.

Per informazioni sulle convenzioni di chiamata per i processori x64, vedere [convenzione di chiamata](../build/x64-calling-convention.md).

## <a name="topics-in-this-section"></a>Argomenti in questa sezione

- [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md) ( **`__cdecl`** ,, **`__stdcall`** **`__fastcall`** e altri)

- [Esempio di chiamata: prototipo di funzione e chiamata](../cpp/calling-example-function-prototype-and-call.md)

- [Utilizzo di chiamate di funzione naked per scrivere codice di epilogo o di prologo personalizzato](../cpp/naked-function-calls.md)

- [Coprocessore a virgola mobile e convenzioni di chiamata](../cpp/floating-point-coprocessor-and-calling-conventions.md)

- [Convenzioni di chiamata obsolete](../cpp/obsolete-calling-conventions.md)

## <a name="see-also"></a>Vedere anche

[Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md)

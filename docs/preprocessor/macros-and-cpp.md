---
title: Macro e C++
ms.date: 08/29/2019
helpviewer_keywords:
- macros, C++
- macros
ms.assetid: 83a344c1-73c9-4ace-8b93-cccfb62c6133
ms.openlocfilehash: 3b8721644e49a8bd289939d216c233da3286fd0a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219404"
---
# <a name="macros-and-c"></a>Macro e C++

In C++ sono disponibili nuove funzionalità, alcune delle quali sostituiscono quelle offerte dal preprocessore ANSI C. Queste nuove funzionalità migliorano l'indipendenza dai tipi e la prevedibilità del linguaggio:

- In C++, gli oggetti dichiarati come **`const`** possono essere utilizzati nelle espressioni costanti. Consente ai programmi di dichiarare costanti con informazioni sul tipo e sul valore. Possono dichiarare enumerazioni che possono essere visualizzate simbolicamente con il debugger. Quando si usa la direttiva per il preprocessore `#define` per definire le costanti, non è così precisa e non indipendente dai tipi. Non viene allocata alcuna risorsa di archiviazione per un **`const`** oggetto, a meno che il programma non contenga un'espressione che accetta l'indirizzo.

- La funzionalità della funzione inline C++ soppianta le macro di tipo funzione. I vantaggi dell'utilizzo delle funzioni inline rispetto alle macro sono:

  - Indipendenza dai tipi. Le funzioni inline sono soggette allo stesso controllo dei tipi delle funzioni normali. Le macro non sono indipendenti dai tipi.

  - Gestione corretta degli argomenti con effetti collaterali. Le funzioni inline valutano le espressioni fornite come argomenti prima che il corpo della funzione venga immesso. Non è pertanto possibile che un'espressione con effetti collaterali non sia sicura.

Per ulteriori informazioni sulle funzioni inline, vedere [inline, __inline, \_ _forceinline](../cpp/inline-functions-cpp.md).

Per la compatibilità con le versioni precedenti, tutte le funzionalità del preprocessore presenti in ANSI C e nelle specifiche C++ precedenti vengono mantenute per Microsoft C++.

## <a name="see-also"></a>Vedere anche

[Macro predefinite](../preprocessor/predefined-macros.md)\
[Macro (C/C++)](../preprocessor/macros-c-cpp.md)

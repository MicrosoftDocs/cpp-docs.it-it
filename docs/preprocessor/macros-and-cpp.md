---
title: Macro e C++
ms.date: 08/29/2019
helpviewer_keywords:
- macros, C++
- macros
ms.assetid: 83a344c1-73c9-4ace-8b93-cccfb62c6133
ms.openlocfilehash: 8a86fb81544af91d4e844fb08b7948a589976e04
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220795"
---
# <a name="macros-and-c"></a>Macro e C++

C++offre nuove funzionalità, alcune delle quali soppiantano quelle offerte dal preprocessore ANSI C. Queste nuove funzionalità migliorano l'indipendenza dai tipi e la prevedibilità del linguaggio:

- In C++gli oggetti dichiarati come **const** possono essere utilizzati nelle espressioni costanti. Consente ai programmi di dichiarare costanti con informazioni sul tipo e sul valore. Possono dichiarare enumerazioni che possono essere visualizzate simbolicamente con il debugger. Quando si usa la `#define` direttiva per il preprocessore per definire le costanti, non è così precisa e non indipendente dai tipi. Non viene allocata alcuna risorsa di archiviazione per un oggetto const, a meno che il programma non contenga un'espressione che accetta l'indirizzo.

- La funzionalità della funzione inline C++ soppianta le macro di tipo funzione. I vantaggi dell'utilizzo delle funzioni inline rispetto alle macro sono:

  - Indipendenza dai tipi. Le funzioni inline sono soggette allo stesso controllo dei tipi delle funzioni normali. Le macro non sono indipendenti dai tipi.

  - Gestione corretta degli argomenti con effetti collaterali. Le funzioni inline valutano le espressioni fornite come argomenti prima che il corpo della funzione venga immesso. Non è pertanto possibile che un'espressione con effetti collaterali non sia sicura.

Per ulteriori informazioni sulle funzioni inline, vedere [inline, __inline, \__forceinline](../cpp/inline-functions-cpp.md).

Per la compatibilità con le versioni precedenti, tutte le funzionalità del preprocessore presenti in ANSI C e nelle specifiche C++ precedenti vengono mantenute per Microsoft C++.

## <a name="see-also"></a>Vedere anche

[Macro predefinite](../preprocessor/predefined-macros.md)\
[Macro (C/C++)](../preprocessor/macros-c-cpp.md)

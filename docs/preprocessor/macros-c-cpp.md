---
title: Macro (C/C++)
ms.date: 08/29/2019
helpviewer_keywords:
- preprocessor
- preprocessor, macros
- Visual C++, preprocessor macros
ms.assetid: a7bfc5d4-2537-4fe0-bef0-70cec0b43388
ms.openlocfilehash: ba2c0f012974a528876219d00c61c0f31a6cd820
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70218866"
---
# <a name="macros-cc"></a>Macro (C/C++)

Il preprocessore espande le macro in tutte le righeeccetto le direttive per il preprocessore, **#** le linee che hanno come primo carattere diverso da uno spazio vuoto. Espande le macro in parti di alcune direttive che non vengono ignorate come parte di una compilazione condizionale. Le direttive di *compilazione condizionale* consentono di evitare la compilazione di parti di un file di origine. Testano un'espressione costante o un identificatore per determinare quali blocchi di testo passare al compilatore e quali devono essere rimossi dal file di origine durante la pre-elaborazione.

La direttiva `#define` viene generalmente utilizzata per associare identificatori significativi a costanti, parole chiave e istruzioni o espressioni di uso comune. Gli identificatori che rappresentano costanti sono talvolta denominati *costanti simboliche* o *costanti manifesto*. Gli identificatori che rappresentano istruzioni o espressioni sono denominati *macro*. In questa documentazione relativa al preprocessore, viene utilizzato esclusivamente il termine "macro".

Quando il nome di una macro viene riconosciuto nel testo di origine del programma o negli argomenti di determinati altri comandi del preprocessore, viene considerato come una chiamata a tale macro. Il nome della macro viene sostituito con una copia del corpo della macro. Se la macro accetta argomenti, gli argomenti effettivi che seguono il nome della macro vengono sostituiti dai parametri formali nel corpo della macro. Il processo di sostituzione di una chiamata macro con la copia elaborata del corpo viene chiamato *espansione* della chiamata macro.

In pratica, esistono due tipi di macro. Le macro *simili a oggetti* non accettano argomenti. Le macro di *tipo funzione* possono essere definite per accettare argomenti, in modo che sembrino e agiscano come chiamate di funzione. Poiché le macro non generano chiamate di funzione effettive, è talvolta possibile velocizzare l'esecuzione dei programmi sostituendo le chiamate di funzione con le macro. In C++, le funzioni inline sono spesso un metodo consigliato. Tuttavia, le macro possono creare problemi se non vengono definiti e usati con cautela. Per le definizioni di macro con argomenti, potrebbe essere necessario utilizzare le parentesi, in modo da mantenere la precedenza appropriata all'interno delle espressioni. Le macro, inoltre, potrebbero non essere in grado di gestire correttamente le espressioni con effetti collaterali. Per ulteriori informazioni, vedere l' `getrandom` esempio nella [direttiva #define](../preprocessor/hash-define-directive-c-cpp.md).

Una volta definita una macro, non è possibile ridefinirla con un valore diverso senza prima rimuovere la definizione originale. È, tuttavia, possibile ridefinire la macro con la stessa definizione. Pertanto, la stessa definizione può apparire più di una volta in un programma.

La `#undef` direttiva rimuove la definizione di una macro. Una volta rimossa la definizione, è possibile ridefinire la macro con un valore diverso. [La direttiva #define](../preprocessor/hash-define-directive-c-cpp.md) e [la direttiva #undef](../preprocessor/hash-undef-directive-c-cpp.md) discutono `#define` rispettivamente `#undef` le direttive e.

Per ulteriori informazioni, vedere,

- [Macro e C++](../preprocessor/macros-and-cpp.md)

- [Macro variadic](../preprocessor/variadic-macros.md)

- [Macro predefinite](../preprocessor/predefined-macros.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti perC++ il preprocessore C/](../preprocessor/c-cpp-preprocessor-reference.md)

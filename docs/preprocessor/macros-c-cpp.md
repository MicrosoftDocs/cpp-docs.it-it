---
title: Macro (C/C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- preprocessor
- preprocessor, macros
- Visual C++, preprocessor macros
ms.assetid: a7bfc5d4-2537-4fe0-bef0-70cec0b43388
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cf97e61e68cd02891c738db5de8820924957fc56
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50065473"
---
# <a name="macros-cc"></a>Macro (C/C++)
Pre-elaborazione espande le macro in tutte le righe che non sono direttive del preprocessore (righe che non è un **#** come primo carattere diverso da spazi vuoti) e nelle parti di alcune direttive che non vengono ignorate come parte di un compilazione condizionale. Le direttive di "compilazione condizionale" consentono di evitare la compilazione di porzioni del file di origine grazie alla possibilità di eseguire un test di un'espressione costante o di un identificatore, in modo da determinare quali blocchi di testo vengono passati al compilatore e quali blocchi di testo vengono rimossi dal file di origine durante la pre-elaborazione.

La direttiva `#define` viene generalmente utilizzata per associare identificatori significativi a costanti, parole chiave e istruzioni o espressioni di uso comune. Gli identificatori che rappresentano costanti sono talvolta denominati "costanti simboliche" o "costanti di manifesto". Gli identificatori che rappresentano istruzioni o espressioni sono denominati "macro". In questa documentazione relativa al preprocessore, viene utilizzato esclusivamente il termine "macro".

Quando il nome della macro viene riconosciuto nel testo di origine del programma o negli argomenti di alcuni altri comandi del preprocessore, viene considerato come una chiamata alla macro. Il nome della macro viene sostituito con una copia del corpo della macro. Se la macro accetta argomenti, gli argomenti effettivi che seguono il nome della macro vengono sostituiti dai parametri formali nel corpo della macro. Il processo con il quale si sostituisce la chiamata di macro con la copia elaborata del corpo viene chiamato "espansione" di una chiamata di macro.

In pratica, esistono due tipi di macro. Le macro di tipo "oggetto" non accettano argomenti, mentre le macro di tipo "funzione" possono essere impostate per accettare argomenti, in modo che assomiglino e agiscano come delle chiamate di funzione. Poiché le macro non generano vere chiamate di funzione, è talvolta possibile fare in modo che i programmi vengano eseguiti più velocemente sostituendo le chiamate di funzione con le macro. In C++, le funzioni inline sono spesso un metodo consigliato. È necessario, però, definire ed utilizzare le macro con attenzione, affinché non creino problemi. Per le definizioni di macro con argomenti, potrebbe essere necessario utilizzare le parentesi, in modo da mantenere la precedenza appropriata all'interno delle espressioni. Le macro, inoltre, potrebbero non essere in grado di gestire correttamente le espressioni con effetti collaterali. Vedere le `getrandom` riportato nella [il #define (direttiva)](../preprocessor/hash-define-directive-c-cpp.md) per altre informazioni.

Una volta definita una macro, se si desidera ridefinirla su un valore differente, è necessario rimuovere prima la definizione originale. È, tuttavia, possibile ridefinire la macro con la stessa definizione. Pertanto, è possibile che la stessa definizione compaia più volte in uno stesso programma.

Il `#undef` direttiva rimuove la definizione di una macro. Dopo aver rimosso la definizione, è possibile ridefinire la macro su un valore diverso. [Il #define (direttiva)](../preprocessor/hash-define-directive-c-cpp.md) e [#undef direttiva](../preprocessor/hash-undef-directive-c-cpp.md) illustrano il `#define` e `#undef` direttive, rispettivamente.

Per ulteriori informazioni, vedere,

- [Macro e C++](../preprocessor/macros-and-cpp.md)

- [Macro variadic](../preprocessor/variadic-macros.md)

- [Macro predefinite](../preprocessor/predefined-macros.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti al preprocessore C/C++](../preprocessor/c-cpp-preprocessor-reference.md)
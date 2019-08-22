---
title: Convenzioni della libreria C++
ms.date: 11/04/2016
helpviewer_keywords:
- C++ Standard Library, conventions
- classes [C++]
- functions [C++], library naming conventions
- naming conventions [C++], C++ Standard Library
- conventions [C++], C++ Standard Library
- function names [C++]
- coding conventions, C++ Standard Library
- naming conventions [C++], C++ library
ms.assetid: bf41b79a-2d53-4f46-8d05-779358335146
ms.openlocfilehash: 8747ef490c0997b1fa3fd5186618b7189fa00970
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68450691"
---
# <a name="c-library-conventions"></a>Convenzioni della libreria C++

La libreria C++ segue in gran parte le stesse convenzioni della libreria standard C, nonché alcune altre illustrate in questo articolo.

Un'implementazione ha una certa libertà di azione nella modalità di dichiarazione di tipi e funzioni nella libreria C++:

- I nomi delle funzioni nella libreria standard C potrebbero avere un collegamento esterno #"C++" o "C". Includere l'intestazione C standard appropriata anziché dichiarare un'entità di libreria inline.

- Il nome di una funzione membro in una classe di libreria potrebbe avere firme delle funzioni aggiuntive oltre a quelle elencate in questo documento. È possibile assicurarsi che una chiamata di funzione qui descritta si comporti come previsto, ma non si può considerare completamente affidabile l'indirizzo della funzione membro di libreria. Il tipo potrebbe infatti non essere quello previsto.

- Una classe della libreria può avere classi di base non documentate (non virtuali). Una classe documentata come derivata da un'altra classe può infatti essere derivata da quella classe tramite altre classi non documentate.

- Un tipo definito come un sinonimo per un determinato tipo di valore integer può essere uguale a uno dei diversi tipi di integer.

- Un tipo maschera di bit può essere implementato come un tipo integer o un'enumerazione. In entrambi i casi, è possibile eseguire operazioni bit per bit (ad esempio `AND` e `OR`) sui valori dello stesso tipo di maschera di bit. Gli elementi `A` e `B` di un tipo maschera di bit sono valori diversi da zero in modo che `A`  &  `B` sia zero.

- Una funzione di libreria priva di specifica di eccezione può generare un'eccezione arbitraria, a meno che la relativa definizione non limiti chiaramente tale possibilità.

Esistono d'alta parte alcune restrizioni:

- La libreria standard C non usa alcuna macro di mascheramento. Solo le specifiche firme di funzione sono riservate, non i nomi delle funzioni.

- Il nome di una funzione di libreria all'esterno di una classe non potrà avere firme di funzione aggiuntive non documentate. È possibile considerare affidabile il relativo indirizzo.

- Le classi di base e le funzioni membro designate come virtuali sono certamente virtuali, mentre quelle descritte come non virtuali sono certamente non virtuali.

- Questi due tipi definiti dalla libreria di C++ sono sempre diversi, a meno che questo documento non contenga esplicitamente indicazioni contrarie.

- Le funzioni offerte dalla libreria, incluse le versioni predefinite delle funzioni sostituibili, possono generare *al massimo* le eccezioni elencate in qualsiasi specifica di eccezione. Nessun distruttore specificato dalla libreria genera eccezioni. Le funzioni della libreria standard C possono propagare un'eccezione, come quando `qsort` chiama un confronto tra la funzione che genera un'eccezione, ma in caso contrario non generano eccezioni.

## <a name="see-also"></a>Vedere anche

[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

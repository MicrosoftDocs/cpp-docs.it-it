---
title: Limiti del compilatore
ms.date: 11/04/2016
helpviewer_keywords:
- cl.exe compiler, limits for language constructs
ms.assetid: f1fa59c6-55b4-414b-80c5-3df72952160d
ms.openlocfilehash: a0c6041d326982dc9807355733cf714dcfa62ca8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50600330"
---
# <a name="compiler-limits"></a>Limiti del compilatore

Nello standard C++ sono consigliati i limiti per vari costrutti di linguaggio. Di seguito sono elencati i casi in cui il compilatore di Visual C++ non implementa i limiti consigliati. Il primo numero rappresenta il limite stabilito nello standard ISO C++ 11 (INCITS/ISO/IEC 14882-2011[2012], allegato B) e il secondo numero rappresenta il limite implementato da Visual C++:

- Livelli di annidamento di istruzioni composte, strutture di controllo di iterazione e selezione controllano strutture - C++ standard: 256, compilatore di Visual C++: dipende dalla combinazione di istruzioni annidate, ma in genere compreso tra 100 e 110.

- I parametri nella definizione di una macro - C++ standard: 256, compilatore di Visual C++: 127.

- Gli argomenti in una chiamata di macro - C++ standard: 256, il compilatore di Visual C++ 127.

- Caratteri in un carattere di stringa di valore letterale stringa letterale o "wide" (dopo concatenazione) - standard C++: 65536, compilatore di Visual C++: 65535 caratteri a byte singolo, incluso il carattere di terminazione NULL e 32767 caratteri DBCS, incluso il carattere di terminazione NULL.

- Livelli di classe annidata, struttura o definizioni di unione in un singolo `struct-declaration-list` -C++ standard: 256, compilatore di Visual C++: 16.

- Inizializzatori di membro in una definizione del costruttore - C++ standard: 6144, compilatore di Visual C++: almeno 6144.

- Qualificazioni dell'ambito di un identificatore - C++ standard: 256, compilatore di Visual C++: 127.

- Annidati **extern** specifiche - C++ standard: 1024, il compilatore Visual C++: 9 (senza contare l'implicita **extern** specifiche in ambito globale o 10, se si tiene conto implicito **extern**  specifica nell'ambito globale...

- Argomenti di modello in una dichiarazione di modello - C++ standard: 1024, il compilatore Visual C++: 2046.

## <a name="see-also"></a>Vedere anche

[Comportamento non standard](../cpp/nonstandard-behavior.md)
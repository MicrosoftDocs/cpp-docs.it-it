---
title: Limiti del compilatore
ms.date: 11/04/2016
helpviewer_keywords:
- cl.exe compiler, limits for language constructs
ms.assetid: f1fa59c6-55b4-414b-80c5-3df72952160d
ms.openlocfilehash: a0c6041d326982dc9807355733cf714dcfa62ca8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399161"
---
# <a name="compiler-limits"></a>Limiti del compilatore

Nello standard C++ sono consigliati i limiti per vari costrutti di linguaggio. Di seguito sono elencati i casi in cui il compilatore di Visual C++ non implementa i limiti consigliati. Il primo numero rappresenta il limite stabilito nello standard ISO C++ 11 (INCITS/ISO/IEC 14882-2011[2012], allegato B) e il secondo numero rappresenta il limite implementato da Visual C++:

- Livelli di annidamento di istruzioni composte, strutture di controllo di iterazione e strutture di controllo di selezione - C++ standard: 256, oggetto visivo C++ compilatore: dipende dalla combinazione di istruzioni annidate, ma in genere compreso tra 100 e 110.

- I parametri nella definizione di una macro - C++ standard: 256, oggetto visivo C++ compilatore: 127.

- Gli argomenti in una chiamata di macro - C++ standard: 256, oggetto visivo C++ compilatore 127.

- Caratteri in un carattere di stringa di valore letterale stringa letterale o "wide" (dopo concatenazione) - C++ standard: 65536, oggetto visivo C++ compilatore: 65535 caratteri a byte singolo, incluso il carattere di terminazione NULL e 32767 caratteri DBCS, incluso il carattere di terminazione NULL.

- Livelli di classe annidata, struttura o definizioni di unione in un unico `struct-declaration-list` - C++ standard: 256, oggetto visivo C++ compilatore: 16.

- Inizializzatori di membro in una definizione del costruttore - C++ standard: 6144, oggetto visivo C++ compilatore: almeno 6144.

- Qualificazioni dell'ambito di un identificatore: C++ standard: 256, oggetto visivo C++ compilatore: 127.

- Annidato **extern** specifiche - C++ standard: 1024, oggetto visivo C++ compilatore: 9 (senza contare l'implicita **extern** specifiche in ambito globale o 10, se si tiene conto implicito **extern** specifica nell'ambito globale..

- Argomenti di modello in una dichiarazione di modello - C++ standard: 1024, oggetto visivo C++ compilatore: 2046.

## <a name="see-also"></a>Vedere anche

[Comportamento non standard](../cpp/nonstandard-behavior.md)
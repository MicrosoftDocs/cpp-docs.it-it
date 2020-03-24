---
title: Limiti del compilatore
ms.date: 05/06/2019
helpviewer_keywords:
- cl.exe compiler, limits for language constructs
ms.assetid: f1fa59c6-55b4-414b-80c5-3df72952160d
ms.openlocfilehash: 9e61cae1638c87f03b6fa775552408961bde6859
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80189579"
---
# <a name="compiler-limits"></a>Limiti del compilatore

Nello standard C++ sono consigliati i limiti per vari costrutti di linguaggio. Di seguito è riportato un elenco di casi in cui C++ il compilatore Microsoft non implementa i limiti consigliati. Il primo numero è il limite stabilito nello standard ISO C++ 11 (incis/ISO/IEC 14882-2011 [2012], allegato B) e il secondo numero è il limite implementato dal compilatore Microsoft: C++

- Livelli di annidamento di istruzioni composte, strutture di controllo di iterazione C++ e strutture di controllo della C++ selezione-standard: 256, compilatore Microsoft: dipende dalla combinazione di istruzioni annidate, ma in genere tra 100 e 110.

- Parametri in una definizione di macro C++ : standard: 256, C++ compilatore Microsoft: 127.

- Argomenti in una chiamata di macro- C++ standard: 256, compilatore C++ Microsoft 127.

- Caratteri in un valore letterale stringa di caratteri o valore letterale stringa a caratteri C++ Wide (dopo la concatenazione)-standard: 65536, compilatore Microsoft C++ : 65535 caratteri a byte singolo, inclusi i caratteri di terminazione null e 32767 caratteri a byte doppio, incluso il terminatore null.

- Livelli della classe annidata, struttura o definizioni di Unione in un singolo `struct-declaration-list` C++ -standard: 256, C++ compilatore Microsoft: 16.

- Inizializzatori di membro in una definizione del C++ Costruttore-standard: 6144 C++ , compilatore Microsoft: almeno 6144.

- Qualificazioni dell'ambito di un identificatore C++ -standard: 256, C++ compilatore Microsoft: 127.

- Specifiche **extern** annidate C++ -standard: 1024, C++ compilatore Microsoft: 9 (senza contare la specifica **extern** implicita nell'ambito globale o 10 se si conta la specifica **extern** implicita nell'ambito globale.

- Argomenti di modello in una dichiarazione di C++ modello-standard: 1024 C++ , compilatore Microsoft: 2046.

## <a name="see-also"></a>Vedere anche

[Comportamento non standard](../cpp/nonstandard-behavior.md)

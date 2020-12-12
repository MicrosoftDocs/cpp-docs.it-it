---
description: 'Altre informazioni su: limiti del compilatore'
title: Limiti del compilatore
ms.date: 05/06/2019
helpviewer_keywords:
- cl.exe compiler, limits for language constructs
ms.assetid: f1fa59c6-55b4-414b-80c5-3df72952160d
ms.openlocfilehash: 7471b6e161f6e1f1466fdc27266249cefc17f7ca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318156"
---
# <a name="compiler-limits"></a>Limiti del compilatore

Nello standard C++ sono consigliati i limiti per vari costrutti di linguaggio. Di seguito è riportato un elenco di casi in cui il compilatore Microsoft C++ non implementa i limiti consigliati. Il primo numero è il limite stabilito nello standard ISO C++ 11 (INCIs/ISO/IEC 14882-2011 [2012], allegato B) e il secondo numero è il limite implementato dal compilatore Microsoft C++:

- Livelli di annidamento di istruzioni composte, strutture di controllo di iterazione e strutture di controllo di selezione-C++ standard: 256, compilatore Microsoft C++: dipende dalla combinazione di istruzioni annidate, ma in genere tra 100 e 110.

- Parametri in una definizione di macro-C++ standard: 256, compilatore Microsoft C++: 127.

- Argomenti in una chiamata di macro-C++ standard: 256, compilatore Microsoft C++ 127.

- Caratteri in un valore letterale stringa di caratteri o valore letterale stringa a caratteri wide (dopo la concatenazione)-C++ standard: 65536, compilatore Microsoft C++: 65535 caratteri a byte singolo, inclusi i caratteri di terminazione NULL e 32767 caratteri DBCS, incluso il terminatore NULL.

- Livelli della classe annidata, struttura o definizioni di Unione in un singolo `struct-declaration-list` standard c++: 256, compilatore Microsoft C++: 16.

- Inizializzatori di membro in una definizione di costruttore-C++ standard: 6144, compilatore Microsoft C++: almeno 6144.

- Qualificazioni dell'ambito di un identificatore-C++ standard: 256, compilatore Microsoft C++: 127.

- Specifiche annidate **`extern`** -c++ standard: 1024, compilatore Microsoft C++: 9 (senza contare la **`extern`** specifica implicita nell'ambito globale o 10 se si conta la specifica implicita **`extern`** nell'ambito globale.

- Argomenti di modello in una dichiarazione di modello-C++ standard: 1024, compilatore Microsoft C++: 2046.

## <a name="see-also"></a>Vedi anche

[Comportamento non standard](../cpp/nonstandard-behavior.md)

---
title: Limiti del compilatore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler, limits for language constructs
ms.assetid: f1fa59c6-55b4-414b-80c5-3df72952160d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 01260500a564e6cb18b4477a423ce1ef70444201
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39402185"
---
# <a name="compiler-limits"></a>Limiti del compilatore
Nello standard C++ sono consigliati i limiti per vari costrutti di linguaggio. Di seguito sono elencati i casi in cui il compilatore di Visual C++ non implementa i limiti consigliati. Il primo numero rappresenta il limite stabilito nello standard ISO C++ 11 (INCITS/ISO/IEC 14882-2011[2012], allegato B) e il secondo numero rappresenta il limite implementato da Visual C++:  
  
-   Livelli di annidamento di istruzioni composte, strutture di controllo di iterazione e selezione controllano strutture - C++ standard: 256, compilatore di Visual C++: dipende dalla combinazione di istruzioni annidate, ma in genere compreso tra 100 e 110.  
  
-   I parametri nella definizione di una macro - C++ standard: 256, compilatore di Visual C++: 127.  
  
-   Gli argomenti in una chiamata di macro - C++ standard: 256, il compilatore di Visual C++ 127.  
  
-   Caratteri in un carattere di stringa di valore letterale stringa letterale o "wide" (dopo concatenazione) - standard C++: 65536, compilatore di Visual C++: 65535 caratteri a byte singolo, incluso il carattere di terminazione NULL e 32767 caratteri DBCS, incluso il carattere di terminazione NULL.  
  
-   Livelli di classe annidata, struttura o definizioni di unione in un singolo `struct-declaration-list` -C++ standard: 256, compilatore di Visual C++: 16.  
  
-   Inizializzatori di membro in una definizione del costruttore - C++ standard: 6144, compilatore di Visual C++: almeno 6144.  
  
-   Qualificazioni dell'ambito di un identificatore - C++ standard: 256, compilatore di Visual C++: 127.  
  
-   Annidati **extern** specifiche - C++ standard: 1024, il compilatore Visual C++: 9 (senza contare l'implicita **extern** specifiche in ambito globale o 10, se si tiene conto implicito **extern**  specifica nell'ambito globale...  
  
-   Argomenti di modello in una dichiarazione di modello - C++ standard: 1024, il compilatore Visual C++: 2046.  
  
## <a name="see-also"></a>Vedere anche  
 [Comportamento non standard](../cpp/nonstandard-behavior.md)
---
title: Limiti del compilatore | Documenti Microsoft
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
ms.openlocfilehash: bc7cd26add0a46bab8df7669fb6dfb6060b0010e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32412137"
---
# <a name="compiler-limits"></a>Limiti del compilatore
Nello standard C++ sono consigliati i limiti per vari costrutti di linguaggio. Di seguito sono elencati i casi in cui il compilatore di Visual C++ non implementa i limiti consigliati. Il primo numero rappresenta il limite stabilito nello standard ISO C++ 11 (INCITS/ISO/IEC 14882-2011[2012], allegato B) e il secondo numero rappresenta il limite implementato da Visual C++:  
  
-   Livelli di annidamento di istruzioni composte, strutture di controllo di iterazione e selezione controllano strutture - C++ standard: 256, compilatore di Visual C++: dipende dalla combinazione di istruzioni annidate, ma in genere compreso tra 100 e 110.  
  
-   I parametri in una definizione macro - C++ standard: 256, compilatore di Visual C++: 127.  
  
-   Gli argomenti in una chiamata di macro - C++ standard: 256, il compilatore di Visual C++ 127.  
  
-   Stringa di caratteri in un carattere wide o valore letterale stringa letterale (dopo concatenazione) - standard di C++: 65536, compilatore di Visual C++: 65535 caratteri a byte singolo, incluso il `null` carattere di terminazione e 32767 caratteri DBCS, incluso il `null` carattere di terminazione.  
  
-   Livelli di classe annidata, struttura o definizioni di unione in un singolo `struct-declaration-list` -C++ standard: 256, compilatore di Visual C++: 16.  
  
-   Inizializzatori di membro in una definizione del costruttore - C++ standard: 6144, compilatore di Visual C++: almeno 6144.  
  
-   Qualificazioni dell'ambito di un identificatore - C++ standard: 256, compilatore di Visual C++: 127.  
  
-   Annidati `extern` specifiche - C++ standard: 1024, il compilatore Visual C++: 9 (senza contare la `extern` specifica nell'ambito globale o 10, se si tiene conto di implicita `extern` specifica nell'ambito globale...  
  
-   Argomenti di modello in una dichiarazione di modello - C++ standard: 1024, il compilatore Visual C++: 2046.  
  
## <a name="see-also"></a>Vedere anche  
 [Comportamento non standard](../cpp/nonstandard-behavior.md)
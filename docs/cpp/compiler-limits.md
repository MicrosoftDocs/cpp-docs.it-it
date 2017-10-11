---
title: Limiti del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler, limits for language constructs
ms.assetid: f1fa59c6-55b4-414b-80c5-3df72952160d
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 986a158ea74e56a0e52c1ffff77f83b8ede71ef5
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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

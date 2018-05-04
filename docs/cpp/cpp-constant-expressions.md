---
title: Espressioni costanti C++ | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- constant expressions, syntax
- constant expressions
- expressions [C++], constant
ms.assetid: b07245a5-4c21-4589-b503-e6ffd631996f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d71427c7176d8448d861c6dd7602b6bc91941737
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="c-constant-expressions"></a>Espressioni costanti C++
Oggetto *costante* valore corrisponde a uno che non cambia. C++ fornisce due parole chiave per permettere di indicare che un oggetto non deve essere modificato e per applicare tale intento.  
  
 Il linguaggio C++ richiede espressioni costanti (espressioni che restituiscono una costante) per le dichiarazioni di:  
  
-   Limiti di matrice  
  
-   Selettori in istruzioni case  
  
-   Specifica di lunghezza del campo di bit  
  
-   Inizializzatori di enumerazione  
  
 Gli unici operandi che sono validi nelle espressioni costanti sono:  
  
-   Valori letterali  
  
-   Costanti di enumerazione  
  
-   Valori dichiarati come const che vengono inizializzati con espressioni costanti  
  
-   Espressioni `sizeof`  
  
 Le costanti non integrali devono essere convertite (in modo esplicito o implicito) in tipi integrali affinché siano valide in un'espressione costante. Pertanto, il codice seguente è valido:  
  
```  
const double Size = 11.0;  
char chArray[(int)Size];  
```  
  
 Le conversioni esplicite in tipi integrali sono valide nelle espressioni costanti. Tutti gli altri tipi e i tipi derivati non sono validi tranne quando sono usati come operandi per l'operatore `sizeof`.  
  
 L'operatore virgola e gli operatori di assegnazione non possono essere usati nelle espressioni costanti.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di espressioni](../cpp/types-of-expressions.md)
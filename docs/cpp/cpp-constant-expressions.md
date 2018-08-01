---
title: Espressioni costanti C++ | Microsoft Docs
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
ms.openlocfilehash: 06a07c9d37994b4214da9b2eb53d02104525d7c4
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39408112"
---
# <a name="c-constant-expressions"></a>Espressioni costanti C++
Oggetto *costante* valore corrisponde a uno che non cambiano. C++ fornisce due parole chiave per permettere di indicare che un oggetto non deve essere modificato e per applicare tale intento.  
  
Il linguaggio C++ richiede espressioni costanti (espressioni che restituiscono una costante) per le dichiarazioni di:  
  
 -   Limiti di matrice  
      
 -   Selettori in istruzioni case  
      
 -   Specifica di lunghezza del campo di bit  
      
 -   Inizializzatori di enumerazione  
  
Gli unici operandi che sono validi nelle espressioni costanti sono:  
  
 -   Valori letterali  
      
 -   Costanti di enumerazione  
      
 -   Valori dichiarati come const che vengono inizializzati con espressioni costanti  
      
 -   **sizeof** espressioni  
  
Le costanti non integrali devono essere convertite (in modo esplicito o implicito) in tipi integrali affinché siano valide in un'espressione costante. Pertanto, il codice seguente è valido:  
  
```cpp 
const double Size = 11.0;  
char chArray[(int)Size];  
```  
  
Le conversioni esplicite in tipi integrali sono valide nelle espressioni costanti; tutti gli altri tipi e i tipi derivati non sono validi tranne quando usati come operandi per il **sizeof** operatore.  
  
L'operatore virgola e gli operatori di assegnazione non possono essere usati nelle espressioni costanti.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di espressioni](../cpp/types-of-expressions.md)
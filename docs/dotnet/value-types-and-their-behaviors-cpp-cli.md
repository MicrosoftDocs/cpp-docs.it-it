---
title: Tipi di valore e i relativi comportamenti (C + + CLI) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- value types
ms.assetid: 5cb872a6-1e0a-429d-853d-df4ab47e8f2a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9c05d6198b57eeee473ab7a5ec467083a5783a55
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="value-types-and-their-behaviors-ccli"></a>Tipi di valore e relativi comportamenti (C++/CLI)
Tipi di valore sono stati modificati in vari modi dalle estensioni gestite per C++ a Visual C++. In questa sezione, si esamina il tipo enum di CLR e il tipo di classe di valore, insieme a un'occhiata a boxing e l'accesso all'istanza boxed nell'heap CLR, nonché un'occhiata a puntatori interni e di blocco. Sono state apportate modifiche significative al linguaggio in quest'area.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Tipo enum di CLR](../dotnet/value-types-and-their-behaviors-cpp-cli.md)  
 Illustra le modifiche nella dichiarazione e il comportamento delle enum.  
  
 [Boxing implicito di tipi di valore](../dotnet/implicit-boxing-of-value-types.md)  
 Illustra la motivazione per la conversione boxing implicita di tipi di valore e il conseguente le modifiche di comportamento.  
  
 [Handle di rilevamento a un valore boxed](../dotnet/a-tracking-handle-to-a-boxed-value.md)  
 Illustra la conversione boxing implicita come valore tipi viene convertito in un handle di rilevamento per l'oggetto di valore boxed.  
  
 [Semantica dei tipi di valore](../dotnet/value-type-semantics.md)  
 Illustra le modifiche alla semantica di tipo valore, inclusi i metodi virtuali ereditati, costruttori predefiniti, i puntatori interni e puntatori di blocco.  
  
## <a name="see-also"></a>Vedere anche  
 [C + + CLI nozioni di base della migrazione](../dotnet/cpp-cli-migration-primer.md)   
 [Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)
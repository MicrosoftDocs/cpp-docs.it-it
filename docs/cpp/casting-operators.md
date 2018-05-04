---
title: Operatori di cast | Documenti Microsoft
ms.custom: index-page
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- operators [C++], casting
- casting operators [C++]
ms.assetid: 16240348-26bc-4f77-8eab-57253f00ce52
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bf4204e55811cd33fa48e2b3a07d3058100729ac
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="casting-operators"></a>Operatori di cast
Nel linguaggio C++ sono disponibili numerosi operatori di cast specifici. Tali operatori consentono di rimuovere parte dell'ambiguità e alcuni problemi relativi agli operatori cast obsoleti del linguaggio C. Gli operatori sono i seguenti:  
  
-   [dynamic_cast](../cpp/dynamic-cast-operator.md) utilizzato per la conversione dei tipi polimorfici.  
  
-   [static_cast](../cpp/static-cast-operator.md) utilizzate per la conversione di tipi non polimorfici.  
  
-   [const_cast](../cpp/const-cast-operator.md) utilizzato per rimuovere il `const`, `volatile`, e `__unaligned` attributi.  
  
-   [reinterpret_cast](../cpp/reinterpret-cast-operator.md) utilizzato per la reinterpretazione semplice dei bit.  
  
-   [safe_cast](../windows/safe-cast-cpp-component-extensions.md) utilizzato per produrre codice MSIL verificabile.  
  
 Utilizzare `const_cast` e `reinterpret_cast` come ultima soluzione, poiché questi operatori possono provocare gli stessi problemi degli operatori cast obsoleti. Tali operatori sono tuttavia ancora necessari per sostituire completamente gli operatori cast obsoleti.  
  
## <a name="see-also"></a>Vedere anche  
 [Cast](../cpp/casting.md)
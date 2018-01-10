---
title: Operatori di cast | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: 'index-page '
dev_langs: C++
helpviewer_keywords:
- operators [C++], casting
- casting operators [C++]
ms.assetid: 16240348-26bc-4f77-8eab-57253f00ce52
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5bc7f1b0c2df820c3dc9e76b76dfcc72794e1906
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="casting-operators"></a>Operatori di cast
Nel linguaggio C++ sono disponibili numerosi operatori di cast specifici. Tali operatori consentono di rimuovere parte dell'ambiguità e alcuni problemi relativi agli operatori cast obsoleti del linguaggio C. Gli operatori sono i seguenti:  
  
-   [dynamic_cast](../cpp/dynamic-cast-operator.md) utilizzate per la conversione di tipi polimorfici.  
  
-   [static_cast](../cpp/static-cast-operator.md) utilizzate per la conversione di tipi non polimorfici.  
  
-   [const_cast](../cpp/const-cast-operator.md) consente di rimuovere il `const`, `volatile`, e `__unaligned` gli attributi.  
  
-   [reinterpret_cast](../cpp/reinterpret-cast-operator.md) utilizzato per la reinterpretazione semplice dei bit.  
  
-   [safe_cast](../windows/safe-cast-cpp-component-extensions.md) utilizzato per produrre codice MSIL verificabile.  
  
 Utilizzare `const_cast` e `reinterpret_cast` come ultima soluzione, poiché questi operatori possono provocare gli stessi problemi degli operatori cast obsoleti. Tali operatori sono tuttavia ancora necessari per sostituire completamente gli operatori cast obsoleti.  
  
## <a name="see-also"></a>Vedere anche  
 [Cast](../cpp/casting.md)
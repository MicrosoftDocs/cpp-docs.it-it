---
title: Operatori di cast | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: 'index-page '
dev_langs:
- C++
helpviewer_keywords:
- operators [C++], casting
- casting operators [C++]
ms.assetid: 16240348-26bc-4f77-8eab-57253f00ce52
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: a516297b687db349a6bcc867fc94dcd85118a8a5
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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

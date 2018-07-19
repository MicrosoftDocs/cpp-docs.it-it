---
title: Operatori di cast | Microsoft Docs
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
ms.openlocfilehash: 4d64a25475ad7ac40f63d29798768f8f57866b3c
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37941625"
---
# <a name="casting-operators"></a>Operatori di cast
Nel linguaggio C++ sono disponibili numerosi operatori di cast specifici. Tali operatori consentono di rimuovere parte dell'ambiguità e alcuni problemi relativi agli operatori cast obsoleti del linguaggio C. Gli operatori sono i seguenti:  
  
-   [dynamic_cast](../cpp/dynamic-cast-operator.md) utilizzato per la conversione dei tipi polimorfici.  
  
-   [static_cast](../cpp/static-cast-operator.md) utilizzato per la conversione dei tipi non polimorfici.  
  
-   [const_cast](../cpp/const-cast-operator.md) utilizzato per rimuovere il **const**, **volatile**, e **unaligned** attributi.  
  
-   [reinterpret_cast](../cpp/reinterpret-cast-operator.md) utilizzato per la reinterpretazione semplice dei bit.  
  
-   [safe_cast](../windows/safe-cast-cpp-component-extensions.md) utilizzati per produrre codice MSIL verificabile.  
  
 Utilizzare `const_cast` e `reinterpret_cast` come ultima soluzione, poiché questi operatori possono provocare gli stessi problemi degli operatori cast obsoleti. Tali operatori sono tuttavia ancora necessari per sostituire completamente gli operatori cast obsoleti.  
  
## <a name="see-also"></a>Vedere anche  
 [Cast](../cpp/casting.md)
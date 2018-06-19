---
title: Errore dell'analizzatore di espressioni CXX0019 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0019
dev_langs:
- C++
helpviewer_keywords:
- CXX0019
- CAN0019
ms.assetid: 4c6431fd-3310-4a61-934d-58b070b330fe
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 52e1679374e105ab06ce245ba68cfe92706689e1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33302490"
---
# <a name="expression-evaluator-error-cxx0019"></a>Errore dell‘analizzatore di espressioni CXX0019
cast di tipo non valido  
  
 L'analizzatore di espressioni C non è possibile eseguire il cast come scritto del tipo.  
  
 Questo errore è identico all'errore CAN0019.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Il tipo specificato è sconosciuto.  
  
2.  Si sono verificati troppi livelli di tipi di puntatore. Ad esempio, il cast del tipo  
  
    ```  
    (char **)h_message  
    ```  
  
     non può essere valutata dall'analizzatore di espressioni C.
---
title: Errore dell'analizzatore di espressioni CXX0019 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: CXX0019
dev_langs: C++
helpviewer_keywords:
- CXX0019
- CAN0019
ms.assetid: 4c6431fd-3310-4a61-934d-58b070b330fe
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 67fbd43280ad6ffcecdf0532819cd80a0d44b479
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
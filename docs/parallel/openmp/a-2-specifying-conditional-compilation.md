---
title: Specifica di compilazione condizionale. 2 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: de4a21b9-f987-4738-9f13-c4795f6f2dff
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b0888a8bfc3d920ed3338b2ab6182c09cb75097a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="a2---specifying-conditional-compilation"></a>A.2   Specifica della compilazione condizionale
Nell'esempio seguente viene illustrato l'utilizzo della compilazione condizionale utilizzando la macro OpenMP `_OPENMP` ([sezione 2.2](../../parallel/openmp/2-2-conditional-compilation.md) nella pagina 8). Con la compilazione OpenMP il `_OPENMP` macro viene definita.  
  
```  
# ifdef _OPENMP   
    printf_s("Compiled by an OpenMP-compliant implementation.\n");  
# endif  
```  
  
 L'operatore del preprocessore definito consente più di una macro da sottoporre a test in una singola direttiva.  
  
```  
# if defined(_OPENMP) && defined(VERBOSE)  
    printf_s("Compiled by an OpenMP-compliant implementation.\n");  
# endif  
```
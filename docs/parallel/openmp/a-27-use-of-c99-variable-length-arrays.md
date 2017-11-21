---
title: Utilizzare A.27 di matrici di lunghezza variabile C99 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 8e542701-39f9-4f28-ab3a-840e8e669723
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 673eeb7229524b17c12a9a40c64380e4e5bb5feb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="a27---use-of-c99-variable-length-arrays"></a>A.27   Utilizzo di matrici di lunghezza variabile C99
Nell'esempio seguente viene illustrato come utilizzare matrici di lunghezza variabile C99 (VLAs) in un `firstprivate` (direttiva) ([sezione 2.7.2.2](../../parallel/openmp/2-7-2-2-firstprivate.md) nella pagina 26).  
  
> [!NOTE]
>  Le matrici di lunghezza variabile non sono attualmente supportate in Visual C++.  
  
```  
void f(int m, int C[m][m])  
{  
    double v1[m];  
    ...  
    #pragma omp parallel firstprivate(C, v1)  
    ...  
}  
```
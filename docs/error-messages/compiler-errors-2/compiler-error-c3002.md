---
title: Errore del compilatore C3002 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3002
dev_langs:
- C++
helpviewer_keywords:
- C3002
ms.assetid: 2d4241a7-c8eb-4d43-a128-dca255d137bc
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a4f8ad3102fe5c4a2c79f01a662cf5305772e96e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3002"></a>Errore del compilatore C3002
'name1 name2': più nomi di direttiva OpenMP  
  
 Non sono consentiti più nomi di direttiva.  
  
 L'esempio seguente genera l'errore C3002:  
  
```  
// C3002.c  
// compile with: /openmp  
int main()  
{  
   #pragma omp parallel single   // C3002  
}  
```
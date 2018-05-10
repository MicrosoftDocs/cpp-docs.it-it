---
title: Shared (/openmp) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- Shared
dev_langs:
- C++
helpviewer_keywords:
- shared OpenMP clause
ms.assetid: 7887dc95-67a2-462f-a3a2-8e0632bf5d04
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8287f96f80748272e29b22ed5c43c364f4353b86
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="shared-openmp"></a>shared (OpenMP)
Specifica che una o più variabili devono essere condivisa tra tutti i thread.  
  
## <a name="syntax"></a>Sintassi  
  
```  
shared(var)  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `var`  
 Uno più più variabili di condividere. Se è specificata più di una variabile, separare i nomi delle variabili con una virgola.  
  
## <a name="remarks"></a>Note  
 È possibile condividere le variabili tra i thread con il [copyprivate](../../../parallel/openmp/reference/copyprivate.md) clausola.  
  
 `shared` si applica alle direttive seguenti:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [Nelle sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.4 condiviso](../../../parallel/openmp/2-7-2-4-shared.md).  
  
## <a name="example"></a>Esempio  
 Vedere [privata](../../../parallel/openmp/reference/private-openmp.md) per un esempio di utilizzo `shared`.  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)
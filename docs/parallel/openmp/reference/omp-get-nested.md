---
title: omp_get_nested | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_get_nested
dev_langs:
- C++
helpviewer_keywords:
- omp_get_nested OpenMP function
ms.assetid: e9784847-516e-40d3-89f7-b8b6898d8667
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 59900f0a1aba1cbc3bacc5cd1d8832e60aebe30b
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="ompgetnested"></a>omp_get_nested
Restituisce un valore che indica se è abilitato il parallelismo annidato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int omp_get_nested( );  
```  
  
## <a name="return-value"></a>Valore restituito  
 Se diverso da zero, è abilitato il parallelismo annidato.  
  
## <a name="remarks"></a>Note  
 Parallelismo annidato viene specificato con [omp_set_nested](../../../parallel/openmp/reference/omp-set-nested.md) e [OMP_NESTED](../../../parallel/openmp/reference/omp-nested.md).  
  
 Per ulteriori informazioni, vedere [3.1.10 funzione omp_get_nested](../../../parallel/openmp/3-1-10-omp-get-nested-function.md).  
  
## <a name="example"></a>Esempio  
 Vedere [omp_set_nested](../../../parallel/openmp/reference/omp-set-nested.md) per un esempio di utilizzo `omp_get_nested`.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)
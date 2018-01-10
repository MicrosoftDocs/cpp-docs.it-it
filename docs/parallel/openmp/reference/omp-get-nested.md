---
title: omp_get_nested | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: omp_get_nested
dev_langs: C++
helpviewer_keywords: omp_get_nested OpenMP function
ms.assetid: e9784847-516e-40d3-89f7-b8b6898d8667
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 557625a40707119633adc1d73775b1e66f67efec
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
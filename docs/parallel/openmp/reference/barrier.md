---
title: barriera | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: barrier
dev_langs: C++
helpviewer_keywords: barrier OpenMP directive
ms.assetid: 5c73ad4f-c768-443a-8f9e-4fd8bc2253c7
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5d1e8076ecef41cf60bf34a0622ee53afb05910b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="barrier"></a>barrier
Sincronizza tutti i thread in un team. tutti i thread sospendere alla barriera, fino a quando tutti i thread di eseguano la barriera.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma omp barrier  
```  
  
## <a name="remarks"></a>Note  
 Il `barrier` direttiva non supporta clausole OpenMP.  
  
 Per ulteriori informazioni, vedere [2.6.3 direttiva barrier](../../../parallel/openmp/2-6-3-barrier-directive.md).  
  
## <a name="example"></a>Esempio  
 Per un esempio di come utilizzare `barrier`, vedere [master](../../../parallel/openmp/reference/master.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive](../../../parallel/openmp/reference/openmp-directives.md)
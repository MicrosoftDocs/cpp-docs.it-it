---
title: barriera | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- barrier
dev_langs:
- C++
helpviewer_keywords:
- barrier OpenMP directive
ms.assetid: 5c73ad4f-c768-443a-8f9e-4fd8bc2253c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bf5b2cd9edf54e58c06e7d2a48529393cd3ced64
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
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
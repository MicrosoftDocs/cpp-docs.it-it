---
title: copyin | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- copyin
dev_langs:
- C++
helpviewer_keywords:
- copyin OpenMP clause
ms.assetid: 369efa88-613c-4cb1-9e11-7b9ee08a4b25
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 27afaee16a87ddf428570f7854212eed34634d38
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46059329"
---
# <a name="copyin"></a>copyin
Consente ai thread di accedere a valore del thread master, per un [threadprivate](../../../parallel/openmp/reference/threadprivate.md) variabile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
copyin(var)  
```  
  
## <a name="parameters"></a>Parametri
  
*var*<br/>
Il `threadprivate` variabile che verrà inizializzata con il valore della variabile nel thread principale, come si presenta prima del costrutto parallelo.  
  
## <a name="remarks"></a>Note  
 `copyin` si applica alle direttive seguenti:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [Sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per altre informazioni, vedere [2.7.2.7 copyin](../../../parallel/openmp/2-7-2-7-copyin.md).  
  
## <a name="example"></a>Esempio  
 Visualizzare [threadprivate](../../../parallel/openmp/reference/threadprivate.md) per un esempio d'uso `copyin`.  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)
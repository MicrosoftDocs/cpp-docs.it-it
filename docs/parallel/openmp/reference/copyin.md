---
title: copyin | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: copyin
dev_langs: C++
helpviewer_keywords: copyin OpenMP clause
ms.assetid: 369efa88-613c-4cb1-9e11-7b9ee08a4b25
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3190c1f6914ae8ea24b968a8cf286de1867938cf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="copyin"></a>copyin
Consente ai thread di accedere a valore del thread master, per un [threadprivate](../../../parallel/openmp/reference/threadprivate.md) variabile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
copyin(var)  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `var`  
 Il `threadprivate` variabile che verrà inizializzata con il valore della variabile nel thread principale, come si presenta prima del costrutto parallelo.  
  
## <a name="remarks"></a>Note  
 `copyin`si applica alle direttive seguenti:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [Nelle sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.7 copyin](../../../parallel/openmp/2-7-2-7-copyin.md).  
  
## <a name="example"></a>Esempio  
 Vedere [threadprivate](../../../parallel/openmp/reference/threadprivate.md) per un esempio di utilizzo `copyin`.  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)
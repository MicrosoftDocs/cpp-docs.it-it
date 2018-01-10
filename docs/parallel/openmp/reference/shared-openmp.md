---
title: Shared (/openmp) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: Shared
dev_langs: C++
helpviewer_keywords: shared OpenMP clause
ms.assetid: 7887dc95-67a2-462f-a3a2-8e0632bf5d04
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 26f8618a0340216215c3432576b6adbba3e70f80
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
 `shared`si applica alle direttive seguenti:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [Nelle sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.4 condiviso](../../../parallel/openmp/2-7-2-4-shared.md).  
  
## <a name="example"></a>Esempio  
 Vedere [privata](../../../parallel/openmp/reference/private-openmp.md) per un esempio di utilizzo `shared`.  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)
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
ms.openlocfilehash: 32137534a43eeb0b038eae547f9bc19283412159
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33688245"
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
 `copyin` si applica alle direttive seguenti:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [Nelle sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.7 copyin](../../../parallel/openmp/2-7-2-7-copyin.md).  
  
## <a name="example"></a>Esempio  
 Vedere [threadprivate](../../../parallel/openmp/reference/threadprivate.md) per un esempio di utilizzo `copyin`.  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)
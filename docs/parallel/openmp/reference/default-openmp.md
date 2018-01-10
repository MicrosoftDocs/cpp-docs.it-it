---
title: predefinito (/openmp) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: default
dev_langs: C++
helpviewer_keywords:
- default OpenMP clause
- defaults, OpenMP clause
ms.assetid: 96055106-a8f0-40b3-8319-e412b6e07bf8
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 25b1dd9eb2dcdd5a0a41992ed562ddd290014e25
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="default-openmp"></a>default (OpenMP)
Specifica il comportamento delle variabili senza ambite in un'area parallela.  
  
## <a name="syntax"></a>Sintassi  
  
```  
default(shared | none)  
```  
  
## <a name="remarks"></a>Note  
 `shared`, che è attivo se il `default` clausola viene omessa, significa che qualsiasi variabile in un'area parallela verrà considerata come se fosse specificato con il [condivisa](../../../parallel/openmp/reference/shared-openmp.md) clausola. `none`significa che qualsiasi variabile utilizzata in un'area parallela che non hanno ambito con il [privata](../../../parallel/openmp/reference/private-openmp.md), [condivisa](../../../parallel/openmp/reference/shared-openmp.md), [riduzione](../../../parallel/openmp/reference/reduction.md), [firstprivate](../../../parallel/openmp/reference/firstprivate.md), o [lastprivate](../../../parallel/openmp/reference/lastprivate.md) clausola causerà un errore del compilatore.  
  
 `default`si applica alle direttive seguenti:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [Nelle sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.5 predefinito](../../../parallel/openmp/2-7-2-5-default.md).  
  
## <a name="example"></a>Esempio  
 Vedere [privata](../../../parallel/openmp/reference/private-openmp.md) per un esempio di utilizzo `default`.  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)
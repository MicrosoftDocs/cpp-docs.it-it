---
title: lastprivate | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- lastprivate
dev_langs:
- C++
helpviewer_keywords:
- lastprivate OpenMP clause
ms.assetid: 6ef87b31-375a-47e8-8d0d-281be45fb56a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5aaf80e3061877c42154ab9ee5ccd30f47f17135
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33696227"
---
# <a name="lastprivate"></a>lastprivate
Specifica che la versione del contesto di inclusione della variabile è uguale a quella privata di qualsiasi thread esegue l'iterazione finale (costrutto di ciclo for) o l'ultima sezione (#pragma sezioni).  
  
## <a name="syntax"></a>Sintassi  
  
```  
lastprivate(var)  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `var`  
 La variabile è uguale a quella privata di qualunque thread esegue l'iterazione finale (costrutto di ciclo for) o l'ultima sezione (#pragma sezioni).  
  
## <a name="remarks"></a>Note  
 `lastprivate` si applica alle direttive seguenti:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [Nelle sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.3 lastprivate](../../../parallel/openmp/2-7-2-3-lastprivate.md).  
  
## <a name="example"></a>Esempio  
 Vedere [pianificazione](../../../parallel/openmp/reference/schedule.md) per un esempio di utilizzo `lastprivate` clausola.  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)
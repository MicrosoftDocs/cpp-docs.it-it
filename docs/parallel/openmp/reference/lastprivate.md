---
title: lastprivate | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: lastprivate
dev_langs: C++
helpviewer_keywords: lastprivate OpenMP clause
ms.assetid: 6ef87b31-375a-47e8-8d0d-281be45fb56a
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7ad36a68078856706a4d1d994e72fd001c36dbaf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 `lastprivate`si applica alle direttive seguenti:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [Nelle sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.3 lastprivate](../../../parallel/openmp/2-7-2-3-lastprivate.md).  
  
## <a name="example"></a>Esempio  
 Vedere [pianificazione](../../../parallel/openmp/reference/schedule.md) per un esempio di utilizzo `lastprivate` clausola.  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)
---
title: firstprivate | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: firstprivate
dev_langs: C++
helpviewer_keywords: firstprivate OpenMP clause
ms.assetid: db479766-6d3b-4bbd-b28e-b192d826788c
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8c7d4a5ba23e343f7858bf3320ed05ebce84f1c2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="firstprivate"></a>firstprivate
Specifica che ogni thread deve avere la propria istanza di una variabile, e che la variabile deve essere inizializzata con il valore della variabile, poiché è presente prima del costrutto parallelo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
firstprivate(var)  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`var`|La variabile di istanze in ogni thread e che verrà inizializzata con il valore della variabile, poiché è presente prima del costrutto parallelo. Se è specificata più di una variabile, separare i nomi delle variabili con una virgola.|  
  
## <a name="remarks"></a>Note  
  
## <a name="remarks"></a>Note  
 `firstprivate`si applica alle direttive seguenti:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [Nelle sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
-   [single](../../../parallel/openmp/reference/single.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.2 firstprivate](../../../parallel/openmp/2-7-2-2-firstprivate.md).  
  
## <a name="example"></a>Esempio  
 Per un esempio di utilizzo `firstprivate`, vedere l'esempio in [privata](../../../parallel/openmp/reference/private-openmp.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)
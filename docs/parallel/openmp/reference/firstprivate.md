---
title: firstprivate | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- firstprivate
dev_langs:
- C++
helpviewer_keywords:
- firstprivate OpenMP clause
ms.assetid: db479766-6d3b-4bbd-b28e-b192d826788c
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0438d98467b7843b6f70e0d075dc3b61375c48ca
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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
 `firstprivate` si applica alle direttive seguenti:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [Nelle sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
-   [single](../../../parallel/openmp/reference/single.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.2 firstprivate](../../../parallel/openmp/2-7-2-2-firstprivate.md).  
  
## <a name="example"></a>Esempio  
 Per un esempio di utilizzo `firstprivate`, vedere l'esempio in [privata](../../../parallel/openmp/reference/private-openmp.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)
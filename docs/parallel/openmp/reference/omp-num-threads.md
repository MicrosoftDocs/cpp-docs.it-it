---
title: OMP_NUM_THREADS | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: OMP_NUM_THREADS
dev_langs: C++
helpviewer_keywords: OMP_NUM_THREADS OpenMP environment variable
ms.assetid: 4b558124-1387-4c30-a6a5-ff5345a9ced6
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a5f6af2ff547ddb95b6d4ef6b9c6d353399c17c5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ompnumthreads"></a>OMP_NUM_THREADS
Imposta il numero massimo di thread in tale area, a meno che non viene sottoposto a override da [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) o [num_threads](../../../parallel/openmp/reference/num-threads.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
set OMP_NUM_THREADS[=num]  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `num`  
 Il numero massimo di thread desiderato nell'area parallela, fino a 64 nell'implementazione di Visual C++.  
  
## <a name="remarks"></a>Note  
 Il **OMP_NUM_THREADS** variabile di ambiente può essere sostituita dal [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) funzione o da [num_threads](../../../parallel/openmp/reference/num-threads.md).  
  
 Il valore predefinito di `num` in Visual C++ implementazione dello standard OpenMP è il numero di processori virtuali, tra cui CPU hyperthreading.  
  
 Per ulteriori informazioni, vedere [4.2 OMP_NUM_THREADS](../../../parallel/openmp/4-2-omp-num-threads.md).  
  
## <a name="example"></a>Esempio  
 Il comando seguente imposta il **OMP_NUM_THREADS** variabile di ambiente a 16:  
  
```  
set OMP_NUM_THREADS=16  
```  
  
 Il comando seguente consente di visualizzare l'impostazione corrente del **OMP_NUM_THREADS** variabile di ambiente:  
  
```  
set OMP_NUM_THREADS  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Variabili di ambiente](../../../parallel/openmp/reference/openmp-environment-variables.md)
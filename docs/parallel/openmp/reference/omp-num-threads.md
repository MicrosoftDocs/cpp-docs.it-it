---
title: OMP_NUM_THREADS | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- OMP_NUM_THREADS
dev_langs:
- C++
helpviewer_keywords:
- OMP_NUM_THREADS OpenMP environment variable
ms.assetid: 4b558124-1387-4c30-a6a5-ff5345a9ced6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e25369f18f542198638e324110ba14d10b8ddc69
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33691768"
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
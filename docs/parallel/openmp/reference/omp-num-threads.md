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
ms.openlocfilehash: 39f45b9c81d5339b2b6afe4c77fdc9bac6b5d731
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46091166"
---
# <a name="ompnumthreads"></a>OMP_NUM_THREADS
Imposta il numero massimo di thread in tale area, a meno che non viene sottoposto a override da [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) oppure [num_threads](../../../parallel/openmp/reference/num-threads.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
set OMP_NUM_THREADS[=num]  
```  
  
### <a name="parameters"></a>Parametri
  
*num*<br/>
Il numero massimo di thread desiderata nell'area parallela, un massimo di 64 nell'implementazione di Visual C++.  
  
## <a name="remarks"></a>Note  
 Il **OMP_NUM_THREADS** variabile di ambiente può eseguire l'override di [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) (funzione) o tramite [num_threads](../../../parallel/openmp/reference/num-threads.md).  
  
 Il valore predefinito di `num` in Visual C++ implementazione dello standard OpenMP è il numero di processori virtuali, tra cui CPU hyperthreading.  
  
 Per altre informazioni, vedere [4.2 OMP_NUM_THREADS](../../../parallel/openmp/4-2-omp-num-threads.md).  
  
## <a name="example"></a>Esempio  
 Il comando seguente imposta la **OMP_NUM_THREADS** variabile di ambiente a 16:  
  
```  
set OMP_NUM_THREADS=16  
```  
  
 Il comando seguente consente di visualizzare l'impostazione corrente del **OMP_NUM_THREADS** variabile di ambiente:  
  
```  
set OMP_NUM_THREADS  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Variabili di ambiente](../../../parallel/openmp/reference/openmp-environment-variables.md)